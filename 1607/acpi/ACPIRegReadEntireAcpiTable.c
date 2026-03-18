/*
 * XREFs of ACPIRegReadEntireAcpiTable @ 0x1C009E090
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000397C (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C00554D8 (WPP_RECORDER_SF_d.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireAcpiTable(void *a1, const void **a2)
{
  _DWORD *v2; // rbx
  char *PoolWithTag; // rdi
  unsigned int v7; // r12d
  void *v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int *v11; // r13
  unsigned int *v12; // rbx
  unsigned int v13; // ecx
  PVOID v14; // rax
  PVOID v15; // r15
  unsigned int v16; // ecx
  SIZE_T v17; // rdx
  PVOID v18; // rax
  PVOID v19; // r15
  int v20; // edx
  unsigned int v21; // ebx
  unsigned int v22; // [rsp+30h] [rbp-68h] BYREF
  int v23; // [rsp+34h] [rbp-64h]
  void *v24; // [rsp+38h] [rbp-60h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *a2;
  v24 = a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x4000uLL, 0x42706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v7 = v2[1];
  v23 = 0;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
  v8 = a1;
  v22 = 0x4000;
LABEL_18:
  if ( (int)OSReadRegValue(pszDest, v8, PoolWithTag, &v22) >= 0 )
  {
    v9 = v22;
    if ( v22 >= 8 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = (unsigned int *)*a2;
        v12 = (unsigned int *)&PoolWithTag[v10];
        v13 = v12[1];
        if ( v13 )
        {
          v17 = v13 + *v12;
          if ( (unsigned int)v17 > v7 )
          {
            v7 = v13 + *v12;
            v18 = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x74706341u);
            v19 = v18;
            if ( !v18 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              return 3221225626LL;
            }
            memmove(v18, *a2, v11[1]);
            ExFreePoolWithTag((PVOID)*a2, 0);
            *a2 = v19;
          }
          memmove((char *)*a2 + *v12, v12 + 2, v12[1]);
        }
        else if ( *v12 != v11[1] )
        {
          v7 = *v12;
          v14 = ExAllocatePoolWithTag(NonPagedPoolNx, *v12, 0x74706341u);
          v15 = v14;
          if ( !v14 )
          {
            v21 = -1073741670;
            goto LABEL_23;
          }
          v16 = v11[1];
          if ( *v12 < v16 )
            v16 = *v12;
          memmove(v14, *a2, v16);
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v15;
        }
        v10 += v12[1] + 8;
        if ( v10 >= v9 )
        {
          RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", ++v23);
          v8 = v24;
          v22 = 0x4000;
          goto LABEL_18;
        }
      }
    }
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      22,
      35,
      (__int64)&WPP_b2e6fc51b6d13b437f43e726d6037dce_Traceguids,
      v22);
    v21 = -1073741823;
LABEL_23:
    ExFreePoolWithTag(PoolWithTag, 0);
    return v21;
  }
  else
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
}
