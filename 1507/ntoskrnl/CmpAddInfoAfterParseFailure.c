/*
 * XREFs of CmpAddInfoAfterParseFailure @ 0x14042A390
 * Callers:
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpUnlockAndLockKcbs @ 0x14042A760 (CmpUnlockAndLockKcbs.c)
 *     CmpComputeHashKeyForCompressedName @ 0x14042A7E4 (CmpComputeHashKeyForCompressedName.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 */

_DWORD *__fastcall CmpAddInfoAfterParseFailure(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 KeyControlBlock; // rbx
  _DWORD *result; // rax
  _DWORD *v9; // rdi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  _DWORD *PoolWithTag; // rax
  unsigned int v13; // r15d
  unsigned __int16 v14; // cx
  _WORD *v15; // rax
  _WORD *v16; // r12
  unsigned __int16 v17; // r14
  int v18; // edx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rdx
  __int16 v24; // ax
  ULONG_PTR v25; // r14
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  unsigned __int16 v30; // [rsp+30h] [rbp-20h]
  int v31; // [rsp+34h] [rbp-1Ch] BYREF
  int v32; // [rsp+38h] [rbp-18h] BYREF
  int v33; // [rsp+3Ch] [rbp-14h] BYREF
  __int16 v34; // [rsp+40h] [rbp-10h] BYREF
  __int64 v35; // [rsp+48h] [rbp-8h]
  int v36; // [rsp+98h] [rbp+48h] BYREF

  v32 = -1;
  KeyControlBlock = a4;
  if ( (*(_WORD *)(a4 + 186) & 0x200) != 0 )
    return (_DWORD *)a4;
  result = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, a2, &v32);
  v9 = result;
  if ( result )
  {
    v10 = result[5];
    v11 = v10 + result[6];
    if ( v11 < v10 )
      goto LABEL_33;
    if ( !v11 )
    {
      *(_WORD *)(KeyControlBlock + 4) = *(_WORD *)(KeyControlBlock + 4) & 0xFFBE | 1;
      goto LABEL_31;
    }
    if ( v11 != 1 )
    {
      if ( v11 < 0xE && (*(_DWORD *)(KeyControlBlock + 4) & 4) == 0 )
      {
        v31 = -1;
        v33 = -1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v11 + 4, 0x6E494D43u);
        *(_QWORD *)(KeyControlBlock + 112) = PoolWithTag;
        LOBYTE(v36) = 1;
        if ( !PoolWithTag )
          goto LABEL_31;
        *PoolWithTag = v9[6] + v9[5];
        v13 = 0;
        v14 = 0;
        v30 = 0;
        if ( !*(_DWORD *)(a1 + 192) )
          goto LABEL_21;
        while ( 1 )
        {
          if ( !v9[v14 + 5] )
            goto LABEL_19;
          v15 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(
                           a1,
                           (unsigned int)v9[v14 + 7],
                           &v31);
          v16 = v15;
          if ( !v15 )
            goto LABEL_55;
          if ( *v15 == 26994 )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v31);
            goto LABEL_61;
          }
          v17 = 0;
          if ( !v9[v30 + 5] )
            goto LABEL_18;
          while ( *v16 == 26732 )
          {
            v18 = *(_DWORD *)&v16[4 * v17 + 4];
            v19 = *(_DWORD *)&v16[4 * v17 + 2];
            if ( !v18 )
              goto LABEL_40;
            *(_DWORD *)(*(_QWORD *)(KeyControlBlock + 112) + 4LL * v13 + 4) = v18;
LABEL_17:
            ++v17;
            ++v13;
            if ( (unsigned int)v17 >= v9[v30 + 5] )
              goto LABEL_18;
          }
          if ( *v16 == 26220 )
            v19 = *(_DWORD *)&v16[4 * v17 + 2];
          else
            v19 = *(_DWORD *)&v16[2 * v17 + 2];
LABEL_40:
          v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a1 + 8))(a1, v19, &v33);
          if ( v26 )
          {
            if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
            {
              v27 = CmpComputeHashKeyForCompressedName(0LL, v26 + 76, *(unsigned __int16 *)(v26 + 72));
            }
            else
            {
              v35 = v26 + 76;
              v34 = *(_WORD *)(v26 + 72);
              v27 = CmpComputeHashKey(0LL, &v34);
            }
            *(_DWORD *)(*(_QWORD *)(KeyControlBlock + 112) + 4LL * v13 + 4) = v27;
            (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v33);
            goto LABEL_17;
          }
          LOBYTE(v36) = 0;
LABEL_18:
          (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v31);
          v14 = v30;
LABEL_19:
          v30 = ++v14;
          if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 192) )
          {
            if ( (_BYTE)v36 )
            {
LABEL_21:
              *(_WORD *)(KeyControlBlock + 4) = *(_WORD *)(KeyControlBlock + 4) & 0xFFBB | 4;
              goto LABEL_31;
            }
LABEL_61:
            ExFreePoolWithTag(*(PVOID *)(KeyControlBlock + 112), 0x6E494D43u);
LABEL_31:
            v25 = KeyControlBlock;
LABEL_32:
            KeyControlBlock = v25;
LABEL_33:
            if ( v9 )
              (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v32);
            return (_DWORD *)KeyControlBlock;
          }
        }
      }
LABEL_36:
      v25 = KeyControlBlock;
      (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v32);
      v9 = 0LL;
      KeyControlBlock = CmpCreateKeyControlBlock(a1, a5);
      if ( KeyControlBlock )
      {
        CmpDereferenceKeyControlBlockWithLock(v25);
        CmpUnlockAndLockKcbs(a3, v25, KeyControlBlock, 0LL);
        goto LABEL_31;
      }
      goto LABEL_32;
    }
    if ( (*(_DWORD *)(KeyControlBlock + 4) & 2) != 0 )
      goto LABEL_36;
    v36 = -1;
    v31 = -1;
    if ( v10 == 1 )
      v20 = (unsigned int)result[7];
    else
      v20 = (unsigned int)result[8];
    v21 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, v20, &v36);
    if ( !v21 )
    {
      KeyControlBlock = 0LL;
      goto LABEL_33;
    }
    if ( *(_WORD *)v21 != 26994 )
    {
      if ( *(_WORD *)v21 == 26732 )
      {
        v22 = *(_DWORD *)(v21 + 8);
        v23 = *(unsigned int *)(v21 + 4);
        if ( v22 )
        {
          v24 = *(_WORD *)(KeyControlBlock + 4);
          *(_DWORD *)(KeyControlBlock + 112) = v22;
          *(_WORD *)(KeyControlBlock + 4) = v24 & 0xFFBD | 2;
LABEL_30:
          (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v36);
          goto LABEL_31;
        }
      }
      else
      {
        v23 = *(unsigned int *)(v21 + 4);
      }
      v28 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, v23, &v31);
      if ( v28 )
      {
        if ( (*(_BYTE *)(v28 + 2) & 0x20) != 0 )
        {
          v29 = CmpComputeHashKeyForCompressedName(0LL, v28 + 76, *(unsigned __int16 *)(v28 + 72));
        }
        else
        {
          v35 = v28 + 76;
          v34 = *(_WORD *)(v28 + 72);
          v29 = CmpComputeHashKey(0LL, &v34);
        }
        *(_DWORD *)(KeyControlBlock + 112) = v29;
        *(_WORD *)(KeyControlBlock + 4) = *(_WORD *)(KeyControlBlock + 4) & 0xFFBD | 2;
        (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v31);
        goto LABEL_30;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v36);
LABEL_55:
    KeyControlBlock = 0LL;
    goto LABEL_33;
  }
  return result;
}
