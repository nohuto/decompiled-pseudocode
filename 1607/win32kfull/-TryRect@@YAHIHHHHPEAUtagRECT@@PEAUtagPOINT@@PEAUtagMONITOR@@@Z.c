/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C013BD50
 * Callers:
 *     FindBestPos @ 0x1C013BA14 (FindBestPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall TryRect(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct tagRECT *a6,
        struct tagPOINT *a7,
        struct tagMONITOR *a8)
{
  int v8; // ebp
  int bottom; // esi
  int right; // r14d
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  int *v24; // rcx
  int v25; // edi
  int v26; // edi
  bool v28; // cc
  bool v29; // cc
  int v30[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = a4;
  bottom = a3;
  right = a2;
  v11 = a1;
  v16 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 408)
      ? (v13 = 0LL)
      : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v13) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 408)
        ? (v23 = 0)
        : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v20,
                                                       v21,
                                                       v22)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v23) )
    {
      v24 = (int *)((char *)a8 + 108);
    }
    else
    {
      v24 = (int *)((char *)a8 + 76);
    }
  }
  else
  {
    v24 = (int *)((char *)a8 + 92);
  }
  if ( !v11 )
  {
    right = a6->left - v8;
    v29 = right < *v24;
LABEL_25:
    if ( !v29 )
      goto LABEL_11;
    return 0LL;
  }
  v25 = v11 - 1;
  if ( !v25 )
  {
    bottom = a6->top - a5;
    v29 = bottom < v24[1];
    goto LABEL_25;
  }
  v26 = v25 - 1;
  if ( v26 )
  {
    if ( v26 != 1 )
    {
LABEL_11:
      v30[2] = right + v8;
      v30[3] = bottom + a5;
      v30[0] = right;
      a7->x = right;
      a7->y = bottom;
      v30[1] = bottom;
      LOBYTE(v16) = (unsigned int)IntersectRect(v30, v30, &a6->left) == 0;
      return v16;
    }
    bottom = a6->bottom;
    v28 = bottom + a5 <= v24[3];
  }
  else
  {
    right = a6->right;
    v28 = right + v8 <= v24[2];
  }
  if ( v28 )
    goto LABEL_11;
  return 0LL;
}
