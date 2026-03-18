/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x1406B34B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140563580 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfFullscreenVideoCallback(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-18h] BYREF

  v5 = 8;
  v1 = ExQueryWnfStateData(a1, &v6, &v7, &v5);
  v2 = v1;
  if ( v1 >= 0 )
  {
    if ( v5 < 8 )
      return 0;
    PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
    if ( byte_14032E88F )
    {
      v3 = (v7 >> 1) & 1;
      if ( v3 )
      {
LABEL_11:
        PpmReleaseLock(&PopFxSystemLatencyLock);
        return v2;
      }
    }
    else
    {
      v3 = (v7 >> 1) & 1;
      if ( !v3 )
        goto LABEL_11;
    }
    byte_14032E88F = v3 != 0;
    PoFxSendSystemLatencyUpdate();
    goto LABEL_11;
  }
  if ( (PoDebug & 1) != 0 )
    DbgPrint("PopWnfFullscreenVideoCallback: Failed to query WNF state data (Status=0x%x)\n", v1);
  return v2;
}
