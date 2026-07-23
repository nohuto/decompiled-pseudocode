/*
 * XREFs of RtlpUnwindEpilogue @ 0x1800A5BD4
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800326C0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x180088E54 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  int v10; // ebp
  __int64 v11; // rbx
  _BYTE *v12; // rsi
  unsigned int v13; // edi
  unsigned __int16 v14; // cx
  unsigned int v16; // r8d
  _WORD *v17; // r15
  __int64 v18; // r10
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // r8
  unsigned __int64 v24; // rax

  v10 = 0;
  while ( 1 )
  {
    v11 = 0LL;
    v12 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v13 = (unsigned __int8)v12[2];
    if ( v12[2] )
    {
      do
      {
        v14 = *(_WORD *)&v12[2 * v11 + 4];
        if ( (v14 & 0xF00) == 0 )
          break;
        if ( (HIBYTE(v14) & 0xF) == 0xA )
          break;
        v11 = (unsigned int)RtlpUnwindOpSlots(v14) + (unsigned int)v11;
      }
      while ( (unsigned int)v11 < v13 );
      if ( (unsigned int)v11 < v13 )
        break;
    }
    if ( (*v12 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v10 > 0x20 )
      return 3221225727LL;
    if ( (v13 & 1) != 0 )
      ++v13;
    a4 = &v12[2 * v13 + 4];
  }
  v16 = 0;
  if ( (unsigned int)v11 >= v13 )
    goto LABEL_25;
  v17 = &v12[2 * v11 + 4];
  while ( 1 )
  {
    v18 = (unsigned __int8)HIBYTE(*v17) >> 4;
    if ( (*v17 & 0xF00) != 0 )
      break;
    if ( v16 >= a3 )
    {
      v19 = *(_QWORD **)(a5 + 152);
      if ( a7 && ((unsigned __int64)v19 < *a7 || (unsigned __int64)v19 > *a8 - 8LL) )
        return 3221225512LL;
      *(_QWORD *)(a5 + 152) = v19 + 1;
      *(_QWORD *)(a5 + 8 * v18 + 120) = *v19;
      if ( a6 )
        *(_QWORD *)(a6 + 8 * v18 + 128) = v19;
    }
    ++v16;
    if ( (unsigned int)v18 >= 8 )
      ++v16;
    v11 = (unsigned int)(v11 + 1);
    ++v17;
    if ( (unsigned int)v11 >= v13 )
      goto LABEL_25;
  }
  if ( (unsigned int)v11 >= v13 )
    goto LABEL_25;
  if ( (HIBYTE(*v17) & 0xF) == 2 && !(_DWORD)v18 )
  {
    if ( v16 >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    v11 = (unsigned int)(v11 + 1);
  }
  if ( (unsigned int)v11 < v13 && (HIBYTE(*(_WORD *)&v12[2 * v11 + 4]) & 0xF) == 0xA )
  {
    v22 = *(_QWORD **)(a5 + 152);
    v23 = v22 + 3;
    if ( !a7
      || (unsigned __int64)v22 >= *a7
      && (v24 = *a8 - 8LL, (unsigned __int64)v22 <= v24)
      && (unsigned __int64)v23 >= *a7
      && (unsigned __int64)v23 <= v24 )
    {
      *(_QWORD *)(a5 + 248) = *v22;
      v21 = (_QWORD *)*v23;
      goto LABEL_29;
    }
  }
  else
  {
LABEL_25:
    v20 = *(_QWORD **)(a5 + 152);
    if ( !a7 || (unsigned __int64)v20 >= *a7 && (unsigned __int64)v20 <= *a8 - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v20;
      v21 = v20 + 1;
LABEL_29:
      *(_QWORD *)(a5 + 152) = v21;
      return 0LL;
    }
  }
  return 3221225512LL;
}
