/*
 * XREFs of _GetIconSize @ 0x1C0097BA8
 * Callers:
 *     NtUserDrawIconEx @ 0x1C00511F0 (NtUserDrawIconEx.c)
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     _InternalGetIconInfo @ 0x1C0095874 (_InternalGetIconInfo.c)
 *     NtUserGetIconSize @ 0x1C00E7D70 (NtUserGetIconSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GetIconSize(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // rcx
  int v23; // ecx

  *a2 = *(_DWORD *)(a1 + 140);
  *a3 = *(_DWORD *)(a1 + 144);
  result = PsGetCurrentProcessWin32Process(a1);
  if ( (*(_DWORD *)(result + 776) & 0x2000) == 0 )
  {
    result = PsGetCurrentProcessWin32Process(v7);
    if ( (*(_DWORD *)(result + 776) & 0x4000) == 0 )
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
            if ( (unsigned int)IsDPIAbsoluteSysMet(0xBuLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) == 0 )
              {
LABEL_10:
                v10 = (_DWORD *)(gpsi + 2312LL);
                goto LABEL_11;
              }
            }
            else if ( IsDPIDWMSysMet(v8)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1 )
            {
              goto LABEL_10;
            }
            if ( IsDPIDWMSysMet(0xBuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v18 = 0)
                : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v18) )
            {
              v10 = (_DWORD *)(gpsi + 2700LL);
            }
            else
            {
              v10 = (_DWORD *)(gpsi + 1924LL);
            }
LABEL_11:
            *a2 = *v10;
            if ( (unsigned int)IsDPIAbsoluteSysMet(0xCuLL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0 )
              {
LABEL_14:
                v13 = (_DWORD *)(gpsi + 2316LL);
LABEL_15:
                result = (unsigned int)(2 * *v13);
                *a3 = result;
                return result;
              }
            }
            else if ( IsDPIDWMSysMet(v11)
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
                   && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) == 0
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                   && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1 )
            {
              goto LABEL_14;
            }
            if ( IsDPIDWMSysMet(0xCuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                ? (v23 = 0)
                : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1),
                  v23) )
            {
              v13 = (_DWORD *)(gpsi + 2704LL);
            }
            else
            {
              v13 = (_DWORD *)(gpsi + 1928LL);
            }
            goto LABEL_15;
          }
        }
      }
    }
  }
  return result;
}
