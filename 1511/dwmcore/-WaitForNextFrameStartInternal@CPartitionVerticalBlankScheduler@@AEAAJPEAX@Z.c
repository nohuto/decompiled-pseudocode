/*
 * XREFs of ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180090820
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18007BAA0 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x18007CA10 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18007CAF0 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 *     Template_xxxxx @ 0x180100598 (Template_xxxxx.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStartInternal(__int64 this, void *a2)
{
  DWORD v2; // ebp
  unsigned __int8 v3; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  signed int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rsi
  CHwndRenderTarget *v10; // rdi
  char IsPrimaryMonitor; // al
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  CHwDisplayRenderTarget **v15; // rdi
  __int64 (__fastcall *v16)(CHwDisplayRenderTarget **, unsigned int); // rsi
  int refreshed; // eax
  signed int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  LARGE_INTEGER v23; // rax
  LARGE_INTEGER v24; // rcx
  char v25; // r15
  __int64 v26; // r11
  unsigned __int64 v27; // rtt
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  DWORD v30; // esi
  DWORD v32; // edx
  unsigned __int64 v33; // r8
  signed int LastError; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v36; // [rsp+48h] [rbp-60h]
  HANDLE Handles[3]; // [rsp+50h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp+8h] BYREF
  __int64 (__fastcall *v39)(CHwDisplayRenderTarget **, void **); // [rsp+B8h] [rbp+10h]
  unsigned int v40; // [rsp+C0h] [rbp+18h]
  DWORD v41; // [rsp+C8h] [rbp+20h]

  v2 = 0;
  v41 = 0;
  v3 = 0;
  PerformanceCount.HighPart = 0;
  v5 = this;
  if ( a2 || (this = *(_QWORD *)(this + 22312)) == 0 || *(_BYTE *)(this + 288) || !*(_BYTE *)(this + 648) )
  {
    PerformanceCount.LowPart = 0;
  }
  else
  {
    v32 = *(_DWORD *)(*(_QWORD *)(v5 + 22304) + 680LL) + 1;
    PerformanceCount.LowPart = *(_DWORD *)(this + 680) + 1;
    if ( PerformanceCount.LowPart <= v32 )
      PerformanceCount.LowPart = v32;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Start);
  v6 = *(_QWORD *)(v5 + 176);
  v7 = -2003304307;
  hHandle = 0LL;
  LODWORD(v39) = 0;
  v8 = *(_QWORD *)(v6 + 32);
  v40 = *(_DWORD *)(v8 + 48);
  if ( !v40 )
    goto LABEL_25;
  v9 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    v10 = *(CHwndRenderTarget **)(v9 + *(_QWORD *)(v8 + 24));
    Handles[0] = *(HANDLE *)(*(_QWORD *)v10 + 168LL);
    if ( Handles[0] == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor(v10);
    else
      IsPrimaryMonitor = ((__int64 (__fastcall *)(CHwndRenderTarget *))Handles[0])(v10);
    if ( !IsPrimaryMonitor )
      goto LABEL_67;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + *(_QWORD *)(v8 + 24)) + 136LL))(*(_QWORD *)(v9 + *(_QWORD *)(v8 + 24))) )
      break;
    v9 = v36;
LABEL_67:
    v9 += 8LL;
    v36 = v9;
    LODWORD(v39) = (_DWORD)v39 + 1;
    if ( (unsigned int)v39 >= v40 )
    {
      v14 = 0LL;
      goto LABEL_16;
    }
  }
  v12 = 8LL * (unsigned int)v39;
  v13 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + v12);
  v39 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget **, void **))(*(_QWORD *)(v13 + 40) + 96LL);
  if ( v39 == CHwndRenderTarget::GetVBlankEvent )
    CHwndRenderTarget::GetVBlankEvent((CHwDisplayRenderTarget **)(v13 + 40), &hHandle);
  else
    v39((CHwDisplayRenderTarget **)(v13 + 40), &hHandle);
  v14 = *(_QWORD *)(v12 + *(_QWORD *)(v8 + 24));
LABEL_16:
  if ( hHandle )
  {
    v15 = (CHwDisplayRenderTarget **)(v14 + 40);
    v16 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget **, unsigned int))(*(_QWORD *)(v14 + 40) + 104LL);
    if ( v16 == CHwndRenderTarget::SetSyncRefreshCountWaitTarget )
      refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTarget(v15, PerformanceCount.LowPart);
    else
      refreshed = v16(v15, PerformanceCount.LowPart);
    v7 = refreshed;
    if ( refreshed < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, refreshed, 0x4CAu);
    if ( v7 >= 0 && v7 != 142213121 )
    {
      if ( a2 )
      {
        Handles[0] = hHandle;
        Handles[1] = a2;
        v7 = WaitForMultipleObjects(2u, Handles, 0, 0x64u);
      }
      else
      {
        WaitForSingleObject(hHandle, 0x64u);
      }
    }
  }
  else if ( v14 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)(v14 + 40) + 112LL))(v14 + 40, a2);
  }
LABEL_25:
  v18 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_18016FE50, 2u, v7, 0x197u);
  if ( v7 == 1 )
  {
LABEL_45:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qq(this, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Stop, v3, v2);
  }
  else
  {
    v19 = *(_QWORD *)(v5 + 22312);
    v20 = 0LL;
    if ( *(_QWORD *)(v19 + 88) )
    {
      v20 = *(_QWORD *)(v19 + 240);
      v21 = *(_QWORD *)(v5 + 32) - v20;
    }
    else
    {
      v21 = *(_QWORD *)(v5 + 32);
    }
    v22 = (v21 / *(_QWORD *)(v5 + 192) + 1) * *(_QWORD *)(v5 + 192) + v20;
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2003304307 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE50, 2u, v7, 0x1A3u);
    v18 = 0;
    SetLastError(0);
    if ( QueryPerformanceCounter(&PerformanceCount) )
    {
      v23 = PerformanceCount;
      v24 = *(LARGE_INTEGER *)(v5 + 64);
      v25 = 1;
      if ( PerformanceCount.QuadPart >= (unsigned __int64)v24.QuadPart )
      {
        *(LARGE_INTEGER *)(v5 + 72) = v24;
        *(LARGE_INTEGER *)(v5 + 64) = v23;
        goto LABEL_34;
      }
      ++*(_DWORD *)(v5 + 88);
      v18 = -2003304293;
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, -2003304293, 0xB0u);
    }
    else
    {
      LastError = GetLastError();
      v18 = LastError;
      if ( LastError > 0 )
        v18 = (unsigned __int16)LastError | 0x80070000;
      v25 = 1;
      if ( v18 >= 0 )
        v18 = -2003304445;
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v18, 0xA6u);
    }
    MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v18, 0x59u);
LABEL_34:
    v26 = *(_QWORD *)(v5 + 24);
    v27 = *(_QWORD *)(v5 + 64) - *(_QWORD *)(v5 + 56);
    v28 = v26 + 10000000 * (v27 % *(_QWORD *)(v5 + 80)) / *(_QWORD *)(v5 + 80) + 10000000 * (v27 / *(_QWORD *)(v5 + 80));
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180178D28, 1u, v18, 0x89u);
    }
    else
    {
      *(_QWORD *)(v5 + 32) = v28;
      v29 = v28 - v26;
      *(_QWORD *)(v5 + 40) = v29;
    }
    *(_DWORD *)(v5 + 25128) = v18;
    if ( v18 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xxxxx(
          v29,
          (unsigned int)&EVTDESC_SCHEDULE_TIME,
          *(_QWORD *)(v5 + 32),
          *(_QWORD *)(v5 + 40),
          *(_QWORD *)(v5 + 64),
          *(_QWORD *)(v5 + 72),
          *(_QWORD *)(v5 + 48));
      if ( !*(_BYTE *)(v5 + 22656) || v7 < 0 )
        v25 = 0;
      this = 0x80000000LL;
      *(_BYTE *)(v5 + 22657) = v25;
      if ( v7 < 0 || v7 == 142213121 )
      {
        v33 = *(_QWORD *)(v5 + 32);
        v3 = 1;
        if ( v33 >= v22 )
          v22 = *(_QWORD *)(v5 + 192) * (v33 / *(_QWORD *)(v5 + 192) + 1);
        PerformanceCount.QuadPart = (v22 - v33) / 0x2710 + 1;
        v30 = (v22 - v33) / 0x2710 + 1;
        Sleep(v30);
        v18 = 0;
      }
      else
      {
        v30 = v41;
        v3 = 0;
      }
      v2 = v30;
      *(_BYTE *)(*(_QWORD *)(v5 + 22304) + 1368LL) = v3;
      goto LABEL_45;
    }
    MilInstrumentationCheckHR(0x14u, &dword_18016FE50, 2u, v18, 0x1A9u);
  }
  return (unsigned int)v18;
}
