/*
 * XREFs of PDEVOBJ_bDisableHalftoneWrap @ 0x1C0135C90
 * Callers:
 *     <none>
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0029594 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C012B7F8 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ_bDisableHalftoneWrap(PDEVOBJ *a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  __int64 i; // rbx

  v2 = PDEVOBJ::pDevHTInfo(a1);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x100) != 0 )
  {
    for ( i = 1488LL; i < 1536; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)a1));
  }
  v3 = *(_QWORD *)a1;
  v4 = 0;
  *(_QWORD *)(v3 + 1544) = 0LL;
  v5 = bDeletePalette(*(_QWORD *)v2, 0LL, 0LL);
  v6 = HT_DestroyDeviceHalftoneInfo(v2);
  if ( v5 )
    return v6 != 0;
  return v4;
}
