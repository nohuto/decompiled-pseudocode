/*
 * XREFs of ?ValidateAdapterLuid@CDXGIEnumeration@@QEBAJU_LUID@@@Z @ 0x180036DA0
 * Callers:
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180035658 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RemoveDevicesNotInCurrentEnumeration@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA2E8 (-RemoveDevicesNotInCurrentEnumeration@CD3DDeviceManager@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDXGIEnumeration::ValidateAdapterLuid(CDXGIEnumeration *this, struct _LUID a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 i; // rax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v2 = 0;
  LODWORD(v3) = 0;
  if ( *((_DWORD *)this + 22) )
  {
    for ( i = **((_QWORD **)this + 8); a2 != *(_QWORD *)(i + 336); i = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v3) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 22) )
      {
        v6 = 100;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v6 = 87;
LABEL_9:
    v2 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, -2003304307, v6);
  }
  return v2;
}
