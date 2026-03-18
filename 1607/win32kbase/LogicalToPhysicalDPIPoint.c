/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C0035330
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0037B00 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     Is_MonitorFromPointSupported_0 @ 0x1C00027D0 (Is_MonitorFromPointSupported_0.c)
 *     _MonitorFromPoint_0 @ 0x1C00027D8 (_MonitorFromPoint_0.c)
 *     IsDCELogicalSpeedTopLevelHitTestSupported_0 @ 0x1C00027E0 (IsDCELogicalSpeedTopLevelHitTestSupported_0.c)
 *     DCELogicalSpeedTopLevelHitTest_0 @ 0x1C00027E8 (DCELogicalSpeedTopLevelHitTest_0.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C0037BB0 (MonitorFlagsFromDpiAwarenessContext.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00B91F4 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // r14d
  unsigned int v6; // ebx
  int v9; // ebp
  _QWORD *ThreadWin32Thread; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v14; // ebp
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int16 v21; // r8
  int v22; // edi
  int v23; // r10d
  int v24; // esi
  int v25; // r11d
  __int64 v26; // r10
  unsigned __int64 v27; // rdx
  int v28; // esi
  int v29; // ebx
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  unsigned __int8 v33; // si
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbp
  unsigned __int64 v38; // rdx
  int v39; // r8d
  unsigned __int64 v40; // rdx
  __int64 v41; // rsi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v43; // eax
  __int64 v44; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v6 = a3;
  if ( (a3 & 0xE0) == 0 )
  {
    LOBYTE(v9) = 18;
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v12 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v12 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v12 + 340) )
        {
          LOBYTE(v9) = *(_DWORD *)(v12 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
          if ( CurrentProcessWin32Process )
            v9 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
    v14 = v9 & 0xF;
    v15 = 0;
    if ( v14 == 1 )
    {
      v15 = 128;
    }
    else if ( v14 )
    {
      if ( v14 == 2 )
        v15 = 32;
    }
    else
    {
      v15 = 64;
    }
    v6 |= v15;
  }
  if ( (v6 & 3) == 0 )
    v6 |= 2u;
  if ( (v6 & 0x20) != 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
    {
      v44 = *a4;
    }
    else
    {
      v44 = 0LL;
      a4 = &v44;
    }
    if ( (v6 & 0x100) != 0 && !*a4 && *(_DWORD *)(gpDispInfo + 80) > 1u )
    {
      v33 = DpiAwarenessContextFromMonitorFlags(v6);
      v34 = IsDCELogicalSpeedTopLevelHitTestSupported_0();
      if ( v34 >= 0 )
      {
        v35 = DCELogicalSpeedTopLevelHitTest_0();
        if ( v35 )
        {
          if ( ((v33 ^ *(_BYTE *)(v35 + 352)) & 0xF) == 0 )
          {
            v37 = 0LL;
            v38 = *(_QWORD *)(v35 + 344);
            v39 = (unsigned __int16)v38;
            if ( (unsigned __int64)(unsigned __int16)v38 < *((_QWORD *)gpsi + 1) )
            {
              v40 = v38 >> 16;
              v41 = qword_1C011A128 + (unsigned int)(v39 * dword_1C011A130);
              if ( ((_WORD)v40 == *(_WORD *)(v41 + 18)
                 || (_WORD)v40 == 0xFFFF
                 || !(_WORD)v40 && PsGetCurrentProcessWow64Process(v36))
                && (*(_BYTE *)(v41 + 17) & 1) == 0
                && *(_BYTE *)(v41 + 16) == 12 )
              {
                v37 = *(_QWORD *)v41;
              }
            }
            *a4 = v37;
          }
        }
      }
    }
    if ( (v6 & 0xE0) == 0 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v6 |= MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    }
    if ( (v6 & 3) == 0 )
      v6 |= 2u;
    if ( (v6 & 0x20) != 0 || (int)Is_MonitorFromPointSupported_0() < 0 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a2;
    }
    else
    {
      if ( !a4 || (v16 = *a4) == 0 )
        v16 = MonitorFromPoint_0();
      if ( a4 )
        *a4 = v16;
      LOBYTE(v17) = v6;
      if ( (v6 & 0xE0) == 0 )
      {
        v43 = W32GetCurrentThreadDpiAwarenessContext();
        v17 = v6 | MonitorFlagsFromDpiAwarenessContext(v43);
      }
      if ( (v17 & 3) == 0 )
        LOBYTE(v17) = v17 | 2;
      if ( (v17 & 0x40) != 0 )
      {
        v18 = (__int64 *)(v16 + 44);
      }
      else if ( (v17 & 0x80u) == 0 )
      {
        v18 = (__int64 *)(v16 + 28);
      }
      else
      {
        v18 = (__int64 *)(v16 + 60);
      }
      v19 = *v18;
      v20 = *(_QWORD *)(v16 + 28);
      v44 = v19;
      if ( (v6 & 0x40) != 0 )
        v21 = 96;
      else
        v21 = *((_WORD *)gpsi + 4339);
      v4 = 1;
      v22 = *(unsigned __int16 *)(v16 + 154);
      v23 = *(_DWORD *)a2 - v19;
      v24 = 1;
      if ( v23 < 0 )
      {
        v24 = -1;
        v23 = v19 - *(_DWORD *)a2;
      }
      v25 = 0x80000000;
      if ( v21
        && ((v26 = v21 / 2 + v22 * (__int64)v23, v21 != 96LL) ? (v27 = v26 / v21) : (v27 = v26 / 96), v27 <= 0x7FFFFFFF) )
      {
        if ( v24 <= 0 )
          LODWORD(v27) = -(int)v27;
      }
      else
      {
        LODWORD(v27) = 0x80000000;
        if ( v24 > 0 )
          LODWORD(v27) = 0x7FFFFFFF;
      }
      v28 = 1;
      *(_DWORD *)a1 = v20 + v27;
      v29 = *(_DWORD *)(a2 + 4) - HIDWORD(v44);
      if ( v29 < 0 )
      {
        v28 = -1;
        v29 = HIDWORD(v44) - *(_DWORD *)(a2 + 4);
      }
      if ( v21
        && ((v30 = v21 / 2 + v22 * (__int64)v29, v21 != 96LL) ? (v31 = v30 / v21) : (v31 = v30 / 96), v31 <= 0x7FFFFFFF) )
      {
        v25 = v31;
        if ( v28 <= 0 )
          v25 = -(int)v31;
      }
      else if ( v28 > 0 )
      {
        v25 = 0x7FFFFFFF;
      }
      *(_DWORD *)(a1 + 4) = v25 + HIDWORD(v20);
    }
    return v4;
  }
}
