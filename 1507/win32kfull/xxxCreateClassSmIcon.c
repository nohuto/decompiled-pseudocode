/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C007D888
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetClassIcon @ 0x1C0154854 (xxxSetClassIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C022A194 (xxxRecreateSmallIcons.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxClientCopyImage @ 0x1C007E418 (xxxClientCopyImage.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 *v8; // rax
  int v9; // edx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // ecx

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDPIDWMSysMet(50LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v3 = 0LL)
        : (v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
          (_DWORD)v3) )
    {
      v4 = (_DWORD *)(gpsi + 2856LL);
    }
    else
    {
      v4 = (_DWORD *)(gpsi + 2080LL);
    }
  }
  else
  {
    v4 = (_DWORD *)(gpsi + 2468LL);
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
  {
    if ( (unsigned int)IsDPIDWMSysMet(49LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v12 = 0)
        : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v12) )
    {
      v7 = (_DWORD *)(gpsi + 2852LL);
    }
    else
    {
      v7 = (_DWORD *)(gpsi + 2076LL);
    }
  }
  else
  {
    v7 = (_DWORD *)(gpsi + 2464LL);
  }
  v8 = *(__int64 **)(a1 + 112);
  v9 = (*((_WORD *)v8 + 37) != 3) + 1;
  if ( v8 )
    v8 = (__int64 *)*v8;
  v10 = xxxClientCopyImage((_DWORD)v8, v9, *v7, *v4, 0x4000);
  result = HMAssignmentLock(a1 + 152, v10);
  if ( *(_QWORD *)(a1 + 152) )
    *(_WORD *)(a1 + 34) |= 0x20u;
  return result;
}
