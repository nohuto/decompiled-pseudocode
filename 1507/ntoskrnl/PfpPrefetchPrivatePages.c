/*
 * XREFs of PfpPrefetchPrivatePages @ 0x14055C5B0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140013C30 (MmQueryMemoryListInformation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042DF28 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042E01C (PfpGetPageListCount.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     MmPrefetchVirtualMemory @ 0x1404FB458 (MmPrefetchVirtualMemory.c)
 *     PfpSourceGetPrefetchSupport @ 0x14055C83C (PfpSourceGetPrefetchSupport.c)
 *     PfpSourceBuildVaArray @ 0x14055C9AC (PfpSourceBuildVaArray.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 *v2; // r15
  int v3; // r12d
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  char *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  int PrefetchSupport; // eax
  __int64 v14; // r8
  __int64 *v15; // r13
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // r8
  unsigned int v21; // ebx
  __int64 result; // rax
  unsigned int v23; // eax
  int v24; // [rsp+20h] [rbp-48h] BYREF
  char *v25; // [rsp+28h] [rbp-40h]
  __int64 v26; // [rsp+30h] [rbp-38h]
  __int64 v27; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h]
  __int64 v29; // [rsp+48h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-18h]
  int v32; // [rsp+B8h] [rbp+50h]
  int v33; // [rsp+C0h] [rbp+58h]
  unsigned int v34; // [rsp+C8h] [rbp+60h]

  v1 = *a1;
  v27 = 0LL;
  v2 = a1;
  P = 0LL;
  v3 = 0;
  v32 = 0;
  v34 = *(unsigned __int16 *)(*a1 + 30);
  v4 = (8 * (v34 & 7)) | *(_DWORD *)(*a1 + 28) & 7;
  v26 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  if ( (v5 & 0x10) == 0 )
    v4 |= 0x100u;
  if ( (v5 & 8) != 0 )
    v4 |= 0x200u;
  if ( (v5 & 0x20) != 0 )
    v4 |= 0x800u;
  v6 = 0LL;
  v33 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_34:
    v21 = 0;
    goto LABEL_35;
  }
  while ( 1 )
  {
    v7 = 5 * v6;
    v8 = 0LL;
    v9 = *(_QWORD *)(v1 + 56);
    v29 = 0LL;
    Handle = 0LL;
    v10 = v9 + 8 * v7;
    v11 = *(_QWORD *)(*v2 + 72);
    if ( v11 && *(_DWORD *)(v11 + 4) )
      goto LABEL_38;
    if ( (*(_DWORD *)(*v2 + 80) & 4) != 0 )
    {
      v12 = v2[5];
      if ( *(_DWORD *)(v12 + 72) || (*(_DWORD *)(v12 + 68) & 4) != 0 )
        goto LABEL_38;
    }
    if ( (int)PfpSourceBuildVaArray(v10, &v27) >= 0 )
    {
      PrefetchSupport = PfpSourceGetPrefetchSupport(v10, &v29);
      v8 = (char *)Handle;
      if ( PrefetchSupport >= 0 )
      {
        if ( (*(_DWORD *)(v1 + 80) & 4) != 0 )
        {
          v15 = v2 + 6;
          v16 = v27;
          v25 = (char *)P;
          MmQueryMemoryListInformation((_OWORD *)v2 + 3, 0xB0u, v14, &v24);
          if ( v16 )
          {
            while ( 1 )
            {
              v17 = *(_QWORD *)(*v2 + 72);
              if ( v17 )
              {
                if ( *(_DWORD *)(v17 + 4) )
                  break;
              }
              if ( (*(_DWORD *)(*v2 + 80) & 4) != 0 )
              {
                v18 = v2[5];
                if ( *(_DWORD *)(v18 + 72) || (*(_DWORD *)(v18 + 68) & 4) != 0 )
                  break;
              }
              if ( (unsigned __int64)(*v15 + v15[1] + PfpGetPageListCount((__int64)(v15 + 5), 0, v34)) < 0x80 )
                break;
              v19 = v16;
              if ( v16 > 0x10 )
                v19 = 16;
              if ( MmPrefetchVirtualMemory(v8, v19, (__int64)v25, v4) >= 0 )
                *(_DWORD *)(v1 + 104) += v19;
              PfpUpdateRepurposedByPrefetch(v15, v19, v20);
              v25 += 16 * v19;
              v16 -= v19;
              v2 = a1;
              if ( !v16 )
                goto LABEL_28;
            }
LABEL_38:
            v3 = 1;
            v32 = 1;
            goto LABEL_30;
          }
LABEL_28:
          v3 = v32;
        }
        else
        {
          v23 = v27;
          *(_DWORD *)(v1 + 104) += v27;
          MmPrefetchVirtualMemory(v8, v23, (__int64)P, v4);
        }
        ++*(_DWORD *)(v1 + 92);
      }
    }
LABEL_30:
    if ( v8 )
      NtClose(v8);
    if ( v3 )
      break;
    v6 = (unsigned int)(v33 + 1);
    v33 = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_34;
  }
  v21 = -1073741248;
LABEL_35:
  if ( P )
    ExFreePoolWithTag(P, 0);
  result = v21;
  *(_DWORD *)(*v2 + 120) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v26;
  return result;
}
