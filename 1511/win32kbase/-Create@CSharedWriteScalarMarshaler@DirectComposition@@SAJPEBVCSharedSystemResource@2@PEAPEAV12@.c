/*
 * XREFs of ?Create@CSharedWriteScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DFD80
 * Callers:
 *     CreateSharedWriteScalarMarshaler @ 0x1C00DFEB0 (CreateSharedWriteScalarMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteScalarMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteScalarMarshaler **a2)
{
  struct DirectComposition::CSharedWriteScalarMarshaler *v4; // rax
  struct DirectComposition::CSharedWriteScalarMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedWriteScalarMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 9) = 1;
    *(_QWORD *)v4 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
    *((_QWORD *)v4 + 2) = &DirectComposition::CSharedWriteScalarMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CompositionObject::AddRef((const struct DirectComposition::CSharedSystemResource *)((char *)a1 - 24));
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v5 + 2) + 96LL))((_QWORD *)v5 + 2, 1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 8) = a1;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  result = (unsigned int)v6;
  *a2 = v5;
  return result;
}
