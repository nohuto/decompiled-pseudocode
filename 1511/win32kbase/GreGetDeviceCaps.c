/*
 * XREFs of GreGetDeviceCaps @ 0x1C004AB10
 * Callers:
 *     xxxSetSysColors @ 0x1C0049F7C (xxxSetSysColors.c)
 *     NtGdiGetDeviceCaps @ 0x1C004AB00 (NtGdiGetDeviceCaps.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 *     EnforceColorDependentSettings @ 0x1C006B930 (EnforceColorDependentSettings.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006BB98 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C00CF004 (RIMComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     IsGetColorManagementCapsSupported_0 @ 0x1C00013B8 (IsGetColorManagementCapsSupported_0.c)
 *     GetColorManagementCapsWrap_0 @ 0x1C00013C0 (GetColorManagementCapsWrap_0.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0038360 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     EngMulDiv @ 0x1C0048860 (EngMulDiv.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall GreGetDeviceCaps(int a1, int a2)
{
  unsigned int v2; // edi
  __int16 v4; // r15d^2
  __int64 v5; // rbp
  __int64 v6; // rsi
  char *v7; // rbx
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  signed __int32 v11; // eax
  unsigned int v12; // edx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v14; // ax
  __int64 v15; // rcx
  int v16; // r14d
  PERESOURCE v17; // rdx
  __int64 v18; // rbx
  int v19; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // edx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v26; // esi
  int v27; // ecx
  INT v28; // r9d
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD v33[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-3Ch]
  int v35; // [rsp+40h] [rbp-38h]
  int v36; // [rsp+80h] [rbp+8h] BYREF
  __int64 v37; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v4 = HIWORD(a1);
  v33[0] = 0LL;
  v33[1] = 0LL;
  v5 = 0LL;
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    goto LABEL_28;
  v6 = (unsigned __int16)a1;
  v7 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v36);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v9 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v10 = *(_QWORD *)(v9 + 72);
  else
    v10 = 0LL;
LABEL_6:
  _m_prefetchw(v7 + 8);
  v11 = *((_DWORD *)v7 + 2);
  v12 = v11 & 0xFFFFFFFE;
  v34 = v11;
  if ( ((v11 & 0xFFFFFFFE) == (v36 & 0xFFFFFFFC) || !v12 || v10 && v12 == *(_DWORD *)(v10 + 8)) && (v7[15] & 0x20) == 0 )
  {
    while ( (v7[15] & 0x40) == 0 )
    {
      if ( (v11 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      v35 = v11 | 1;
      if ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v7 + 2, v11 | 1, v11) || (v7[15] & 0x40) != 0 )
        goto LABEL_6;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v6) = 0LL;
      v7[15] |= 0x40u;
      _m_prefetchw(v7 + 8);
      v34 = *((_DWORD *)v7 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v7 + 2, v34);
      v11 = v34;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v6, 0LL);
    if ( v7[14] == 1 && *((_WORD *)v7 + 6) == v4 )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = *(_QWORD *)v7;
      v14 = *(_WORD *)(*(_QWORD *)v7 + 12LL);
      if ( !v14 || *(struct _KTHREAD **)(v5 + 16) == CurrentThread )
      {
        *(_QWORD *)(v5 + 16) = CurrentThread;
        *(_WORD *)(v5 + 12) = v14 + 1;
      }
      else
      {
        v5 = 0LL;
      }
    }
    if ( (v7[15] & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v6);
    }
    else
    {
      _m_prefetchw(v7 + 8);
      v34 = *((_DWORD *)v7 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v7 + 2, v34);
    }
    KeLeaveCriticalRegion();
LABEL_28:
    v33[0] = v5;
    if ( !v5 )
      return v2;
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v33) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v33[0] + 12LL));
      return v2;
    }
    v5 = v33[0];
    if ( !v33[0] )
      return v2;
    if ( ((a2 - 8) & 0xFFFFFFFD) != 0 )
    {
      v16 = 0;
    }
    else
    {
      v17 = ghsemDynamicModeChange;
      v16 = 1;
      if ( ghsemDynamicModeChange )
      {
        ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
        v17 = ghsemDynamicModeChange;
      }
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v17);
    }
    v18 = *(_QWORD *)(v5 + 48);
    v19 = -1;
    v37 = v18;
    if ( a2 == 88 )
    {
      v2 = *(_DWORD *)(v18 + 2200);
    }
    else
    {
      if ( a2 != 90 )
      {
        if ( a2 > 0 )
        {
          switch ( a2 )
          {
            case 2:
              v2 = *(_DWORD *)(v18 + 2164);
              break;
            case 4:
              v20 = *(_DWORD *)(v18 + 2168);
              goto LABEL_49;
            case 6:
              v20 = *(_DWORD *)(v18 + 2172);
LABEL_49:
              v15 = (unsigned int)(v20 + 500);
              v2 = (unsigned int)v15 / 0x3E8;
              break;
            case 8:
            case 118:
              v2 = *(_DWORD *)(v18 + 2176);
              break;
            case 10:
            case 117:
              v2 = *(_DWORD *)(v18 + 2180);
              break;
            case 12:
              v2 = *(_DWORD *)(v18 + 2184);
              if ( v2 == 15 )
                v2 = 16;
              break;
            case 14:
              v2 = *(_DWORD *)(v18 + 2188);
              break;
            case 16:
              goto LABEL_57;
            case 18:
              v21 = *(_DWORD *)(v18 + 2192);
              if ( v21 == -1 )
LABEL_57:
                v2 = -1;
              else
                v2 = 5 * v21;
              break;
            case 22:
              v2 = PDEVOBJ::cFonts((PDEVOBJ *)&v37);
              break;
            case 24:
              v2 = *(_DWORD *)(v18 + 2192);
              break;
            case 28:
              v2 = 511;
              break;
            case 30:
              v2 = 254;
              break;
            case 32:
              v2 = 255;
              break;
            case 34:
              v22 = *(_DWORD *)(v18 + 2208);
              if ( *(_DWORD *)(v18 + 2164) )
                v22 |= 0x4000u;
              v2 = v22 | 0x1800;
              break;
            case 36:
              v2 = 1;
              break;
            case 38:
              v2 = *(_DWORD *)(v18 + 2196);
              break;
            case 40:
              v2 = *(_DWORD *)(v18 + 2224);
              break;
            case 42:
              v2 = *(_DWORD *)(v18 + 2228);
              break;
            case 44:
              v2 = *(_DWORD *)(v18 + 2232);
              break;
            case 94:
              EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
              v23 = *(_QWORD *)(v18 + 2600);
              if ( ((v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
              {
                v24 = *(_DWORD *)(v23 + 160);
                if ( (v24 & 8) != 0 )
                  v2 = 0x4000;
                if ( (v24 & 0x2000000) != 0 )
                  v2 |= 0x8000u;
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
              GreReleaseSemaphoreInternal(ghsemDriverMgmt);
              break;
            case 104:
              v2 = *(_DWORD *)(v18 + 2264);
              break;
            case 106:
              v2 = 20;
              break;
            case 108:
              v2 = *(_DWORD *)(v18 + 2212) + *(_DWORD *)(v18 + 2216) + *(_DWORD *)(v18 + 2220);
              break;
            case 110:
              v2 = *(_DWORD *)(v18 + 2256);
              break;
            case 111:
              v2 = *(_DWORD *)(v18 + 2260);
              break;
            case 112:
              v2 = *(_DWORD *)(v18 + 2248);
              break;
            case 113:
              v2 = *(_DWORD *)(v18 + 2252);
              break;
            case 116:
              v2 = *(_DWORD *)(v18 + 2408);
              break;
            case 119:
              v2 = *(_DWORD *)(v18 + 2412);
              break;
            case 120:
              v2 = *(_DWORD *)(v18 + 2464);
              break;
            case 121:
              if ( (int)IsGetColorManagementCapsSupported_0() >= 0 )
                GetColorManagementCapsWrap_0();
              break;
            default:
              break;
          }
        }
        else
        {
          switch ( a2 )
          {
            case 0:
              v2 = *(_DWORD *)(v18 + 2160);
              goto LABEL_113;
            case -2147483648:
              v2 = *(_DWORD *)(v18 + 2168);
              goto LABEL_113;
            case -2147483646:
              v2 = *(_DWORD *)(v18 + 2172);
              goto LABEL_113;
          }
        }
        if ( ((a2 - 8) & 0xFFFFFFFD) == 0 )
          goto LABEL_94;
LABEL_113:
        if ( v16 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
        }
        goto LABEL_115;
      }
      v2 = *(_DWORD *)(v18 + 2204);
    }
LABEL_94:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
    if ( CurrentProcessWin32Process )
    {
      v26 = *(_DWORD *)(CurrentProcessWin32Process + 776);
      if ( (v26 & 0x4000) != 0 )
        v19 = 2;
      else
        v19 = (v26 >> 13) & 1;
    }
    v27 = *(_DWORD *)(v18 + 56);
    if ( (v27 & 1) != 0 && v19 != 2 )
    {
      if ( v19 == 1 )
        v28 = *(_DWORD *)(v18 + 2204);
      else
        v28 = 96;
      if ( ((a2 - 88) & 0xFFFFFFFD) != 0 )
      {
        v29 = *(_DWORD *)(v18 + 2488);
        if ( !v29 )
        {
          if ( (v27 & 0x20000) == 0
            || (v30 = *(_QWORD *)(v5 + 48), (*(_DWORD *)(v30 + 56) & 0x20000) == 0)
            || (v31 = *(_QWORD *)(*(_QWORD *)(v30 + 1824) + 40LL)) == 0
            || (*(_DWORD *)(v31 + 56) & 1) == 0
            || (v29 = *(_DWORD *)(v31 + 2488)) == 0 )
          {
            v29 = 100;
          }
        }
        v2 = EngMulDiv(v2, v28, (96 * v29 + 50) / 0x64u);
      }
      else
      {
        v2 = v28;
      }
    }
    goto LABEL_113;
  }
  KeLeaveCriticalRegion();
  v33[0] = 0LL;
LABEL_115:
  if ( v5 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v33);
    _InterlockedDecrement((volatile signed __int32 *)(v33[0] + 12LL));
  }
  return v2;
}
