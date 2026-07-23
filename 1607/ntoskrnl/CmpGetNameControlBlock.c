/*
 * XREFs of CmpGetNameControlBlock @ 0x140435E50
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CmpAllocatePoolWithTag @ 0x1400A5D00 (CmpAllocatePoolWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpHashUnicodeComponent @ 0x14049B720 (CmpHashUnicodeComponent.c)
 *     CmpCompareCompressedName @ 0x1404F5D50 (CmpCompareCompressedName.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockNameHashEntry @ 0x140603ECC (CmpUnlockNameHashEntry.c)
 */

char *__fastcall CmpGetNameControlBlock(unsigned __int16 *a1, unsigned int *a2, char *a3)
{
  unsigned int v5; // ebx
  signed __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // rcx
  _WORD *v9; // rax
  unsigned int v10; // r14d
  unsigned __int64 *v11; // rbp
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  _QWORD *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rsi
  char *v17; // r15
  __int64 v18; // rbp
  char *PoolWithTag; // rax
  _BYTE *v20; // r14
  __int64 v21; // rsi
  WCHAR v22; // cx
  char v23; // al
  int v24; // eax
  signed __int64 *v25; // rbx
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  unsigned __int16 v29; // cx
  __int64 v30; // rbp
  __int64 v31; // rsi
  WCHAR v32; // cx
  WCHAR v33; // ax
  char v34; // r14
  unsigned int v35; // eax
  WCHAR *v36; // r15
  __int64 v37; // r12
  WCHAR v38; // bp
  int v39; // ecx
  WCHAR *v40; // r14
  int v41; // r12d
  unsigned int v42; // edx
  WCHAR v43; // ax
  int v44; // ecx
  WCHAR v45; // ax
  __int64 v46; // [rsp+20h] [rbp-58h]
  __int64 v47; // [rsp+28h] [rbp-50h]
  char v48; // [rsp+80h] [rbp+8h]
  unsigned __int16 v49; // [rsp+88h] [rbp+10h]
  unsigned int v50; // [rsp+98h] [rbp+20h]

  if ( a2 )
    v5 = *a2;
  else
    v5 = CmpHashUnicodeComponent(a1);
  v6 = 0LL;
  if ( a3 )
  {
    v34 = 1;
    v35 = *a1 >> 1;
    v36 = (WCHAR *)*((_QWORD *)a1 + 1);
    if ( v35 )
    {
      v37 = v35;
      do
      {
        v38 = *v36;
        if ( *v36 >= 0x61u )
        {
          if ( v38 <= 0x7Au )
            v39 = v38 - 32;
          else
            v39 = RtlUpcaseUnicodeChar(v38);
        }
        else
        {
          v39 = v38;
        }
        if ( v39 != v38 )
          v34 = 0;
        ++v36;
        --v37;
      }
      while ( v37 );
    }
    *a3 = v34;
  }
  v7 = *a1;
  v48 = 1;
  v8 = v7 >> 1;
  v49 = (unsigned __int16)v7 >> 1;
  if ( v7 >> 1 )
  {
    v9 = (_WORD *)*((_QWORD *)a1 + 1);
    do
    {
      if ( *v9 > 0xFFu )
      {
        v49 = *a1;
        v48 = 0;
      }
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = 101027 * (v5 ^ (v5 >> 9));
  v11 = (unsigned __int64 *)((char *)CmpNameCacheTable
                           + 16
                           * (((unsigned __int16)(-30045 * (v5 ^ (v5 >> 9))) ^ (unsigned __int16)(v10 >> 9)) & 0x7FF));
  v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
  if ( v13 )
    v13[26] |= 1u;
  v14 = CmpNameCacheTable;
  v15 = 16LL * (((unsigned __int16)v10 ^ (unsigned __int16)(v10 >> 9)) & 0x7FF);
  v47 = v15;
  v16 = *(_QWORD *)((char *)CmpNameCacheTable + v15 + 8);
  if ( v16 )
  {
    while ( 1 )
    {
      v17 = (char *)(v16 - 8);
      if ( v5 == *(_DWORD *)v16 )
      {
        v29 = *((_WORD *)v17 + 12);
        if ( v49 == v29 )
        {
          if ( (*(_DWORD *)v17 & 1) != 0 )
          {
            if ( !(unsigned int)CmpCompareCompressedName(a1, v17 + 26, v49, 2LL, v46, v47) )
              goto LABEL_37;
          }
          else
          {
            v40 = (WCHAR *)*((_QWORD *)a1 + 1);
            v41 = 0;
            v42 = v29 >> 1;
            v50 = v42;
            if ( !v42 )
            {
LABEL_37:
              v10 = 101027 * (v5 ^ (v5 >> 9));
              if ( (*(_DWORD *)v17 & 0xFFFFFFFE) == 0xFFFFFFFE )
                v17 = 0LL;
              else
                *(_DWORD *)v17 = *(_DWORD *)v17 & 1 ^ ((*(_DWORD *)v17 & 0xFFFFFFFE) + 2);
              goto LABEL_26;
            }
            v46 = v17 - (char *)v40 + 26;
            while ( 1 )
            {
              v43 = *v40;
              if ( *v40 >= 0x61u )
              {
                if ( v43 <= 0x7Au )
                {
                  v44 = v43 - 32;
                }
                else
                {
                  v45 = RtlUpcaseUnicodeChar(v43);
                  v42 = v50;
                  v44 = v45;
                }
              }
              else
              {
                v44 = v43;
              }
              if ( v44 != *(WCHAR *)((char *)v40 + v46) )
                break;
              ++v40;
              if ( ++v41 >= v42 )
                goto LABEL_37;
            }
          }
        }
      }
      v16 = *(_QWORD *)(v16 + 8);
      if ( !v16 )
      {
        v15 = v47;
        v10 = 101027 * (v5 ^ (v5 >> 9));
        break;
      }
    }
  }
  v18 = v49;
  PoolWithTag = (char *)CmpAllocatePoolWithTag(PagedPool, (unsigned int)v49 + 26, 0x624E4D43u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v49 + 26);
    if ( v48 )
    {
      *(_DWORD *)v17 |= 1u;
      if ( v49 )
      {
        v20 = v17 + 26;
        v21 = 0LL;
        do
        {
          v22 = *(_WORD *)(v21 + *((_QWORD *)a1 + 1));
          if ( v22 >= 0x61u )
          {
            if ( v22 > 0x7Au )
              v23 = RtlUpcaseUnicodeChar(v22);
            else
              v23 = v22 - 32;
          }
          else
          {
            v23 = *(_WORD *)(v21 + *((_QWORD *)a1 + 1));
          }
          *v20 = v23;
          v21 += 2LL;
          ++v20;
          --v18;
        }
        while ( v18 );
        v10 = 101027 * (v5 ^ (v5 >> 9));
      }
    }
    else
    {
      *(_DWORD *)v17 &= ~1u;
      v30 = v49 >> 1;
      if ( (_DWORD)v30 )
      {
        v31 = 0LL;
        do
        {
          v32 = *(_WORD *)(v31 + *((_QWORD *)a1 + 1));
          if ( v32 < 0x61u )
          {
            v33 = *(_WORD *)(v31 + *((_QWORD *)a1 + 1));
          }
          else if ( v32 <= 0x7Au )
          {
            v33 = v32 - 32;
          }
          else
          {
            v33 = RtlUpcaseUnicodeChar(v32);
          }
          *(_WORD *)&v17[v31 + 26] = v33;
          v31 += 2LL;
          --v30;
        }
        while ( v30 );
      }
    }
    v14 = CmpNameCacheTable;
    v24 = *(_DWORD *)v17 & 1 | 2;
    *((_DWORD *)v17 + 2) = v5;
    *(_DWORD *)v17 = v24;
    *((_WORD *)v17 + 12) = v49;
    *((_QWORD *)v17 + 2) = *(_QWORD *)((char *)v14 + v15 + 8);
    *(_QWORD *)((char *)v14 + v15 + 8) = v17 + 8;
LABEL_26:
    v25 = &v14[2 * (((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int64)v10 >> 9)) & 0x7FF)];
    _m_prefetchw(v25);
    v26 = *v25;
    if ( (*v25 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v6 = v26 - 16;
    if ( (v26 & 2) != 0 || (v27 = *v25, v27 != _InterlockedCompareExchange64(v25, v6, v26)) )
      ExfReleasePushLock(&v14[2 * (((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int64)v10 >> 9)) & 0x7FF)]);
    KeAbPostRelease((ULONG_PTR)&v14[2
                                  * (((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int64)v10 >> 9)) & 0x7FF)]);
    return v17;
  }
  else
  {
    CmpUnlockNameHashEntry(v5);
    return 0LL;
  }
}
