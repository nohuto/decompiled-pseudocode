/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C003DD50
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0042210 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionReleaseAllResources @ 0x1C007C6C0 (NtDCompositionReleaseAllResources.c)
 * Callees:
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C003BF00 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C003FC3C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(
        DirectComposition::CApplicationChannel *this,
        bool *a2)
{
  _QWORD *i; // rbx
  DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rsi
  unsigned __int64 j; // [rsp+40h] [rbp+8h] BYREF

  for ( i = (_QWORD *)((char *)this + 256);
        (_QWORD *)*i != i;
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          (struct DirectComposition::CResourceMarshaler *)(*i - 248LL)) )
  {
    ;
  }
  for ( j = 0LL;
        DirectComposition::CLinearObjectTableBase::EnumerateObjects(
          (DirectComposition::CApplicationChannel *)((char *)this + 56),
          &j);
        DirectComposition::CApplicationChannel::ReleaseResource(this, j) )
  {
    ;
  }
  j = 0LL;
  while ( 1 )
  {
    v5 = (DirectComposition::CResourceMarshaler *)DirectComposition::CLinearObjectTableBase::EnumerateObjects(
                                                    (DirectComposition::CApplicationChannel *)((char *)this + 120),
                                                    &j);
    v6 = v5;
    if ( !v5 )
      break;
    DirectComposition::CResourceMarshaler::AddRef(v5);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 104LL))(
      v6,
      this);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v6);
  }
  if ( a2 )
    *a2 = *((_DWORD *)this + 133) != 0;
}
