/*
 * XREFs of PsGetAllocatedFullProcessImageName @ 0x140443A34
 * Callers:
 *     PfCalculateProcessHash @ 0x140443818 (PfCalculateProcessHash.c)
 *     SeLocateProcessImageName @ 0x140443A20 (SeLocateProcessImageName.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x14058EADC (PnpLogVetoInformation.c)
 *     ViCreateProcessCallbackInternal @ 0x1407467D0 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageName(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  _QWORD *PoolWithTag; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rbx

  v2 = *(_QWORD *)(a1 + 1120);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)*(unsigned __int16 *)(v2 + 2) + 16, 0x6E497350u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = *(_OWORD *)v2;
    if ( PoolWithTag[1] )
    {
      PoolWithTag[1] = PoolWithTag + 2;
      memmove(PoolWithTag + 2, *(const void **)(v2 + 8), *(unsigned __int16 *)(v2 + 2));
    }
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
