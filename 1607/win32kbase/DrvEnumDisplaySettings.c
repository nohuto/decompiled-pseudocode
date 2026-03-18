/*
 * XREFs of DrvEnumDisplaySettings @ 0x1C0062AF0
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C0062A40 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005DF50 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0060CC0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0061030 (DrvGetDisplayDriverParameters.c)
 *     DrvGetDeviceFromName @ 0x1C0063110 (DrvGetDeviceFromName.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0064634 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C006465C (GetPathsModality.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0064794 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DrvEnumDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v9; // rdi
  _QWORD *v10; // rax
  char v11; // r14
  unsigned int v12; // r13d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 DeviceFromName; // rax
  struct _LIST_ENTRY *j; // r15
  struct _LIST_ENTRY *Blink; // rcx
  char v20; // di
  struct _LIST_ENTRY *v21; // rdx
  unsigned __int16 Flink_high; // ax
  struct _LIST_ENTRY *v23; // rcx
  __int64 v24; // rax
  unsigned __int16 *v25; // r15
  unsigned int CcdRawmodeFlag; // eax
  int PathsModality; // eax
  struct _D3DKMT_GETPATHSMODALITY *v28; // r12
  unsigned int i; // edx
  __int64 v30; // rcx
  unsigned __int16 v31; // ax
  unsigned int k; // r8d
  __int64 v33; // rdx
  struct _LIST_ENTRY *v34; // r9
  int v35; // r10d
  int v36; // r11d
  struct _LIST_ENTRY *m; // rax
  struct _LIST_ENTRY *v38; // rcx
  __int128 *v39; // rax
  __int128 *v40; // r15
  __int64 v41; // r15
  unsigned int v42; // r9d
  unsigned int v43; // edx
  int v44; // r8d
  unsigned __int16 v45; // ax
  size_t v46; // r12
  unsigned __int16 v47; // ax
  __int64 v48; // rax
  unsigned __int16 v49; // [rsp+30h] [rbp-68h]
  int PreferredMode; // [rsp+34h] [rbp-64h]
  struct _D3DKMT_GETPATHSMODALITY *v51; // [rsp+38h] [rbp-60h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v52; // [rsp+40h] [rbp-58h] BYREF
  __int64 v53; // [rsp+48h] [rbp-50h]
  __int64 v55; // [rsp+A0h] [rbp+8h]
  int v56; // [rsp+B0h] [rbp+18h]

  PreferredMode = -1073741585;
  v9 = 0LL;
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v10[3] = a1;
  v10[4] = a2;
  v53 = a3;
  v10[5] = a3;
  v10[6] = a5;
  WdLogEvent5_WdEvent(v10);
  v11 = 1;
  if ( (a4 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v49 = *(_WORD *)(a4 + 70);
  LOWORD(v12) = v49;
  ProbeForWrite((volatile void *)a4, v49 + 220LL, 2u);
  if ( *(_WORD *)(a4 + 68) == 220 )
  {
    v16 = a1;
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
          v25 = (unsigned __int16 *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
          if ( v25 )
          {
            if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
            {
              v51 = 0LL;
              CcdRawmodeFlag = GetCcdRawmodeFlag();
              PathsModality = GetPathsModality(1LL, &v51, CcdRawmodeFlag | 0xF, 0LL);
              v28 = v51;
              if ( PathsModality < 0 )
              {
                PreferredMode = PathsModality;
LABEL_42:
                v11 = 0;
              }
              else
              {
                for ( i = 0; i < *((unsigned __int16 *)v51 + 10); ++i )
                {
                  v30 = 216LL * i;
                  v55 = v30;
                  if ( *(_DWORD *)(v9 + 272) == *(_DWORD *)((char *)v51 + v30 + 64)
                    && *(_DWORD *)(v9 + 264) == *(_DWORD *)((char *)v51 + v30 + 56)
                    && *(_DWORD *)(v9 + 268) == *(_DWORD *)((char *)v51 + v30 + 60) )
                  {
                    memmove(
                      v25,
                      *(const void **)((char *)v51 + v30 + 224),
                      *(unsigned __int16 *)(*(_QWORD *)((char *)v51 + v30 + 224) + 70LL) + 220LL);
                    if ( *(_DWORD *)((char *)v28 + v55 + 92) == -2 && *(_DWORD *)((char *)v28 + v55 + 96) == -2 )
                      *((_DWORD *)v25 + 46) = 64;
                    PreferredMode = 0;
                    goto LABEL_42;
                  }
                }
              }
              FreePathsModality(v28);
            }
            if ( v11 )
            {
              *((_DWORD *)v25 + 17) = -8739;
              PreferredMode = DrvGetDisplayDriverParameters(v9, (__int128 *)v25, 0, 0, 0LL);
            }
            if ( PreferredMode >= 0 )
            {
              v31 = v25[35];
              if ( v49 < v31 )
                v31 = v49;
              LOWORD(v12) = v31;
              memmove((void *)(a4 + 220), v25 + 110, v31);
              *(_OWORD *)a4 = *(_OWORD *)v25;
              *(_OWORD *)(a4 + 16) = *((_OWORD *)v25 + 1);
              *(_OWORD *)(a4 + 32) = *((_OWORD *)v25 + 2);
              *(_OWORD *)(a4 + 48) = *((_OWORD *)v25 + 3);
              *(_OWORD *)(a4 + 64) = *((_OWORD *)v25 + 4);
              *(_OWORD *)(a4 + 80) = *((_OWORD *)v25 + 5);
              *(_OWORD *)(a4 + 96) = *((_OWORD *)v25 + 6);
              *(_OWORD *)(a4 + 112) = *((_OWORD *)v25 + 7);
              *(_OWORD *)(a4 + 128) = *((_OWORD *)v25 + 8);
              *(_OWORD *)(a4 + 144) = *((_OWORD *)v25 + 9);
              *(_OWORD *)(a4 + 160) = *((_OWORD *)v25 + 10);
              *(_OWORD *)(a4 + 176) = *((_OWORD *)v25 + 11);
              *(_OWORD *)(a4 + 192) = *((_OWORD *)v25 + 12);
              *(_QWORD *)(a4 + 208) = *((_QWORD *)v25 + 26);
              *(_DWORD *)(a4 + 216) = *((_DWORD *)v25 + 54);
            }
            Win32FreePool();
          }
          else
          {
            PreferredMode = -1073741801;
          }
          break;
        case 0xFFFFFFFF:
          if ( ghsemDynamicModeChange )
            ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange");
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
          for ( j = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink; j; j = j[1].Blink )
          {
            Blink = j[162].Blink;
            if ( Blink == (struct _LIST_ENTRY *)v9 && HIDWORD(j[2].Flink) )
            {
              v20 = 0;
              if ( LODWORD(j[163].Blink[11].Blink) == 1 && ((__int64)Blink[10].Flink & 0x800000) != 0 )
              {
                v52 = 0LL;
                if ( (int)GetPathsModality(0LL, &v52, 64LL, 0LL) >= 0 )
                {
                  for ( k = 0; k < *((unsigned __int16 *)v52 + 10); ++k )
                  {
                    v33 = 216LL * k;
                    v34 = j[162].Blink;
                    if ( LODWORD(v34[17].Flink) == *(_DWORD *)((char *)v52 + v33 + 64)
                      && LODWORD(v34[16].Blink) == *(_DWORD *)((char *)v52 + v33 + 56)
                      && HIDWORD(v34[16].Blink) == *(_DWORD *)((char *)v52 + v33 + 60) )
                    {
                      if ( *(_DWORD *)((char *)v52 + v33 + 92) != -2
                        || (v20 = 1, *(_DWORD *)((char *)v52 + v33 + 96) != -2) )
                      {
                        v20 = 0;
                      }
                      break;
                    }
                  }
                  FreePathsModality(v52);
                }
              }
              v21 = j[163].Blink;
              Flink_high = HIWORD(v21[4].Flink);
              if ( v49 < Flink_high )
                Flink_high = v49;
              LOWORD(v12) = Flink_high;
              memmove((void *)(a4 + 220), (char *)&v21[13].Blink + 4, Flink_high);
              v23 = j[163].Blink;
              *(struct _LIST_ENTRY *)a4 = *v23;
              *(struct _LIST_ENTRY *)(a4 + 16) = v23[1];
              *(struct _LIST_ENTRY *)(a4 + 32) = v23[2];
              *(struct _LIST_ENTRY *)(a4 + 48) = v23[3];
              *(struct _LIST_ENTRY *)(a4 + 64) = v23[4];
              *(struct _LIST_ENTRY *)(a4 + 80) = v23[5];
              *(struct _LIST_ENTRY *)(a4 + 96) = v23[6];
              *(struct _LIST_ENTRY *)(a4 + 112) = v23[7];
              v23 += 8;
              *(struct _LIST_ENTRY *)(a4 + 128) = *v23;
              *(struct _LIST_ENTRY *)(a4 + 144) = v23[1];
              *(struct _LIST_ENTRY *)(a4 + 160) = v23[2];
              *(struct _LIST_ENTRY *)(a4 + 176) = v23[3];
              *(struct _LIST_ENTRY *)(a4 + 192) = v23[4];
              *(_QWORD *)(a4 + 208) = v23[5].Flink;
              *(_DWORD *)(a4 + 216) = v23[5].Blink;
              if ( v20 )
                *(_DWORD *)(a4 + 184) = 64;
              *(_DWORD *)(a4 + 72) &= 0xF9FFFFFF;
              PreferredMode = 0;
              break;
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
          GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
          break;
        default:
          DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)v9, a3 == 0, 1);
          v35 = 0;
          v56 = 0;
          v36 = a5 & 4;
          if ( (a5 & 4) == 0 )
          {
            if ( gProtocolType )
            {
              if ( ghsemDynamicModeChange )
                ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange");
              for ( m = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink; m; m = m[1].Blink )
              {
                if ( m[162].Blink == (struct _LIST_ENTRY *)v9 && HIDWORD(m[2].Flink) )
                {
                  v38 = m[163].Blink;
                  if ( (LODWORD(v38[4].Blink) & 0x80u) != 0 )
                    v56 = HIDWORD(v38[5].Flink);
                  break;
                }
              }
              EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
              GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
            }
            else
            {
              v39 = (__int128 *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 1);
              v40 = v39;
              if ( v39 )
              {
                memset(v39, 0, 0xDCuLL);
                *((_DWORD *)v40 + 17) = 56797;
                if ( (int)DrvGetDisplayDriverParameters(v9, v40, 0, 0, 0LL) >= 0 && (*((_DWORD *)v40 + 18) & 0x80u) != 0 )
                  v56 = *((_DWORD *)v40 + 21);
                Win32FreePool();
              }
            }
            v35 = v56;
            v36 = a5 & 4;
          }
          if ( *(_DWORD *)(v9 + 176) && *(_QWORD *)(v9 + 184) )
          {
            v41 = 0LL;
            PreferredMode = -1073741584;
            v42 = *(_DWORD *)(v9 + 192);
            if ( a3 < v42 )
            {
              if ( (a5 & 6) == 6 )
              {
                _mm_lfence();
                v41 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16 * v53 + 8);
LABEL_105:
                LOWORD(v12) = v49;
              }
              else
              {
                v43 = 0;
                v44 = 0;
                while ( v43 < v42 )
                {
                  if ( (a5 & 2) != 0 || (v16 = 2LL * v43, !*(_DWORD *)(*(_QWORD *)(v9 + 200) + 16LL * v43)) )
                  {
                    if ( v36
                      || (v16 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16LL * v43 + 8), *(_DWORD *)(v16 + 84) == v35) )
                    {
                      if ( v44 == a3 )
                      {
                        _mm_lfence();
                        v16 = 2LL * v43;
                        v41 = *(_QWORD *)(*(_QWORD *)(v9 + 200) + 16LL * v43 + 8);
                        goto LABEL_105;
                      }
                      ++v44;
                    }
                  }
                  ++v43;
                }
              }
            }
            if ( v41 )
            {
              v45 = *(_WORD *)(v41 + 70);
              if ( (unsigned __int16)v12 < v45 )
                v45 = v12;
              v12 = v45;
              v46 = 220LL;
              memset((void *)a4, 0, 0xDCuLL);
              memmove((void *)(a4 + 220), (const void *)(v41 + *(unsigned __int16 *)(v41 + 68)), v12);
              v47 = *(_WORD *)(v41 + 68);
              if ( v47 <= 0xDCu )
                v46 = v47;
              memmove((void *)a4, (const void *)v41, v46);
              if ( (*(_DWORD *)(v9 + 160) & 0x800000) != 0 && *(_DWORD *)(v41 + 184) == 1 )
                *(_DWORD *)(a4 + 184) = 64;
              PreferredMode = 0;
            }
          }
          else
          {
            v48 = WdLogNewEntry5_WdTrace(v16);
            WdLogEvent5_WdTrace(v48);
            PreferredMode = -1073741823;
          }
          if ( PreferredMode == -1073741584 )
          {
            *(_DWORD *)(v9 + 176) = 0;
            if ( *(_QWORD *)(v9 + 184) )
            {
              Win32FreePool();
              *(_QWORD *)(v9 + 184) = 0LL;
            }
            v16 = *(_QWORD *)(v9 + 200);
            if ( v16 )
            {
              Win32FreePool();
              *(_QWORD *)(v9 + 200) = 0LL;
            }
            *(_DWORD *)(v9 + 192) = 0;
          }
          break;
      }
    }
    if ( !PreferredMode )
      *(_WORD *)(a4 + 70) = v12;
    v24 = WdLogNewEntry5_WdTrace(v16);
    *(_QWORD *)(v24 + 24) = PreferredMode;
    WdLogEvent5_WdTrace(v24);
    return (unsigned int)PreferredMode;
  }
  else
  {
    v14 = WdLogNewEntry5_WdTrace(v13);
    WdLogEvent5_WdTrace(v14);
    return 3221225507LL;
  }
}
