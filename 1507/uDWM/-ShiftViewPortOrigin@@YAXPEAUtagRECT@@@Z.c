/*
 * XREFs of ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18007527C
 * Callers:
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800131F0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x180077884 (-CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ShiftViewPortOrigin(struct tagRECT *a1)
{
  int v2; // ebx
  int SystemMetrics; // eax

  v2 = -GetSystemMetrics(77);
  SystemMetrics = GetSystemMetrics(76);
  OffsetRect(a1, -SystemMetrics, v2);
}
