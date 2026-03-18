/*
 * XREFs of ?Create@CSharedMatrixTransform3DMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DF8E8
 * Callers:
 *     CreateSharedMatrixTransform3DMarshaler @ 0x1C00DFA00 (CreateSharedMatrixTransform3DMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedMatrixTransform3DMarshaler **a2)
{
  struct DirectComposition::CSharedMatrixTransform3DMarshaler *v4; // rax
  struct DirectComposition::CSharedMatrixTransform3DMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedMatrixTransform3DMarshaler *)Win32AllocPoolWithQuotaZInit(0x70uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 5) = 1;
    *(_QWORD *)v4 = &DirectComposition::CSharedMatrixTransform3DMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *((_DWORD *)v5 + 10) = 1065353216;
    *((_DWORD *)v5 + 15) = 1065353216;
    *((_DWORD *)v5 + 20) = 1065353216;
    *((_DWORD *)v5 + 25) = 1065353216;
    v6 = CompositionObject::AddRef((const struct DirectComposition::CSharedSystemResource *)((char *)a1 - 24));
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedMatrixTransform3DMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 13) = a1;
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
