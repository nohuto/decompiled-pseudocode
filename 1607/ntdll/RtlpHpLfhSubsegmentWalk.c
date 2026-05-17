/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x18004E860
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x18004DEFC (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x18004456C (RtlpHpLfhSubsegmentSizeBlockInternal.c)
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
  char *v18; // rdx
  __int64 v19; // r14
  unsigned int v20; // r12d
  __int64 v21; // rbp
  __int16 *v22; // rcx
  int v23; // eax
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  unsigned int v27; // r8d
  char v28; // cl
  unsigned __int64 v29; // rdx
  int v30; // r8d
  unsigned __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+78h] [rbp+10h]

  v7 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v33 = v7;
  if ( a3 == a2 )
  {
    v8 = 0;
  }
  else
  {
    v26 = *(_QWORD *)(a1
                    + 8LL
                    * (unsigned __int8)RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                    + 192);
    v27 = a3 - HIWORD(v7) - a2;
    if ( *(_DWORD *)(v26 + 72) )
    {
      v29 = (v27 * (unsigned __int64)*(unsigned int *)(v26 + 72)) >> *(_BYTE *)(v26 + 76);
      v30 = v27 - v29 * (unsigned __int16)v7;
    }
    else
    {
      v28 = *(_BYTE *)(v26 + 76);
      LODWORD(v29) = v27 >> v28;
      v30 = ((1 << v28) - 1) & v27;
    }
    if ( v30 )
      return 0LL;
    v8 = v29 + 1;
    if ( (int)v29 + 1 >= (unsigned int)*(unsigned __int16 *)(a2 + 34) )
      return 0LL;
  }
  v9 = (unsigned int)(2 * v8);
  v31 = 2 * *(unsigned __int16 *)(a2 + 34);
  v32 = a2 + 48;
  while ( 1 )
  {
    v10 = v31 - 1;
    for ( i = (unsigned int)v9 & (unsigned __int64)-(__int64)((unsigned int)v9 < v31); ; i = 0LL )
    {
      if ( v10 - i == -1LL )
        goto LABEL_22;
      v12 = (_QWORD *)(v32 + 8 * (i >> 6));
      for ( j = ((1LL << (i & 0x3F)) - 1) | ~*v12; j == -1; j = ~*v12 )
      {
        if ( (unsigned __int64)++v12 > v32 + 8 * (v10 >> 6) )
          goto LABEL_22;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v14 = j + (((__int64)v12 - v32) >> 3 << 6);
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
      v25 = v9 + 1;
      if ( v9 + 1 > v31 )
        v25 = v31;
      v10 = v25 - 1;
    }
    if ( (_DWORD)v14 == -1 || (unsigned int)v14 < (unsigned int)v9 )
      return 0LL;
    v15 = *(_BYTE *)(a2 + 44);
    v16 = (unsigned int)v14 >> 1;
    v17 = a2 + *(unsigned __int16 *)(a2 + 46);
    v18 = (char *)(HIWORD(v33) + v16 * (unsigned __int16)v33);
    v19 = (HIWORD(v33) + v16 * (unsigned __int16)v33) >> v15;
    v20 = (((unsigned int)v18 + (unsigned __int16)v33 - 1) >> v15) + 1;
    v21 = (__int64)&v18[a2];
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 24), v18, (unsigned __int16)v33, i);
    if ( (unsigned int)v19 < v20 )
    {
      v22 = (__int16 *)(v17 + 2 * v19);
      while ( *v22 >= 0 )
      {
        LODWORD(v19) = v19 + 1;
        ++v22;
        if ( (unsigned int)v19 >= v20 )
          goto LABEL_18;
      }
      LODWORD(v19) = -1;
    }
LABEL_18:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a2 + 24));
    if ( (_DWORD)v19 != -1 )
    {
      v23 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v21, v16, a6);
      *a4 = v23;
      *a5 = (unsigned __int16)v33 - v23;
      return v21;
    }
    v9 = (unsigned int)(v9 + 2);
  }
}
