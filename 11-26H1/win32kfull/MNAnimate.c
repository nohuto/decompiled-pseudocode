/*
 * XREFs of MNAnimate @ 0x14000ED10
 * Callers:
 *     MNGetPopupFromMenu @ 0x14000EA1C (MNGetPopupFromMenu.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     MNDestroyAnimationBitmap @ 0x1402D07DC (MNDestroyAnimationBitmap.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall MNAnimate(__int64 *a1, __int64 a2)
{
  int v2; // edi
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  _QWORD *UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  int v11; // r12d
  unsigned int *v12; // r14
  int v13; // r15d
  __int64 DpiMetricsForCurrentThread; // rax
  unsigned int v15; // edx
  __int64 v16; // rt2
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r9
  int v20; // r10d
  int v21; // edi
  int v22; // ecx
  int v23; // ebx
  __int64 v24; // rcx

  v2 = a2;
  result = W32GetUserSessionState(a1, a2);
  if ( (*(_DWORD *)(result + 43056) & 0x10) != 0 )
  {
    if ( !v2 )
      return StopFade();
    return result;
  }
  if ( !a1[12] )
    return result;
  v6 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 26);
  if ( !v2
    || v6 > 0xA5
    || (UserSessionState = (_QWORD *)W32GetUserSessionState(0xFFFFF78000000004uLL, v5),
        result = ExIsFastResourceContended(*UserSessionState),
        (_BYTE)result) )
  {
    GreBitBltInternal(
      a1[12],
      0LL,
      0LL,
      *((unsigned int *)a1 + 29),
      *((_DWORD *)a1 + 30),
      a1[17],
      0,
      0,
      -2134114272,
      0xFFFFFF,
      0);
LABEL_24:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(a1[12]);
    v24 = *a1;
    a1[12] = 0LL;
    return FindTimer(*(_QWORD *)(v24 + 56), 65531, 0, 1, 0LL);
  }
  v10 = (_DWORD *)a1 + 27;
  v11 = *((_DWORD *)a1 + 27);
  v12 = (unsigned int *)a1 + 27;
  v13 = *((_DWORD *)a1 + 28);
  if ( (a1[1] & 0x180000) != 0 )
  {
    DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v9, v8, 8LL);
    v9 = *((unsigned int *)a1 + 29);
    v15 = (int)(*(_DWORD *)(DpiMetricsForCurrentThread + 8) * v6 + 4) >> 31;
    LODWORD(DpiMetricsForCurrentThread) = *(_DWORD *)(DpiMetricsForCurrentThread + 8) * v6 + 4;
    v8 = v15;
    v16 = __SPAIR64__(v15, DpiMetricsForCurrentThread) % 8;
    LODWORD(result) = __SPAIR64__(v15, DpiMetricsForCurrentThread) / 8;
    LODWORD(v8) = v16;
    result = (unsigned int)result;
    *v10 = result;
    if ( (int)result > (int)v9 )
    {
      *v10 = v9;
      v12 = (unsigned int *)a1 + 27;
    }
  }
  if ( (a1[1] & 0x600000) != 0 )
  {
    v17 = GetDpiMetricsForCurrentThread(v9, v8, 8LL);
    v18 = *((_DWORD *)a1 + 30);
    result = (unsigned int)((int)(*(_DWORD *)(v17 + 12) * v6 + 8) / 16);
    *((_DWORD *)a1 + 28) = result;
    if ( (int)result > v18 )
      *((_DWORD *)a1 + 28) = v18;
  }
  v19 = (unsigned int)*v10;
  if ( (_DWORD)v19 != v11 || *((_DWORD *)a1 + 28) != v13 )
  {
    v20 = 0;
    v21 = *((_DWORD *)a1 + 28);
    if ( ((*((_DWORD *)a1 + 2) >> 19) & 8) == 0 )
      v20 = *((_DWORD *)a1 + 30) - v21;
    v22 = 0;
    v23 = (*((_DWORD *)a1 + 2) >> 19) & 2;
    if ( !v23 )
      v22 = *((_DWORD *)a1 + 29) - v19;
    GreBitBltInternal(
      a1[12],
      (*((_DWORD *)a1 + 29) - (_DWORD)v19) & (unsigned int)-(v23 != 0),
      (*((_DWORD *)a1 + 30) - v21) & (unsigned int)-(((*((_DWORD *)a1 + 2) >> 19) & 8) != 0),
      v19,
      v21,
      a1[17],
      v22,
      v20,
      -2134114272,
      0xFFFFFF,
      0);
    result = *v12;
    if ( *((_DWORD *)a1 + 29) == (_DWORD)result )
    {
      result = *((unsigned int *)a1 + 28);
      if ( *((_DWORD *)a1 + 30) == (_DWORD)result )
        goto LABEL_24;
    }
  }
  return result;
}
