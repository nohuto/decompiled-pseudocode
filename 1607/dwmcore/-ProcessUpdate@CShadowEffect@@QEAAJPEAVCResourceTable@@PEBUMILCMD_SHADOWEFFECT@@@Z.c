/*
 * XREFs of ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z @ 0x1801084B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShadowEffect::ProcessUpdate(CShadowEffect *this, struct CResourceTable *a2, __m128i *a3)
{
  __m128i v4; // xmm1
  __m128 v5; // xmm6
  __m256i v7; // [rsp+20h] [rbp-48h]

  v4 = a3[1];
  v5 = *(__m128 *)a3;
  *(__m128i *)v7.m256i_i8 = *a3;
  *(__m128i *)&v7.m256i_u64[2] = v4;
  (*(void (__fastcall **)(CShadowEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *(_OWORD *)((char *)this + 276) = *(_OWORD *)((char *)&v7.m256i_u64[1] + 4);
  *((_DWORD *)this + 68) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  *((_DWORD *)this + 73) = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
