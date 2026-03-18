/*
 * XREFs of ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0004284
 * Callers:
 *     CreateHostVisualMarshaler @ 0x1C0004250 (CreateHostVisualMarshaler.c)
 * Callees:
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0017340 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CHostVisualMarshaler **a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 result; // rax

  v4 = Win32AllocPoolWithQuotaZInit(0xE8uLL);
  v5 = v4;
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
    v6 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)v5);
    if ( v6 >= 0 )
    {
      v6 = CompositionObject::AddRef((const struct DirectComposition::CSharedSystemResource *)((char *)a1 - 24));
      if ( v6 >= 0 )
        *(_QWORD *)(v5 + 224) = a1;
    }
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 96LL))(v5, 1LL);
      v5 = 0LL;
    }
    else
    {
      *(_DWORD *)(v5 + 16) |= 0x2000004u;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  result = (unsigned int)v6;
  *a2 = (struct DirectComposition::CHostVisualMarshaler *)v5;
  return result;
}
