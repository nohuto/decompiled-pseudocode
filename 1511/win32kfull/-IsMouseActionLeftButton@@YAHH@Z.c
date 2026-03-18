/*
 * XREFs of ?IsMouseActionLeftButton@@YAHH@Z @ 0x1C023A270
 * Callers:
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C023B028 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall IsMouseActionLeftButton(unsigned int a1)
{
  unsigned __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v10; // rcx

  v3 = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v2) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x4000) != 0 )
    {
      goto LABEL_4;
    }
LABEL_15:
    v10 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_20;
  }
  if ( IsDPIDWMSysMet(v2)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_15;
  }
LABEL_4:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v6 = 0)
      : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1),
        v6) )
  {
    v10 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v10 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_20:
  if ( *v10 )
    LOBYTE(v3) = a1 == 0;
  else
    return a1;
  return v3;
}
