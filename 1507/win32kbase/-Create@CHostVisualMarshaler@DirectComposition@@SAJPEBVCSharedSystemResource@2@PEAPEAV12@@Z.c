/*
 * XREFs of ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0003234
 * Callers:
 *     CreateHostVisualMarshaler @ 0x1C0003200 (CreateHostVisualMarshaler.c)
 * Callees:
 *     ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00033C0 (-InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemReso.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CHostVisualMarshaler **a2)
{
  __int64 v4; // rax
  DirectComposition::CHostVisualMarshaler *v5; // rbx
  int v6; // edi

  v4 = Win32AllocPoolWithQuotaZInit(0xF0uLL);
  v5 = (DirectComposition::CHostVisualMarshaler *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 20) = 1;
    *(_QWORD *)v4 = &DirectComposition::CHostVisualMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CHostVisualMarshaler::InitializeFromSharedResource(v5, a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CHostVisualMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(v5, 1LL);
      v5 = 0LL;
    }
    else
    {
      *((_DWORD *)v5 + 4) |= 0x4000004u;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
