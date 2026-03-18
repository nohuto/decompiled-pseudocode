/*
 * XREFs of ?ProcessUpdate@CRotateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM@@@Z @ 0x18001A4E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRotateTransform::ProcessUpdate(
        CRotateTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_ROTATETRANSFORM *a3)
{
  __m128d v3; // xmm3
  __int64 v4; // xmm2_8

  v3 = (__m128d)*((_OWORD *)a3 + 1);
  v4 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 14) = *(_QWORD *)&v3.m128d_f64[0];
  *((_QWORD *)this + 15) = *(_OWORD *)&_mm_unpackhi_pd(v3, v3);
  *((_QWORD *)this + 13) = v4;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
