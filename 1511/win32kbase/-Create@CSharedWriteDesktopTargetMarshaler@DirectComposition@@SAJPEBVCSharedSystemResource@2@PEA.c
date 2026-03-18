/*
 * XREFs of ?Create@CSharedWriteDesktopTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C007A074
 * Callers:
 *     CreateSharedWriteDesktopTargetMarshaler @ 0x1C007A040 (CreateSharedWriteDesktopTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
    *((_DWORD *)v4 + 4) |= 0x40u;
    *((_DWORD *)v4 + 5) = 1;
    *(_QWORD *)v4 = &DirectComposition::CSharedWriteDesktopTargetMarshaler::`vftable';
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
