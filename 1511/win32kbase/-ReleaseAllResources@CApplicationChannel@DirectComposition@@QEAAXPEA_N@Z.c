/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C001DC2C
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001CFF0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionReleaseAllResources @ 0x1C0078FE0 (NtDCompositionReleaseAllResources.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001E07C (-EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(
        DirectComposition::CApplicationChannel *this,
        bool *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rax
  struct DirectComposition::CResourceMarshaler *v5; // rdi
  int v6; // eax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  while ( 1 )
  {
    v4 = (struct DirectComposition::CResourceMarshaler *)DirectComposition::CLinearHandleTableBase::EnumerateObjects(
                                                           (DirectComposition::CApplicationChannel *)((char *)this + 56),
                                                           &v7);
    v5 = v4;
    if ( !v4 )
      break;
    v6 = *((_DWORD *)v4 + 4);
    if ( (v6 & 1) != 0 )
      *((_DWORD *)v5 + 4) = v6 & 0xFFFFFFFE;
    else
      ++*((_DWORD *)v5 + 5);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v5 + 104LL))(
      v5,
      this);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v5);
  }
  if ( a2 )
    *a2 = *((_DWORD *)this + 131) != 0;
}
