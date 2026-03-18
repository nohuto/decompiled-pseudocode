/*
 * XREFs of _GetIconSize @ 0x1C003BDD8
 * Callers:
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     NtUserDrawIconEx @ 0x1C00B0AD0 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     NtUserGetIconSize @ 0x1C010BDE0 (NtUserGetIconSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall GetIconSize(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // ecx

  *a2 = *(_DWORD *)(a1 + 140);
  *a3 = *(_DWORD *)(a1 + 144);
  result = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3);
  if ( (result & 0xF) == 0 )
  {
    result = atomUSER32;
    if ( *(_WORD *)(a1 + 72) == atomUSER32 )
    {
      result = *(unsigned int *)(gpsi + 1924LL);
      if ( *a2 == (_DWORD)result )
      {
        result = (unsigned int)(2 * *(_DWORD *)(gpsi + 1928LL));
        if ( *a3 == (_DWORD)result )
        {
          if ( (unsigned int)IsDPIAbsoluteSysMet(11LL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9) & 0xF) == 0 )
            {
LABEL_8:
              v10 = (_DWORD *)(gpsi + 2312LL);
              goto LABEL_9;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v8)
                 && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17) & 0xF) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                              + 244LL) & 1 )
          {
            goto LABEL_8;
          }
          if ( (unsigned int)IsDPIDWMSysMet(11LL)
            && (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v22 = 0)
              : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v22) )
          {
            v10 = (_DWORD *)(gpsi + 2700LL);
          }
          else
          {
            v10 = (_DWORD *)(gpsi + 1924LL);
          }
LABEL_9:
          *a2 = *v10;
          if ( (unsigned int)IsDPIAbsoluteSysMet(12LL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13) & 0xF) == 0 )
            {
LABEL_11:
              v14 = (_DWORD *)(gpsi + 2316LL);
LABEL_12:
              result = (unsigned int)(2 * *v14);
              *a3 = result;
              return result;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v12)
                 && (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25) & 0xF) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                              + 244LL) & 1 )
          {
            goto LABEL_11;
          }
          if ( (unsigned int)IsDPIDWMSysMet(12LL)
            && (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v30 = 0)
              : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v30) )
          {
            v14 = (_DWORD *)(gpsi + 2704LL);
          }
          else
          {
            v14 = (_DWORD *)(gpsi + 1928LL);
          }
          goto LABEL_12;
        }
      }
    }
  }
  return result;
}
