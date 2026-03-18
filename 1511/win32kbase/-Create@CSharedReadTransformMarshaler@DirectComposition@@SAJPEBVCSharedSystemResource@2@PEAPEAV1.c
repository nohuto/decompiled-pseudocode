/*
 * XREFs of ?Create@CSharedReadTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0073E0C
 * Callers:
 *     CreateSharedReadTransformMarshaler @ 0x1C0073DC0 (CreateSharedReadTransformMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedReadTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadTransformMarshaler **a2)
{
  struct DirectComposition::CSharedReadTransformMarshaler *v4; // rax
  struct DirectComposition::CSharedReadTransformMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadTransformMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 5) = 1;
    *(_QWORD *)v4 = &DirectComposition::CSharedReadTransformMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadTransformMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 224LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadTransformMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
