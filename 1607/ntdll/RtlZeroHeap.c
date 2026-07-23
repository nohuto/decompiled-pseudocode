/*
 * XREFs of RtlZeroHeap @ 0x1800EBD10
 * Callers:
 *     RtlDebugZeroHeap @ 0x1800FB554 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x1800289DC (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindEntry @ 0x18004BE78 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18004C2E4 (RtlpHeapAddListEntry.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugZeroHeap @ 0x1800FB554 (RtlDebugZeroHeap.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rcx
  char *v7; // rax
  char *v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r12
  __int64 **v20; // r14
  __int64 *Entry; // r8
  int v22; // ecx
  unsigned __int16 v23; // ax
  __int64 **v24; // r14
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  _DWORD *v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  char v33; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+40h] [rbp-98h]
  char **v35; // [rsp+58h] [rbp-80h]
  unsigned __int64 v36; // [rsp+68h] [rbp-70h]
  int v37; // [rsp+90h] [rbp-48h]
  char *v38; // [rsp+F8h] [rbp+20h]

  v3 = 0LL;
  v33 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v33 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  v35 = (char **)v7;
  if ( v7 != v6 )
  {
    v8 = v7 - 24;
    v38 = v8;
    v9 = *((_QWORD *)v8 + 8);
    v34 = v9;
    while ( 1 )
    {
      if ( v9 >= *((_QWORD *)v8 + 9) )
      {
        v7 = *v35;
        v6 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( v3 )
      {
        if ( !*((_DWORD *)HeapHandle + 31) )
          goto LABEL_17;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_DWORD *)(v9 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
          RtlpAnalyzeHeapFailure(HeapHandle, v9);
      }
LABEL_17:
      v3 = (_BYTE *)v9;
      v10 = *(_BYTE *)(v9 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_70;
      v11 = v9;
      v36 = v9;
      if ( (v10 & 8) == 0 )
      {
        v29 = 16 * *(unsigned __int16 *)(v9 + 8) - 32LL;
        v30 = (_DWORD *)(v9 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v31 = v29 >> 2;
          if ( v31 )
          {
            if ( ((unsigned __int8)v30 & 4) != 0 )
            {
              *v30 = -17891602;
              if ( --v31 )
              {
                v30 = (_DWORD *)(v9 + 36);
                goto LABEL_62;
              }
            }
            else
            {
LABEL_62:
              memset64(v30, 0xFEEEFEEEFEEEFEEEuLL, v31 >> 1);
              if ( (v31 & 1) != 0 )
                v30[v31 - 1] = -17891602;
            }
          }
        }
        else
        {
          v32 = v29 >> 2;
          if ( v32 )
          {
            if ( ((unsigned __int8)v30 & 4) != 0 )
            {
              *v30 = 0;
              if ( !--v32 )
                goto LABEL_70;
              v30 = (_DWORD *)(v9 + 36);
            }
            memset(v30, 0, 8 * (v32 >> 1));
            if ( (v32 & 1) != 0 )
              v30[v32 - 1] = 0;
          }
        }
LABEL_70:
        if ( *(_BYTE *)(v9 + 15) == 3 )
          v9 += *(_QWORD *)(v9 + 56) + 64LL;
        else
          v9 += 16LL * *(unsigned __int16 *)(v9 + 8);
        v34 = v9;
        goto LABEL_56;
      }
      v12 = *(_QWORD *)(v9 + 16);
      v13 = *(__int64 **)(v9 + 24);
      v14 = *v13;
      v15 = *(_QWORD *)(v12 + 8);
      if ( *v13 == v15 && v14 == v9 + 16 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v9 + 8);
        v16 = *((_QWORD *)HeapHandle + 39);
        if ( v16 )
        {
          v17 = *(unsigned __int16 *)(v9 + 8);
          while ( 1 )
          {
            v18 = *(unsigned int *)(v16 + 8);
            if ( v17 < v18 )
              break;
            if ( !*(_QWORD *)v16 )
            {
              LODWORD(v17) = v18 - 1;
              break;
            }
            v16 = *(_QWORD *)v16;
          }
          RtlpHeapRemoveListEntry((__int64)HeapHandle, v16, 1, (__int64 *)(v9 + 16), v17, *(unsigned __int16 *)(v9 + 8));
        }
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( (*(_BYTE *)(v9 + 10) & 8) == 0 || RtlpCommitBlock(HeapHandle, v9) )
        {
          v19 = *(unsigned __int16 *)(v9 + 8);
          *(_BYTE *)(v9 + 10) = 0;
          *(_BYTE *)(v9 + 15) = 0;
          v20 = (__int64 **)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            Entry = RtlpFindEntry((__int64)HeapHandle, (unsigned int)v19);
          else
            Entry = *v20;
          while ( v20 != (__int64 **)Entry )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v22 = *((_DWORD *)Entry - 2);
              LOWORD(v37) = v22;
              if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v37 = v22 ^ *((_DWORD *)HeapHandle + 34);
              v23 = v37;
              v9 = v34;
              v11 = v36;
            }
            else
            {
              v23 = *((_WORD *)Entry - 4);
            }
            if ( v19 <= v23 )
              break;
            Entry = (__int64 *)*Entry;
          }
          v24 = (__int64 **)(v11 + 16);
          v25 = (__int64 *)Entry[1];
          if ( (__int64 *)*v25 == Entry )
          {
            *v24 = Entry;
            *(_QWORD *)(v11 + 24) = v25;
            *v25 = (__int64)v24;
            Entry[1] = (__int64)v24;
          }
          else
          {
            RtlpLogHeapFailure(12, 0LL, (__int64)Entry, 0LL, *v25, 0LL);
          }
          *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v11 + 8);
          v26 = *((_QWORD *)HeapHandle + 39);
          if ( v26 )
          {
            v27 = *(unsigned __int16 *)(v11 + 8);
            while ( 1 )
            {
              v28 = *(unsigned int *)(v26 + 8);
              if ( v27 < v28 )
                break;
              if ( !*(_QWORD *)v26 )
              {
                LODWORD(v27) = v28 - 1;
                break;
              }
              v26 = *(_QWORD *)v26;
            }
            RtlpHeapAddListEntry((__int64)HeapHandle, v26, 1, v11 + 16, v27, *(unsigned __int16 *)(v11 + 8));
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
            *(_DWORD *)(v11 + 8) ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          RtlpDeCommitFreeBlock((__int64)HeapHandle, v9, *(unsigned __int16 *)(v9 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, (__int64)HeapHandle, v9 + 16, v15, v14, 0LL);
      }
      v3 = 0LL;
LABEL_56:
      v8 = v38;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v33 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return 0;
}
