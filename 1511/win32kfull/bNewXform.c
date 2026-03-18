/*
 * XREFs of bNewXform @ 0x1C0118F04
 * Callers:
 *     ttfdOpenFontContextInternal @ 0x1C011A638 (ttfdOpenFontContextInternal.c)
 * Callees:
 *     bFloatToL @ 0x1C0119024 (bFloatToL.c)
 *     bComputeMaxGlyph @ 0x1C0119094 (bComputeMaxGlyph.c)
 *     vCheckForSingularXform @ 0x1C01197B0 (vCheckForSingularXform.c)
 *     XFORMOBJ_iGetXform @ 0x1C01198B0 (XFORMOBJ_iGetXform.c)
 */

__int64 __fastcall bNewXform(XFORMOBJ *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  int v10; // ecx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  XFORMOBJ_iGetXform(a1 + 54, (XFORML *)(a2 + 56));
  if ( !(unsigned int)bFloatToL(v3, &v12) )
    return 0LL;
  if ( !(unsigned int)bFloatToL(v4, &v13) )
    return 0LL;
  if ( !(unsigned int)bFloatToL(v5, &v14) )
    return 0LL;
  if ( !(unsigned int)bFloatToL(v6, &v15) )
    return 0LL;
  v7 = v14;
  v8 = v12;
  v9 = v15;
  v10 = v13;
  *(_DWORD *)(a2 + 84) = -v14;
  *(_DWORD *)(a2 + 80) = v8;
  *(_DWORD *)(a2 + 92) = -v9;
  *(_DWORD *)(a2 + 96) = v10;
  if ( !(v8 | v7) || !(v8 | v9) || !(v10 | v9) || !(v10 | v7) )
    return 0LL;
  *(_DWORD *)(a2 + 112) = 0x40000000;
  *(_DWORD *)(a2 + 88) = 0;
  *(_QWORD *)(a2 + 100) = 0LL;
  *(_DWORD *)(a2 + 108) = 0;
  *(_DWORD *)(a2 + 116) = 0;
  if ( !v7 )
    *(_DWORD *)(a2 + 116) = v9 == 0;
  if ( !v8 && !v10 )
    *(_DWORD *)(a2 + 116) |= 2u;
  vCheckForSingularXform(a2);
  *(_DWORD *)(a2 + 32) = 1;
  *(_DWORD *)(a2 + 16) = -1;
  *(_DWORD *)(a2 + 20) = -1;
  *(_QWORD *)(a2 + 24) = 0LL;
  return bComputeMaxGlyph(a2);
}
