/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0134DEC
 * Callers:
 *     FindBestPos @ 0x1C0134B7C (FindBestPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 */

__int64 __fastcall TryRect(
        __int64 a1,
        int right,
        int bottom,
        int a4,
        int a5,
        struct tagRECT *a6,
        struct tagPOINT *a7,
        struct tagMONITOR *a8)
{
  int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // ecx
  int *v15; // rcx
  int v16; // edi
  int v17; // edi
  bool v19; // cc
  bool v20; // cc
  int v21[6]; // [rsp+20h] [rbp-18h] BYREF

  v11 = a1;
  v13 = 0;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v12 = 0LL)
      : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v12) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v14 = 0)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v14) )
    {
      v15 = (int *)((char *)a8 + 108);
    }
    else
    {
      v15 = (int *)((char *)a8 + 76);
    }
  }
  else
  {
    v15 = (int *)((char *)a8 + 92);
  }
  if ( !v11 )
  {
    right = a6->left - a4;
    v20 = right < *v15;
LABEL_26:
    if ( !v20 )
      goto LABEL_11;
    return 0LL;
  }
  v16 = v11 - 1;
  if ( !v16 )
  {
    bottom = a6->top - a5;
    v20 = bottom < v15[1];
    goto LABEL_26;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    if ( v17 != 1 )
    {
LABEL_11:
      v21[2] = right + a4;
      v21[3] = bottom + a5;
      v21[0] = right;
      a7->x = right;
      a7->y = bottom;
      v21[1] = bottom;
      LOBYTE(v13) = (unsigned int)IntersectRect(v21, v21, &a6->left) == 0;
      return v13;
    }
    bottom = a6->bottom;
    v19 = bottom + a5 <= v15[3];
  }
  else
  {
    right = a6->right;
    v19 = right + a4 <= v15[2];
  }
  if ( v19 )
    goto LABEL_11;
  return 0LL;
}
