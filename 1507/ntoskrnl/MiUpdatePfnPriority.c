/*
 * XREFs of MiUpdatePfnPriority @ 0x140080A64
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiUpdatePrefetchPriority @ 0x140124004 (MiUpdatePrefetchPriority.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 */

__int64 __fastcall MiUpdatePfnPriority(ULONG_PTR a1, unsigned int a2, int a3)
{
  char v3; // r10
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  char v6; // al

  v3 = *(_BYTE *)(a1 + 35);
  v4 = -1;
  if ( (v3 & 8) != 0 )
    v5 = 5;
  else
    v5 = v3 & 7;
  if ( a2 != v5 && (a2 >= v5 || a3 && (v5 <= 5 || (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0)) )
  {
    v6 = *(_BYTE *)(a1 + 34) & 7;
    if ( v6 == 2 )
    {
      MiRelinkStandbyPage(a1, a2, 0x3FEu);
    }
    else if ( v6 != 6 || (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || a2 >= v5 )
    {
      *(_BYTE *)(a1 + 35) = v3 ^ (a2 ^ v3) & 7;
      if ( v5 < 5 )
      {
        if ( a2 == 5 )
          return 0;
      }
      else if ( a2 < 5 )
      {
        return 7;
      }
    }
  }
  return v4;
}
