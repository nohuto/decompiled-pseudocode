/*
 * XREFs of ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C004C89C
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C003FA20 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C004C780 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::Initialize(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CResourceMarshaler *a2,
        int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  DirectComposition::CResourceMarshaler *v4; // rax

  *((_DWORD *)this + 3) = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  *((_QWORD *)a2 + 4) = this;
  *((_QWORD *)this + 3) = a4;
  *((_QWORD *)this + 5) = *((_QWORD *)a4 + 1);
  *((_QWORD *)a4 + 1) = this;
  *((_DWORD *)this + 2) = 2;
  v4 = (DirectComposition::CResourceMarshaler *)(**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  DirectComposition::CResourceMarshaler::AddRef(v4);
}
