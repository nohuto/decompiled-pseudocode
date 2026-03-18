/*
 * XREFs of ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x1800F64BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CTableTransferEffect::ProcessUpdate(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        __m128i *a3)
{
  __int32 v4; // edi
  __m128i v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = *a3;
  v4 = a3[1].m128i_i32[2];
  v7 = a3[1].m128i_i64[0];
  (*(void (__fastcall **)(CTableTransferEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 50) = v7;
  *((_DWORD *)this + 48) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  *((_DWORD *)this + 49) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12));
  *((_DWORD *)this + 51) = HIDWORD(v7);
  *((_DWORD *)this + 52) = v4;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
