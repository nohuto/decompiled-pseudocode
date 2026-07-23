/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x1800F3508
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x1800F1664 (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x180037888 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  int v12; // r8d
  char v13; // cl
  __int64 v14; // r15
  unsigned __int64 v15; // r8
  unsigned __int64 i; // r9
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rbx
  __int64 j; // rax
  unsigned __int64 v20; // r8
  char v21; // cl
  unsigned int v22; // ebx
  __int64 v23; // r13
  __int64 v24; // r14
  unsigned int v25; // r12d
  __int64 v26; // rbp
  __int16 *v27; // rcx
  int v28; // eax
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+78h] [rbp+10h]

  v7 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v32 = v7;
  if ( a3 == a2 )
  {
    v8 = 0;
  }
  else
  {
    v9 = *(_QWORD *)(a1
                   + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                   + 192);
    v10 = a3 - HIWORD(v7) - a2;
    if ( *(_DWORD *)(v9 + 72) )
    {
      v11 = (v10 * (unsigned __int64)*(unsigned int *)(v9 + 72)) >> *(_BYTE *)(v9 + 76);
      v12 = v10 - v11 * (unsigned __int16)v7;
    }
    else
    {
      v13 = *(_BYTE *)(v9 + 76);
      LODWORD(v11) = v10 >> v13;
      v12 = ((1 << v13) - 1) & v10;
    }
    if ( v12 )
      return 0LL;
    v8 = v11 + 1;
    if ( (int)v11 + 1 >= (unsigned int)*(unsigned __int16 *)(a2 + 34) )
      return 0LL;
  }
  v14 = (unsigned int)(2 * v8);
  v30 = 2 * *(unsigned __int16 *)(a2 + 34);
  v31 = a2 + 48;
  while ( 1 )
  {
    v15 = v30 - 1;
    for ( i = (unsigned int)v14 & (unsigned __int64)-(__int64)((unsigned int)v14 < v30); ; i = 0LL )
    {
      if ( v15 - i == -1LL )
        goto LABEL_11;
      v18 = (_QWORD *)(v31 + 8 * (i >> 6));
      for ( j = ((1LL << (i & 0x3F)) - 1) | ~*v18; j == -1; j = ~*v18 )
      {
        if ( (unsigned __int64)++v18 > v31 + 8 * (v15 >> 6) )
          goto LABEL_11;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v17 = j + (((__int64)v18 - v31) >> 3 << 6);
      if ( v17 > v15 )
      {
LABEL_11:
        LODWORD(v17) = -1;
      }
      else if ( v17 != -1LL )
      {
        break;
      }
      if ( !i )
        break;
      v20 = v14 + 1;
      if ( v14 + 1 > v30 )
        v20 = v30;
      v15 = v20 - 1;
    }
    if ( (_DWORD)v17 == -1 || (unsigned int)v17 < (unsigned int)v14 )
      return 0LL;
    v21 = *(_BYTE *)(a2 + 44);
    v22 = (unsigned int)v17 >> 1;
    v23 = a2 + *(unsigned __int16 *)(a2 + 46);
    v24 = (HIWORD(v32) + v22 * (unsigned __int16)v32) >> v21;
    v25 = ((HIWORD(v32) + v22 * (unsigned __int16)v32 + (unsigned __int16)v32 - 1) >> v21) + 1;
    v26 = a2 + HIWORD(v32) + v22 * (unsigned __int16)v32;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v24 < v25 )
    {
      v27 = (__int16 *)(v23 + 2 * v24);
      while ( *v27 >= 0 )
      {
        LODWORD(v24) = v24 + 1;
        ++v27;
        if ( (unsigned int)v24 >= v25 )
          goto LABEL_30;
      }
      LODWORD(v24) = -1;
    }
LABEL_30:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v24 != -1 )
    {
      v28 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v26, v22, a6);
      *a4 = v28;
      *a5 = (unsigned __int16)v32 - v28;
      return v26;
    }
    v14 = (unsigned int)(v14 + 2);
  }
}
