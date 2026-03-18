/*
 * XREFs of ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C001D630
 * Callers:
 *     NtDCompositionSetResourceHandleProperty @ 0x1C007D6A0 (NtDCompositionSetResourceHandleProperty.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        void *a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rdi
  int v9; // ebx
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 0;
  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, _BYTE *))(*(_QWORD *)v7 + 144LL))(
           v7,
           a3,
           a4,
           v11);
    if ( v9 >= 0 && v11[0] )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v8);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v9;
}
