/*
 * XREFs of ?SetReferenceProperty@CDesktopTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0017930
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CDesktopTargetMarshaler::SetReferenceProperty(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int v9; // r8d
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx

  v5 = 0;
  v9 = a3 - 2;
  if ( v9 )
  {
    if ( v9 == 1
      && (!a4
       || (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 16LL))(a4) == 39) )
    {
      v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
      if ( v10 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
      *((_QWORD *)this + 8) = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x100u;
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 16LL))(a4) != 31 )
  {
    return (unsigned int)-1073741811;
  }
  v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v12 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
  *((_QWORD *)this + 7) = a4;
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  *((_DWORD *)this + 4) |= 0x80u;
  *a5 = 1;
  return v5;
}
