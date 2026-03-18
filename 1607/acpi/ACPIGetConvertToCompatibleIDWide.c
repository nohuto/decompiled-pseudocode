/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x1C00236A4
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C00034A0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C0023648 (ACPIGetConvertToCompatibleID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000397C (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C00039F4 (ACPIAnsiStringToWideHelper.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0023AD0 (ACPIGetConvertToPnpIDWide.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004EFDC (ACPIGetConvertToStringWideWithPrepend.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        char **a5,
        unsigned int *a6)
{
  int v9; // r12d
  int v10; // ebx
  __int64 v11; // rax
  __int64 v13; // rdi
  PVOID *PoolWithTag; // rax
  PVOID *v15; // rsi
  int *v16; // rax
  int *v17; // r15
  int v18; // eax
  unsigned int v19; // r14d
  char *v20; // rax
  char *v21; // r13
  unsigned int *v22; // rbp
  const void **v23; // r12
  char *v24; // r15
  unsigned __int64 v25; // rax
  bool v26; // zf
  PVOID *v27; // r14
  const char *v28; // rdi
  __int64 v29; // rbx
  unsigned int v30; // ebx
  unsigned int v31; // ebp
  char *v32; // rax
  char *v33; // rsi
  __int64 v34; // r12
  unsigned int *v35; // r13
  int v36; // eax
  int v37; // eax
  unsigned int *v38; // [rsp+30h] [rbp-58h]
  size_t Size; // [rsp+38h] [rbp-50h]
  int *Sizea; // [rsp+38h] [rbp-50h]
  int *v41; // [rsp+40h] [rbp-48h]
  int v42; // [rsp+90h] [rbp+8h]
  unsigned int v43; // [rsp+98h] [rbp+10h]

  v42 = a1;
  v38 = 0LL;
  v43 = 0;
  v9 = a1;
  v10 = a2;
  if ( (a4 & 0x4000000) != 0 || (v11 = *(_QWORD *)(a1 + 8), (v11 & 0x1000000000LL) == 0) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) )
    {
      if ( *(unsigned __int16 *)(a3 + 2) <= 2u )
      {
        v13 = 1LL;
        goto LABEL_8;
      }
      if ( *(_WORD *)(a3 + 2) == 4 )
      {
        v38 = *(unsigned int **)(a3 + 32);
        v13 = *v38;
LABEL_8:
        PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v13, 0x4D706341u);
        v15 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 8LL * (unsigned int)v13);
          v16 = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)v13, 0x4D706341u);
          v41 = v16;
          v17 = v16;
          if ( v16 )
          {
            memset(v16, 0, 4LL * (unsigned int)v13);
            if ( *(_WORD *)(a3 + 2) == 1 )
            {
              v18 = ACPIGetConvertToPnpIDWide(v9, a2, a3, a4, (__int64)v15, (__int64)v17);
            }
            else
            {
              if ( *(_WORD *)(a3 + 2) != 2 )
              {
                if ( *(_WORD *)(a3 + 2) == 4 )
                {
                  v34 = 0LL;
                  if ( (_DWORD)v13 )
                  {
                    v35 = v38 + 2;
                    Sizea = v17;
                    while ( 1 )
                    {
                      if ( *((_WORD *)v35 + 1) == 1 )
                      {
                        v36 = ACPIGetConvertToPnpIDWide(
                                v42,
                                a2,
                                (_DWORD)v35,
                                a4,
                                (__int64)&v15[v34],
                                (__int64)&v17[v34]);
                      }
                      else
                      {
                        if ( *((_WORD *)v35 + 1) != 2 )
                          KeBugCheckEx(0xA3u, 1uLL, 0x60395uLL, 0LL, 0LL);
                        v36 = ACPIGetConvertToStringWideWithPrepend(
                                (int)v17 + 4 * (int)v34,
                                a2,
                                (_DWORD)v35,
                                a4,
                                (__int64)&v15[v34],
                                (__int64)&v17[v34]);
                      }
                      v10 = v36;
                      if ( v36 < 0 )
                        break;
                      v37 = *Sizea;
                      if ( *Sizea == 1 )
                      {
                        v37 = 0;
                        *Sizea = 0;
                      }
                      v43 += v37;
                      v34 = (unsigned int)(v34 + 1);
                      ++Sizea;
                      v35 += 10;
                      if ( (unsigned int)v34 >= (unsigned int)v13 )
                        goto LABEL_55;
                    }
                  }
                  else
                  {
LABEL_55:
                    if ( v10 >= 0 )
                      goto LABEL_14;
                  }
                  v13 = (unsigned int)v34;
                }
LABEL_13:
                if ( v10 < 0 )
                {
LABEL_24:
                  if ( (_DWORD)v13 )
                  {
                    v27 = v15;
                    do
                    {
                      if ( *v27 )
                        ExFreePoolWithTag(*v27, 0);
                      ++v27;
                      --v13;
                    }
                    while ( v13 );
                  }
                  ExFreePoolWithTag(v17, 0);
                  ExFreePoolWithTag(v15, 0);
                  return (unsigned int)v10;
                }
LABEL_14:
                if ( v43 <= 2 )
                {
                  v10 = -1072431089;
                }
                else
                {
                  v19 = v43 + 2;
                  v20 = (char *)ExAllocatePoolWithTag(
                                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                                  v43 + 2,
                                  0x53706341u);
                  v21 = v20;
                  if ( v20 )
                  {
                    memset(v20, 0, v19);
                    if ( (_DWORD)v13 )
                    {
                      v22 = (unsigned int *)v17;
                      Size = (unsigned int)v13;
                      v23 = (const void **)v15;
                      v24 = v21;
                      do
                      {
                        if ( *v23 )
                          memmove(v24, *v23, *v22);
                        ++v23;
                        v25 = (unsigned __int64)*v22++ >> 1;
                        v26 = Size-- == 1;
                        v24 += 2 * v25;
                      }
                      while ( !v26 );
                      v17 = v41;
                    }
                    *a5 = v21;
                    if ( a6 )
                      *a6 = v19;
                  }
                  else
                  {
                    v10 = -1073741670;
                  }
                }
                goto LABEL_24;
              }
              v18 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v15, (__int64)v17);
            }
            v10 = v18;
            v43 = *v17;
            goto LABEL_13;
          }
          ExFreePoolWithTag(v15, 0);
        }
        return 3221225626LL;
      }
    }
    return 3222536207LL;
  }
  if ( v11 >= 0 )
    v28 = (const char *)&AcpiProcessorCompatId;
  else
    v28 = *(const char **)(a1 + 184);
  v29 = -1LL;
  do
    ++v29;
  while ( v28[v29] );
  v30 = v29 + 2;
  v31 = 2 * v30;
  v32 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  2 * v30,
                  0x53706341u);
  v33 = v32;
  if ( !v32 )
    return 3221225626LL;
  memset(v32, 0, v31);
  RtlStringCchPrintfA(v33, v30, "%s", v28);
  ACPIAnsiStringToWideHelper(v33, v31);
  *a5 = v33;
  if ( a6 )
    *a6 = 2 * v30;
  return 0LL;
}
