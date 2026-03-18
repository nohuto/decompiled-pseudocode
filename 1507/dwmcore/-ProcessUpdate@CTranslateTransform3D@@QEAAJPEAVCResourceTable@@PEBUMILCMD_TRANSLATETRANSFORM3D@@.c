/*
 * XREFs of ?ProcessUpdate@CTranslateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM3D@@@Z @ 0x18000E4A8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CTranslateTransform3D::ProcessUpdate(
        CTranslateTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_TRANSLATETRANSFORM3D *a3)
{
  __m128d v3; // xmm3
  __int64 v4; // xmm2_8

  v3 = (__m128d)*((_OWORD *)a3 + 1);
  v4 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 15) = *(_QWORD *)&v3.m128d_f64[0];
  *((_QWORD *)this + 16) = *(_OWORD *)&_mm_unpackhi_pd(v3, v3);
  *((_QWORD *)this + 14) = v4;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
