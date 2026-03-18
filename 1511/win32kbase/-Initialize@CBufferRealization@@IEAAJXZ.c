/*
 * XREFs of ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C004D5F4
 * Callers:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C004D4A4 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C003DA74 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::Initialize(CBufferRealization *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  struct _OBJECT_TYPE *v4; // rax
  NTSTATUS v5; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = CRegion::Create((struct CRegion **)this + 8);
  v3 = v2;
  if ( v2 >= 0 && *((_DWORD *)this + 6) == 2 )
  {
    v4 = (struct _OBJECT_TYPE *)((__int64 (__fastcall *)(_QWORD))qword_1C0104348)((unsigned int)v2);
    v5 = ObReferenceObjectByHandle(*((HANDLE *)this + 4), 0xF0000u, v4, 1, &Object, 0LL);
    *((_QWORD *)this + 4) = 0LL;
    v3 = v5;
    *((_QWORD *)this + 7) = Object;
  }
  return v3;
}
