/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00AB5D8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C0224654 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0229754 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxClientCopyImage @ 0x1C00A9BF0 (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx

  if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3, a4) & 0xF) != 0 )
  {
    if ( IsDPIDWMSysMet(0x32uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7, v8) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8) + 408)
        ? (v6 = 0LL)
        : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1),
          (_DWORD)v6) )
    {
      v9 = (int *)(gpsi + 2856LL);
    }
    else
    {
      v9 = (int *)(gpsi + 2080LL);
    }
  }
  else
  {
    v9 = (int *)(gpsi + 2468LL);
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v6, v5, v7, v8) & 0xF) != 0 )
  {
    if ( IsDPIDWMSysMet(0x31uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12, v13) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 408)
        ? (v25 = 0)
        : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v22,
                                                       v23,
                                                       v24)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v25) )
    {
      v14 = (int *)(gpsi + 2852LL);
    }
    else
    {
      v14 = (int *)(gpsi + 2076LL);
    }
  }
  else
  {
    v14 = (int *)(gpsi + 2464LL);
  }
  v15 = *(_QWORD *)(a1 + 112);
  v16 = (unsigned int)(*(_WORD *)(v15 + 74) != 3) + 1;
  if ( v15 )
    v15 = *(_QWORD *)v15;
  v17 = xxxClientCopyImage(v15, v16, *v14, *v9, 0x4000);
  result = HMAssignmentLock(a1 + 152, v17);
  if ( *(_QWORD *)(a1 + 152) )
    *(_WORD *)(a1 + 34) |= 0x20u;
  return result;
}
