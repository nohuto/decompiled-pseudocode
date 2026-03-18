/*
 * XREFs of ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x180173434
 * Callers:
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180017220 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18001662C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyPixelsToSlicerBitmap(
        CD3DDeviceLevel1 *this,
        struct CD3DSurface *a2,
        LONG *a3,
        __int64 a4,
        int a5,
        int a6)
{
  LONG v6; // eax
  int v9; // eax
  unsigned int v10; // ebx
  CMILPoolResource *v12; // [rsp+30h] [rbp-20h] BYREF
  struct tagPOINT v13; // [rsp+38h] [rbp-18h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-10h] BYREF
  int v15; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF

  v6 = *a3;
  v12 = 0LL;
  v14.left = v6;
  v14.top = a3[1];
  v14.right = a3[2];
  v14.bottom = a3[3];
  v9 = (*(__int64 (__fastcall **)(__int64, CMILPoolResource **, int *, int *))(*(_QWORD *)a4 + 48LL))(
         a4,
         &v12,
         &v15,
         &v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( IsOOM(v9) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA2Au);
  }
  else
  {
    v13.x = v15 + a5;
    v13.y = v16 + a6;
    CD3DDeviceLevel1::CopySurfaceRect(this, a2, &v14, v12, &v13);
  }
  if ( v12 )
    CMILPoolResource::Release(v12);
  return v10;
}
