/*
 * XREFs of ?IsMouseActionLeftButton@@YAHH@Z @ 0x1C0231D64
 * Callers:
 *     ?xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0232B3C (-xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall IsMouseActionLeftButton(unsigned int a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _DWORD *v29; // rcx

  v6 = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x17uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v3, v2, v4, v5) & 0xF) != 0 )
      goto LABEL_3;
LABEL_13:
    v29 = (_DWORD *)(gpsi + 2360LL);
    goto LABEL_18;
  }
  if ( IsDPIDWMSysMet(v3)
    && (W32GetCurrentThreadDpiAwarenessContext(v19, v18, v20, v21) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_13;
  }
LABEL_3:
  if ( IsDPIDWMSysMet(0x17uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 408)
      ? (v17 = 0)
      : (v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v17) )
  {
    v29 = (_DWORD *)(gpsi + 2748LL);
  }
  else
  {
    v29 = (_DWORD *)(gpsi + 1972LL);
  }
LABEL_18:
  if ( *v29 )
    LOBYTE(v6) = a1 == 0;
  else
    return a1;
  return v6;
}
