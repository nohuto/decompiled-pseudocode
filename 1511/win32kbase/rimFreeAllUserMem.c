/*
 * XREFs of rimFreeAllUserMem @ 0x1C000A7C8
 * Callers:
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C000CC50 (RawInputManagerObjectDelete.c)
 * Callees:
 *     <none>
 */

void **__fastcall rimFreeAllUserMem(__int64 a1)
{
  struct _RTL_AVL_TABLE *v2; // rdi
  BOOLEAN i; // dl
  void **result; // rax
  void **v5; // rbx
  void *v6; // rax
  void *v7; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_AVL_TABLE *)(a1 + 896);
  for ( i = 1; ; i = 0 )
  {
    result = (void **)RtlEnumerateGenericTableAvl(v2, i);
    v5 = result;
    if ( !result )
      break;
    if ( *(_QWORD *)(a1 + 32) == PsGetCurrentProcess() )
    {
      v6 = *v5;
      RegionSize = (ULONG_PTR)v5[1];
      v7 = v5[2];
      BaseAddress = v6;
      MmUnsecureVirtualMemory(v7);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    RtlDeleteElementGenericTableAvl(v2, v5);
  }
  return result;
}
