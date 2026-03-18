/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00796A4
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C000C984 (SpbCheckRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C007A248 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00D5880 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01C4368 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  int v4; // r14d
  int v5; // esi
  int v6; // edi
  __int64 v7; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *v18; // rcx
  HRGN EmptyRgn; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx

  v2 = 0;
  v3 = *((_QWORD *)a1 + 5);
  v4 = 0;
  v5 = *((_DWORD *)a1 + 7) - 1;
  if ( v5 < 0 )
    return 0;
  do
  {
    *(_QWORD *)(v3 + 96) = 0LL;
    v6 = *(_DWORD *)(v3 + 32);
    if ( !*(_QWORD *)v3 )
      goto LABEL_9;
    LOBYTE(a2) = 1;
    v7 = HMValidateHandleNoSecure(*(_QWORD *)v3, a2);
    if ( !v7 || !(unsigned int)IsStillWindowC(*(HWND *)(v3 + 8)) )
    {
      *(_QWORD *)v3 = 0LL;
      *(_DWORD *)(v3 + 32) = 6159;
      goto LABEL_9;
    }
    if ( *(_QWORD *)(gpDispInfo + 72LL) && (v6 & 8) == 0 )
      SpbCheckRect((struct tagWND *)v7, (struct tagRECT *)(v7 + 112), 1u);
    ++v2;
    if ( (v6 & 0x18E7) != 0x1807 )
      v4 = 1;
    if ( (*(_DWORD *)(v3 + 32) & 8) == 0 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x51uLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11) & 0xF) == 0 )
        {
LABEL_31:
          v18 = (_DWORD *)(gpsi + 2592LL);
          goto LABEL_17;
        }
      }
      else if ( IsDPIDWMSysMet(v10)
             && (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14) & 0xF) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v23,
                                                      v24,
                                                      v25)
                                                  + 408)
                                      + 8LL)
                          + 244LL) & 1 )
      {
        goto LABEL_31;
      }
      if ( IsDPIDWMSysMet(0x51uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29) + 408)
          ? (v33 = 0)
          : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v30,
                                                         v31,
                                                         v32)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v33) )
      {
        v18 = (_DWORD *)(gpsi + 2980LL);
      }
      else
      {
        v18 = (_DWORD *)(gpsi + 2204LL);
      }
LABEL_17:
      if ( !*v18 )
        PreventInterMonitorBlts((struct tagCVR *)v3);
      *(_DWORD *)(v3 + 88) = 0;
      EmptyRgn = (HRGN)CreateEmptyRgn();
      *(_QWORD *)(v3 + 96) = EmptyRgn;
      if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn((struct tagWND *)v7, EmptyRgn) )
        *(_DWORD *)(v3 + 88) = 2;
    }
LABEL_9:
    v3 += 168LL;
    --v5;
  }
  while ( v5 >= 0 );
  if ( !v4 )
    return 0;
  return v2;
}
