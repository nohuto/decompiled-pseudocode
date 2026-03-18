/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C001CB98
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0114D50 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001BFE0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C010A308 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  __int64 i; // rbx

  v2 = PDEVOBJ::pDevHTInfo(this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x100) != 0 )
  {
    for ( i = 1488LL; i < 1536; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
  }
  v3 = *(_QWORD *)this;
  v4 = 0;
  *(_QWORD *)(v3 + 1544) = 0LL;
  v5 = bDeletePalette(*v2, 0LL, 0LL);
  v6 = HT_DestroyDeviceHalftoneInfo(v2);
  if ( v5 )
    return v6 != 0;
  return v4;
}
