/*
 * XREFs of ?Create@CSharedReadScalarMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DFCD0
 * Callers:
 *     CreateSharedReadScalarMarshaler @ 0x1C00DFE60 (CreateSharedReadScalarMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedReadScalarMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadScalarMarshaler **a2)
{
  struct DirectComposition::CSharedReadScalarMarshaler *v4; // rax
  struct DirectComposition::CSharedReadScalarMarshaler *v5; // rbx
  int v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedReadScalarMarshaler *)Win32AllocPoolWithQuotaZInit(0x48uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 9) = 1;
    *(_QWORD *)v4 = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
    *((_QWORD *)v4 + 2) = &DirectComposition::CSharedReadScalarMarshaler::`vftable'{for `DirectComposition::CSharedReadMarshaler'};
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *, const struct DirectComposition::CSharedSystemResource *))(*((_QWORD *)v5 + 2) + 224LL))(
           (_QWORD *)v5 + 2,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v5 + 2) + 96LL))((_QWORD *)v5 + 2, 1LL);
      v5 = 0LL;
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
