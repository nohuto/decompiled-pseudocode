/*
 * XREFs of ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x18010885C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTableTransferEffect::ProcessUpdate(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        __m128i *a3)
{
  __int32 v4; // ebx
  __m128i v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v4 = a3[1].m128i_i32[2];
  v6 = *a3;
  v7 = a3[1].m128i_i64[0];
  (*(void (__fastcall **)(CTableTransferEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 70) = v7;
  *((_DWORD *)this + 68) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 8));
  *((_DWORD *)this + 69) = _mm_cvtsi128_si32(_mm_srli_si128(v6, 12));
  *((_DWORD *)this + 71) = HIDWORD(v7);
  *((_DWORD *)this + 72) = v4;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
