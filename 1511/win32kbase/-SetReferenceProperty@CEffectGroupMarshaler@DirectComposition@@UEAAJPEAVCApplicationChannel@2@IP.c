/*
 * XREFs of ?SetReferenceProperty@CEffectGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00141A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CEffectGroupMarshaler::SetReferenceProperty(
        DirectComposition::CEffectGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 1
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          24LL)) )
  {
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 6);
    if ( v9 != a4 )
    {
      if ( v9 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
        *((_QWORD *)this + 6) = 0LL;
      }
      if ( a4 )
      {
        *((_QWORD *)this + 6) = a4;
        ++*((_DWORD *)a4 + 5);
      }
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
