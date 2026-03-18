/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@XZ @ 0x180117DC0
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@_NPEAPEAV1@@Z @ 0x180117F08 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(CWARPDrawListEntry *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  *((_DWORD *)this + 16) = 3840;
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 14) = 0LL;
  `vector constructor iterator'(
    (CWARPDrawListEntry *)((char *)this + 120),
    64LL,
    3,
    (void (__fastcall *)(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))WarpTextureState::WarpTextureState);
  *((_BYTE *)this + 352) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  memset_0((char *)this + 72, 0, 0x24uLL);
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  return this;
}
