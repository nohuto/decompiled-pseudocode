/*
 * XREFs of ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0030648
 * Callers:
 *     NtDCompositionSetResourceAnimationProperty @ 0x1C0011E10 (NtDCompositionSetResourceAnimationProperty.c)
 * Callees:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C002E1C8 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceAnimationProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v7; // rax
  struct DirectComposition::CBaseAnimation *v8; // r14
  struct DirectComposition::CResourceMarshaler *v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // eax

  v7 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a4);
  if ( v7 )
  {
    v8 = (struct DirectComposition::CBaseAnimation *)(*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v7 + 120LL))(v7);
    if ( v8 )
    {
      v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
      v10 = v9;
      if ( !v9 )
        return 3221225506LL;
      v11 = *(_QWORD *)v9;
      v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CBaseAnimation *))(*(_QWORD *)v8 + 8LL))(v8);
      if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, _QWORD))(v11 + 184))(
             v10,
             a3,
             v12) )
      {
        return DirectComposition::CApplicationChannel::BindAnimation((union _SLIST_HEADER *)this, v10, a3, v8);
      }
    }
  }
  return 3221225485LL;
}
