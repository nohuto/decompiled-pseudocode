/*
 * XREFs of ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA470
 * Callers:
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AF700 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall bCaptureLINEATTRS(struct _LINEATTRS **a1, struct _LINEATTRS *a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rdx
  PFLOAT_LONG pstyle; // r8
  __int64 cstyle; // rax
  __int64 v9; // rax
  union _FLOAT_LONG *v10; // rax
  union _FLOAT_LONG *v11; // r14

  v4 = 1;
  v5 = (unsigned __int64)*a1;
  if ( *a1 )
  {
    if ( v5 >= W32UserProbeAddress )
      v5 = W32UserProbeAddress;
    *(_OWORD *)&a2->fl = *(_OWORD *)v5;
    *(_OWORD *)&a2->eMiterLimit = *(_OWORD *)(v5 + 16);
    *(_QWORD *)&a2->elStyleState.e = *(_QWORD *)(v5 + 32);
    pstyle = a2->pstyle;
    if ( pstyle )
    {
      cstyle = a2->cstyle;
      if ( (unsigned int)cstyle > 0x9C4000 )
        return 0LL;
      v9 = cstyle;
      if ( v9 * 4 && ((unsigned __int64)&pstyle[v9] > W32UserProbeAddress || &pstyle[v9] < pstyle) )
        *W32UserProbeAddress = 0;
      v10 = (union _FLOAT_LONG *)PALLOCMEM2(4 * a2->cstyle, 1886221639LL, 0);
      v11 = v10;
      if ( v10 )
      {
        memmove(v10, a2->pstyle, 4LL * a2->cstyle);
        a2->pstyle = v11;
      }
      else
      {
        a2->pstyle = 0LL;
        v4 = 0;
      }
    }
    *a1 = a2;
  }
  return v4;
}
