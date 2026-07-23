/*
 * XREFs of RaspCreateSegmentList @ 0x1401295C8
 * Callers:
 *     RaspScanConvert @ 0x140128500 (RaspScanConvert.c)
 * Callees:
 *     RaspInterpolatePoint @ 0x140129900 (RaspInterpolatePoint.c)
 *     RaspDestroySegmentList @ 0x140129980 (RaspDestroySegmentList.c)
 *     RaspAllocateMemory @ 0x140129A3C (RaspAllocateMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall RaspCreateSegmentList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int16 *v8; // r15
  unsigned int v9; // edi
  int v10; // edx
  unsigned int v11; // r12d
  int v12; // r9d
  _BYTE *v13; // r10
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  char *Memory; // rax
  char *v17; // rbp
  int v18; // esi
  char *v19; // rbx
  unsigned int v20; // edi
  unsigned int v21; // r10d
  unsigned int v22; // r14d
  unsigned int v23; // r8d
  unsigned int v24; // edx
  int v25; // r9d
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 v34; // r9
  __int64 v35; // rdx
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-48h]
  void *v41; // [rsp+28h] [rbp-40h]

  if ( a3 < 2 )
    return 3221225485LL;
  v8 = *(unsigned __int16 **)(a1 + 26);
  v9 = a3 - 2;
  v40 = a3 - 2;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( a3 == 2 )
    goto LABEL_53;
  v13 = (_BYTE *)(a2 + 16);
  do
  {
    v14 = v12 + 1;
    v15 = v12 + 1;
    if ( v12 == v8[v10] )
    {
      if ( v10 )
        v15 = v8[v10 - 1] + 1;
      else
        v15 = 0;
      ++v10;
    }
    if ( (*v13 & 1) != 0 || (*(_BYTE *)(17LL * v15 + a2 + 16) & 1) == 0 )
      ++v11;
    v13 += 17;
    ++v12;
  }
  while ( v14 < v9 );
  if ( !v11 )
  {
LABEL_53:
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  Memory = (char *)RaspAllocateMemory(25LL * v11);
  v41 = Memory;
  v17 = Memory;
  if ( !Memory )
  {
    *a5 = 0;
    return 3221225626LL;
  }
  memset(Memory, 0, 25LL * v11);
  v18 = 0;
  v19 = v17 + 16;
  v20 = 0;
  while ( 1 )
  {
    v21 = v20 + 1;
    v22 = v20 + 1;
    v23 = v20 - 1;
    v24 = v20 + 2;
    if ( v20 )
    {
      if ( v18 && v20 == v8[v18 - 1] + 1 )
        v23 = v8[v18];
    }
    else
    {
      v23 = *v8;
    }
    v25 = v8[v18];
    if ( v20 == v25 - 1 )
    {
      if ( v18 )
        v24 = v8[v18 - 1] + 1;
      else
        v24 = 0;
    }
    if ( v20 == v25 )
    {
      if ( v18 )
      {
        v39 = v8[v18 - 1];
        v22 = v39 + 1;
        v24 = v39 + 2;
      }
      else
      {
        v22 = 0;
        v24 = 1;
      }
      ++v18;
    }
    v26 = a2 + 17LL * v20;
    if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
    {
      v34 = a2 + 17LL * v22;
      if ( (*(_BYTE *)(v34 + 16) & 1) != 0 )
      {
        *((_QWORD *)v19 - 2) = v26;
        *((_QWORD *)v19 - 1) = v34;
        *(_QWORD *)v19 = v34;
        v19[8] = 1;
      }
      else
      {
        v35 = a2 + 17LL * v24;
        v36 = (*(_BYTE *)(v35 + 16) & 1) == 0;
        *((_QWORD *)v19 - 2) = v26;
        *((_QWORD *)v19 - 1) = v34;
        if ( v36 )
        {
          v37 = RaspInterpolatePoint(a2 + 17LL * v22, v35, a6);
          *(_QWORD *)v19 = v37;
          if ( !v37 )
            break;
          v21 = v20 + 1;
          v19[8] = 4;
        }
        else
        {
          *(_QWORD *)v19 = v35;
          v19[8] = 2;
        }
        if ( v22 > v20 )
        {
          v20 = v21;
          if ( v21 == v8[v18] )
            ++v18;
        }
      }
      goto LABEL_26;
    }
    if ( !v20 && (*(_BYTE *)(17LL * v23 + a2 + 16) & 1) != 0
      || v18 && v20 == v8[v18 - 1] + 1 && (*(_BYTE *)(17LL * v23 + a2 + 16) & 1) != 0 )
    {
      goto LABEL_27;
    }
    v27 = a2 + 17LL * v20;
    v28 = a2 + 17LL * v22;
    v29 = a2 + 17LL * v23;
    if ( (*(_BYTE *)(v28 + 16) & 1) != 0 )
    {
      v38 = RaspInterpolatePoint(v29, v27, a6);
      *((_QWORD *)v19 - 2) = v38;
      if ( !v38 )
        break;
      *((_QWORD *)v19 - 1) = v26;
      *(_QWORD *)v19 = v28;
      v19[8] = 3;
      goto LABEL_26;
    }
    v30 = RaspInterpolatePoint(v29, v27, a6);
    *((_QWORD *)v19 - 2) = v30;
    if ( !v30 )
      break;
    *((_QWORD *)v19 - 1) = v26;
    v31 = RaspInterpolatePoint(a2 + 17LL * v20, v28, a6);
    *(_QWORD *)v19 = v31;
    if ( !v31 )
      break;
    v19[8] = 5;
LABEL_26:
    v19 += 25;
LABEL_27:
    if ( ++v20 >= v40 )
    {
      v32 = 0;
      *a5 = v11;
      *a4 = v41;
      return v32;
    }
  }
  v32 = -1073741670;
  RaspDestroySegmentList(v41, v11, a6);
  *a5 = 0;
  *a4 = 0LL;
  return v32;
}
