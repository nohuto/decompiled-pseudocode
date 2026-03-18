/*
 * XREFs of MxGetPhase0Mapping @ 0x1407C78D0
 * Callers:
 *     MxCopyPage @ 0x1407C648C (MxCopyPage.c)
 *     MxSwapPages @ 0x1407C7254 (MxSwapPages.c)
 *     MxFillPhysicalPage @ 0x1407C76BC (MxFillPhysicalPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

__int64 MxGetPhase0Mapping()
{
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // r11
  __int64 v6; // rax

  if ( MiHalScratchPte )
    return MiHalScratchPte << 25 >> 16;
  v1 = (((unsigned __int64)MiLowHalVa >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( (*(_BYTE *)v1 & 1) == 0 )
  {
LABEL_18:
    v1 += 8LL;
    if ( (v1 & 0xFFF) == 0 )
      return 0LL;
  }
  v2 = (__int64)(v1 << 25) >> 16;
  v3 = v2 + 0x90482413000LL;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2;
    if ( v3 <= 0x7F8 && (unsigned int)MiPteHasShadow() && (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
        if ( (v6 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v6 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
    }
    if ( !v4 )
      break;
    v2 += 8LL;
    v3 += 8LL;
    if ( (v2 & 0xFFF) == 0 )
      goto LABEL_18;
  }
  MiHalScratchPte = v2;
  return (__int64)(v2 << 25) >> 16;
}
