/*
 * XREFs of ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z @ 0x1800F6044
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CShadowEffect::ProcessUpdate(CShadowEffect *this, struct CResourceTable *a2, __m128 *a3)
{
  __m128 v3; // xmm1
  _BYTE v6[24]; // [rsp+20h] [rbp-38h]

  v3 = a3[1];
  *(__m128 *)v6 = *a3;
  *(_QWORD *)&v6[16] = v3.m128_u64[0];
  (*(void (__fastcall **)(CShadowEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 48) = _mm_shuffle_ps(v3, v3, 170).m128_u32[0];
  *(_OWORD *)((char *)this + 196) = *(_OWORD *)&v6[8];
  *((_DWORD *)this + 53) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v3, 12));
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
