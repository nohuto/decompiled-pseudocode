/*
 * XREFs of RIMStoreFrameNodes @ 0x1C00C9870
 * Callers:
 *     RIMProcessPointerEvent @ 0x1C00C9674 (RIMProcessPointerEvent.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     RIMFindHoldingFrame @ 0x1C007B830 (RIMFindHoldingFrame.c)
 *     EtwTraceBeginPointerFrameCreation @ 0x1C00AB730 (EtwTraceBeginPointerFrameCreation.c)
 *     RIMAbandonHoldingFrame @ 0x1C00C93D4 (RIMAbandonHoldingFrame.c)
 *     RIMStartHoldingFrame @ 0x1C00C97F4 (RIMStartHoldingFrame.c)
 *     RIMStoreRawDataBlock @ 0x1C00C9A2C (RIMStoreRawDataBlock.c)
 */

__int64 __fastcall RIMStoreFrameNodes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _OWORD *a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v24; // r9
  __int128 v25; // xmm1
  __int64 v26; // rcx

  v8 = a4;
  v14 = RIMFindHoldingFrame(a1, a2);
  if ( !v14 )
  {
    v15 = Win32AllocPoolZInit(0x50uLL);
    v14 = v15;
    if ( !v15 )
      return 0LL;
    v15[2] = *(_QWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a1 + 712);
    *v15 = v13;
    v15[1] = a1 + 712;
    if ( *(_QWORD *)(v13 + 8) != a1 + 712 )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = v15;
    *(_QWORD *)(a1 + 712) = v15;
  }
  v16 = *((_DWORD *)v14 + 8);
  if ( v16 )
  {
    v20 = v16 - *((_DWORD *)v14 + 9);
    if ( (unsigned int)v8 > v20 || a5 != v20 - (_DWORD)v8 )
    {
      RIMAbandonHoldingFrame(v13, v12, (__int64)v14);
      return 0LL;
    }
  }
  else
  {
    EtwTraceBeginPointerFrameCreation(0, v8, a5);
    if ( !(unsigned int)RIMStartHoldingFrame(v18, v17, (__int64)v14, a3, v8, a5) )
      return 0LL;
  }
  v21 = RIMStoreRawDataBlock(v13, v12, v14, a7, a8);
  v22 = v14[8] + 168LL * *((unsigned int *)v14 + 9);
  if ( (_DWORD)v8 )
  {
    v24 = v8;
    do
    {
      *(_OWORD *)(v22 + 8) = *a6;
      *(_OWORD *)(v22 + 24) = a6[1];
      *(_OWORD *)(v22 + 40) = a6[2];
      *(_OWORD *)(v22 + 56) = a6[3];
      *(_OWORD *)(v22 + 72) = a6[4];
      *(_OWORD *)(v22 + 88) = a6[5];
      *(_OWORD *)(v22 + 104) = a6[6];
      *(_OWORD *)(v22 + 120) = a6[7];
      *(_OWORD *)(v22 + 136) = a6[8];
      v25 = a6[9];
      *(_DWORD *)v22 = v21;
      *(_OWORD *)(v22 + 152) = v25;
      ++*((_DWORD *)v14 + 9);
      if ( (*(_DWORD *)(v22 + 28) & 0x2000) != 0 )
      {
        v26 = v14[9];
        if ( v26 )
        {
          if ( *(_DWORD *)(v22 + 16) != 5 )
            *(_DWORD *)(v26 + 28) &= ~0x2000u;
        }
        v14[9] = v22;
      }
      v22 += 168LL;
      a6 += 10;
      --v24;
    }
    while ( v24 );
  }
  return 1LL;
}
