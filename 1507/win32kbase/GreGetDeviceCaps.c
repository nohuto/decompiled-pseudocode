/*
 * XREFs of GreGetDeviceCaps @ 0x1C0056DB0
 * Callers:
 *     xxxSetSysColors @ 0x1C0025244 (xxxSetSysColors.c)
 *     NtGdiGetDeviceCaps @ 0x1C0056DA0 (NtGdiGetDeviceCaps.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     EnforceColorDependentSettings @ 0x1C005A3A0 (EnforceColorDependentSettings.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005A4BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     RIMComputeVirtualDesktopPhysicalSize @ 0x1C00CDC94 (RIMComputeVirtualDesktopPhysicalSize.c)
 * Callees:
 *     IsGetColorManagementCapsSupported_0 @ 0x1C0001418 (IsGetColorManagementCapsSupported_0.c)
 *     GetColorManagementCapsWrap_0 @ 0x1C0001420 (GetColorManagementCapsWrap_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C0034950 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     EngMulDiv @ 0x1C0056650 (EngMulDiv.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDeviceCaps(HDC a1, int a2)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rbx
  int v11; // edi
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v13; // edi
  int v14; // ecx
  INT v15; // r9d
  PERESOURCE v17; // rdx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v8 = v27[0];
  if ( !v27[0] )
    goto LABEL_17;
  if ( ((a2 - 8) & 0xFFFFFFFD) != 0 )
  {
    v9 = 0;
  }
  else
  {
    v17 = ghsemDynamicModeChange;
    v9 = 1;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v17 = ghsemDynamicModeChange;
    }
    EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)v17, v6);
    v8 = v27[0];
  }
  v10 = *(_QWORD *)(v8 + 48);
  v11 = -1;
  v28 = v10;
  if ( a2 == 88 )
  {
    v3 = *(_DWORD *)(v10 + 2200);
LABEL_6:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4, v6, v7, v27[0], v27[1]);
    if ( CurrentProcessWin32Process )
    {
      v13 = *(_DWORD *)(CurrentProcessWin32Process + 776);
      if ( (v13 & 0x4000) != 0 )
        v11 = 2;
      else
        v11 = (v13 >> 13) & 1;
    }
    v14 = *(_DWORD *)(v10 + 56);
    if ( (v14 & 1) != 0 && v11 != 2 )
    {
      if ( v11 == 1 )
        v15 = *(_DWORD *)(v10 + 2204);
      else
        v15 = 96;
      if ( ((a2 - 88) & 0xFFFFFFFD) != 0 )
      {
        v18 = *(_DWORD *)(v10 + 2488);
        if ( !v18 )
        {
          if ( (v14 & 0x20000) == 0
            || (v25 = *(_QWORD *)(v27[0] + 48LL), (*(_DWORD *)(v25 + 56) & 0x20000) == 0)
            || (v26 = *(_QWORD *)(*(_QWORD *)(v25 + 1824) + 40LL)) == 0
            || (*(_DWORD *)(v26 + 56) & 1) == 0
            || (v18 = *(_DWORD *)(v26 + 2488)) == 0 )
          {
            v18 = 100;
          }
        }
        v3 = EngMulDiv(v3, v15, (96 * v18 + 50) / 0x64u);
      }
      else
      {
        v3 = v15;
      }
    }
    goto LABEL_15;
  }
  if ( a2 == 90 )
  {
    v3 = *(_DWORD *)(v10 + 2204);
    goto LABEL_6;
  }
  if ( a2 <= 0 )
  {
    switch ( a2 )
    {
      case 0:
        v3 = *(_DWORD *)(v10 + 2160);
        goto LABEL_15;
      case -2147483648:
        v3 = *(_DWORD *)(v10 + 2168);
        goto LABEL_15;
      case -2147483646:
        v3 = *(_DWORD *)(v10 + 2172);
        goto LABEL_15;
    }
  }
  else
  {
    v4 = 0x1C0000000uLL;
    switch ( a2 )
    {
      case 2:
        v3 = *(_DWORD *)(v10 + 2164);
        break;
      case 4:
        v19 = *(_DWORD *)(v10 + 2168);
        goto LABEL_35;
      case 6:
        v19 = *(_DWORD *)(v10 + 2172);
LABEL_35:
        v5 = (unsigned int)(v19 + 500);
        LODWORD(v4) = (274877907 * (unsigned __int64)(unsigned int)v5) >> 32;
        v3 = (unsigned int)v5 / 0x3E8;
        break;
      case 8:
      case 118:
        v3 = *(_DWORD *)(v10 + 2176);
        break;
      case 10:
      case 117:
        v3 = *(_DWORD *)(v10 + 2180);
        break;
      case 12:
        v3 = *(_DWORD *)(v10 + 2184);
        if ( v3 == 15 )
          v3 = 16;
        break;
      case 14:
        v3 = *(_DWORD *)(v10 + 2188);
        break;
      case 16:
        goto LABEL_58;
      case 18:
        v23 = *(_DWORD *)(v10 + 2192);
        if ( v23 == -1 )
LABEL_58:
          v3 = -1;
        else
          v3 = 5 * v23;
        break;
      case 22:
        v3 = PDEVOBJ::cFonts((PDEVOBJ *)&v28);
        break;
      case 24:
        v3 = *(_DWORD *)(v10 + 2192);
        break;
      case 28:
        v3 = 511;
        break;
      case 30:
        v3 = 254;
        break;
      case 32:
        v3 = 255;
        break;
      case 34:
        v24 = *(_DWORD *)(v10 + 2208);
        if ( *(_DWORD *)(v10 + 2164) )
          v24 |= 0x4000u;
        v3 = v24 | 0x1800;
        break;
      case 36:
        v3 = 1;
        break;
      case 38:
        v3 = *(_DWORD *)(v10 + 2196);
        break;
      case 40:
        v3 = *(_DWORD *)(v10 + 2224);
        break;
      case 42:
        v3 = *(_DWORD *)(v10 + 2228);
        break;
      case 44:
        v3 = *(_DWORD *)(v10 + 2232);
        break;
      case 94:
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        v21 = *(_QWORD *)(v10 + 2600);
        if ( ((v21 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        {
          v22 = *(_DWORD *)(v21 + 160);
          if ( (v22 & 8) != 0 )
            v3 = 0x4000;
          if ( (v22 & 0x2000000) != 0 )
            v3 |= 0x8000u;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v20);
        GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
        break;
      case 104:
        v3 = *(_DWORD *)(v10 + 2264);
        break;
      case 106:
        v3 = 20;
        break;
      case 108:
        v3 = *(_DWORD *)(v10 + 2212) + *(_DWORD *)(v10 + 2216) + *(_DWORD *)(v10 + 2220);
        break;
      case 110:
        v3 = *(_DWORD *)(v10 + 2256);
        break;
      case 111:
        v3 = *(_DWORD *)(v10 + 2260);
        break;
      case 112:
        v3 = *(_DWORD *)(v10 + 2248);
        break;
      case 113:
        v3 = *(_DWORD *)(v10 + 2252);
        break;
      case 116:
        v3 = *(_DWORD *)(v10 + 2408);
        break;
      case 119:
        v3 = *(_DWORD *)(v10 + 2412);
        break;
      case 120:
        v3 = *(_DWORD *)(v10 + 2464);
        break;
      case 121:
        if ( (int)IsGetColorManagementCapsSupported_0() >= 0 )
          GetColorManagementCapsWrap_0();
        break;
      default:
        break;
    }
  }
  if ( a2 == 8 || a2 == 10 )
    goto LABEL_6;
LABEL_15:
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v6);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
LABEL_17:
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return v3;
}
