/*
 * XREFs of ?Create@CSharedReadDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00F2314
 * Callers:
 *     CreateSharedReadDesktopTargetMarshaler @ 0x1C00F23C0 (CreateSharedReadDesktopTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadDesktopTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadDesktopTargetMarshaler **a2)
{
  struct DirectComposition::CSharedReadDesktopTargetMarshaler *v4; // rax
  struct DirectComposition::CSharedReadDesktopTargetMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadDesktopTargetMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x38uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadDesktopTargetMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadDesktopTargetMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 232LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadDesktopTargetMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(
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
