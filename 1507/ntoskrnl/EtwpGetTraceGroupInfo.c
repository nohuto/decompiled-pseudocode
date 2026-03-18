/*
 * XREFs of EtwpGetTraceGroupInfo @ 0x14054EAA8
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 */

__int64 __fastcall EtwpGetTraceGroupInfo(_DWORD *a1, _DWORD *a2, ULONG *a3)
{
  ULONG v3; // r15d
  unsigned int v4; // esi
  unsigned int v7; // ebp
  int v8; // r14d
  __int64 *GuidEntryByGuid; // r13
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _OWORD *v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // r12
  __int64 *v16; // r11
  __int64 v17; // r9
  ULONG v18; // ebx
  int *v19; // r12
  _QWORD *v20; // rdi
  NTSTATUS v21; // eax
  __int64 *v22; // r9
  _OWORD *v23; // r10
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG pulResult; // [rsp+78h] [rbp+10h] BYREF
  ULONG *v30; // [rsp+80h] [rbp+18h]

  v30 = a3;
  v3 = *a3;
  v4 = 0;
  v7 = 0;
  v8 = 0;
  GuidEntryByGuid = (__int64 *)EtwpFindGuidEntryByGuid(a1, 2);
  if ( !GuidEntryByGuid )
    return 3221226133LL;
  memset(a2, 0, *a3);
  KeWaitForSingleObject(&EtwpNotificationMutex, Executive, 0, 0, 0LL);
  v11 = 4;
  v12 = 8LL;
  if ( v3 >= 4 )
    *a2 = 8;
  v13 = a2 + 1;
  v14 = GuidEntryByGuid + 14;
  do
  {
    v11 += 32;
    if ( v11 <= v3 )
    {
      *v13 = *v14;
      v13[1] = v14[1];
      v13 += 2;
    }
    v14 += 2;
    --v12;
  }
  while ( v12 );
  v15 = v11;
  v16 = GuidEntryByGuid + 5;
  v17 = GuidEntryByGuid[5];
  v18 = v11 + 4;
  v19 = (_DWORD *)((char *)a2 + v15);
  v20 = (_QWORD *)((char *)a2 + v18);
  pulResult = v18;
  while ( (__int64 *)v17 != v16 )
  {
    v21 = RtlULongAdd(v18, 0x10u, &pulResult);
    v18 = pulResult;
    if ( v21 < 0 )
    {
      v4 = -2147483643;
      goto LABEL_31;
    }
    ++v7;
    if ( pulResult <= v3 )
      *v23 = *(_OWORD *)(v22[2] + 24);
    v17 = *v22;
  }
  if ( v18 > v3 )
  {
    v4 = -1073741789;
  }
  else
  {
    if ( v7 == 1 )
    {
      v8 = 1;
    }
    else if ( v7 > 1 )
    {
      qsort(v20, v7, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
      v24 = v20 + 2;
      v8 = 1;
      v25 = v7 - 1;
      do
      {
        if ( *v24 == *v20 && v24[1] == v20[1] )
        {
          v24 += 2;
        }
        else
        {
          v20 += 2;
          if ( v20 != v24 )
            *(_OWORD *)v20 = *(_OWORD *)v24;
          v24 += 2;
          ++v8;
        }
        --v25;
      }
      while ( v25 );
    }
    *v19 = v8;
  }
LABEL_31:
  KeReleaseMutex(&EtwpNotificationMutex, 0);
  EtwpUnreferenceGuidEntry(GuidEntryByGuid, v26, v27, v28);
  *v30 = v18;
  return v4;
}
