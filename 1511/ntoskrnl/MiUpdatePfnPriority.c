/*
 * XREFs of MiUpdatePfnPriority @ 0x1400B9884
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiUpdatePrefetchPriority @ 0x140070C90 (MiUpdatePrefetchPriority.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 */

__int64 __fastcall MiUpdatePfnPriority(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax
  unsigned int v3; // edx
  ULONG_PTR v4; // rcx
  int v5; // r8d
  unsigned int v6; // r9d
  char v8; // al

  v1 = -1;
  v2 = MI_GET_PFN_PRIORITY(a1);
  v6 = v2;
  if ( v3 != v2 && (v3 >= v2 || v5 && (v2 <= 5 || (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0)) )
  {
    v8 = *(_BYTE *)(v4 + 34) & 7;
    if ( v8 == 2 )
    {
      MiRelinkStandbyPage(v4, v3, 0x3FEu);
    }
    else if ( v8 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v3 >= v6 )
    {
      *(_BYTE *)(v4 + 35) ^= (v3 ^ *(_BYTE *)(v4 + 35)) & 7;
      if ( v6 < 5 )
      {
        if ( v3 == 5 )
          return 0;
      }
      else if ( v3 < 5 )
      {
        return 7;
      }
    }
  }
  return v1;
}
