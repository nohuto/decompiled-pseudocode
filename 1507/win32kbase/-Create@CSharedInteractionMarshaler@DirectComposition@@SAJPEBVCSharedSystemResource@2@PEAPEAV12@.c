/*
 * XREFs of ?Create@CSharedInteractionMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DE40C
 * Callers:
 *     CreateSharedInteractionMarshaler @ 0x1C00DE5E0 (CreateSharedInteractionMarshaler.c)
 * Callees:
 *     ??0CInteractionMarshaler@DirectComposition@@QEAA@I@Z @ 0x1C001CE24 (--0CInteractionMarshaler@DirectComposition@@QEAA@I@Z.c)
 *     ?Initialize@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C001D090 (-Initialize@CInteractionMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0021C80 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedInteractionMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedInteractionMarshaler **a2)
{
  DirectComposition::CInteractionMarshaler *v4; // rax
  DirectComposition::CInteractionMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (DirectComposition::CInteractionMarshaler *)Win32AllocPoolWithQuotaZInit(0xE8uLL);
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
        *((_QWORD *)v5 + 28) = a1;
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
