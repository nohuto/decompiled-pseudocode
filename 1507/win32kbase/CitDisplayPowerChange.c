/*
 * XREFs of CitDisplayPowerChange @ 0x1C006A880
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 * Callees:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0007504 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 *     ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C0014D5C (-UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0014DCC (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpTimeUpdate@@YAXI@Z @ 0x1C0052980 (-CitpTimeUpdate@@YAXI@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0057258 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0057C5C (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 */

void __fastcall CitDisplayPowerChange(__int64 a1, union _LARGE_INTEGER a2)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbx
  int v4; // ecx
  unsigned __int64 v5; // rdi
  unsigned int v6; // eax
  int v7; // r8d
  int v8; // edx
  int v9; // r9d
  int v10; // ecx
  bool v11; // cf
  unsigned int v12; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // edx
  unsigned int v25; // eax
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // eax
  unsigned __int64 v29; // rsi
  void *v30; // r9
  char IsUserDesktopActive; // al
  struct _CIT_IMPACT_CONTEXT *v32; // rcx
  struct tagPROCESSINFO *v33; // r8
  union _LARGE_INTEGER SystemTime; // [rsp+58h] [rbp+10h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+60h] [rbp+18h] BYREF

  SystemTime = a2;
  v2 = qword_1C0101FE0;
  if ( qword_1C0101FE0 )
  {
    v4 = *(_DWORD *)(a1 + 56);
    if ( (*((_DWORD *)qword_1C0101FE0 + 122) == 0) == (v4 == 0) )
    {
      *((_DWORD *)qword_1C0101FE0 + 122) = v4;
    }
    else
    {
      v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      CitpTimeUpdate(v5);
      if ( *(_DWORD *)(a1 + 56) )
      {
        v6 = *((_DWORD *)v2 + 30);
        v7 = -1;
        v8 = -1;
        v9 = v5 - *((_DWORD *)v2 + 120);
        v10 = v6 + 1;
        v11 = v6 + 1 < v6;
        v12 = *((_DWORD *)v2 + 31);
        if ( !v11 )
          v8 = v10;
        *((_DWORD *)v2 + 30) = v8;
        v13 = -1;
        if ( v12 + v9 >= v12 )
          v13 = v12 + v9;
        *((_DWORD *)v2 + 31) = v13;
        v14 = *((_DWORD *)v2 + 121);
        if ( v14 )
        {
          if ( (unsigned int)(v14 - 2) > 2 )
          {
            if ( v14 == 5 )
            {
              v20 = *((_DWORD *)v2 + 36);
              v21 = -1;
              v22 = v20 + 1;
              v11 = v20 + 1 < v20;
              v23 = *((_DWORD *)v2 + 37);
              if ( !v11 )
                v21 = v22;
              *((_DWORD *)v2 + 36) = v21;
              v24 = -1;
              if ( v23 + v9 >= v23 )
                v24 = v23 + v9;
              *((_DWORD *)v2 + 37) = v24;
            }
          }
          else
          {
            v15 = *((_DWORD *)v2 + 34);
            v16 = -1;
            v17 = v15 + 1;
            v11 = v15 + 1 < v15;
            v18 = *((_DWORD *)v2 + 35);
            if ( !v11 )
              v16 = v17;
            *((_DWORD *)v2 + 34) = v16;
            v19 = -1;
            if ( v18 + v9 >= v18 )
              v19 = v18 + v9;
            *((_DWORD *)v2 + 35) = v19;
          }
        }
        if ( (*((_BYTE *)v2 + 432) & 1) != 0 )
        {
          v25 = *((_DWORD *)v2 + 38);
          v26 = -1;
          v27 = v25 + 1;
          v11 = v25 + 1 < v25;
          v28 = *((_DWORD *)v2 + 39);
          if ( !v11 )
            v26 = v27;
          *((_DWORD *)v2 + 38) = v26;
          if ( v28 + v9 >= v28 )
            v7 = v28 + v9;
          *((_DWORD *)v2 + 39) = v7;
        }
      }
      else
      {
        CitpBitmapUpdateForTimeRange(v2, *((_DWORD *)v2 + 120), v5);
        *((_DWORD *)v2 + 121) = (gPowerState & 1) != 0 ? dword_1C00FFE6C : 0;
        CitpSetForegroundProcess(v2, v5, 0LL, 0LL, 0LL);
        v29 = MEMORY[0xFFFFF78000000008] - qword_1C0102000 - MEMORY[0xFFFFF780000003B0];
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
        if ( v29 > qword_1C0101F90 && LocalTime.QuadPart - qword_1C0102008 > (unsigned __int64)qword_1C0101F98 )
          CitpContextFlush(v2, v5, 1, v30);
      }
      *((_DWORD *)v2 + 120) = v5;
      *((_DWORD *)v2 + 122) = *(_DWORD *)(a1 + 56);
      IsUserDesktopActive = CitpIsUserDesktopActive(v2);
      CIT_DESKTOP_ACTIVE_TRACKER::UpdateActive(
        (struct _CIT_IMPACT_CONTEXT *)((char *)v2 + 544),
        IsUserDesktopActive,
        v5);
      if ( *(_DWORD *)(a1 + 56) && CitpAllowForegroundProcess(v2) )
      {
        v33 = (struct tagPROCESSINFO *)*((_QWORD *)v2 + 56);
        if ( v33 )
          CitpSetForegroundProcess(v32, v5, v33, 0LL, 0LL);
      }
    }
  }
}
