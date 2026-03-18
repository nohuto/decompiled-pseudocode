/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C001D330
 * Callers:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     NtDCompositionReleaseResource @ 0x1C0019BE0 (NtDCompositionReleaseResource.c)
 *     NtDCompositionCreateResource @ 0x1C0019C90 (NtDCompositionCreateResource.c)
 *     ?CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z @ 0x1C001AD7C (-CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z.c)
 *     NtDCompositionOpenSharedResource @ 0x1C0076180 (NtDCompositionOpenSharedResource.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        int a2,
        bool *a3)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v6; // rax
  struct DirectComposition::CResourceMarshaler *v7; // rdi
  struct DirectComposition::CResourceMarshaler *v8; // rdi

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
        v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v7 + 19);
        if ( v8 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v8 + 200LL))(v8) )
          {
            *((_DWORD *)v8 + 4) |= 0x4000000u;
            DirectComposition::CApplicationChannel::ReleaseResource(this, v8);
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
