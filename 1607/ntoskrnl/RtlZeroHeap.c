/*
 * XREFs of RtlZeroHeap @ 0x140688980
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlpHeapAddListEntry @ 0x1400936E8 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1400941E8 (RtlpHeapRemoveListEntry.c)
 *     RtlpFindEntry @ 0x1400942D0 (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x14021360C (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 */

BOOLEAN __stdcall RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  char *v5; // rcx
  char *v6; // rax
  char *v7; // rax
  ULONG_PTR v8; // r15
  unsigned __int8 v9; // cl
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  __int64 *v12; // r12
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r12
  _QWORD **v18; // r14
  _QWORD *Entry; // r8
  int v20; // ecx
  unsigned __int16 v21; // ax
  _QWORD *v22; // r14
  __int64 *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  _DWORD *v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  char v31; // [rsp+30h] [rbp-98h]
  ULONG_PTR v32; // [rsp+40h] [rbp-88h]
  char **v33; // [rsp+58h] [rbp-70h]
  ULONG_PTR v34; // [rsp+68h] [rbp-60h]
  int v35; // [rsp+90h] [rbp-38h]
  char *v36; // [rsp+E8h] [rbp+20h]

  v3 = 0LL;
  v31 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)HeapHandle + 44), 1u);
    v31 = 1;
  }
  v5 = (char *)HeapHandle + 288;
  v6 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_6:
  v33 = (char **)v6;
  if ( v6 != v5 )
  {
    v7 = v6 - 24;
    v36 = v7;
    v8 = *((_QWORD *)v7 + 8);
    v32 = v8;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 9) )
      {
        v6 = *v33;
        v5 = (char *)HeapHandle + 288;
        goto LABEL_6;
      }
      if ( v3 )
      {
        if ( !*((_DWORD *)HeapHandle + 31) )
          goto LABEL_15;
        v3[11] = v3[8] ^ v3[9] ^ v3[10];
        *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
      }
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
        if ( *(_BYTE *)(v8 + 11) != (*(_BYTE *)(v8 + 8) ^ (unsigned __int8)(*(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10))) )
          RtlpAnalyzeHeapFailure((ULONG_PTR)HeapHandle, v8);
      }
LABEL_15:
      v3 = (_BYTE *)v8;
      v9 = *(_BYTE *)(v8 + 10);
      if ( (v9 & 1) != 0 )
        goto LABEL_65;
      v10 = v8;
      v34 = v8;
      if ( (v9 & 8) == 0 )
      {
        v27 = 16 * *(unsigned __int16 *)(v8 + 8) - 32LL;
        v28 = (_DWORD *)(v8 + 32);
        if ( ((v9 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v29 = v27 >> 2;
          if ( v29 )
          {
            if ( ((unsigned __int8)v28 & 4) != 0 )
            {
              *v28 = -17891602;
              if ( --v29 )
              {
                v28 = (_DWORD *)(v8 + 36);
                goto LABEL_57;
              }
            }
            else
            {
LABEL_57:
              memset64(v28, 0xFEEEFEEEFEEEFEEEuLL, v29 >> 1);
              if ( (v29 & 1) != 0 )
                v28[v29 - 1] = -17891602;
            }
          }
        }
        else
        {
          v30 = v27 >> 2;
          if ( v30 )
          {
            if ( ((unsigned __int8)v28 & 4) != 0 )
            {
              *v28 = 0;
              if ( !--v30 )
                goto LABEL_65;
              v28 = (_DWORD *)(v8 + 36);
            }
            memset(v28, 0, 8 * (v30 >> 1));
            if ( (v30 & 1) != 0 )
              v28[v30 - 1] = 0;
          }
        }
LABEL_65:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        v32 = v8;
        goto LABEL_51;
      }
      v11 = *(_QWORD *)(v8 + 16);
      v12 = *(__int64 **)(v8 + 24);
      v13 = *(_QWORD *)(v11 + 8);
      if ( *v12 == v13 && *v12 == v8 + 16 )
      {
        *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v8 + 8);
        v14 = *((_QWORD *)HeapHandle + 39);
        if ( v14 )
        {
          v15 = *(unsigned __int16 *)(v8 + 8);
          while ( 1 )
          {
            v16 = *(unsigned int *)(v14 + 8);
            if ( v15 < v16 )
              break;
            if ( !*(_QWORD *)v14 )
            {
              LODWORD(v15) = v16 - 1;
              break;
            }
            v14 = *(_QWORD *)v14;
          }
          RtlpHeapRemoveListEntry(
            (__int64)HeapHandle,
            v14,
            v16,
            (__int64 *)(v8 + 16),
            v15,
            *(unsigned __int16 *)(v8 + 8));
        }
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v17 = *(unsigned __int16 *)(v8 + 8);
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        v18 = (_QWORD **)((char *)HeapHandle + 336);
        if ( *((_QWORD *)HeapHandle + 39) )
          Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v17);
        else
          Entry = *v18;
        while ( v18 != Entry )
        {
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v20 = *((_DWORD *)Entry - 2);
            LOWORD(v35) = v20;
            if ( (*((_DWORD *)HeapHandle + 31) & v20) != 0 )
              v35 = v20 ^ *((_DWORD *)HeapHandle + 34);
            v21 = v35;
            v8 = v32;
            v10 = v34;
          }
          else
          {
            v21 = *((_WORD *)Entry - 4);
          }
          if ( v17 <= v21 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        v22 = (_QWORD *)(v10 + 16);
        v23 = (__int64 *)Entry[1];
        if ( (_QWORD *)*v23 == Entry )
        {
          *v22 = Entry;
          *(_QWORD *)(v10 + 24) = v23;
          *v23 = (__int64)v22;
          Entry[1] = v22;
        }
        else
        {
          RtlpLogHeapFailure(12, 0LL, (ULONG_PTR)Entry, 0LL, *v23);
        }
        *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v10 + 8);
        v24 = *((_QWORD *)HeapHandle + 39);
        if ( v24 )
        {
          v25 = *(unsigned __int16 *)(v10 + 8);
          while ( 1 )
          {
            v26 = *(unsigned int *)(v24 + 8);
            if ( v25 < v26 )
              break;
            if ( !*(_QWORD *)v24 )
            {
              LODWORD(v25) = v26 - 1;
              break;
            }
            v24 = *(_QWORD *)v24;
          }
          RtlpHeapAddListEntry((__int64)HeapHandle, v24, v26, v10 + 16, v25, *(unsigned __int16 *)(v10 + 8));
        }
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
          *(_DWORD *)(v10 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, (ULONG_PTR)HeapHandle, v8 + 16, v13, *v12);
      }
      v3 = 0LL;
LABEL_51:
      v7 = v36;
    }
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v31 )
    ExReleaseResourceLite(*((PERESOURCE *)HeapHandle + 44));
  return 0;
}
