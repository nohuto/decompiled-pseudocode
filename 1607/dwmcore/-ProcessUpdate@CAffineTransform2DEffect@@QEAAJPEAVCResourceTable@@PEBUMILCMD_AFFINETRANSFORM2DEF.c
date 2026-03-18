/*
 * XREFs of ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEFFECT@@@Z @ 0x180108998
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAffineTransform2DEffect::ProcessUpdate(
        CAffineTransform2DEffect *this,
        struct CResourceTable *a2,
        __m128i *a3)
{
  __m128i v4; // xmm6
  __m128i v5; // xmm7
  __int64 v6; // xmm8_8
  __int32 v8; // [rsp+48h] [rbp-40h]

  v8 = a3[2].m128i_i32[2];
  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2].m128i_i64[0];
  (*(void (__fastcall **)(CAffineTransform2DEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 68) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8));
  *(__m128i *)((char *)this + 280) = v5;
  *((_DWORD *)this + 76) = v8;
  *((_DWORD *)this + 69) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
  *((_QWORD *)this + 37) = v6;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
