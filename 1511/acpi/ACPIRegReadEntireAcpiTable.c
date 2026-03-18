/*
 * XREFs of ACPIRegReadEntireAcpiTable @ 0x1C007CBF8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C006598C (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DE8 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     OSReadRegValue @ 0x1C006630C (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireAcpiTable(void *a1, const void **a2)
{
  _DWORD *v2; // rbx
  char *PoolWithTag; // rdi
  unsigned int v7; // r12d
  void *i; // rdx
  unsigned int j; // ebp
  unsigned int *v10; // r13
  unsigned int *v11; // rbx
  unsigned int v12; // ecx
  PVOID v13; // rax
  PVOID v14; // r15
  unsigned int v15; // ecx
  SIZE_T v16; // rdx
  PVOID v17; // rax
  PVOID v18; // r15
  int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // [rsp+20h] [rbp-58h] BYREF
  int v22; // [rsp+24h] [rbp-54h]
  void *v23; // [rsp+28h] [rbp-50h]
  char pszDest[16]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *a2;
  v23 = a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x4000uLL, 0x42706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v7 = v2[1];
  v22 = 0;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
  for ( i = a1; ; i = v23 )
  {
    v21 = 0x4000;
    if ( OSReadRegValue(pszDest, i, PoolWithTag, &v21) < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return 0LL;
    }
    if ( v21 < 8 )
      break;
    for ( j = 0; j < v21; j += v11[1] + 8 )
    {
      v10 = (unsigned int *)*a2;
      v11 = (unsigned int *)&PoolWithTag[j];
      v12 = v11[1];
      if ( v12 )
      {
        v16 = v12 + *v11;
        if ( (unsigned int)v16 > v7 )
        {
          v7 = v12 + *v11;
          v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x74706341u);
          v18 = v17;
          if ( !v17 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            return 3221225626LL;
          }
          memmove(v17, *a2, v10[1]);
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v18;
        }
        memmove((char *)*a2 + *v11, v11 + 2, v11[1]);
      }
      else if ( *v11 != v10[1] )
      {
        v7 = *v11;
        v13 = ExAllocatePoolWithTag(NonPagedPoolNx, *v11, 0x74706341u);
        v14 = v13;
        if ( !v13 )
        {
          v20 = -1073741670;
          goto LABEL_24;
        }
        v15 = v10[1];
        if ( *v11 < v15 )
          v15 = *v11;
        memmove(v13, *a2, v15);
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v14;
      }
    }
    v19 = v22++;
    RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v19 + 1);
  }
  v20 = -1073741823;
LABEL_24:
  ExFreePoolWithTag(PoolWithTag, 0);
  return v20;
}
