/*
 * XREFs of ?Create@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0004CD4
 * Callers:
 *     CreateSharedWriteAnimationTriggerMarshaler @ 0x1C0004CA0 (CreateSharedWriteAnimationTriggerMarshaler.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C001D5F0 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteAnimationTriggerMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteAnimationTriggerMarshaler **a2)
{
  struct DirectComposition::CSharedWriteAnimationTriggerMarshaler *v4; // rax
  struct DirectComposition::CSharedWriteAnimationTriggerMarshaler *v5; // rbx
  int v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedWriteAnimationTriggerMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x38uLL);
    *((_DWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = &DirectComposition::CSharedWriteAnimationTriggerMarshaler::`vftable';
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
