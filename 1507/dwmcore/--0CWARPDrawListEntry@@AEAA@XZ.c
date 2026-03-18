/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@XZ @ 0x1800FEFD0
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x1800FF108 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(CWARPDrawListEntry *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  *((_QWORD *)this + 8) = 3840LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 14) = 0LL;
  `vector constructor iterator'(
    (CWARPDrawListEntry *)((char *)this + 120),
    64LL,
    3,
    (void (__fastcall *)(Mesh::MeshLine *))WarpTextureState::WarpTextureState);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  memset_0((char *)this + 76, 0, 0x24uLL);
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  return this;
}
