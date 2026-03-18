/*
 * XREFs of ?Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0005274
 * Callers:
 *     CreateSharedWriteAnimationTriggerMarshaler @ 0x1C0005240 (CreateSharedWriteAnimationTriggerMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteAnimationTriggerMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **a2)
{
  __int64 v4; // rax
  struct DirectComposition::CSharedWriteAnimationTriggerMarshaler *v5; // rbx
  int v6; // edi
  __int64 result; // rax

  v4 = Win32AllocPoolWithQuotaZInit(0x38uLL);
  v5 = (struct DirectComposition::CSharedWriteAnimationTriggerMarshaler *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 20) = 1;
    *(_QWORD *)v4 = &DirectComposition::CSharedWriteAnimationTriggerMarshaler::`vftable';
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
      (*(void (__fastcall **)(struct DirectComposition::CSharedWriteAnimationTriggerMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 6) = a1;
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
