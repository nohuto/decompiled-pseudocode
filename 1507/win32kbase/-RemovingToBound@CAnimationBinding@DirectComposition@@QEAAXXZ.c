/*
 * XREFs of ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C0028F2C
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C002E1C8 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::RemovingToBound(DirectComposition::CAnimationBinding *this)
{
  DirectComposition::CResourceMarshaler *v1; // rax

  *((_DWORD *)this + 2) = *((_DWORD *)this + 2) & 0xFFFFFFFA | 1;
  v1 = (DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
  DirectComposition::CResourceMarshaler::AddRef(v1);
}
