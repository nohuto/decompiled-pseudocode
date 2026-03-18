/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x1C001DFC8
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C0003910 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C001DF6C (ACPIGetConvertToCompatibleID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DE8 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C0004184 (ACPIAnsiStringToWideHelper.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C001E3F4 (ACPIGetConvertToPnpIDWide.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C003C06C (ACPIGetConvertToStringWideWithPrepend.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 *a1,
        int a2,
        __int64 a3,
        int a4,
        char **a5,
        unsigned int *a6)
{
  int v9; // r12d
  int v10; // ebx
  __int64 v12; // rdi
  PVOID *PoolWithTag; // rax
  PVOID *v14; // rsi
  int *v15; // rax
  int *v16; // r15
  int v17; // eax
  unsigned int v18; // r14d
  char *v19; // rax
  char *v20; // r13
  unsigned int *v21; // rbp
  const void **v22; // r12
  char *v23; // r15
  unsigned __int64 v24; // rax
  bool v25; // zf
  PVOID *v26; // r14
  const char *v27; // rdi
  __int64 v28; // rbx
  unsigned int v29; // ebx
  unsigned int v30; // ebp
  char *v31; // rax
  char *v32; // rsi
  __int64 v33; // r12
  unsigned int *v34; // r13
  int v35; // eax
  int v36; // eax
  unsigned int *v37; // [rsp+30h] [rbp-58h]
  size_t Size; // [rsp+38h] [rbp-50h]
  int *Sizea; // [rsp+38h] [rbp-50h]
  int *v40; // [rsp+40h] [rbp-48h]
  int v41; // [rsp+90h] [rbp+8h]
  unsigned int v42; // [rsp+98h] [rbp+10h]

  v41 = (int)a1;
  v37 = 0LL;
  v42 = 0;
  v9 = (int)a1;
  v10 = a2;
  if ( (a4 & 0x4000000) != 0 || (*a1 & 0x1000000000LL) == 0 )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) )
    {
      if ( *(unsigned __int16 *)(a3 + 2) <= 2u )
      {
        v12 = 1LL;
        goto LABEL_8;
      }
      if ( *(_WORD *)(a3 + 2) == 4 )
      {
        v37 = *(unsigned int **)(a3 + 32);
        v12 = *v37;
LABEL_8:
        PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v12, 0x4D706341u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 8LL * (unsigned int)v12);
          v15 = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)v12, 0x4D706341u);
          v40 = v15;
          v16 = v15;
          if ( v15 )
          {
            memset(v15, 0, 4LL * (unsigned int)v12);
            if ( *(_WORD *)(a3 + 2) == 1 )
            {
              v17 = ACPIGetConvertToPnpIDWide(v9, a2, a3, a4, (__int64)v14, (__int64)v16);
            }
            else
            {
              if ( *(_WORD *)(a3 + 2) != 2 )
              {
                if ( *(_WORD *)(a3 + 2) == 4 )
                {
                  v33 = 0LL;
                  if ( (_DWORD)v12 )
                  {
                    v34 = v37 + 2;
                    Sizea = v16;
                    while ( 1 )
                    {
                      if ( *((_WORD *)v34 + 1) == 1 )
                      {
                        v35 = ACPIGetConvertToPnpIDWide(
                                v41,
                                a2,
                                (_DWORD)v34,
                                a4,
                                (__int64)&v14[v33],
                                (__int64)&v16[v33]);
                      }
                      else
                      {
                        if ( *((_WORD *)v34 + 1) != 2 )
                          KeBugCheckEx(0xA3u, 1uLL, 0x60395uLL, 0LL, 0LL);
                        v35 = ACPIGetConvertToStringWideWithPrepend(
                                (int)v16 + 4 * (int)v33,
                                a2,
                                (_DWORD)v34,
                                a4,
                                (__int64)&v14[v33],
                                (__int64)&v16[v33]);
                      }
                      v10 = v35;
                      if ( v35 < 0 )
                        break;
                      v36 = *Sizea;
                      if ( *Sizea == 1 )
                      {
                        v36 = 0;
                        *Sizea = 0;
                      }
                      v42 += v36;
                      v33 = (unsigned int)(v33 + 1);
                      ++Sizea;
                      v34 += 10;
                      if ( (unsigned int)v33 >= (unsigned int)v12 )
                        goto LABEL_55;
                    }
                  }
                  else
                  {
LABEL_55:
                    if ( v10 >= 0 )
                      goto LABEL_14;
                  }
                  v12 = (unsigned int)v33;
                }
LABEL_13:
                if ( v10 < 0 )
                {
LABEL_24:
                  if ( (_DWORD)v12 )
                  {
                    v26 = v14;
                    do
                    {
                      if ( *v26 )
                        ExFreePoolWithTag(*v26, 0);
                      ++v26;
                      --v12;
                    }
                    while ( v12 );
                  }
                  ExFreePoolWithTag(v16, 0);
                  ExFreePoolWithTag(v14, 0);
                  return (unsigned int)v10;
                }
LABEL_14:
                if ( v42 <= 2 )
                {
                  v10 = -1072431089;
                }
                else
                {
                  v18 = v42 + 2;
                  v19 = (char *)ExAllocatePoolWithTag(
                                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                                  v42 + 2,
                                  0x53706341u);
                  v20 = v19;
                  if ( v19 )
                  {
                    memset(v19, 0, v18);
                    if ( (_DWORD)v12 )
                    {
                      v21 = (unsigned int *)v16;
                      Size = (unsigned int)v12;
                      v22 = (const void **)v14;
                      v23 = v20;
                      do
                      {
                        if ( *v22 )
                          memmove(v23, *v22, *v21);
                        ++v22;
                        v24 = (unsigned __int64)*v21++ >> 1;
                        v25 = Size-- == 1;
                        v23 += 2 * v24;
                      }
                      while ( !v25 );
                      v16 = v40;
                    }
                    *a5 = v20;
                    if ( a6 )
                      *a6 = v18;
                  }
                  else
                  {
                    v10 = -1073741670;
                  }
                }
                goto LABEL_24;
              }
              v17 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v14, (__int64)v16);
            }
            v10 = v17;
            v42 = *v16;
            goto LABEL_13;
          }
          ExFreePoolWithTag(v14, 0);
        }
        return 3221225626LL;
      }
    }
    return 3222536207LL;
  }
  if ( *a1 >= 0 )
    v27 = (const char *)&AcpiProcessorCompatId;
  else
    v27 = (const char *)a1[22];
  v28 = -1LL;
  do
    ++v28;
  while ( v27[v28] );
  v29 = v28 + 2;
  v30 = 2 * v29;
  v31 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  2 * v29,
                  0x53706341u);
  v32 = v31;
  if ( !v31 )
    return 3221225626LL;
  memset(v31, 0, v30);
  RtlStringCchPrintfA(v32, v29, "%s", v27);
  ACPIAnsiStringToWideHelper(v32, v30);
  *a5 = v32;
  if ( a6 )
    *a6 = 2 * v29;
  return 0LL;
}
