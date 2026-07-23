/*
 * XREFs of MiPfCompleteInPageSupport @ 0x140023538
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x140023494 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x140126130 (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  char v4; // r9
  int v5; // ecx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = a1;
  if ( a2 == 1 )
  {
    v4 = *(_BYTE *)(a1 + 189);
    v5 = 2;
    if ( (v4 & 3) == 1 )
    {
      v5 = 0;
    }
    else if ( (v4 & 3) != 2 )
    {
      if ( (v4 & 3) != 3 )
      {
LABEL_8:
        *(_BYTE *)(v2 + 189) = v4 & 0xFC;
        goto LABEL_2;
      }
      v5 = 1;
    }
    LODWORD(a2) = (unsigned int)MiGetAnyMultiplexedVm(v5);
    goto LABEL_8;
  }
LABEL_2:
  *(_BYTE *)(v2 + 191) |= 0x80u;
  return MiWaitForInPageComplete(v2, 0, a2, 0, 0, (__int64)&v6);
}
