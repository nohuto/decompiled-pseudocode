/*
 * XREFs of ?LogQMsgMiPWorker@@YAHPEAUtagQMSG_HISTORY@@IPEBUtagMSG@@KH@Z @ 0x1C00E4368
 * Callers:
 *     ?_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z @ 0x1C006BFD0 (-_LogQMsgMiP@@YAXIPEBUtagMSG@@K@Z.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall LogQMsgMiPWorker(
        struct tagQMSG_HISTORY *a1,
        int a2,
        const struct tagMSG *a3,
        int a4,
        unsigned int a5)
{
  unsigned int v7; // ebp
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  int *v12; // rax
  int v14; // edx

  ++*(_DWORD *)a1;
  v7 = a5;
  v9 = (char *)a1 + 168 * (((unsigned __int16)*(_DWORD *)a1 - 1) & 0x1FF);
  if ( a5 == -1 )
    v7 = *(_DWORD *)a1;
  memset(v9 + 8, 0, 0xA8uLL);
  *((_DWORD *)v9 + 25) = v7;
  if ( a3 )
  {
    *(_OWORD *)(v9 + 8) = *(_OWORD *)a3;
    *(_OWORD *)(v9 + 24) = *((_OWORD *)a3 + 1);
    *(_OWORD *)(v9 + 40) = *((_OWORD *)a3 + 2);
  }
  *((_DWORD *)v9 + 14) = a4;
  *((_QWORD *)v9 + 8) = gptiCurrent;
  v10 = *(_QWORD *)(gptiCurrent + 392LL);
  *((_QWORD *)v9 + 9) = v10;
  *((_DWORD *)v9 + 24) = *(_DWORD *)(v10 + 332);
  *((_DWORD *)v9 + 28) = a2;
  *((_QWORD *)v9 + 13) = *(_QWORD *)(gptiCurrent + 1084LL);
  v11 = gMiPTracking;
  *((_QWORD *)v9 + 10) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 384LL);
  *((_QWORD *)v9 + 11) = v11;
  *((_DWORD *)v9 + 29) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v12 = *(int **)(gptiCurrent + 1120LL);
  if ( v12 )
  {
    *((_DWORD *)v9 + 30) ^= (*((_DWORD *)v9 + 30) ^ (*v12 >> 1)) & 1;
    v14 = *((_DWORD *)v9 + 30) ^ (*((_DWORD *)v9 + 30) ^ (**(int **)(gptiCurrent + 1120LL) >> 1)) & 2;
    *((_DWORD *)v9 + 30) = v14;
    *((_DWORD *)v9 + 30) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(**(int **)(gptiCurrent + 1120LL) >> 2)) & 4;
  }
  RtlWalkFrameChain((PVOID *)v9 + 16, 6u, 0x200u);
  return v7;
}
