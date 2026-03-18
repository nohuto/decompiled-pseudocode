/*
 * XREFs of ?Create@CSharedManipulationTransformMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0011EE4
 * Callers:
 *     CreateSharedManipulationTransformMarshaler @ 0x1C0011EB0 (CreateSharedManipulationTransformMarshaler.c)
 * Callees:
 *     ?Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00143F0 (-Initialize@CManipulationTransformMarshaler@DirectComposition@@UEAAJXZ.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedManipulationTransformMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedManipulationTransformMarshaler **a2)
{
  __int64 v4; // rax
  DirectComposition::CManipulationTransformMarshaler *v5; // rbx
  int v6; // edi
  __int64 result; // rax

  v4 = Win32AllocPoolWithQuotaZInit(0x78uLL);
  v5 = (DirectComposition::CManipulationTransformMarshaler *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 20) = 1;
    *(_QWORD *)v4 = &DirectComposition::CSharedManipulationTransformMarshaler::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = DirectComposition::CManipulationTransformMarshaler::Initialize(v5);
    if ( v6 >= 0 )
    {
      v6 = CompositionObject::AddRef((const struct DirectComposition::CSharedSystemResource *)((char *)a1 - 24));
      if ( v6 >= 0 )
        *((_QWORD *)v5 + 14) = a1;
    }
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(DirectComposition::CManipulationTransformMarshaler *, __int64))(*(_QWORD *)v5 + 96LL))(
        v5,
        1LL);
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
