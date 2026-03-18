/*
 * XREFs of GreGetDeviceCaps @ 0x1C0034D30
 * Callers:
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C0005CF4 (RIMComputeVirtualDesktopPhysicalSize.c)
 *     NtGdiGetDeviceCaps @ 0x1C0034D20 (NtGdiGetDeviceCaps.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0056368 (-UpdateUserScreen@@YAHH@Z.c)
 *     EnforceColorDependentSettings @ 0x1C0057AC0 (EnforceColorDependentSettings.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005834C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     xxxSetSysColors @ 0x1C005B018 (xxxSetSysColors.c)
 * Callees:
 *     IsGetColorManagementCapsSupported_0 @ 0x1C0001428 (IsGetColorManagementCapsSupported_0.c)
 *     GetColorManagementCapsWrap_0 @ 0x1C0001430 (GetColorManagementCapsWrap_0.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0031FB0 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     EngMulDiv @ 0x1C0038200 (EngMulDiv.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00BCF30 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  int v6; // r12d
  __int64 v7; // rbx
  int v8; // r15d
  int v9; // ecx
  int v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 CurrentProcessWin32Process; // rax
  int v19; // edx
  int v20; // r15d
  INT v21; // r9d
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v26; // [rsp+20h] [rbp-30h] BYREF
  int v27; // [rsp+28h] [rbp-28h]
  int v28; // [rsp+2Ch] [rbp-24h]
  _BYTE v29[32]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+90h] [rbp+40h] BYREF

  v2 = 0;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v29);
  XDCOBJ::vLock((XDCOBJ *)&v26, a1);
  v5 = v26;
  if ( !v26 )
    goto LABEL_133;
  if ( ((a2 - 8) & 0xFFFFFFFD) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange");
    v5 = v26;
  }
  v7 = *(_QWORD *)(v5 + 48);
  LOBYTE(v8) = 18;
  v30 = v7;
  if ( a2 <= 36 )
  {
    if ( a2 == 36 )
    {
      v2 = 1;
      goto LABEL_131;
    }
    if ( a2 > 16 )
    {
      if ( a2 != 18 )
      {
        if ( a2 != 20 )
        {
          if ( a2 == 22 )
          {
            v11 = PDEVOBJ::cFonts((PDEVOBJ *)&v30);
LABEL_129:
            v2 = v11;
            goto LABEL_131;
          }
          if ( a2 == 24 )
          {
            v2 = *(_DWORD *)(v7 + 2192);
            goto LABEL_131;
          }
          if ( a2 != 26 )
          {
            switch ( a2 )
            {
              case 28:
                v2 = 511;
                goto LABEL_131;
              case 30:
                v2 = 254;
                goto LABEL_131;
              case 32:
                v2 = 255;
                goto LABEL_131;
              case 34:
                v10 = *(_DWORD *)(v7 + 2208);
                if ( *(_DWORD *)(v7 + 2164) )
                  v10 |= 0x4000u;
                v2 = v10 | 0x1800;
                goto LABEL_131;
            }
            goto LABEL_96;
          }
        }
        v2 = 0;
        goto LABEL_131;
      }
      v12 = *(_DWORD *)(v7 + 2192);
      if ( v12 != -1 )
      {
        v2 = 5 * v12;
        goto LABEL_131;
      }
    }
    else if ( a2 != 16 )
    {
      if ( a2 <= 6 )
      {
        switch ( a2 )
        {
          case 6:
            v9 = *(_DWORD *)(v7 + 2172);
            goto LABEL_19;
          case -2147483648:
            v2 = *(_DWORD *)(v7 + 2168);
            goto LABEL_131;
          case -2147483646:
            v2 = *(_DWORD *)(v7 + 2172);
            goto LABEL_131;
          case 0:
            v2 = *(_DWORD *)(v7 + 2160);
            goto LABEL_131;
          case 2:
            v2 = *(_DWORD *)(v7 + 2164);
            goto LABEL_131;
          case 4:
            v9 = *(_DWORD *)(v7 + 2168);
LABEL_19:
            v2 = (v9 + 500) / 0x3E8u;
            goto LABEL_131;
        }
        goto LABEL_96;
      }
      switch ( a2 )
      {
        case 8:
          v2 = *(_DWORD *)(v7 + 2176);
          break;
        case 10:
          v2 = *(_DWORD *)(v7 + 2180);
          break;
        case 12:
          v2 = *(_DWORD *)(v7 + 2184);
          if ( v2 == 15 )
            v2 = 16;
          goto LABEL_131;
        case 14:
          v2 = *(_DWORD *)(v7 + 2188);
          goto LABEL_131;
        default:
          goto LABEL_96;
      }
      goto LABEL_105;
    }
    v2 = -1;
    goto LABEL_131;
  }
  if ( a2 > 110 )
  {
    switch ( a2 )
    {
      case 'o':
        v2 = *(_DWORD *)(v7 + 2260);
        break;
      case 'p':
        v2 = *(_DWORD *)(v7 + 2248);
        break;
      case 'q':
        v2 = *(_DWORD *)(v7 + 2252);
        break;
      case 't':
        v2 = *(_DWORD *)(v7 + 2408);
        break;
      case 'u':
        v2 = *(_DWORD *)(v7 + 2180);
        break;
      case 'v':
        v2 = *(_DWORD *)(v7 + 2176);
        break;
      case 'w':
        v2 = *(_DWORD *)(v7 + 2412);
        break;
      case 'x':
        v2 = *(_DWORD *)(v7 + 2464);
        break;
      default:
        if ( a2 == 121 && (int)IsGetColorManagementCapsSupported_0() >= 0 )
          GetColorManagementCapsWrap_0();
LABEL_96:
        v2 = 0;
        goto LABEL_131;
    }
    goto LABEL_131;
  }
  if ( a2 == 110 )
  {
    v2 = *(_DWORD *)(v7 + 2256);
    goto LABEL_131;
  }
  if ( a2 > 90 )
  {
    switch ( a2 )
    {
      case '^':
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v13 = *(_QWORD *)(v7 + 2600);
        if ( ((v13 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        {
          v14 = *(_DWORD *)(v13 + 160);
          if ( (v14 & 8) != 0 )
            v2 = 0x4000;
          if ( (v14 & 0x2000000) != 0 )
            v2 |= 0x8000u;
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        goto LABEL_131;
      case 'h':
        v2 = *(_DWORD *)(v7 + 2264);
        goto LABEL_131;
      case 'j':
        v2 = 20;
        goto LABEL_131;
      case 'l':
        v2 = *(_DWORD *)(v7 + 2212) + *(_DWORD *)(v7 + 2216) + *(_DWORD *)(v7 + 2220);
        goto LABEL_131;
    }
    goto LABEL_96;
  }
  switch ( a2 )
  {
    case 'Z':
      v2 = *(_DWORD *)(v7 + 2204);
      break;
    case '&':
      v2 = *(_DWORD *)(v7 + 2196);
      goto LABEL_131;
    case '(':
      v2 = *(_DWORD *)(v7 + 2224);
      goto LABEL_131;
    case '*':
      v2 = *(_DWORD *)(v7 + 2228);
      goto LABEL_131;
    case ',':
      v2 = *(_DWORD *)(v7 + 2232);
      goto LABEL_131;
    case 'X':
      v2 = *(_DWORD *)(v7 + 2200);
      break;
    default:
      goto LABEL_96;
  }
LABEL_105:
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v17 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v17 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v17 + 340) )
      {
        LOBYTE(v8) = *(_DWORD *)(v17 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
        if ( CurrentProcessWin32Process )
          v8 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  v19 = *(_DWORD *)(v30 + 56);
  if ( (v19 & 1) == 0 )
    goto LABEL_131;
  v20 = v8 & 0xF;
  if ( v20 == 2 )
    goto LABEL_131;
  if ( v20 == 1 )
    v21 = *(_DWORD *)(v7 + 2204);
  else
    v21 = 96;
  if ( ((a2 - 88) & 0xFFFFFFFD) != 0 )
  {
    v22 = *(_DWORD *)(v30 + 2488);
    if ( !v22 )
    {
      if ( (v19 & 0x20000) == 0
        || ((v23 = *(_QWORD *)(v26 + 48), (*(_DWORD *)(v23 + 56) & 0x20000) == 0)
          ? (v24 = 0LL)
          : (v24 = *(_QWORD *)(*(_QWORD *)(v23 + 1824) + 40LL)),
            !v24 || (*(_DWORD *)(v24 + 56) & 1) == 0 || (v22 = *(_DWORD *)(v24 + 2488)) == 0) )
      {
        v22 = 100;
      }
    }
    v11 = EngMulDiv(v2, v21, (96 * v22 + 50) / 0x64u);
    goto LABEL_129;
  }
  v2 = v21;
LABEL_131:
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
  }
LABEL_133:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v26);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v29);
  return v2;
}
