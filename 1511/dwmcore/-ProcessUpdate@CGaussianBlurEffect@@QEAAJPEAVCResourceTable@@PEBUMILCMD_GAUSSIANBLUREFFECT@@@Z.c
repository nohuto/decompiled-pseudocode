/*
 * XREFs of ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x18001A124
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CGaussianBlurEffect::ProcessUpdate(CGaussianBlurEffect *this, struct CResourceTable *a2, __m128 *a3)
{
  __int32 v4; // edi
  __m128 v5; // xmm6

  v4 = a3[1].m128_i32[0];
  v5 = *a3;
  (*(void (__fastcall **)(CGaussianBlurEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 50) = v4;
  *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v5, 12));
  *((_DWORD *)this + 48) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
