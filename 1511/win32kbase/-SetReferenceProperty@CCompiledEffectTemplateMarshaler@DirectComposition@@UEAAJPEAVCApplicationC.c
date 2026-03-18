/*
 * XREFs of ?SetReferenceProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00DADD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetReferenceProperty(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          90LL) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 6);
    if ( a4 != v9 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 6) = a4;
      if ( a4 )
        ++*((_DWORD *)a4 + 5);
      *((_DWORD *)this + 4) &= ~0x80u;
      *a5 = 1;
    }
  }
  return v5;
}
