/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0022200
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C001FF60 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C001BD58 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001C8B0 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C001C8D8 (GetPathsModality.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 *     DrvBuildDevmodeList @ 0x1C005FCF0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0060040 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0066C94 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rdi
  _QWORD *v10; // rax
  char v11; // r14
  unsigned int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 DeviceFromName; // rax
  PERESOURCE v20; // rdx
  __int64 v21; // r8
  struct PDEV *j; // r15
  __int64 v23; // rcx
  char v24; // di
  __int64 v25; // rdx
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  unsigned __int16 *v30; // r15
  int CcdRawmodeFlag; // eax
  int PathsModality; // eax
  struct _D3DKMT_GETPATHSMODALITY *v33; // r12
  unsigned int i; // edx
  __int64 v35; // rcx
  unsigned __int16 v36; // ax
  unsigned int k; // r8d
  __int64 v38; // rdx
  _DWORD *v39; // r9
  int v40; // r10d
  int v41; // r11d
  PERESOURCE v42; // rdx
  __int64 v43; // r8
  struct PDEV *m; // rax
  __int64 v45; // rcx
  _DWORD *v46; // rax
  _DWORD *v47; // r15
  __int64 v48; // r15
  unsigned int v49; // r9d
  unsigned __int16 v50; // ax
  size_t v51; // r12
  unsigned __int16 v52; // ax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int16 v55; // [rsp+30h] [rbp-68h]
  int PreferredMode; // [rsp+34h] [rbp-64h]
  struct _D3DKMT_GETPATHSMODALITY *v57; // [rsp+38h] [rbp-60h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v58; // [rsp+40h] [rbp-58h] BYREF
  __int64 v59; // [rsp+48h] [rbp-50h]
  __int64 v61; // [rsp+A0h] [rbp+8h]
  int v62; // [rsp+B0h] [rbp+18h]

  PreferredMode = -1073741585;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v10[3] = a1;
  v10[4] = a2;
  v59 = a3;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  v11 = 1;
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v55 = *(_WORD *)(a4 + 70);
  LOWORD(v12) = v55;
  ProbeForWrite((volatile void *)a4, v55 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    v18 = a1;
    if ( a1 )
    {
      DeviceFromName = DrvGetDeviceFromName(a1, 1LL);
      v9 = DeviceFromName;
      if ( DeviceFromName && !*(_QWORD *)(DeviceFromName + 136) && (*(_DWORD *)(DeviceFromName + 160) & 0x6000008) == 0 )
        v9 = 0LL;
    }
    else if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 2600);
    }
    if ( v9 )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)v9);
          break;
        case 0xFFFFFFFE:
          v30 = (unsigned __int16 *)PALLOCMEM2(0x100DBuLL);
          if ( v30 )
          {
            if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
            {
              v57 = 0LL;
              CcdRawmodeFlag = GetCcdRawmodeFlag();
              PathsModality = GetPathsModality(1LL, &v57, CcdRawmodeFlag | 0xFu, 0);
              v33 = v57;
              if ( PathsModality < 0 )
              {
                PreferredMode = PathsModality;
LABEL_42:
                v11 = 0;
              }
              else
              {
                for ( i = 0; i < *((unsigned __int16 *)v57 + 10); ++i )
                {
                  v35 = 216LL * i;
                  v61 = v35;
                  if ( *(_DWORD *)(v9 + 272) == *(_DWORD *)((char *)v57 + v35 + 64)
                    && *(_DWORD *)(v9 + 264) == *(_DWORD *)((char *)v57 + v35 + 56)
                    && *(_DWORD *)(v9 + 268) == *(_DWORD *)((char *)v57 + v35 + 60) )
                  {
                    memmove(
                      v30,
                      *(const void **)((char *)v57 + v35 + 224),
                      *(unsigned __int16 *)(*(_QWORD *)((char *)v57 + v35 + 224) + 70LL) + 220LL);
                    if ( *(_DWORD *)((char *)v33 + v61 + 92) == -2 && *(_DWORD *)((char *)v33 + v61 + 96) == -2 )
                      *((_DWORD *)v30 + 46) = 64;
                    PreferredMode = 0;
                    goto LABEL_42;
                  }
                }
              }
              FreePathsModality(v33);
            }
            if ( v11 )
            {
              *((_DWORD *)v30 + 17) = -8739;
              PreferredMode = DrvGetDisplayDriverParameters(v9, v30, 0LL, 0LL, 0LL);
            }
            if ( PreferredMode >= 0 )
            {
              v36 = v30[35];
              if ( v55 < v36 )
                v36 = v55;
              LOWORD(v12) = v36;
              memmove((void *)(a4 + 220), v30 + 110, v36);
              *(_OWORD *)a4 = *(_OWORD *)v30;
              *(_OWORD *)(a4 + 16) = *((_OWORD *)v30 + 1);
              *(_OWORD *)(a4 + 32) = *((_OWORD *)v30 + 2);
              *(_OWORD *)(a4 + 48) = *((_OWORD *)v30 + 3);
              *(_OWORD *)(a4 + 64) = *((_OWORD *)v30 + 4);
              *(_OWORD *)(a4 + 80) = *((_OWORD *)v30 + 5);
              *(_OWORD *)(a4 + 96) = *((_OWORD *)v30 + 6);
              *(_OWORD *)(a4 + 112) = *((_OWORD *)v30 + 7);
              *(_OWORD *)(a4 + 128) = *((_OWORD *)v30 + 8);
              *(_OWORD *)(a4 + 144) = *((_OWORD *)v30 + 9);
              *(_OWORD *)(a4 + 160) = *((_OWORD *)v30 + 10);
              *(_OWORD *)(a4 + 176) = *((_OWORD *)v30 + 11);
              *(_OWORD *)(a4 + 192) = *((_OWORD *)v30 + 12);
              *(_QWORD *)(a4 + 208) = *((_QWORD *)v30 + 26);
              *(_DWORD *)(a4 + 216) = *((_DWORD *)v30 + 54);
            }
            Win32FreePool(v30);
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          v20 = ghsemDynamicModeChange;
          if ( ghsemDynamicModeChange )
          {
            ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
            v20 = ghsemDynamicModeChange;
          }
          EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)v20, v15);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
          for ( j = gppdevList; j; j = (struct PDEV *)*((_QWORD *)j + 3) )
          {
            v23 = *((_QWORD *)j + 325);
            if ( v23 == v9 && *((_DWORD *)j + 9) )
            {
              v24 = 0;
              if ( *(_DWORD *)(*((_QWORD *)j + 327) + 184LL) == 1 && (*(_DWORD *)(v23 + 160) & 0x800000) != 0 )
              {
                v58 = 0LL;
                if ( (int)GetPathsModality(0LL, &v58, 0x40u, 0) >= 0 )
                {
                  for ( k = 0; k < *((unsigned __int16 *)v58 + 10); ++k )
                  {
                    v38 = 216LL * k;
                    v39 = (_DWORD *)*((_QWORD *)j + 325);
                    if ( v39[68] == *(_DWORD *)((char *)v58 + v38 + 64)
                      && v39[66] == *(_DWORD *)((char *)v58 + v38 + 56)
                      && v39[67] == *(_DWORD *)((char *)v58 + v38 + 60) )
                    {
                      if ( *(_DWORD *)((char *)v58 + v38 + 92) != -2
                        || (v24 = 1, *(_DWORD *)((char *)v58 + v38 + 96) != -2) )
                      {
                        v24 = 0;
                      }
                      break;
                    }
                  }
                  FreePathsModality(v58);
                }
              }
              v25 = *((_QWORD *)j + 327);
              v26 = *(_WORD *)(v25 + 70);
              if ( v55 < v26 )
                v26 = v55;
              LOWORD(v12) = v26;
              memmove((void *)(a4 + 220), (const void *)(v25 + 220), v26);
              v27 = *((_QWORD *)j + 327);
              *(_OWORD *)a4 = *(_OWORD *)v27;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v27 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v27 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v27 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v27 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v27 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v27 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v27 + 112);
              v27 += 128LL;
              *(_OWORD *)(a4 + 128) = *(_OWORD *)v27;
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v27 + 16);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v27 + 32);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v27 + 48);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v27 + 64);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v27 + 80);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v27 + 88);
              if ( v24 )
                *(_DWORD *)(a4 + 184) = 64;
              *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
              PreferredMode = 0;
              break;
            }
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v21);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v28);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)v9);
          v40 = 0;
          v62 = 0;
          v41 = a5 & 4;
          if ( (a5 & 4) == 0 )
          {
            if ( gProtocolType )
            {
              v42 = ghsemDynamicModeChange;
              if ( ghsemDynamicModeChange )
              {
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
                v42 = ghsemDynamicModeChange;
              }
              EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)v42, v15);
              for ( m = gppdevList; m; m = (struct PDEV *)*((_QWORD *)m + 3) )
              {
                if ( *((_QWORD *)m + 325) == v9 && *((_DWORD *)m + 9) )
                {
                  v45 = *((_QWORD *)m + 327);
                  if ( (*(_DWORD *)(v45 + 72) & 0x80u) != 0 )
                    v62 = *(_DWORD *)(v45 + 84);
                  break;
                }
              }
              EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v43);
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            }
            else
            {
              v46 = (_DWORD *)PALLOCMEM2(0x100DBuLL);
              v47 = v46;
              if ( v46 )
              {
                memset(v46, 0, 0xDCuLL);
                v47[17] = 56797;
                if ( (int)DrvGetDisplayDriverParameters(v9, v47, 0LL, 0LL, 0LL) >= 0 && (v47[18] & 0x80u) != 0 )
                  v62 = v47[21];
                Win32FreePool(v47);
              }
            }
            v40 = v62;
            v41 = a5 & 4;
          }
          if ( *(_DWORD *)(v9 + 176) && *(_QWORD *)(v9 + 184) )
          {
            v48 = 0LL;
            PreferredMode = -1073741584;
            v49 = *(_DWORD *)(v9 + 192);
            if ( a3 < v49 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v48 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16 * v59 + 8);
LABEL_105:
                LOWORD(v12) = v55;
              }
              else
              {
                v13 = 0LL;
                v15 = 0LL;
                while ( (unsigned int)v13 < v49 )
                {
                  if ( (a5 & 2) != 0
                    || (v18 = 2LL * (unsigned int)v13, !*(_DWORD *)(*(_QWORD *)(v9 + 200) + 16LL * (unsigned int)v13)) )
                  {
                    if ( v41
                      || (v18 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16LL * (unsigned int)v13 + 8),
                          *(_DWORD *)(v18 + 84) == v40) )
                    {
                      if ( (_DWORD)v15 == a3 )
                      {
                        _mm_lfence();
                        v18 = 2LL * (unsigned int)v13;
                        v48 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16LL * (unsigned int)v13 + 8);
                        goto LABEL_105;
                      }
                      v15 = (unsigned int)(v15 + 1);
                    }
                  }
                  v13 = (unsigned int)(v13 + 1);
                }
              }
            }
            if ( v48 )
            {
              v50 = *(_WORD *)(v48 + 70);
              if ( (unsigned __int16)v12 < v50 )
                v50 = v12;
              v12 = v50;
              v51 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v48 + *(unsigned __int16 *)(v48 + 68)), v12);
              v52 = *(_WORD *)(v48 + 68);
              if ( v52 <= 0xDCu )
                v51 = v52;
              memmove((void *)a4, (const void *)v48, v51);
              if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 && *(_DWORD *)(v48 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v53 = WdLogNewEntry5_WdTrace(v18, v13, v15);
            WdLogEvent5_WdTrace(v53);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(v9 + 176) = 0;
            v54 = *(_QWORD *)(v9 + 184);
            if ( v54 )
            {
              Win32FreePool(v54);
              *(_QWORD *)(v9 + 184) = 0LL;
            }
            v18 = *(_QWORD *)(v9 + 200);
            if ( v18 )
            {
              Win32FreePool(v18);
              *(_QWORD *)(v9 + 200) = 0LL;
            }
            *(_DWORD *)(v9 + 192) = 0;
          }
          break;
      }
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v12;
    v29 = WdLogNewEntry5_WdTrace(v18, v13, v15);
    *(_QWORD *)(v29 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v29);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v16 = WdLogNewEntry5_WdTrace(v14, v13, v15);
    WdLogEvent5_WdTrace(v16);
    return 3221225507LL;
  }
}
