/*
 * XREFs of rimFreeAllUserMem @ 0x1C0071D2C
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C00754B4 (RawInputManagerObjectDelete.c)
 * Callees:
 *     <none>
 */

void **__fastcall rimFreeAllUserMem(__int64 a1)
{
  struct _RTL_AVL_TABLE *v2; // rdi
  BOOLEAN i; // dl
  void **result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  void **v7; // rbx
  void *v8; // rax
  void *v9; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_AVL_TABLE *)(a1 + 848);
  for ( i = 1; ; i = 0 )
  {
    result = (void **)RtlEnumerateGenericTableAvl(v2, i);
    v7 = result;
    if ( !result )
      break;
    if ( *(_QWORD *)(a1 + 32) == PsGetCurrentProcess(v6, v5) )
    {
      v8 = *v7;
      RegionSize = (ULONG_PTR)v7[1];
      v9 = v7[2];
      BaseAddress = v8;
      MmUnsecureVirtualMemory(v9);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    RtlDeleteElementGenericTableAvl(v2, v7);
  }
  return result;
}
