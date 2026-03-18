/*
 * XREFs of ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEFFECT@@@Z @ 0x180117B74
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAffineTransform2DEffect::ProcessUpdate(
        CAffineTransform2DEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_AFFINETRANSFORM2DEFFECT *a3)
{
  __m128d v4; // xmm1
  _BYTE v6[24]; // [rsp+20h] [rbp-48h]
  __int64 v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]

  v4 = (__m128d)*((_OWORD *)a3 + 1);
  *(_OWORD *)v6 = *(_OWORD *)a3;
  v7 = *((_QWORD *)a3 + 4);
  *(double *)&v6[16] = v4.m128d_f64[0];
  v8 = *((_DWORD *)a3 + 10);
  (*(void (__fastcall **)(CAffineTransform2DEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 44) = v7;
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)&v6[8];
  *((_DWORD *)this + 45) = HIDWORD(v7);
  *((_QWORD *)this + 25) = *(_OWORD *)&_mm_unpackhi_pd(v4, v4);
  *((_DWORD *)this + 52) = v8;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
