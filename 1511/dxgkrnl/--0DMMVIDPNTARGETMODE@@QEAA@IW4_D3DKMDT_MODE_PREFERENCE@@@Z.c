/*
 * XREFs of ??0DMMVIDPNTARGETMODE@@QEAA@IW4_D3DKMDT_MODE_PREFERENCE@@@Z @ 0x1C00087DC
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A04A0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0178054 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0009F74 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 */

DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE(DMMVIDPNTARGETMODE *this, __int64 a2, __int64 a3)
{
  DMMVIDPNTARGETMODE *result; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(this, a2, a3);
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 14) = 0xFFFFFFFFLL;
  *(_QWORD *)((char *)this + 76) = -1LL;
  *(_QWORD *)((char *)this + 84) = -1LL;
  *(_QWORD *)((char *)this + 92) = -1LL;
  *((_DWORD *)this + 30) = 8;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833173007;
  *(_QWORD *)this = &DMMVIDPNTARGETMODE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCEMODE::`vftable'{for `ContainedBy<DMMVIDPNSOURCEMODESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNTARGETMODE::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCEMODE::`vftable'{for `NonReferenceCounted'};
  result = this;
  *((_DWORD *)this + 32) = 2;
  return result;
}
