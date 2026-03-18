/*
 * XREFs of CmpGetNameControlBlock @ 0x1404CBDC0
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCompareCompressedName @ 0x1404CB210 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockNameHashEntry @ 0x1404CC6C0 (CmpUnlockNameHashEntry.c)
 *     CmpLockNameHashEntryExclusive @ 0x1404CC730 (CmpLockNameHashEntryExclusive.c)
 */

char *__fastcall CmpGetNameControlBlock(unsigned __int16 *a1, _BYTE *a2)
{
  WCHAR *v2; // rsi
  __int64 v3; // r15
  unsigned int v4; // ecx
  unsigned int v6; // r13d
  unsigned int v7; // ebp
  WCHAR *v8; // rdi
  __int64 v9; // r14
  WCHAR v10; // bx
  int v11; // ecx
  char v12; // r14
  unsigned __int16 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  char *v17; // rsi
  __int64 v18; // rdi
  char *PoolWithTag; // rax
  _BYTE *v20; // rbx
  WCHAR v21; // cx
  char v22; // al
  _QWORD *v23; // rcx
  int v24; // eax
  unsigned __int16 v26; // cx
  unsigned int v27; // edi
  __int64 v28; // rbx
  WCHAR v29; // cx
  WCHAR v30; // ax
  int v31; // r14d
  unsigned int v32; // r15d
  WCHAR *v33; // rdi
  __int64 v34; // r12
  WCHAR v35; // ax
  int v36; // ecx
  __int16 v38; // [rsp+68h] [rbp+10h]
  char v39; // [rsp+68h] [rbp+10h]
  unsigned __int16 v40; // [rsp+70h] [rbp+18h]

  v2 = (WCHAR *)*((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = *a1;
  *a2 = 1;
  v6 = v4 >> 1;
  v7 = 0;
  v8 = v2;
  v38 = v4;
  if ( v4 >> 1 )
  {
    v9 = v6;
    do
    {
      v10 = *v8;
      if ( *v8 != 92 )
      {
        if ( v10 >= 0x61u )
        {
          if ( v10 > 0x7Au )
            v11 = RtlUpcaseUnicodeChar(v10);
          else
            v11 = v10 - 32;
        }
        else
        {
          v11 = v10;
        }
        if ( v11 != v10 )
          *a2 = 0;
        v7 = v11 + 37 * v7;
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    LOWORD(v4) = v38;
  }
  v12 = 1;
  v13 = (unsigned __int16)v4 >> 1;
  v39 = 1;
  v40 = (unsigned __int16)v4 >> 1;
  if ( v6 )
  {
    v14 = v6;
    do
    {
      if ( *v2 > 0xFFu )
      {
        v13 = v4;
        v12 = 0;
      }
      ++v2;
      --v14;
    }
    while ( v14 );
    v40 = v13;
    v39 = v12;
  }
  CmpLockNameHashEntryExclusive(v7);
  v15 = *((_QWORD *)CmpNameCacheTable
        + 2
        * (((unsigned __int16)(-30045 * (v7 ^ (v7 >> 9))) ^ (unsigned __int16)((101027 * (v7 ^ (v7 >> 9))) >> 9)) & 0x7FF)
        + 1);
  if ( !v15 )
  {
LABEL_22:
    v18 = v13;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v13 + 26, 0x624E4D43u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
    {
      CmpUnlockNameHashEntry(v7);
      return 0LL;
    }
    memset(PoolWithTag, 0, (unsigned int)v13 + 26);
    if ( v12 )
    {
      *(_DWORD *)v17 |= 1u;
      if ( !v13 )
      {
LABEL_30:
        v23 = CmpNameCacheTable;
        v24 = *(_DWORD *)v17 & 1;
        *((_DWORD *)v17 + 2) = v7;
        *(_DWORD *)v17 = v24 | 2;
        *((_WORD *)v17 + 12) = v13;
        *((_QWORD *)v17 + 2) = v23[2
                                 * (((unsigned __int16)(-30045 * (v7 ^ (v7 >> 9))) ^ (unsigned __int16)((101027 * (v7 ^ (v7 >> 9))) >> 9)) & 0x7FF)
                                 + 1];
        v23[2
          * (((unsigned __int16)(-30045 * (v7 ^ (v7 >> 9))) ^ (unsigned __int16)((101027 * (v7 ^ (v7 >> 9))) >> 9)) & 0x7FF)
          + 1] = v17 + 8;
        goto LABEL_31;
      }
      v20 = v17 + 26;
      do
      {
        v21 = *(_WORD *)(v3 + *((_QWORD *)a1 + 1));
        if ( v21 >= 0x61u )
        {
          if ( v21 > 0x7Au )
            v22 = RtlUpcaseUnicodeChar(v21);
          else
            v22 = v21 - 32;
        }
        else
        {
          v22 = *(_WORD *)(v3 + *((_QWORD *)a1 + 1));
        }
        *v20 = v22;
        v3 += 2LL;
        ++v20;
        --v18;
      }
      while ( v18 );
    }
    else
    {
      *(_DWORD *)v17 &= ~1u;
      v27 = v13 >> 1;
      if ( !v27 )
        goto LABEL_30;
      v28 = v27;
      do
      {
        v29 = *(_WORD *)(v3 + *((_QWORD *)a1 + 1));
        if ( v29 < 0x61u )
        {
          v30 = *(_WORD *)(v3 + *((_QWORD *)a1 + 1));
        }
        else if ( v29 <= 0x7Au )
        {
          v30 = v29 - 32;
        }
        else
        {
          v30 = RtlUpcaseUnicodeChar(v29);
        }
        *(_WORD *)&v17[v3 + 26] = v30;
        v3 += 2LL;
        --v28;
      }
      while ( v28 );
    }
    v13 = v40;
    goto LABEL_30;
  }
  v16 = (__int64)a1;
  while ( 1 )
  {
    v17 = (char *)(v15 - 8);
    if ( v7 != *(_DWORD *)v15 )
      goto LABEL_20;
    v26 = *((_WORD *)v17 + 12);
    if ( v13 != v26 )
      goto LABEL_20;
    if ( (*(_DWORD *)v17 & 1) == 0 )
      break;
    if ( !(unsigned int)CmpCompareCompressedName(v16, (unsigned __int8 *)v17 + 26, v13, 2) )
      goto LABEL_41;
LABEL_20:
    v15 = *(_QWORD *)(v15 + 8);
    if ( !v15 )
    {
      v12 = v39;
      goto LABEL_22;
    }
  }
  v31 = 0;
  v32 = v26 >> 1;
  v33 = (WCHAR *)*((_QWORD *)a1 + 1);
  if ( v32 )
  {
    v34 = v17 - (char *)v33 + 26;
    while ( 1 )
    {
      v35 = *v33;
      if ( *v33 >= 0x61u )
        v36 = v35 <= 0x7Au ? v35 - 32 : RtlUpcaseUnicodeChar(v35);
      else
        v36 = v35;
      if ( v36 != *(WCHAR *)((char *)v33 + v34) )
        break;
      ++v33;
      if ( ++v31 >= v32 )
        goto LABEL_41;
    }
    v13 = v40;
    v3 = 0LL;
    v16 = (__int64)a1;
    goto LABEL_20;
  }
LABEL_41:
  if ( (*(_DWORD *)v17 & 0xFFFFFFFE) == 0xFFFFFFFE )
    v17 = 0LL;
  else
    *(_DWORD *)v17 = *(_DWORD *)v17 & 1 ^ ((*(_DWORD *)v17 & 0xFFFFFFFE) + 2);
LABEL_31:
  CmpUnlockNameHashEntry(v7);
  return v17;
}
