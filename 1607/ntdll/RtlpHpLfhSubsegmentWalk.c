/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x18004E850
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x18004DEEC (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042560 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x18004455C (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned __int64 i; // r9
  _QWORD *v12; // rbx
  __int64 j; // rax
  unsigned __int64 v14; // rbx
  char v15; // cl
  unsigned int v16; // ebx
  __int64 v17; // r13
  __int64 v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // rbp
  __int16 *v21; // rcx
  int v22; // eax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // r8d
  char v27; // cl
  unsigned __int64 v28; // rdx
  int v29; // r8d
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
    v25 = *(_QWORD *)(a1
                    + 8LL
                    * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                    + 192);
    v26 = a3 - HIWORD(v7) - a2;
    if ( *(_DWORD *)(v25 + 72) )
    {
      v28 = (v26 * (unsigned __int64)*(unsigned int *)(v25 + 72)) >> *(_BYTE *)(v25 + 76);
      v29 = v26 - v28 * (unsigned __int16)v7;
    }
    else
    {
      v27 = *(_BYTE *)(v25 + 76);
      LODWORD(v28) = v26 >> v27;
      v29 = ((1 << v27) - 1) & v26;
    }
    if ( v29 )
      return 0LL;
    v8 = v28 + 1;
    if ( (int)v28 + 1 >= (unsigned int)*(unsigned __int16 *)(a2 + 34) )
      return 0LL;
  }
  v9 = (unsigned int)(2 * v8);
  v30 = 2 * *(unsigned __int16 *)(a2 + 34);
  v31 = a2 + 48;
  while ( 1 )
  {
    v10 = v30 - 1;
    for ( i = (unsigned int)v9 & (unsigned __int64)-(__int64)((unsigned int)v9 < v30); ; i = 0LL )
    {
      if ( v10 - i == -1LL )
        goto LABEL_22;
      v12 = (_QWORD *)(v31 + 8 * (i >> 6));
      for ( j = ((1LL << (i & 0x3F)) - 1) | ~*v12; j == -1; j = ~*v12 )
      {
        if ( (unsigned __int64)++v12 > v31 + 8 * (v10 >> 6) )
          goto LABEL_22;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v14 = j + (((__int64)v12 - v31) >> 3 << 6);
      if ( v14 > v10 )
      {
LABEL_22:
        LODWORD(v14) = -1;
      }
      else if ( v14 != -1LL )
      {
        break;
      }
      if ( !i )
        break;
      v24 = v9 + 1;
      if ( v9 + 1 > v30 )
        v24 = v30;
      v10 = v24 - 1;
    }
    if ( (_DWORD)v14 == -1 || (unsigned int)v14 < (unsigned int)v9 )
      return 0LL;
    v15 = *(_BYTE *)(a2 + 44);
    v16 = (unsigned int)v14 >> 1;
    v17 = a2 + *(unsigned __int16 *)(a2 + 46);
    v18 = (HIWORD(v32) + v16 * (unsigned __int16)v32) >> v15;
    v19 = ((HIWORD(v32) + v16 * (unsigned __int16)v32 + (unsigned __int16)v32 - 1) >> v15) + 1;
    v20 = a2 + HIWORD(v32) + v16 * (unsigned __int16)v32;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v18 < v19 )
    {
      v21 = (__int16 *)(v17 + 2 * v18);
      while ( *v21 >= 0 )
      {
        LODWORD(v18) = v18 + 1;
        ++v21;
        if ( (unsigned int)v18 >= v19 )
          goto LABEL_18;
      }
      LODWORD(v18) = -1;
    }
LABEL_18:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v18 != -1 )
    {
      v22 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v20, v16, a6);
      *a4 = v22;
      *a5 = (unsigned __int16)v32 - v22;
      return v20;
    }
    v9 = (unsigned int)(v9 + 2);
  }
}
