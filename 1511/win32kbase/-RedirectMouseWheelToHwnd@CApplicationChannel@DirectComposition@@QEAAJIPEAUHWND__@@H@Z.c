/*
 * XREFs of ?RedirectMouseWheelToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@H@Z @ 0x1C0004690
 * Callers:
 *     NtDCompositionAttachMouseWheelToHwnd @ 0x1C00045C0 (NtDCompositionAttachMouseWheelToHwnd.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RedirectMouseWheelToHwnd(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        HWND a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rbx
  __int64 v9; // r9

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v8 = v7;
  if ( !v7
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 112LL))(
          v7,
          31LL) )
  {
    return 3221225485LL;
  }
  LOBYTE(v9) = a4 != 0;
  return (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, HWND, __int64))(*(_QWORD *)v8 + 264LL))(
           v8,
           this,
           a3,
           v9);
}
