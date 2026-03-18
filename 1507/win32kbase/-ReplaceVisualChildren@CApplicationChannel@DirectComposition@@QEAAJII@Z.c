/*
 * XREFs of ?ReplaceVisualChildren@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C00D53E8
 * Callers:
 *     NtDCompositionReplaceVisualChildren @ 0x1C00D4170 (NtDCompositionReplaceVisualChildren.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReplaceVisualChildren(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  int v7; // ebx
  struct DirectComposition::CResourceMarshaler *v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // rbx
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v5 + 112LL))(
           v5,
           31LL)
      && (v8 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a3), (v9 = v8) != 0LL)
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 112LL))(
           v8,
           31LL) )
    {
      v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler *, char *))(*(_QWORD *)v6 + 216LL))(
             v6,
             this,
             v9,
             &v11);
      if ( v7 >= 0 && v11 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v6);
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
  return (unsigned int)v7;
}
