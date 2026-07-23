/*
 * XREFs of MiCoalescePageFileBitmapsCache @ 0x1400B8500
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1401DC968 (MiFinishPageFileExtension.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlLengthCurrentClearRunForward @ 0x1400B8A38 (RtlLengthCurrentClearRunForward.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400BA9EC (MiBitmapsCachedEntryLengthChanged.c)
 *     MiRescanPageFileBitmapPortion @ 0x1400F4D64 (MiRescanPageFileBitmapPortion.c)
 */

__int64 __fastcall MiCoalescePageFileBitmapsCache(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  int v14; // r12d
  unsigned __int64 v15; // r14
  unsigned __int64 j; // rax
  unsigned __int64 v17; // rcx
  int v18; // r13d
  unsigned __int64 i; // rcx
  unsigned __int64 v20; // rbp
  int v21; // r8d
  int v22; // ecx
  int v23; // ebx
  unsigned int v24; // eax
  int v25; // edx
  unsigned int v26; // ebp
  _QWORD *v27; // rax
  _QWORD *v28; // r14
  unsigned int v29; // r10d
  int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // ebp
  _DWORD *v33; // r15
  _DWORD *v34; // r8
  unsigned int v35; // r9d
  int v36; // r14d
  bool v37; // zf
  __int64 v38; // rcx
  unsigned int v39; // edi
  unsigned int v40; // ecx
  __int64 v41; // r10
  __int64 v42; // rbp
  int v43; // edx
  __int64 v44; // r13
  __int64 v45; // r9
  __int64 v46; // rcx
  unsigned int v47; // edx
  int v48; // r8d
  __int64 v49; // r12
  __int64 v50; // r10
  unsigned int v51; // r9d
  unsigned int v52; // edi
  unsigned __int64 *v53; // rcx
  __int64 v54; // rcx
  _QWORD *v55; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  __int64 v57; // [rsp+80h] [rbp+8h]
  __int64 v58; // [rsp+98h] [rbp+20h]

  result = (__int64)&retaddr;
  v5 = a3;
  if ( (*(_BYTE *)(a1 + 207) & 1) != 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 112);
  if ( a2 )
  {
    v7 = v6 + 24;
    v8 = v6 + 8;
  }
  else
  {
    v7 = v6 + 8;
    v8 = v6 + 24;
  }
  v9 = *(_QWORD *)(a1 + 160);
  v10 = 0;
  v57 = v8;
  v11 = 0LL;
  v58 = v7;
  v12 = 0LL;
  while ( v9 )
  {
    v13 = *(_DWORD *)(v9 + 24);
    if ( a3 < v13 )
    {
      v12 = v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      if ( a3 <= v13 )
        goto LABEL_10;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  v9 = v12;
LABEL_10:
  v14 = *(_DWORD *)(v9 + 24);
  v15 = v9 - 24;
  if ( v14 == a3 + 1 && v14 != -1 )
  {
    ++*(_DWORD *)(v15 + 52);
    v11 = v9 - 24;
    *(_DWORD *)(v15 + 48) = a3;
  }
  j = *(_QWORD *)v9;
  v17 = v15 + 24;
  v18 = 0;
  if ( j )
  {
    for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
      j = i;
  }
  else
  {
    for ( j = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
    {
      if ( *(_QWORD *)(j + 8) == v17 )
        break;
      v17 = j;
    }
  }
  if ( j )
  {
    v20 = j - 24;
    v21 = *(_DWORD *)(j - 24 + 52);
    v18 = v21 + *(_DWORD *)(j + 24) - 1;
    if ( v21 + *(_DWORD *)(j + 24) == (_DWORD)v5 )
    {
      if ( *(_DWORD *)(v15 + 48) == (_DWORD)v5 )
      {
        *(_DWORD *)(v20 + 52) = *(_DWORD *)(v15 + 52) + v21;
        *(_DWORD *)(v15 + 52) = 0;
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 144), (PRTL_BALANCED_NODE)v15);
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 160), (PRTL_BALANCED_NODE)(v15 + 24));
        v53 = *(unsigned __int64 **)(a1 + 184);
        *(_QWORD *)v15 = a1 + 176;
        *(_QWORD *)(v15 + 8) = v53;
        if ( *v53 != a1 + 176 )
          __fastfail(3u);
        v7 = v58;
        *v53 = v15;
        v11 = v20 | 1;
        *(_QWORD *)(a1 + 184) = v15;
      }
      else
      {
        v11 = j - 24;
        *(_DWORD *)(v20 + 52) = v21 + 1;
      }
    }
    v8 = v57;
  }
  if ( !v11 )
  {
    v25 = v14 - v5 - 1;
    if ( v14 != -1 )
      v25 = v14 - v5 - 2;
    v26 = v5 - v18 - 1;
    if ( v18 )
      v26 = v5 - v18 - 2;
    v27 = (_QWORD *)(a1 + 176);
    if ( (_QWORD *)*v27 == v27 )
      v28 = *(_QWORD **)(a1 + 152);
    else
      v28 = (_QWORD *)*v27;
    v29 = *((_DWORD *)v28 + 13);
    result = v26 + v25 + 1;
    v55 = v28;
    if ( (unsigned int)result < 0x20 || v29 >= (unsigned int)result )
    {
      v40 = *(_DWORD *)(a1 + 140);
      if ( v40 > (unsigned int)result )
        goto LABEL_46;
    }
    else
    {
      if ( !v25
        || (v30 = RtlLengthCurrentClearRunForward(v7, (unsigned int)v5, (unsigned int)(v25 + 1)),
            v29 = *((_DWORD *)v28 + 13),
            v25 = v30 - 1,
            result = v26 + v30,
            (unsigned int)result >= 0x20)
        && v29 < (unsigned int)result )
      {
        if ( !v26 )
          return MiRescanPageFileBitmapPortion(a1, v57, (unsigned int)v5 - v26, result, (__int64)&v55);
        v31 = v5 & 0x1F;
        v32 = v26 + 1;
        v33 = *(_DWORD **)(v58 + 8);
        v34 = &v33[v5 >> 5];
        v35 = dword_1402452F0[v31] & *v34;
        v36 = 31 - v31;
        if ( v35 )
        {
LABEL_39:
          v37 = !_BitScanReverse64((unsigned __int64 *)&v38, v35);
          if ( v37 )
            LOBYTE(v38) = -1;
          v10 += 31 - (char)v38;
        }
        else
        {
          while ( 1 )
          {
            v10 += 32;
            if ( v10 >= v32 && v10 - v36 >= v32 )
              break;
            if ( v34 == v33 )
              break;
            v35 = *--v34;
            if ( v35 )
              goto LABEL_39;
          }
        }
        v39 = v10 - v36;
        if ( v39 > v32 )
          v39 = v32;
        v26 = v39 - 1;
        result = v39 + v25;
        if ( (unsigned int)result >= 0x20 && v29 < (unsigned int)result )
          return MiRescanPageFileBitmapPortion(a1, v57, (unsigned int)v5 - v26, result, (__int64)&v55);
      }
      v40 = *(_DWORD *)(a1 + 140);
      if ( v40 > (unsigned int)result )
      {
LABEL_46:
        *(_DWORD *)(a1 + 140) = v40;
        return result;
      }
    }
    v40 = result;
    goto LABEL_46;
  }
  if ( (v11 & 1) != 0 )
  {
    v11 &= ~1uLL;
  }
  else
  {
    v22 = *(_DWORD *)(v11 + 48);
    if ( v22 == (_DWORD)v5 )
    {
      v41 = *(_QWORD *)(v7 + 8);
      v42 = v5 & 0x1F;
      v43 = 0;
      v44 = 4 * (v5 >> 5);
      v45 = v41 + v44;
      LODWORD(v46) = dword_1402452F0[v42] & *(_DWORD *)(v41 + v44);
      if ( (_DWORD)v46 )
      {
LABEL_67:
        v37 = !_BitScanReverse64((unsigned __int64 *)&v46, (unsigned int)v46);
        if ( v37 )
          LOBYTE(v46) = -1;
        v43 += 31 - (char)v46;
      }
      else
      {
        while ( 1 )
        {
          v43 += 32;
          if ( v43 == -1 && (_DWORD)v42 == 31 )
            break;
          if ( v45 == v41 )
            break;
          LODWORD(v46) = *(_DWORD *)(v45 - 4);
          v45 -= 4LL;
          if ( (_DWORD)v46 )
            goto LABEL_67;
        }
      }
      v47 = v43 - (31 - v42);
      if ( v47 > 1 )
      {
        v48 = 31 - v42;
        v49 = *(_QWORD *)(v57 + 8);
        v50 = v49 + v44;
        v51 = dword_1402452F0[v42] & *(_DWORD *)(v49 + v44);
        if ( v51 )
        {
LABEL_86:
          v37 = !_BitScanReverse64((unsigned __int64 *)&v54, v51);
          if ( v37 )
            LOBYTE(v54) = -1;
          v10 += 31 - (char)v54;
        }
        else
        {
          while ( 1 )
          {
            v10 += 32;
            if ( v10 >= v47 && v10 - v48 >= v47 )
              break;
            if ( v50 == v49 )
              break;
            v51 = *(_DWORD *)(v50 - 4);
            v50 -= 4LL;
            if ( v51 )
              goto LABEL_86;
          }
        }
        v52 = v10 - v48;
        if ( v52 > v47 )
          v52 = v47;
        *(_DWORD *)(v11 + 52) += v52 - 1;
        *(_DWORD *)(v11 + 48) = v5 - v52 + 1;
      }
    }
    else
    {
      v23 = v22 + *(_DWORD *)(v11 + 52);
      v24 = RtlLengthCurrentClearRunForward(v7, (unsigned int)(v23 - 1), 0xFFFFFFFFLL);
      if ( v24 > 1 )
        *(_DWORD *)(v11 + 52) += RtlLengthCurrentClearRunForward(v8, (unsigned int)(v23 - 1), v24) - 1;
    }
  }
  return MiBitmapsCachedEntryLengthChanged(a1, v11, 1LL);
}
