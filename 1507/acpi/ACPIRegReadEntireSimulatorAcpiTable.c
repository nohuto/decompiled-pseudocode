/*
 * XREFs of ACPIRegReadEntireSimulatorAcpiTable @ 0x1C007CC28
 * Callers:
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C007C8B4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DB8 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     OSReadRegValue @ 0x1C0066670 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireSimulatorAcpiTable(void *a1, const void **a2)
{
  unsigned int *v2; // r14
  _BYTE *v3; // rbx
  int v5; // r12d
  void *v6; // rdi
  _BYTE *i; // r8
  _BYTE *PoolWithTag; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // esi
  unsigned int *v11; // rdi
  unsigned int *v12; // r13
  unsigned int *v13; // rax
  unsigned int v14; // ecx
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-58h] BYREF
  void *v17; // [rsp+28h] [rbp-50h]
  char pszDest[16]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (unsigned int *)*a2;
  v3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5 = 0;
  v17 = a1;
  v6 = a1;
  while ( 1 )
  {
    RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v5);
    for ( i = v3; ; i = PoolWithTag )
    {
      v9 = OSReadRegValue(pszDest, v6, i, (unsigned int *)&NumberOfBytes);
      if ( v9 >= 0 )
        break;
      if ( v9 != -2147483643 )
      {
        ExFreePoolWithTag(v3, 0);
        return 0LL;
      }
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42706341u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    if ( (unsigned int)NumberOfBytes < 8 )
      break;
    v10 = 0;
    do
    {
      v11 = (unsigned int *)&v3[v10];
      if ( v11[1] )
      {
        memmove((char *)*a2 + *v11, v11 + 2, v11[1]);
      }
      else
      {
        v12 = v2 + 1;
        if ( *v11 != v2[1] )
        {
          v13 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, *v11, 0x74706341u);
          v2 = v13;
          if ( !v13 )
          {
            ExFreePoolWithTag(v3, 0);
            return 3221225626LL;
          }
          v14 = *v12;
          if ( *v11 < *v12 )
            v14 = *v11;
          memmove(v13, *a2, v14);
          if ( *a2 )
            ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v2;
        }
      }
      v10 += v11[1] + 8;
    }
    while ( v10 < (unsigned int)NumberOfBytes );
    v6 = v17;
    ++v5;
  }
  ExFreePoolWithTag(v3, 0);
  return 3221225473LL;
}
