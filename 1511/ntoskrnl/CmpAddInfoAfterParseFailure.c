/*
 * XREFs of CmpAddInfoAfterParseFailure @ 0x1403E0290
 * Callers:
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpComputeHashKey @ 0x1403DA088 (CmpComputeHashKey.c)
 *     CmpUnlockAndLockKcbs @ 0x1403E065C (CmpUnlockAndLockKcbs.c)
 *     CmpComputeHashKeyForCompressedName @ 0x1403E06DC (CmpComputeHashKeyForCompressedName.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1403FB7B0 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_DWORD *__fastcall CmpAddInfoAfterParseFailure(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
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
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // eax
  unsigned __int16 v32; // [rsp+30h] [rbp-20h]
  int v33; // [rsp+34h] [rbp-1Ch] BYREF
  int v34; // [rsp+38h] [rbp-18h] BYREF
  int v35; // [rsp+3Ch] [rbp-14h] BYREF
  unsigned __int16 v36; // [rsp+40h] [rbp-10h] BYREF
  __int64 v37; // [rsp+48h] [rbp-8h]
  int v38; // [rsp+98h] [rbp+48h] BYREF

  v34 = -1;
  KeyControlBlock = a4;
  if ( (*(_WORD *)(a4 + 186) & 0x200) != 0 )
    return (_DWORD *)a4;
  result = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       a2,
                       &v34);
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
        v33 = -1;
        v35 = -1;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v11 + 4, 0x6E494D43u);
        *(_QWORD *)(KeyControlBlock + 112) = PoolWithTag;
        LOBYTE(v38) = 1;
        if ( !PoolWithTag )
          goto LABEL_31;
        *PoolWithTag = v9[6] + v9[5];
        v13 = 0;
        v14 = 0;
        v32 = 0;
        if ( !*(_DWORD *)(BugCheckParameter2 + 192) )
          goto LABEL_21;
        while ( 1 )
        {
          if ( !v9[v14 + 5] )
            goto LABEL_19;
          v15 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                           BugCheckParameter2,
                           (unsigned int)v9[v14 + 7],
                           &v33);
          v16 = v15;
          if ( !v15 )
            goto LABEL_55;
          if ( *v15 == 26994 )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v33);
            goto LABEL_61;
          }
          v17 = 0;
          if ( !v9[v32 + 5] )
            goto LABEL_18;
          while ( *v16 == 26732 )
          {
            v18 = *(_DWORD *)&v16[4 * v17 + 4];
            v19 = *(_DWORD *)&v16[4 * v17 + 2];
            if ( !v18 )
              goto LABEL_41;
            *(_DWORD *)(*(_QWORD *)(KeyControlBlock + 112) + 4LL * v13 + 4) = v18;
LABEL_17:
            ++v17;
            ++v13;
            if ( (unsigned int)v17 >= v9[v32 + 5] )
              goto LABEL_18;
          }
          if ( *v16 == 26220 )
            v19 = *(_DWORD *)&v16[4 * v17 + 2];
          else
            v19 = *(_DWORD *)&v16[2 * v17 + 2];
LABEL_41:
          v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  v19,
                  &v35);
          if ( v26 )
          {
            if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
            {
              v28 = CmpComputeHashKeyForCompressedName(0LL, v26 + 76, *(unsigned __int16 *)(v26 + 72), v27);
            }
            else
            {
              v37 = v26 + 76;
              v36 = *(_WORD *)(v26 + 72);
              v28 = CmpComputeHashKey(0, &v36);
            }
            *(_DWORD *)(*(_QWORD *)(KeyControlBlock + 112) + 4LL * v13 + 4) = v28;
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v35);
            goto LABEL_17;
          }
          LOBYTE(v38) = 0;
LABEL_18:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v33);
          v14 = v32;
LABEL_19:
          v32 = ++v14;
          if ( (unsigned int)v14 >= *(_DWORD *)(BugCheckParameter2 + 192) )
          {
            if ( (_BYTE)v38 )
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
              (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
            return (_DWORD *)KeyControlBlock;
          }
        }
      }
LABEL_36:
      v25 = KeyControlBlock;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v34);
      v9 = 0LL;
      KeyControlBlock = CmpCreateKeyControlBlock(BugCheckParameter2, a5);
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
    v38 = -1;
    v33 = -1;
    if ( v10 == 1 )
      v20 = (unsigned int)result[7];
    else
      v20 = (unsigned int)result[8];
    v21 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v20, &v38);
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
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
          goto LABEL_31;
        }
      }
      else
      {
        v23 = *(unsigned int *)(v21 + 4);
      }
      v29 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v23,
              &v33);
      if ( v29 )
      {
        if ( (*(_BYTE *)(v29 + 2) & 0x20) != 0 )
        {
          v31 = CmpComputeHashKeyForCompressedName(0LL, v29 + 76, *(unsigned __int16 *)(v29 + 72), v30);
        }
        else
        {
          v37 = v29 + 76;
          v36 = *(_WORD *)(v29 + 72);
          v31 = CmpComputeHashKey(0, &v36);
        }
        *(_DWORD *)(KeyControlBlock + 112) = v31;
        *(_WORD *)(KeyControlBlock + 4) = *(_WORD *)(KeyControlBlock + 4) & 0xFFBD | 2;
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v33);
        goto LABEL_30;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v38);
LABEL_55:
    KeyControlBlock = 0LL;
    goto LABEL_33;
  }
  return result;
}
