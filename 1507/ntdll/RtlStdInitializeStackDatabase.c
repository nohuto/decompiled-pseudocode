/*
 * XREFs of RtlStdInitializeStackDatabase @ 0x1800E47A0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800E4B50 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x1800663A0 (RtlInitializeSListHead.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __fastcall RtlStdInitializeStackDatabase(void *a1, ULONG_PTR a2, ULONG_PTR a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  _BYTE *v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rdi
  NTSTATUS v10; // r14d
  char *v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  unsigned int v15; // edx
  _QWORD *i; // rcx
  __int64 v17; // rax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR v19; // [rsp+78h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+40h] BYREF

  RegionSize = a3;
  v19 = a2;
  if ( a2 && (a2 != a3 || !a1) )
    return -1073741811;
  BaseAddress[0] = a1;
  v7 = a1;
  v8 = a3 < 0x1000000 ? 5569 : 9551;
  v9 = 16 * (v8 + 47LL);
  if ( a3 <= v9 )
    return -1073741811;
  if ( !a1 )
  {
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
    if ( result < 0 )
      return result;
    a2 = v19;
    v7 = BaseAddress[0];
  }
  if ( a2 )
  {
    v7[128] = 1;
LABEL_16:
    v11 = (char *)BaseAddress[0];
    *((PVOID *)BaseAddress[0] + 17) = BaseAddress[0];
    *((_DWORD *)BaseAddress[0] + 180) = v8;
    *((_QWORD *)BaseAddress[0] + 21) = &v11[RegionSize];
    *((_QWORD *)BaseAddress[0] + 23) = *((_QWORD *)BaseAddress[0] + 21);
    if ( *((_BYTE *)BaseAddress[0] + 128) )
    {
      memset((char *)BaseAddress[0] + 728, 0, 16LL * *((unsigned int *)BaseAddress[0] + 180));
    }
    else
    {
      *((_QWORD *)BaseAddress[0] + 18) = &v11[v19];
      *((_QWORD *)BaseAddress[0] + 19) = &v11[RegionSize];
    }
    v12 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v13 = 208LL;
    v14 = 32LL;
    *((_QWORD *)BaseAddress[0] + 20) = (char *)BaseAddress[0] + v12;
    *((_QWORD *)BaseAddress[0] + 15) = *((_QWORD *)BaseAddress[0] + 20);
    do
    {
      RtlInitializeSListHead((PSLIST_HEADER)((char *)BaseAddress[0] + v13));
      v13 += 16LL;
      --v14;
    }
    while ( v14 );
    v15 = 0;
    *(_QWORD *)BaseAddress[0] = 0LL;
    for ( i = BaseAddress[0]; v15 < *((_DWORD *)BaseAddress[0] + 180); i = BaseAddress[0] )
    {
      v17 = v15++;
      i[2 * v17 + 92] = 0LL;
    }
    *a4 = i;
    return 0;
  }
  v19 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, &v19, 0x1000u, 4u);
  if ( v10 >= 0 )
  {
    *((_BYTE *)BaseAddress[0] + 128) = 0;
    goto LABEL_16;
  }
  if ( !a1 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 0x8000u);
  return v10;
}
