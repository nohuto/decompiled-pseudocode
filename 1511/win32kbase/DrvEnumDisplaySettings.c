/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0050C50
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C0050B70 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C0043830 (DrvGetDeviceFromName.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0052548 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     sub_1C0052570 @ 0x1C0052570 (sub_1C0052570.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00526A8 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     DrvBuildDevmodeList @ 0x1C0058F50 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00592A0 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006022C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(UNICODE_STRING *a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  wchar_t *v9; // rdi
  _QWORD *v10; // rax
  char v11; // r14
  unsigned int v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rcx
  wchar_t *DeviceFromName; // rax
  PERESOURCE v18; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C j; // r15
  __int64 v20; // rcx
  char v21; // di
  __int64 v22; // rdx
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int16 *v26; // r15
  unsigned int CcdRawmodeFlag; // eax
  int v28; // eax
  struct _D3DKMT_GETPATHSMODALITY *v29; // r12
  unsigned int i; // edx
  __int64 v31; // rcx
  unsigned __int16 v32; // ax
  unsigned int k; // r8d
  __int64 v34; // rdx
  _DWORD *v35; // r9
  int v36; // r10d
  int v37; // r11d
  PERESOURCE v38; // rdx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C m; // rax
  __int64 v40; // rcx
  _DWORD *v41; // rax
  _DWORD *v42; // r15
  __int64 v43; // r15
  unsigned int v44; // r9d
  unsigned int v45; // edx
  int v46; // r8d
  unsigned __int16 v47; // ax
  size_t v48; // r12
  unsigned __int16 v49; // ax
  __int64 v50; // rax
  unsigned __int16 v51; // [rsp+30h] [rbp-68h]
  int PreferredMode; // [rsp+34h] [rbp-64h]
  struct _D3DKMT_GETPATHSMODALITY *v53; // [rsp+38h] [rbp-60h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v54; // [rsp+40h] [rbp-58h] BYREF
  __int64 v55; // [rsp+48h] [rbp-50h]
  __int64 v57; // [rsp+A0h] [rbp+8h]
  int v58; // [rsp+B0h] [rbp+18h]

  PreferredMode = -1073741585;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v10[3] = a1;
  v10[4] = a2;
  v55 = a3;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  v11 = 1;
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v51 = *(_WORD *)(a4 + 70);
  LOWORD(v12) = v51;
  ProbeForWrite((volatile void *)a4, v51 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    v16 = (__int64)a1;
    if ( a1 )
    {
      DeviceFromName = DrvGetDeviceFromName(a1, 1);
      v9 = DeviceFromName;
      if ( DeviceFromName && !*((_QWORD *)DeviceFromName + 17) && (*((_DWORD *)DeviceFromName + 40) & 0x6000008) == 0 )
        v9 = 0LL;
    }
    else if ( a2 )
    {
      v9 = *(wchar_t **)(a2 + 2600);
    }
    if ( v9 )
    {
      switch ( a3 )
      {
        case 0xFFFFFFFD:
          PreferredMode = DrvGetPreferredMode((struct _devicemodeW *)a4, (struct tagGRAPHICS_DEVICE *)v9);
          break;
        case 0xFFFFFFFE:
          v26 = (unsigned __int16 *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
          if ( v26 )
          {
            if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
            {
              v53 = 0LL;
              CcdRawmodeFlag = GetCcdRawmodeFlag();
              v28 = sub_1C0052570(1LL, &v53, CcdRawmodeFlag | 0xF, 0LL);
              v29 = v53;
              if ( v28 < 0 )
              {
                PreferredMode = v28;
LABEL_42:
                v11 = 0;
              }
              else
              {
                for ( i = 0; i < *((unsigned __int16 *)v53 + 10); ++i )
                {
                  v31 = 216LL * i;
                  v57 = v31;
                  if ( *((_DWORD *)v9 + 68) == *(_DWORD *)((char *)v53 + v31 + 64)
                    && *((_DWORD *)v9 + 66) == *(_DWORD *)((char *)v53 + v31 + 56)
                    && *((_DWORD *)v9 + 67) == *(_DWORD *)((char *)v53 + v31 + 60) )
                  {
                    memmove(
                      v26,
                      *(const void **)((char *)v53 + v31 + 224),
                      *(unsigned __int16 *)(*(_QWORD *)((char *)v53 + v31 + 224) + 70LL) + 220LL);
                    if ( *(_DWORD *)((char *)v29 + v57 + 92) == -2 && *(_DWORD *)((char *)v29 + v57 + 96) == -2 )
                      *((_DWORD *)v26 + 46) = 64;
                    PreferredMode = 0;
                    goto LABEL_42;
                  }
                }
              }
              FreePathsModality(v29);
            }
            if ( v11 )
            {
              *((_DWORD *)v26 + 17) = -8739;
              PreferredMode = DrvGetDisplayDriverParameters(v9, v26, 0LL, 0LL, 0LL);
            }
            if ( PreferredMode >= 0 )
            {
              v32 = v26[35];
              if ( v51 < v32 )
                v32 = v51;
              LOWORD(v12) = v32;
              memmove((void *)(a4 + 220), v26 + 110, v32);
              *(_OWORD *)a4 = *(_OWORD *)v26;
              *(_OWORD *)(a4 + 16) = *((_OWORD *)v26 + 1);
              *(_OWORD *)(a4 + 32) = *((_OWORD *)v26 + 2);
              *(_OWORD *)(a4 + 48) = *((_OWORD *)v26 + 3);
              *(_OWORD *)(a4 + 64) = *((_OWORD *)v26 + 4);
              *(_OWORD *)(a4 + 80) = *((_OWORD *)v26 + 5);
              *(_OWORD *)(a4 + 96) = *((_OWORD *)v26 + 6);
              *(_OWORD *)(a4 + 112) = *((_OWORD *)v26 + 7);
              *(_OWORD *)(a4 + 128) = *((_OWORD *)v26 + 8);
              *(_OWORD *)(a4 + 144) = *((_OWORD *)v26 + 9);
              *(_OWORD *)(a4 + 160) = *((_OWORD *)v26 + 10);
              *(_OWORD *)(a4 + 176) = *((_OWORD *)v26 + 11);
              *(_OWORD *)(a4 + 192) = *((_OWORD *)v26 + 12);
              *(_QWORD *)(a4 + 208) = *((_QWORD *)v26 + 26);
              *(_DWORD *)(a4 + 216) = *((_DWORD *)v26 + 54);
            }
            Win32FreePool();
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          v18 = ghsemDynamicModeChange;
          if ( ghsemDynamicModeChange )
          {
            ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
            v18 = ghsemDynamicModeChange;
          }
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v18);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          for ( j = WPP_MAIN_CB.DeviceQueue.1;
                j;
                j = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&j + 24LL) )
          {
            v20 = *(_QWORD *)(*(_QWORD *)&j + 2600LL);
            if ( (wchar_t *)v20 == v9 && *(_DWORD *)(*(_QWORD *)&j + 36LL) )
            {
              v21 = 0;
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&j + 2616LL) + 184LL) == 1
                && (*(_DWORD *)(v20 + 160) & 0x800000) != 0 )
              {
                v54 = 0LL;
                if ( (int)sub_1C0052570(0LL, &v54, 64LL, 0LL) >= 0 )
                {
                  for ( k = 0; k < *((unsigned __int16 *)v54 + 10); ++k )
                  {
                    v34 = 216LL * k;
                    v35 = *(_DWORD **)(*(_QWORD *)&j + 2600LL);
                    if ( v35[68] == *(_DWORD *)((char *)v54 + v34 + 64)
                      && v35[66] == *(_DWORD *)((char *)v54 + v34 + 56)
                      && v35[67] == *(_DWORD *)((char *)v54 + v34 + 60) )
                    {
                      if ( *(_DWORD *)((char *)v54 + v34 + 92) != -2
                        || (v21 = 1, *(_DWORD *)((char *)v54 + v34 + 96) != -2) )
                      {
                        v21 = 0;
                      }
                      break;
                    }
                  }
                  FreePathsModality(v54);
                }
              }
              v22 = *(_QWORD *)(*(_QWORD *)&j + 2616LL);
              v23 = *(_WORD *)(v22 + 70);
              if ( v51 < v23 )
                v23 = v51;
              LOWORD(v12) = v23;
              memmove((void *)(a4 + 220), (const void *)(v22 + 220), v23);
              v24 = *(_QWORD *)(*(_QWORD *)&j + 2616LL);
              *(_OWORD *)a4 = *(_OWORD *)v24;
              *(_OWORD *)(a4 + 16) = *(_OWORD *)(v24 + 16);
              *(_OWORD *)(a4 + 32) = *(_OWORD *)(v24 + 32);
              *(_OWORD *)(a4 + 48) = *(_OWORD *)(v24 + 48);
              *(_OWORD *)(a4 + 64) = *(_OWORD *)(v24 + 64);
              *(_OWORD *)(a4 + 80) = *(_OWORD *)(v24 + 80);
              *(_OWORD *)(a4 + 96) = *(_OWORD *)(v24 + 96);
              *(_OWORD *)(a4 + 112) = *(_OWORD *)(v24 + 112);
              v24 += 128LL;
              *(_OWORD *)(a4 + 128) = *(_OWORD *)v24;
              *(_OWORD *)(a4 + 144) = *(_OWORD *)(v24 + 16);
              *(_OWORD *)(a4 + 160) = *(_OWORD *)(v24 + 32);
              *(_OWORD *)(a4 + 176) = *(_OWORD *)(v24 + 48);
              *(_OWORD *)(a4 + 192) = *(_OWORD *)(v24 + 64);
              *(_QWORD *)(a4 + 208) = *(_QWORD *)(v24 + 80);
              *(_DWORD *)(a4 + 216) = *(_DWORD *)(v24 + 88);
              if ( v21 )
                *(_DWORD *)(a4 + 184) = 64;
              *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
              PreferredMode = 0;
              break;
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)v9);
          v36 = 0;
          v58 = 0;
          v37 = a5 & 4;
          if ( (a5 & 4) == 0 )
          {
            if ( gProtocolType )
            {
              v38 = ghsemDynamicModeChange;
              if ( ghsemDynamicModeChange )
              {
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
                v38 = ghsemDynamicModeChange;
              }
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v38);
              for ( m = WPP_MAIN_CB.DeviceQueue.1;
                    m;
                    m = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&m + 24LL) )
              {
                if ( *(wchar_t **)(*(_QWORD *)&m + 2600LL) == v9 && *(_DWORD *)(*(_QWORD *)&m + 36LL) )
                {
                  v40 = *(_QWORD *)(*(_QWORD *)&m + 2616LL);
                  if ( (*(_DWORD *)(v40 + 72) & 0x80u) != 0 )
                    v58 = *(_DWORD *)(v40 + 84);
                  break;
                }
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
              GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
            }
            else
            {
              v41 = PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
              v42 = v41;
              if ( v41 )
              {
                memset(v41, 0, 0xDCuLL);
                v42[17] = 56797;
                if ( (int)DrvGetDisplayDriverParameters(v9, v42, 0LL, 0LL, 0LL) >= 0 && (v42[18] & 0x80u) != 0 )
                  v58 = v42[21];
                Win32FreePool();
              }
            }
            v36 = v58;
            v37 = a5 & 4;
          }
          if ( *((_DWORD *)v9 + 44) && *((_QWORD *)v9 + 23) )
          {
            v43 = 0LL;
            PreferredMode = -1073741584;
            v44 = *((_DWORD *)v9 + 48);
            if ( a3 < v44 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v43 = *(_QWORD *)(*((_QWORD *)v9 + 25) + 16 * v55 + 8);
LABEL_105:
                LOWORD(v12) = v51;
              }
              else
              {
                v45 = 0;
                v46 = 0;
                while ( v45 < v44 )
                {
                  if ( (a5 & 2) != 0 || (v16 = 2LL * v45, !*(_DWORD *)(*((_QWORD *)v9 + 25) + 16LL * v45)) )
                  {
                    if ( v37 || (v16 = *(_QWORD *)(*((_QWORD *)v9 + 25) + 16LL * v45 + 8), *(_DWORD *)(v16 + 84) == v36) )
                    {
                      if ( v46 == a3 )
                      {
                        _mm_lfence();
                        v16 = 2LL * v45;
                        v43 = *(_QWORD *)(*((_QWORD *)v9 + 25) + 16LL * v45 + 8);
                        goto LABEL_105;
                      }
                      ++v46;
                    }
                  }
                  ++v45;
                }
              }
            }
            if ( v43 )
            {
              v47 = *(_WORD *)(v43 + 70);
              if ( (unsigned __int16)v12 < v47 )
                v47 = v12;
              v12 = v47;
              v48 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v43 + *(unsigned __int16 *)(v43 + 68)), v12);
              v49 = *(_WORD *)(v43 + 68);
              if ( v49 <= 0xDCu )
                v48 = v49;
              memmove((void *)a4, (const void *)v43, v48);
              if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 && *(_DWORD *)(v43 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v50 = WdLogNewEntry5_WdTrace(v16);
            WdLogEvent5_WdTrace(v50);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *((_DWORD *)v9 + 44) = 0;
            if ( *((_QWORD *)v9 + 23) )
            {
              Win32FreePool();
              *((_QWORD *)v9 + 23) = 0LL;
            }
            v16 = *((_QWORD *)v9 + 25);
            if ( v16 )
            {
              Win32FreePool();
              *((_QWORD *)v9 + 25) = 0LL;
            }
            *((_DWORD *)v9 + 48) = 0;
          }
          break;
      }
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v12;
    v25 = WdLogNewEntry5_WdTrace(v16);
    *(_QWORD *)(v25 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v25);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v14 = WdLogNewEntry5_WdTrace(v13);
    WdLogEvent5_WdTrace(v14);
    return 3221225507LL;
  }
}
