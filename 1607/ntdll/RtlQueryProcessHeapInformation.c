/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x180095B40
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlStringCbCopyW @ 0x180040FC4 (RtlStringCbCopyW.c)
 *     RtlpEnumProcessHeaps @ 0x18004E4BC (RtlpEnumProcessHeaps.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006DF7C (RtlpCommitQueryDebugInfo.c)
 *     RtlQueryHeapInformation @ 0x180081930 (RtlQueryHeapInformation.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlStringCbPrintfW @ 0x1800CF660 (RtlStringCbPrintfW.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  char *DebugInfo; // rax
  char *v3; // r14
  unsigned int v4; // r13d
  int v5; // ebx
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rax
  char *v15; // r15
  __int64 v16; // rdx
  size_t v17; // rcx
  unsigned int i; // r15d
  unsigned int j; // ecx
  wchar_t *v20; // rcx
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
  if ( DebugInfo )
  {
    *(_DWORD *)DebugInfo = 0;
    *(_QWORD *)(a1 + 112) = DebugInfo;
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    v5 = RtlpEnumProcessHeaps((__int64)RtlpQueryProcessEnumHeapsRoutine, a1, 2);
    if ( v5 >= 0 )
    {
      if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
      {
        v7 = RtlpGlobalTagHeap;
        if ( RtlpGlobalTagHeap && *(_QWORD *)(RtlpGlobalTagHeap + 232) )
        {
          v14 = RtlpCommitQueryDebugInfo((_QWORD *)a1, 0x58u);
          v15 = v14;
          if ( v14 )
          {
            memset(v14, 0, 0x58uLL);
            *(_QWORD *)v15 = v7;
            *((_DWORD *)v15 + 2) = *(_DWORD *)(v7 + 112);
            *((_WORD *)v15 + 6) = 16;
            ++*(_DWORD *)v3;
            goto LABEL_10;
          }
LABEL_16:
          v5 = -1073741801;
          goto LABEL_32;
        }
LABEL_10:
        while ( v4 < *(_DWORD *)v3 )
        {
          v8 = 88LL * v4;
          v9 = *(_QWORD *)(a1 + 128);
          if ( !v9 || v9 == *(_QWORD *)&v3[v8 + 8] )
          {
            v29 = *(_QWORD *)&v3[v8 + 8];
            v10 = *(unsigned __int16 *)(v29 + 224);
            *(_DWORD *)&v3[v8 + 40] = v10;
            v11 = 72 * v10;
            Size = 72 * v10;
            if ( *(_QWORD *)(v29 + 328) )
            {
              *(_DWORD *)&v3[v8 + 40] = v10 + 129;
              v11 += 9288;
              Size = v11;
            }
            v12 = RtlpCommitQueryDebugInfo((_QWORD *)a1, v11);
            v13 = v12;
            if ( !v12 )
              goto LABEL_16;
            memset(v12, 0, Size);
            *(_QWORD *)&v3[v8 + 80] = v13;
            v16 = v29;
            v17 = *(_QWORD *)(v29 + 328);
            Sizea = v17;
            if ( v17 )
            {
              *(_DWORD *)&v3[v8 + 48] = 129;
              *(_DWORD *)&v3[v8 + 52] = 16;
              for ( i = 0; i <= 0x80; ++i )
              {
                *(_DWORD *)v13 = *(_DWORD *)v17;
                *((_DWORD *)v13 + 1) = *(_DWORD *)(v17 + 4);
                *((_QWORD *)v13 + 1) = 16LL * *(_QWORD *)(v17 + 8);
                *((_WORD *)v13 + 8) = i | 0x8000;
                v20 = (wchar_t *)(v13 + 20);
                if ( i >= 0x80 )
                  RtlStringCbCopyW(v20, 0x30uLL, (__int64)L"VirtualAlloc");
                else
                  RtlStringCbPrintfW(v20);
                v13 += 72;
                v17 = Sizea + 16;
                Sizea += 16LL;
              }
              v16 = v29;
            }
            memmove(v13, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
            for ( j = 0; j < *(unsigned __int16 *)(v29 + 224); ++j )
            {
              *((_QWORD *)v13 + 1) *= 16LL;
              v13 += 72;
            }
          }
          ++v4;
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    if ( v5 >= 0 )
    {
      v6 = *(_DWORD *)(a1 + 64);
      if ( (v6 & 0x210) != 0 )
      {
        HeapInformation[0] = -1LL;
        HeapInformation[1] = *(_QWORD *)(a1 + 128);
        v25 = RtlpWalkCallbackRoutine;
        v26 = v22;
        v24 = (v6 & 0x10) != 0 ? 5 : 3;
        memset(v22, 0, sizeof(v22));
        v22[0] = a1;
        v22[1] = v3;
        LODWORD(v22[2]) = 0;
        v22[3] = v3 + 8;
        v5 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
      }
    }
LABEL_32:
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
    return (unsigned int)v5;
  }
  return 3221225495LL;
}
