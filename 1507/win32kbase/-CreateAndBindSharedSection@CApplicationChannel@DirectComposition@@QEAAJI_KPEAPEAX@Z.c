/*
 * XREFs of ?CreateAndBindSharedSection@CApplicationChannel@DirectComposition@@QEAAJI_KPEAPEAX@Z @ 0x1C0030B9C
 * Callers:
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0013D90 (NtDCompositionCreateAndBindSharedSection.c)
 * Callees:
 *     ?InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C000B068 (-InitializeSection@CSharedSectionMarshaler@DirectComposition@@QEAAJ_KPEAPEAX@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C002DC80 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndBindSharedSection(
        DirectComposition::CApplicationChannel *this,
        int a2,
        union _LARGE_INTEGER a3,
        void **a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  union _LARGE_INTEGER *v8; // rdi
  int v9; // ebx

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v8 = (union _LARGE_INTEGER *)v7;
  if ( v7
    && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 112LL))(
         v7,
         82LL) )
  {
    v9 = DirectComposition::CSharedSectionMarshaler::InitializeSection(v8, a3, a4);
    if ( v9 >= 0 )
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
        this,
        (struct DirectComposition::CResourceMarshaler *)v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
