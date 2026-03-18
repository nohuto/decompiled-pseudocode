/*
 * XREFs of ?SetReferenceProperty@CPencilMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00E5FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CPencilMarshaler::SetReferenceProperty(
        DirectComposition::CPencilMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler **v8; // rsi

  v5 = 0;
  *a5 = 0;
  if ( a3 == 3 )
  {
    v8 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 96);
  }
  else
  {
    if ( a3 != 5 )
      return (unsigned int)-1073741811;
    v8 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
  }
  *((_DWORD *)this + 4) &= ~0x20u;
  if ( !v8
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
          a4,
          92LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v8 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v8);
    *v8 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *a5 = 1;
  }
  return v5;
}
