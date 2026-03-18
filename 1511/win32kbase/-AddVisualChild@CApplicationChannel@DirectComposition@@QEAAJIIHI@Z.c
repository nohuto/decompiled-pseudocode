/*
 * XREFs of ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C001D8D4
 * Callers:
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z @ 0x1C001AD7C (-CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z.c)
 *     NtDCompositionAddVisualChild @ 0x1C001E2B0 (NtDCompositionAddVisualChild.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001AFD8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct DirectComposition::CResourceMarshaler *v8; // rbx
  struct DirectComposition::CResourceMarshaler *v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  struct DirectComposition::CResourceMarshaler *v11; // rax
  struct DirectComposition::CResourceMarshaler *v12; // r14
  int v13; // ebx
  struct DirectComposition::CResourceMarshaler *v15; // rax
  _BYTE v16[16]; // [rsp+40h] [rbp-28h] BYREF

  v16[0] = 0;
  v8 = 0LL;
  v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v10 = v9;
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v9 + 112LL))(
           v9,
           31LL)
      && (v11 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a3), (v12 = v11) != 0LL)
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v11 + 112LL))(
           v11,
           31LL)
      && (!a5
       || (v15 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a5), (v8 = v15) != 0LL)
       && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v15 + 112LL))(
            v15,
            31LL)) )
    {
      v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, _QWORD, struct DirectComposition::CResourceMarshaler *, _BYTE *))(*(_QWORD *)v10 + 224LL))(
              v10,
              this,
              v12,
              a4,
              v8,
              v16);
      if ( v13 >= 0 && v16[0] )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
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
  return (unsigned int)v13;
}
