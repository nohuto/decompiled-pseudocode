/*
 * XREFs of ?ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z @ 0x18006601C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSkewTransform::ProcessUpdate(
        CSkewTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_SKEWTRANSFORM *a3)
{
  __int64 v3; // xmm0_8
  __m128d v4; // xmm3
  __int64 v5; // xmm2_8

  v3 = *((_QWORD *)a3 + 4);
  v4 = (__m128d)*((_OWORD *)a3 + 1);
  v5 = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 16) = *(_QWORD *)&v4.m128d_f64[0];
  *((_QWORD *)this + 17) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_QWORD *)this + 15) = v5;
  *((_QWORD *)this + 18) = v3;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
