/*
 * XREFs of ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0002524
 * Callers:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00034F4 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C007E7D0 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0081148 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DMMVIDPNTARGETMODE::operator!=(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // rdx
  int v5; // r9d

  v2 = 0;
  if ( a2 )
    v3 = a2 + 72;
  else
    v3 = 0LL;
  if ( *(_DWORD *)(a1 + 76) != *(_DWORD *)(v3 + 4) )
    return 1;
  if ( *(_DWORD *)(a1 + 80) != *(_DWORD *)(v3 + 8) )
    return 1;
  if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v3 + 12) )
    return 1;
  if ( *(_DWORD *)(a1 + 88) != *(_DWORD *)(v3 + 16) )
    return 1;
  if ( *(_DWORD *)(a1 + 92) != *(_DWORD *)(v3 + 20) )
    return 1;
  if ( *(_DWORD *)(a1 + 96) != *(_DWORD *)(v3 + 24) )
    return 1;
  if ( *(_DWORD *)(a1 + 100) != *(_DWORD *)(v3 + 28) )
    return 1;
  if ( *(_DWORD *)(a1 + 104) != *(_DWORD *)(v3 + 32) )
    return 1;
  if ( *(_QWORD *)(a1 + 112) != *(_QWORD *)(v3 + 40) )
    return 1;
  v5 = *(_DWORD *)(a1 + 120);
  if ( (((unsigned __int8)v5 ^ *(_BYTE *)(v3 + 48)) & 7) != 0
    || (((unsigned __int16)v5 ^ (unsigned __int16)*(_DWORD *)(v3 + 48)) & 0x1F8) != 0 )
  {
    return 1;
  }
  return v2;
}
