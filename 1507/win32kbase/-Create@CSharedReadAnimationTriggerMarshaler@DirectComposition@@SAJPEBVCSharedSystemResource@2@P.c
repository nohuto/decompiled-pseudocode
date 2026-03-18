/*
 * XREFs of ?Create@CSharedReadAnimationTriggerMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C00DE214
 * Callers:
 *     CreateSharedReadAnimationTriggerMarshaler @ 0x1C00DE2C0 (CreateSharedReadAnimationTriggerMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedReadAnimationTriggerMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadAnimationTriggerMarshaler **a2)
{
  struct DirectComposition::CSharedReadAnimationTriggerMarshaler *v4; // rax
  struct DirectComposition::CSharedReadAnimationTriggerMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadAnimationTriggerMarshaler *)Win32AllocPoolWithQuotaZInit(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 5) = 1;
    *(_QWORD *)v4 = &DirectComposition::CSharedReadAnimationTriggerMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadAnimationTriggerMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 208LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadAnimationTriggerMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(
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
