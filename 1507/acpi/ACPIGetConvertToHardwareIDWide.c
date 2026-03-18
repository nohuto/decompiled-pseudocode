/*
 * XREFs of ACPIGetConvertToHardwareIDWide @ 0x1C0003B58
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C00038E0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToHardwareID @ 0x1C003BA78 (ACPIGetConvertToHardwareID.c)
 * Callees:
 *     ACPIAmliDoubleToName @ 0x1C0003874 (ACPIAmliDoubleToName.c)
 *     RtlStringCchPrintfA @ 0x1C0003DB8 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C0004154 (ACPIAnsiStringToWideHelper.c)
 *     RtlStringCchCopyNA @ 0x1C001DD04 (RtlStringCchCopyNA.c)
 *     ACPIGetProcessorIDWide @ 0x1C001DD84 (ACPIGetProcessorIDWide.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIGetConvertToHardwareIDWide(_QWORD *a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  char v7; // r12
  char *v8; // rdi
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  int v13; // r14d
  int v14; // ecx
  unsigned int v15; // ebp
  char *v16; // rax
  char *v17; // rsi
  int v18; // ebx
  __int64 v20; // rbx
  char *PoolWithTag; // rax
  int v22; // eax
  __int64 v23; // rbx
  char *v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0LL;
  if ( (a4 & 0x4000000) == 0 && (*a1 & 0x1000000000LL) != 0 )
  {
    v18 = ACPIGetProcessorIDWide(0, a2, 0, a4, (__int64)&v24, (__int64)&v25);
    if ( v18 >= 0 )
    {
      v13 = v25;
      v17 = v24;
      goto LABEL_11;
    }
    return (unsigned int)v18;
  }
  if ( (a4 & 0x4000000) == 0 && (*a1 & 0x800000000000LL) != 0 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(a1[69] + v20) );
    v11 = v20 - 4;
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                            v11,
                            0x53706341u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      v7 = 1;
      RtlStringCchCopyNA(v8, v11, (STRSAFE_PCNZCH)(a1[69] + 5LL), v11 - 1);
      goto LABEL_9;
    }
    return (unsigned int)-1073741670;
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 )
  {
    v11 = 8;
    v8 = (char *)ExAllocatePoolWithTag(
                   (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                   8uLL,
                   0x53706341u);
    if ( v8 )
    {
      *(_QWORD *)v8 = 0LL;
      v7 = 1;
      ACPIAmliDoubleToName(v8, *(_DWORD *)(a3 + 16));
LABEL_9:
      v12 = 2 * v11 + 7;
      v13 = 2 * v12;
      v14 = -((a4 & 0x8000000) != 0);
      v15 = 2 * v12;
      v16 = (char *)ExAllocatePoolWithTag((POOL_TYPE)((v14 & 0x1FF) + 1), 2 * v12, 0x53706341u);
      v17 = v16;
      if ( !v16 )
      {
        v18 = -1073741670;
LABEL_14:
        if ( v7 == 1 )
          ExFreePoolWithTag(v8, 0);
        return (unsigned int)v18;
      }
      memset(v16, 0, v15);
      RtlStringCchPrintfA(v17, v12, "ACPI\\%s", v8);
      RtlStringCchPrintfA(&v17[v11 + 5], v12 - (v11 + 5), "*%s", v8);
      ACPIAnsiStringToWideHelper(v17, v15);
LABEL_11:
      *a5 = v17;
      if ( a6 )
        *a6 = v13;
      v18 = 0;
      goto LABEL_14;
    }
    return (unsigned int)-1073741670;
  }
  if ( *(_WORD *)(a3 + 2) != 2 )
    return 3222536207LL;
  v22 = *(_DWORD *)(a3 + 24);
  v8 = *(char **)(a3 + 32);
  if ( v22 )
  {
    if ( *v8 == 42 )
    {
      ++v8;
      --v22;
    }
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( v8[v23] );
      v11 = v23 + 1;
      goto LABEL_9;
    }
  }
  return 3221225485LL;
}
