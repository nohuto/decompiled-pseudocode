/*
 * XREFs of ?Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C007BB54
 * Callers:
 *     CreateSharedWriteDesktopTargetMarshaler @ 0x1C007BB20 (CreateSharedWriteDesktopTargetMarshaler.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteDesktopTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteDesktopTargetMarshaler **a2)
{
  struct DirectComposition::CSharedWriteDesktopTargetMarshaler *v4; // rax
  struct DirectComposition::CSharedWriteDesktopTargetMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedWriteDesktopTargetMarshaler *)Win32AllocPoolWithQuotaZInit(0x50uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x50uLL);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 4) |= 0x20u;
    *(_QWORD *)v5 = &DirectComposition::CSharedWriteDesktopTargetMarshaler::`vftable';
    *((_DWORD *)v5 + 5) = 1;
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
      (*(void (__fastcall **)(struct DirectComposition::CSharedWriteDesktopTargetMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 9) = a1;
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
