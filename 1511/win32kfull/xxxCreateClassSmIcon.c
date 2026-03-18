/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00F631C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C0223AFC (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C022A494 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     xxxClientCopyImage @ 0x1C0080648 (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // ecx

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x4000) != 0 )
  {
    if ( IsDPIDWMSysMet(0x32uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v3 = 0LL)
        : (v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 244LL) & 1),
          (_DWORD)v3) )
    {
      v4 = (int *)(gpsi + 2856LL);
    }
    else
    {
      v4 = (int *)(gpsi + 2080LL);
    }
  }
  else
  {
    v4 = (int *)(gpsi + 2468LL);
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
  {
    if ( IsDPIDWMSysMet(0x31uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v12 = 0)
        : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v12) )
    {
      v7 = (int *)(gpsi + 2852LL);
    }
    else
    {
      v7 = (int *)(gpsi + 2076LL);
    }
  }
  else
  {
    v7 = (int *)(gpsi + 2464LL);
  }
  v8 = *(_QWORD *)(a1 + 112);
  v9 = (unsigned int)(*(_WORD *)(v8 + 74) != 3) + 1;
  if ( v8 )
    v8 = *(_QWORD *)v8;
  v10 = xxxClientCopyImage(v8, v9, *v7, *v4, 0x4000);
  result = HMAssignmentLock(a1 + 152, v10);
  if ( *(_QWORD *)(a1 + 152) )
    *(_WORD *)(a1 + 34) |= 0x20u;
  return result;
}
