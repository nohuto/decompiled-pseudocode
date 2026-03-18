/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00034F4
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0003B98 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C007E7D0 (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01A1A24 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0002524 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNTARGETMODE>::FindByValue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  __int64 i; // r10
  __int64 v5; // r11
  __int64 v6; // r10

  v2 = (_QWORD *)(a1 + 24);
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  for ( i = *v2 - 8LL; i; i = v6 == v5 + 24 ? 0LL : v6 - 8 )
  {
    if ( !DMMVIDPNTARGETMODE::operator!=(i, a2) )
      break;
    v6 = *(_QWORD *)(i + 8);
  }
  return i;
}
