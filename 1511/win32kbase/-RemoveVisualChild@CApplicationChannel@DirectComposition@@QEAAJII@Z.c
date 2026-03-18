/*
 * XREFs of ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C001D9F8
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00116B0 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     NtDCompositionRemoveVisualChild @ 0x1C001E5F0 (NtDCompositionRemoveVisualChild.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CResourceMarshaler *v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  char v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741790;
  if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v5 + 112LL))(
          v5,
          31LL) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, char *))(*(_QWORD *)v6 + 248LL))(
           v6,
           this,
           &v12);
    goto LABEL_7;
  }
  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a3);
  v8 = v7;
  if ( !v7
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 112LL))(
          v7,
          31LL) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)v6 + 240LL))(
         v6,
         this,
         v8,
         &v12);
LABEL_7:
  v10 = v9;
  if ( v9 >= 0 && v12 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
  return v10;
}
