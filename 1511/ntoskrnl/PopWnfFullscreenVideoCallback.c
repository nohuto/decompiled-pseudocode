/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x140633E04
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x1404BB5FC (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfFullscreenVideoCallback(__int64 a1)
{
  int v1; // ebx
  int v2; // eax
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v6; // [rsp+30h] [rbp-18h] BYREF

  v4 = 8;
  v1 = ExQueryWnfStateData(a1, &v5, &v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 < 8 )
      return 0;
    PpmAcquireLock(&PopFxSystemLatencyLock);
    if ( byte_1402DE2CF )
    {
      v2 = (v6 >> 1) & 1;
      if ( v2 )
      {
LABEL_9:
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
        return (unsigned int)v1;
      }
    }
    else
    {
      v2 = (v6 >> 1) & 1;
      if ( !v2 )
        goto LABEL_9;
    }
    byte_1402DE2CF = v2 != 0;
    PoFxSendSystemLatencyUpdate();
    goto LABEL_9;
  }
  return (unsigned int)v1;
}
