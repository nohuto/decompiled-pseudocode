/*
 * XREFs of ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0008860
 * Callers:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C000BA80 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C0092C38 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00A1528 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DMMVIDPNTARGETMODE::operator!=(__int64 a1, __int64 a2)
{
  char v2; // r8
  __int64 v3; // rdx

  v2 = 0;
  if ( a2 )
    v3 = a2 + 72;
  else
    v3 = 0LL;
  if ( *(_DWORD *)(a1 + 76) != *(_DWORD *)(v3 + 4)
    || *(_DWORD *)(a1 + 80) != *(_DWORD *)(v3 + 8)
    || *(_DWORD *)(a1 + 84) != *(_DWORD *)(v3 + 12)
    || *(_DWORD *)(a1 + 88) != *(_DWORD *)(v3 + 16)
    || *(_DWORD *)(a1 + 92) != *(_DWORD *)(v3 + 20)
    || *(_DWORD *)(a1 + 96) != *(_DWORD *)(v3 + 24)
    || *(_DWORD *)(a1 + 100) != *(_DWORD *)(v3 + 28)
    || *(_DWORD *)(a1 + 104) != *(_DWORD *)(v3 + 32)
    || *(_QWORD *)(a1 + 112) != *(_QWORD *)(v3 + 40)
    || (((unsigned __int8)*(_DWORD *)(a1 + 120) ^ *(_BYTE *)(v3 + 48)) & 7) != 0 )
  {
    return 1;
  }
  return v2;
}
