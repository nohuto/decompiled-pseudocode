/*
 * XREFs of ?ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z @ 0x180118960
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRotateTransform3D::ProcessUpdate(
        CRotateTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_ROTATETRANSFORM3D *a3)
{
  __m128d v3; // xmm1
  __m128d v4; // xmm2
  __m128d v5; // xmm3
  __int64 v6; // xmm0_8

  v3 = (__m128d)*((_OWORD *)a3 + 1);
  v4 = (__m128d)*((_OWORD *)a3 + 2);
  v5 = (__m128d)*((_OWORD *)a3 + 3);
  v6 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 15) = *(_QWORD *)&v3.m128d_f64[0];
  *((_QWORD *)this + 17) = *(_QWORD *)&v4.m128d_f64[0];
  *((_QWORD *)this + 19) = *(_QWORD *)&v5.m128d_f64[0];
  *((_QWORD *)this + 16) = *(_OWORD *)&_mm_unpackhi_pd(v3, v3);
  *((_QWORD *)this + 18) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_QWORD *)this + 20) = *(_OWORD *)&_mm_unpackhi_pd(v5, v5);
  *((_QWORD *)this + 14) = v6;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
