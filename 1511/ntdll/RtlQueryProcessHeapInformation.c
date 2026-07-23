/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x180094380
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x18001C134 (RtlStringCbCopyW.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x180051130 (RtlpEnumProcessHeaps.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006CDEC (RtlpCommitQueryDebugInfo.c)
 *     RtlQueryHeapInformation @ 0x18007FDC0 (RtlQueryHeapInformation.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlStringCbPrintfW @ 0x1800C8280 (RtlStringCbPrintfW.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  char *DebugInfo; // rax
  char *v3; // r14
  unsigned int v4; // r13d
  int v6; // ebx
  __int64 v7; // rdi
  char *v8; // rax
  char *v9; // r15
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // rdx
  size_t v17; // rcx
  unsigned int i; // r15d
  wchar_t *v19; // rcx
  unsigned int j; // ecx
  int v21; // ecx
  _QWORD v22[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD HeapInformation[2]; // [rsp+70h] [rbp-88h] BYREF
  int v24; // [rsp+80h] [rbp-78h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-70h]
  _QWORD *v26; // [rsp+90h] [rbp-68h]
  unsigned int Size; // [rsp+100h] [rbp+8h]
  size_t Sizea; // [rsp+100h] [rbp+8h]
  __int64 v29; // [rsp+108h] [rbp+10h]

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  DebugInfo = RtlpCommitQueryDebugInfo((_QWORD *)a1, 8u);
  v3 = DebugInfo;
  v4 = 0;
  if ( !DebugInfo )
    return 3221225495LL;
  *(_DWORD *)DebugInfo = 0;
  *(_QWORD *)(a1 + 112) = DebugInfo;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  v6 = RtlpEnumProcessHeaps(
         (PRTL_DYNAMIC_HASH_TABLE)RtlpQueryProcessEnumHeapsRoutine,
         (_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *)a1,
         2);
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v7 = RtlpGlobalTagHeap;
    if ( RtlpGlobalTagHeap && *(_QWORD *)(RtlpGlobalTagHeap + 232) )
    {
      v8 = RtlpCommitQueryDebugInfo((_QWORD *)a1, 0x58u);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x58uLL);
        *(_QWORD *)v9 = v7;
        *((_DWORD *)v9 + 2) = *(_DWORD *)(v7 + 112);
        *((_WORD *)v9 + 6) = 16;
        ++*(_DWORD *)v3;
        goto LABEL_10;
      }
LABEL_8:
      v6 = -1073741801;
      goto LABEL_33;
    }
LABEL_10:
    while ( v4 < *(_DWORD *)v3 )
    {
      v10 = 88LL * v4;
      v11 = *(_QWORD *)(a1 + 128);
      if ( !v11 || v11 == *(_QWORD *)&v3[v10 + 8] )
      {
        v29 = *(_QWORD *)&v3[v10 + 8];
        v12 = *(unsigned __int16 *)(v29 + 224);
        *(_DWORD *)&v3[v10 + 40] = v12;
        v13 = 72 * v12;
        Size = 72 * v12;
        if ( *(_QWORD *)(v29 + 328) )
        {
          *(_DWORD *)&v3[v10 + 40] = v12 + 129;
          v13 += 9288;
          Size = v13;
        }
        v14 = RtlpCommitQueryDebugInfo((_QWORD *)a1, v13);
        v15 = v14;
        if ( !v14 )
          goto LABEL_8;
        memset(v14, 0, Size);
        *(_QWORD *)&v3[v10 + 80] = v15;
        v16 = v29;
        v17 = *(_QWORD *)(v29 + 328);
        Sizea = v17;
        if ( v17 )
        {
          *(_DWORD *)&v3[v10 + 48] = 129;
          *(_DWORD *)&v3[v10 + 52] = 16;
          for ( i = 0; i <= 0x80; ++i )
          {
            *(_DWORD *)v15 = *(_DWORD *)v17;
            *((_DWORD *)v15 + 1) = *(_DWORD *)(v17 + 4);
            *((_QWORD *)v15 + 1) = 16LL * *(_QWORD *)(v17 + 8);
            *((_WORD *)v15 + 8) = i | 0x8000;
            v19 = (wchar_t *)(v15 + 20);
            if ( i >= 0x80 )
              RtlStringCbCopyW(v19, 0x30uLL, (__int64)L"VirtualAlloc");
            else
              RtlStringCbPrintfW(v19);
            v15 += 72;
            v17 = Sizea + 16;
            Sizea += 16LL;
          }
          v16 = v29;
        }
        memmove(v15, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
        for ( j = 0; j < *(unsigned __int16 *)(v29 + 224); ++j )
        {
          *((_QWORD *)v15 + 1) *= 16LL;
          v15 += 72;
        }
      }
      ++v4;
    }
  }
  if ( v6 >= 0 )
  {
    v21 = *(_DWORD *)(a1 + 64);
    if ( (v21 & 0x210) != 0 )
    {
      HeapInformation[0] = -1LL;
      HeapInformation[1] = *(_QWORD *)(a1 + 128);
      v25 = RtlpWalkCallbackRoutine;
      v26 = v22;
      v24 = (v21 & 0x10) != 0 ? 5 : 3;
      memset(v22, 0, sizeof(v22));
      v22[0] = a1;
      v22[1] = v3;
      LODWORD(v22[2]) = 0;
      v22[3] = v3 + 8;
      v6 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
    }
  }
LABEL_33:
  RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return (unsigned int)v6;
}
