/*
 * XREFs of ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C004E9A8
 * Callers:
 *     CreateSharedInteractionMarshaler @ 0x1C004EA50 (CreateSharedInteractionMarshaler.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C004B610 (-Initialize@CInteractionMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@I@Z @ 0x1C004BA08 (--0CInteractionMarshaler@DirectComposition@@QEAA@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedInteractionMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedInteractionMarshaler **a2)
{
  DirectComposition::CInteractionMarshaler *v4; // rax
  DirectComposition::CInteractionMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0x100uLL);
  v5 = v4;
  if ( v4 )
  {
    DirectComposition::CInteractionMarshaler::CInteractionMarshaler(v4, *((_DWORD *)a1 + 4));
    *(_QWORD *)v5 = &DirectComposition::CSharedInteractionMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CInteractionMarshaler::Initialize(v5);
    if ( v6 >= 0 )
    {
      v6 = CompositionObject::AddRef((const struct DirectComposition::CSharedSystemResource *)((char *)a1 - 24));
      if ( v6 >= 0 )
        *((_QWORD *)v5 + 31) = a1;
    }
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CInteractionMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(v5, 1LL);
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
