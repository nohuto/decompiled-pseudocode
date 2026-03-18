/*
 * XREFs of ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D4FF4
 * Callers:
 *     NtDCompositionCapturePointer @ 0x1C00D3CA0 (NtDCompositionCapturePointer.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?OwnsPointerId@CInputManager@@SA_NII@Z @ 0x1C00DE7F0 (-OwnsPointerId@CInputManager@@SA_NII@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CapturePointer(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3)
{
  int v6; // ebx
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rdi

  if ( CInputManager::OwnsPointerId(*((_DWORD *)this + 171), a3) )
  {
    v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
    v8 = v7;
    if ( v7
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 112LL))(
           v7,
           88LL) )
    {
      v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)v8 + 216LL))(
             v8,
             this,
             a3);
      if ( v6 >= 0 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v6;
}
