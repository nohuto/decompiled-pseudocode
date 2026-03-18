/*
 * XREFs of ?SetReferenceProperty@CPrimitiveMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00D64C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00D4FD0 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveMarshaler::SetReferenceProperty(
        DirectComposition::CPrimitiveMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  int v9; // r8d
  struct DirectComposition::CResourceMarshaler **v10; // rdi
  int v11; // ebp
  int v12; // r15d

  v5 = 0;
  *a5 = 0;
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 3 )
      return (unsigned int)-1073741811;
    v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 40);
    v11 = 128;
    v12 = 79;
  }
  else
  {
    v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 120);
    v11 = 256;
    v12 = 99;
  }
  if ( !v10
    || a4
    && (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 16LL))(a4) != v12 )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v10);
    *v10 = 0LL;
  }
  *v10 = a4;
  if ( a4 )
    DirectComposition::CResourceMarshaler::AddRef(a4);
  *((_DWORD *)this + 4) &= ~v11;
  *a5 = 1;
  return v5;
}
