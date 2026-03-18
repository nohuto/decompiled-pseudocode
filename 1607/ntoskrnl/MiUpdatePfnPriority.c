/*
 * XREFs of MiUpdatePfnPriority @ 0x1400BDCE0
 * Callers:
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiUpdatePrefetchPriority @ 0x1400E6670 (MiUpdatePrefetchPriority.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110334 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F90BC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x1400BE514 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x1400E67A4 (MiGetPfnPriority.c)
 */

__int64 __fastcall MiUpdatePfnPriority(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int PfnPriority; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  unsigned int v6; // r9d
  char v7; // al

  v1 = -1;
  PfnPriority = MiGetPfnPriority(a1);
  v6 = PfnPriority;
  if ( (_DWORD)v3 != PfnPriority
    && ((unsigned int)v3 >= PfnPriority || v5 && (PfnPriority <= 5 || (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0)) )
  {
    v7 = *(_BYTE *)(v4 + 34) & 7;
    if ( v7 == 2 )
    {
      MiRelinkStandbyPage(v4, v3, 1022LL);
    }
    else if ( v7 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || (unsigned int)v3 >= v6 )
    {
      *(_BYTE *)(v4 + 35) ^= (v3 ^ *(_BYTE *)(v4 + 35)) & 7;
      if ( v6 >= 5 )
      {
        if ( (unsigned int)v3 < 5 )
          return 7;
      }
      else if ( (_DWORD)v3 == 5 )
      {
        return 0;
      }
    }
  }
  return v1;
}
