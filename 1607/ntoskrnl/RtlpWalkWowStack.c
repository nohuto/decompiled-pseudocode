/*
 * XREFs of RtlpWalkWowStack @ 0x14010EBD8
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F0A0 (RtlpWalkFrameChain.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall RtlpWalkWowStack(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v10; // r8d
  char v12; // al
  unsigned int j; // edx
  unsigned int v14; // edi
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // r10d
  unsigned int v19; // edx
  unsigned int i; // edi
  unsigned int v21; // eax
  char v23; // [rsp+20h] [rbp-18h]
  unsigned int v24; // [rsp+50h] [rbp+18h]

  v23 = 1;
  v10 = *(_DWORD *)(a3 + 8196);
  v24 = v10;
  if ( v10 <= a8 )
    return 0;
  if ( v10 != a8 )
  {
    if ( (a8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = a8 + (unsigned __int64)(v10 - a8);
    if ( v17 > 0x7FFFFFFF0000LL || v17 < a8 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( a2 )
  {
    v21 = *a4;
    if ( a5 > *a4 )
    {
      if ( v21 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v21 - a6)) = *a2;
      ++*a4;
    }
  }
  else
  {
    v18 = a8;
    v19 = *a4;
    for ( i = 0; i < 2 && v19 < a5 && v18 < v10 && v18 >= a8 && v10 - v18 >= 4; ++i )
    {
      if ( v19 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v19 - a6)) = *(unsigned int *)v18;
      v18 += 4;
      ++v19;
    }
    *a4 = v19;
    if ( v19 >= a5 )
      return v23;
  }
  v12 = 1;
  for ( j = *a4; j < a5 && a7 < v10; ++j )
  {
    if ( v12 )
    {
      if ( a7 < a8 )
        break;
    }
    else if ( a7 <= a8 )
    {
      break;
    }
    if ( v10 - a7 < 8 )
      break;
    v14 = *(_DWORD *)a7;
    v15 = *(unsigned int *)(a7 + 4LL);
    if ( (unsigned int)v15 < v10 && a8 <= (unsigned int)v15 )
      break;
    v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[18];
    if ( (unsigned int)v15 < 0x10000 || v15 > v16 )
      break;
    if ( j >= a6 )
      *(_QWORD *)(a1 + 8LL * (j - a6)) = *(unsigned int *)(a7 + 4LL);
    if ( a7 >= v14 || (v10 = v24, v14 >= v24) )
    {
      ++j;
      break;
    }
    a7 = v14;
    v12 = 0;
  }
  *a4 = j;
  return v23;
}
