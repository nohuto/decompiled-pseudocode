/*
 * XREFs of PfpPrefetchPrivatePages @ 0x14053392C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x14001FA24 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x14001FA60 (MmQueryMemoryListInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042A9D8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14042AAD8 (PfpGetPageListCount.c)
 *     MmPrefetchVirtualMemory @ 0x1404D760C (MmPrefetchVirtualMemory.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     PfpSourceGetPrefetchSupport @ 0x140533B78 (PfpSourceGetPrefetchSupport.c)
 *     PfpSourceBuildVaArray @ 0x140533CE8 (PfpSourceBuildVaArray.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // r8
  int v3; // r12d
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // r15
  int PrefetchSupport; // eax
  __int64 v11; // r8
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 result; // rax
  unsigned int v17; // eax
  int v18; // [rsp+20h] [rbp-48h] BYREF
  char *v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-18h]
  int v26; // [rsp+B8h] [rbp+50h]
  int v27; // [rsp+C0h] [rbp+58h]
  unsigned int v28; // [rsp+C8h] [rbp+60h]

  v1 = *a1;
  v21 = 0LL;
  v2 = a1;
  P = 0LL;
  v3 = 0;
  v26 = 0;
  v28 = *(unsigned __int16 *)(*a1 + 30LL);
  v4 = (8 * (v28 & 7)) | *(_DWORD *)(*a1 + 28LL) & 7;
  v20 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  if ( (v5 & 0x10) == 0 )
    v4 |= 0x100u;
  if ( (v5 & 8) != 0 )
    v4 |= 0x200u;
  if ( (v5 & 0x20) != 0 )
    v4 |= 0x800u;
  v6 = 0LL;
  v27 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_26:
    v15 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(v1 + 56);
    v8 = 0LL;
    v23 = 0LL;
    Handle = 0LL;
    v9 = v7 + 40 * v6;
    if ( PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
      v26 = 1;
    }
    else if ( (int)PfpSourceBuildVaArray(v9, &v21) >= 0 )
    {
      PrefetchSupport = PfpSourceGetPrefetchSupport(v9, &v23);
      v8 = (char *)Handle;
      if ( PrefetchSupport >= 0 )
      {
        if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
        {
          v17 = v21;
          *(_DWORD *)(v1 + 104) += v21;
          MmPrefetchVirtualMemory(v8, v17, (__int64)P, v4);
LABEL_21:
          ++*(_DWORD *)(v1 + 92);
          goto LABEL_22;
        }
        v12 = v21;
        v19 = (char *)P;
        MmQueryMemoryListInformation((_OWORD *)a1 + 3, 0xB0u, v11, &v18);
        if ( !v12 )
          goto LABEL_21;
        while ( !PfpCheckPrefetchAbort(a1)
             && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v28)) >= 0x80 )
        {
          v13 = v12;
          if ( v12 > 0x10 )
            v13 = 16;
          if ( MmPrefetchVirtualMemory(v8, v13, (__int64)v19, v4) >= 0 )
            *(_DWORD *)(v1 + 104) += v13;
          PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, v13, v14);
          v19 += 16 * v13;
          v12 -= v13;
          if ( !v12 )
          {
            LODWORD(v6) = v27;
            v3 = v26;
            goto LABEL_21;
          }
        }
        LODWORD(v6) = v27;
        v3 = 1;
        v26 = 1;
      }
    }
LABEL_22:
    if ( v8 )
      NtClose(v8);
    if ( v3 )
      break;
    v6 = (unsigned int)(v6 + 1);
    v27 = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_26;
    v2 = a1;
  }
  v15 = -1073741248;
LABEL_27:
  if ( P )
    ExFreePoolWithTag(P, 0);
  result = v15;
  *(_DWORD *)(*a1 + 120LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v20;
  return result;
}
