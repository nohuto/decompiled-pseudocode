/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00081CC
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0003C3C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C008841C (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0173A38 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C000A270 (--9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNTARGETMODE>::FindByValue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 i; // r8
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8

  v2 = (_QWORD *)(a1 + 24);
  v3 = a2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  for ( i = *v2 - 8LL; i; i = v7 == v6 + 24 ? 0LL : v7 - 8 )
  {
    if ( v3 )
      v5 = v3 + 72;
    else
      v5 = 0LL;
    if ( !(unsigned __int8)operator!=(i + 72, v5) )
      break;
    v7 = *(_QWORD *)(i + 8);
  }
  return i;
}
