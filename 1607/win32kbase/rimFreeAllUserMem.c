/*
 * XREFs of rimFreeAllUserMem @ 0x1C007DE2C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000A230 (RawInputManagerObjectDelete.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 * Callees:
 *     <none>
 */

void **__fastcall rimFreeAllUserMem(__int64 a1)
{
  struct _RTL_AVL_TABLE *v2; // rdi
  BOOLEAN i; // dl
  void **result; // rax
  __int64 v5; // rcx
  void **v6; // rbx
  void *v7; // rax
  void *v8; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v2 = (struct _RTL_AVL_TABLE *)(a1 + 848);
  for ( i = 1; ; i = 0 )
  {
    result = (void **)RtlEnumerateGenericTableAvl(v2, i);
    v6 = result;
    if ( !result )
      break;
    if ( *(_QWORD *)(a1 + 32) == PsGetCurrentProcess(v5) )
    {
      v7 = *v6;
      RegionSize = (ULONG_PTR)v6[1];
      v8 = v6[2];
      BaseAddress = v7;
      MmUnsecureVirtualMemory(v8);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    RtlDeleteElementGenericTableAvl(v2, v6);
  }
  return result;
}
