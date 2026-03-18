/*
 * XREFs of ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C0030C1C
 * Callers:
 *     NtDCompositionSetVisualInputSink @ 0x1C0016350 (NtDCompositionSetVisualInputSink.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetVisualInputSink(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void *a3)
{
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  int v7; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v5 + 112LL))(
            v5,
            31LL) )
      v7 = -1073741811;
    v9 = 0LL;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v6 + 240LL))(
             v6,
             this,
             &v9);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, void *, char *))(*(_QWORD *)v9 + 144LL))(
               v9,
               0LL,
               a3,
               &v10);
        if ( v7 >= 0 )
        {
          if ( v10 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v9);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}
