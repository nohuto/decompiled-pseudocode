/*
 * XREFs of ?Initialize@CBufferRealization@@IEAAJXZ @ 0x1C004B44C
 * Callers:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C004B2E4 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C001EEB4 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     GreDxgkGetSharedAllocationObjectType @ 0x1C004B590 (GreDxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CBufferRealization::Initialize(CBufferRealization *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edx
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  NTSTATUS v6; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = CRegion::Create((struct CRegion **)this + 8);
  v4 = v2;
  if ( v2 >= 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      SharedAllocationObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType(v3, (unsigned int)v2);
      v6 = ObReferenceObjectByHandle(*((HANDLE *)this + 4), 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
      *((_QWORD *)this + 4) = 0LL;
      v4 = v6;
      *((_QWORD *)this + 7) = Object;
    }
  }
  return v4;
}
