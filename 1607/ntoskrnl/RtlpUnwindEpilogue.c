/*
 * XREFs of RtlpUnwindEpilogue @ 0x1400B1AE0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F0A0 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x1400B0FB8 (RtlVirtualUnwind.c)
 *     RtlpVirtualUnwind @ 0x1400F125C (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400F2B50 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x1400B1C9C (RtlpUnwindOpSlots.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        _QWORD *a8)
{
  unsigned int v8; // r13d
  int v11; // ebp
  _BYTE *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  _WORD *v17; // rbp
  __int16 v18; // ax
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8

  v8 = a3;
  v11 = 0;
  while ( 1 )
  {
    v12 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int8)v12[2];
    v14 = 0LL;
    if ( v12[2] )
    {
      do
      {
        v15 = *(unsigned __int16 *)&v12[2 * v14 + 4];
        if ( (v15 & 0xF00) == 0 )
          break;
        if ( (BYTE1(v15) & 0xF) == 0xA )
          break;
        v14 = (unsigned int)RtlpUnwindOpSlots(v15, a2, a3, a4) + (unsigned int)v14;
      }
      while ( (unsigned int)v14 < v13 );
      if ( (unsigned int)v14 < v13 )
        goto LABEL_8;
    }
    if ( (*v12 & 0x20) == 0 )
    {
LABEL_8:
      v16 = 0;
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_15;
      v17 = &v12[2 * (unsigned int)v14 + 4];
      while ( 1 )
      {
        v18 = HIBYTE(*v17);
        v19 = (unsigned __int8)v18 >> 4;
        if ( (v18 & 0xF) != 0 )
          break;
        if ( v16 >= v8 )
        {
          v23 = *(_QWORD *)(a5 + 152);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v23 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a7 && (v23 < *a7 || v23 > *a8 - 8LL) )
            return 3221225512LL;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 8 * v19 + 120) = *(_QWORD *)v23;
          if ( a6 )
            *(_QWORD *)(a6 + 8 * v19 + 128) = v23;
        }
        ++v16;
        if ( (unsigned int)v19 >= 8 )
          ++v16;
        v14 = (unsigned int)(v14 + 1);
        ++v17;
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_15;
      }
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_15;
      if ( (HIBYTE(*v17) & 0xF) == 2 && !(_DWORD)v19 )
      {
        if ( v16 >= v8 )
          *(_QWORD *)(a5 + 152) += 8LL;
        v14 = (unsigned int)(v14 + 1);
      }
      if ( (unsigned int)v14 < v13 && (HIBYTE(*(_WORD *)&v12[2 * v14 + 4]) & 0xF) == 0xA )
      {
        v24 = *(_QWORD *)(a5 + 152);
        v25 = v24 + 24;
        if ( a2 <= 0x7FFFFFFEFFFFLL && (v24 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !a7 || v24 >= *a7 && v24 <= *a8 - 8LL )
        {
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v25 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( !a7 || v25 >= *a7 && v25 <= *a8 - 8LL )
          {
            *(_QWORD *)(a5 + 248) = *(_QWORD *)v24;
            *(_QWORD *)(a5 + 152) = *(_QWORD *)v25;
            return 0LL;
          }
        }
      }
      else
      {
LABEL_15:
        v20 = *(_QWORD *)(a5 + 152);
        if ( a2 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !a7 || v20 >= *a7 && v20 <= *a8 - 8LL )
        {
          v21 = *(_QWORD *)v20;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 248) = v21;
          return 0LL;
        }
      }
      return 3221225512LL;
    }
    if ( (unsigned int)++v11 > 0x20 )
      return 3221225727LL;
    if ( (v13 & 1) != 0 )
      ++v13;
    a4 = &v12[2 * v13 + 4];
  }
}
