/*
 * XREFs of ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C0030CE8
 * Callers:
 *     NtDCompositionSetResourceCallbackId @ 0x1C00110D0 (NtDCompositionSetResourceCallbackId.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceCallbackId(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  int v7; // ebx
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *))(*(_QWORD *)v5 + 176LL))(
           v5,
           a3,
           &v9);
    if ( v7 >= 0 && v9 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
