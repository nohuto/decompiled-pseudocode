/*
 * XREFs of ?AddMoveRectangle@CDwmMetaRegion@@QEAAJPEBUtagRECT@@PEBUtagPOINT@@@Z @ 0x1800FD154
 * Callers:
 *     ?NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z @ 0x1801053D8 (-NotifyMoveOptimization@CWindowNode@@QEAAJPEBUtagRECT@@PEAPEAUHRGN__@@PEBUtagPOINT@@PEAU3@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x1800FD224 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddMoveRectangle(
        CDwmMetaRegion *this,
        const struct tagRECT *a2,
        const struct tagPOINT *a3)
{
  signed int LastError; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r8d
  signed int v10; // ebx
  int v11; // eax
  HGDIOBJ ho; // [rsp+48h] [rbp+10h] BYREF

  SetLastError(0);
  ho = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
  if ( ho )
  {
    v11 = CDwmMetaRegion::AddMoveRegion(this, (HRGN *)&ho, a3);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7Eu);
    if ( ho )
      DeleteObject(ho);
  }
  else
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      v10 = CheckGUIHandleQuota(v8, v7, v9);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Cu);
  }
  return (unsigned int)v10;
}
