/*
 * XREFs of RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C8588
 * Callers:
 *     RIMCompleteFrame @ 0x1C00C84FC (RIMCompleteFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMFindHoldingFrame @ 0x1C007806C (RIMFindHoldingFrame.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00A7190 (EtwTraceBeginPointerFrameCommit.c)
 *     RIMReclaimHoldingFrame @ 0x1C00C88A8 (RIMReclaimHoldingFrame.c)
 */

__int64 __fastcall RIMGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rdi
  int v5; // r8d
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // esi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdx
  _OWORD *v14; // rcx
  __int64 i; // r8
  __int64 v16; // r9
  _OWORD *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  int v20; // eax
  unsigned int v21; // eax
  __int64 result; // rax

  v4 = RIMFindHoldingFrame(a1, a2);
  EtwTraceBeginPointerFrameCommit(0, *((_DWORD *)v4 + 8), v5);
  v6 = v4[6];
  v7 = 0;
  while ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 4);
    v6 = *(_QWORD *)(v6 + 16);
    v7 += ((v8 + 7) & 0xFFFFFFF8) + 24;
  }
  v9 = 168 * *((_DWORD *)v4 + 8);
  v10 = v7 + v9 + 96;
  if ( !v10 )
    return 0LL;
  v11 = Win32AllocPoolZInit(v10);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  *(_DWORD *)v11 = v10;
  v11[2] = v11 + 1;
  v13 = 0LL;
  v11[1] = v11 + 1;
  *((_DWORD *)v11 + 6) = *((_DWORD *)v4 + 8);
  v11[4] = v4[2];
  v14 = (_OWORD *)v4[3];
  v11[5] = v14;
  v11[11] = v11 + 12;
  for ( i = v4[8]; (unsigned int)v13 < *((_DWORD *)v4 + 8); i += 168LL )
  {
    v16 = 168LL * (unsigned int)v13;
    v17 = (_OWORD *)(v16 + v11[11]);
    *v17 = *(_OWORD *)i;
    v17[1] = *(_OWORD *)(i + 16);
    v17[2] = *(_OWORD *)(i + 32);
    v17[3] = *(_OWORD *)(i + 48);
    v17[4] = *(_OWORD *)(i + 64);
    v17[5] = *(_OWORD *)(i + 80);
    v17[6] = *(_OWORD *)(i + 96);
    v14 = v17 + 8;
    *(v14 - 1) = *(_OWORD *)(i + 112);
    *v14 = *(_OWORD *)(i + 128);
    v14[1] = *(_OWORD *)(i + 144);
    *((_QWORD *)v14 + 4) = *(_QWORD *)(i + 160);
    if ( i == v4[9] )
    {
      v14 = (_OWORD *)(v16 + v11[11]);
      v11[9] = v14;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  *((_DWORD *)v11 + 7) = *((_DWORD *)v4 + 10);
  if ( v4[6] )
    v11[10] = v11[11] + v9;
  v18 = v4[6];
  v19 = v11[10];
  while ( v18 )
  {
    *(_DWORD *)v19 = *(_DWORD *)v18;
    *(_DWORD *)(v19 + 4) = *(_DWORD *)(v18 + 4);
    *(_QWORD *)(v19 + 8) = v19 + 24;
    memmove((void *)(v19 + 24), *(const void **)(v18 + 8), *(unsigned int *)(v18 + 4));
    v20 = *(_DWORD *)(v18 + 4);
    v13 = v19 + 16;
    *(_QWORD *)(v19 + 16) = 0LL;
    v21 = ((v20 + 7) & 0xFFFFFFF8) + 24;
    if ( *(_QWORD *)(v18 + 16) )
    {
      v14 = (_OWORD *)(v19 + v21);
      *(_QWORD *)v13 = v14;
    }
    v19 = *(_QWORD *)v13;
    v18 = *(_QWORD *)(v18 + 16);
  }
  RIMReclaimHoldingFrame(v14, v13, v4);
  result = 1LL;
  *a3 = v12;
  return result;
}
