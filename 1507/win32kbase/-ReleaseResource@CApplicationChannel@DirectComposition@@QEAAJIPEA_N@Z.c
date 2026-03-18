/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C0030130
 * Callers:
 *     NtDCompositionOpenSharedResource @ 0x1C0013A90 (NtDCompositionOpenSharedResource.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0022D28 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     NtDCompositionReleaseResource @ 0x1C002C930 (NtDCompositionReleaseResource.c)
 *     NtDCompositionCreateResource @ 0x1C002CC10 (NtDCompositionCreateResource.c)
 *     ?CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z @ 0x1C002DA24 (-CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB0C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        int a2,
        bool *a3)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v6; // rax
  struct DirectComposition::CResourceMarshaler *v7; // rdi
  struct DirectComposition::CResourceMarshaler *v9; // rdi

  v5 = 0;
  v6 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 4) &= ~1u;
    if ( (unsigned int)DirectComposition::CApplicationChannel::ReleaseResource(this, v6) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v7 + 112LL))(
             v7,
             31LL) )
      {
        v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v7 + 19);
        if ( v9 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 200LL))(v9) )
          {
            *((_DWORD *)v9 + 4) |= 0x8000000u;
            DirectComposition::CApplicationChannel::ReleaseResource(this, v9);
          }
        }
      }
    }
    if ( a3 )
      *a3 = *((_DWORD *)this + 131) != 0;
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
