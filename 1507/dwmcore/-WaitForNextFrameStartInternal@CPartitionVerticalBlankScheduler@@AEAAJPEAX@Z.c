/*
 * XREFs of ?WaitForNextFrameStartInternal@CPartitionVerticalBlankScheduler@@AEAAJPEAX@Z @ 0x180067750
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18004A550 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x18004B370 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18004B440 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 *     Template_xxxxx @ 0x1800E22AC (Template_xxxxx.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStartInternal(__int64 this, void *a2)
{
  DWORD v2; // ebp
  unsigned __int8 v3; // r12
  __int64 v5; // rbx
  DWORD v6; // edx
  __int64 v7; // rax
  signed int v8; // r14d
  __int64 v9; // r15
  CHwndRenderTarget *v10; // rdi
  _BOOL8 (__fastcall *v11)(CHwndRenderTarget *); // rsi
  bool v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  CHwDisplayRenderTarget **v16; // rdi
  __int64 (__fastcall *v17)(CHwDisplayRenderTarget **, unsigned int); // rsi
  int refreshed; // eax
  signed int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  LARGE_INTEGER v24; // rax
  LARGE_INTEGER v25; // rcx
  char v26; // r15
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r11
  __int64 v30; // r10
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  DWORD v35; // esi
  unsigned __int64 v37; // r8
  signed int LastError; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-68h] BYREF
  HANDLE Handles[4]; // [rsp+48h] [rbp-60h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp+8h] BYREF
  __int64 (__fastcall *v42)(CHwDisplayRenderTarget **, void **); // [rsp+B8h] [rbp+10h]
  unsigned int v43; // [rsp+C0h] [rbp+18h]
  DWORD v44; // [rsp+C8h] [rbp+20h]

  v2 = 0;
  v44 = 0;
  v3 = 0;
  PerformanceCount.HighPart = 0;
  v5 = this;
  if ( a2 || (this = *(_QWORD *)(this + 22304)) == 0 || *(_BYTE *)(this + 288) || !*(_BYTE *)(this + 648) )
  {
    PerformanceCount.LowPart = 0;
  }
  else
  {
    v6 = *(_DWORD *)(*(_QWORD *)(v5 + 22296) + 680LL) + 1;
    PerformanceCount.LowPart = *(_DWORD *)(this + 680) + 1;
    if ( PerformanceCount.LowPart <= v6 )
      PerformanceCount.LowPart = v6;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Start);
  v7 = *(_QWORD *)(v5 + 168);
  v8 = -2003304307;
  hHandle = 0LL;
  LODWORD(v42) = 0;
  v9 = *(_QWORD *)(v7 + 32);
  v43 = *(_DWORD *)(v9 + 48);
  if ( v43 )
  {
    this = 0LL;
    Handles[0] = 0LL;
    while ( 1 )
    {
      v10 = *(CHwndRenderTarget **)(this + *(_QWORD *)(v9 + 24));
      v11 = *(_BOOL8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v10 + 160LL);
      v12 = v11 == CHwndRenderTarget::IsPrimaryMonitor
          ? CHwndRenderTarget::IsPrimaryMonitor(v10)
          : v11(*(CHwndRenderTarget **)(this + *(_QWORD *)(v9 + 24)));
      if ( v12
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)((char *)Handles[0] + *(_QWORD *)(v9 + 24)) + 128LL))(*(_QWORD *)((char *)Handles[0] + *(_QWORD *)(v9 + 24))) )
      {
        break;
      }
      this = (__int64)Handles[0] + 8;
      LODWORD(v42) = (_DWORD)v42 + 1;
      Handles[0] = (char *)Handles[0] + 8;
      if ( (unsigned int)v42 >= v43 )
      {
        v15 = 0LL;
        goto LABEL_18;
      }
    }
    v13 = 8LL * (unsigned int)v42;
    v14 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + v13);
    v42 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget **, void **))(*(_QWORD *)(v14 + 40) + 96LL);
    if ( v42 == CHwndRenderTarget::GetVBlankEvent )
      CHwndRenderTarget::GetVBlankEvent((CHwDisplayRenderTarget **)(v14 + 40), &hHandle);
    else
      v42((CHwDisplayRenderTarget **)(v14 + 40), &hHandle);
    v15 = *(_QWORD *)(v13 + *(_QWORD *)(v9 + 24));
LABEL_18:
    if ( hHandle )
    {
      v16 = (CHwDisplayRenderTarget **)(v15 + 40);
      v17 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget **, unsigned int))(*(_QWORD *)(v15 + 40) + 104LL);
      if ( v17 == CHwndRenderTarget::SetSyncRefreshCountWaitTarget )
        refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTarget(v16, PerformanceCount.LowPart);
      else
        refreshed = v17(v16, PerformanceCount.LowPart);
      v8 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, refreshed, 0x4CEu);
      if ( v8 >= 0 && v8 != 142213121 )
      {
        if ( a2 )
        {
          Handles[0] = hHandle;
          Handles[1] = a2;
          v8 = WaitForMultipleObjects(2u, Handles, 0, 0x64u);
        }
        else
        {
          WaitForSingleObject(hHandle, 0x64u);
        }
      }
    }
    else if ( v15 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)(v15 + 40) + 112LL))(v15 + 40, a2);
    }
  }
  v19 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801644A0, 2u, v8, 0x197u);
  if ( v8 == 1 )
    goto LABEL_51;
  v20 = *(_QWORD *)(v5 + 22304);
  v21 = 0LL;
  if ( *(_QWORD *)(v20 + 88) )
  {
    v21 = *(_QWORD *)(v20 + 240);
    v22 = *(_QWORD *)(v5 + 24) - v21;
  }
  else
  {
    v22 = *(_QWORD *)(v5 + 24);
  }
  v23 = (v22 / *(_QWORD *)(v5 + 184) + 1) * *(_QWORD *)(v5 + 184) + v21;
  if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -2003304307 )
    MilInstrumentationCheckHR(0x14u, &dword_1801644A0, 2u, v8, 0x1A3u);
  v19 = 0;
  SetLastError(0);
  if ( !QueryPerformanceCounter(&PerformanceCount) )
  {
    LastError = GetLastError();
    v19 = LastError;
    if ( LastError > 0 )
      v19 = (unsigned __int16)LastError | 0x80070000;
    v26 = 1;
    if ( v19 >= 0 )
      v19 = -2003304445;
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v19, 0xA6u);
    goto LABEL_80;
  }
  v24 = PerformanceCount;
  v25 = *(LARGE_INTEGER *)(v5 + 56);
  v26 = 1;
  if ( PerformanceCount.QuadPart < (unsigned __int64)v25.QuadPart )
  {
    ++*(_DWORD *)(v5 + 80);
    v19 = -2003304293;
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, -2003304293, 0xB0u);
LABEL_80:
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v19, 0x59u);
    goto LABEL_36;
  }
  *(LARGE_INTEGER *)(v5 + 64) = v25;
  *(LARGE_INTEGER *)(v5 + 56) = v24;
LABEL_36:
  v27 = *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 48);
  v28 = *(_QWORD *)(v5 + 72);
  if ( v28 == 3312659 )
    v29 = v27 / 0x328C13;
  else
    v29 = v27 / v28;
  v30 = *(_QWORD *)(v5 + 16);
  v31 = 10000000 * (v27 - v28 * v29);
  if ( v28 == 3312659 )
    v32 = v31 / 0x328C13;
  else
    v32 = v31 / v28;
  v33 = 10000000 * v29;
  v34 = v30 + 10000000 * v29 + v32;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016A93C, 1u, v19, 0x89u);
  }
  else
  {
    *(_QWORD *)(v5 + 24) = v34;
    *(_QWORD *)(v5 + 32) = v34 - v30;
  }
  *(_DWORD *)(v5 + 25000) = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801644A0, 2u, v19, 0x1A9u);
    return (unsigned int)v19;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xxxxx(
      v33,
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      *(_QWORD *)(v5 + 24),
      *(_QWORD *)(v5 + 32),
      *(_QWORD *)(v5 + 56),
      *(_QWORD *)(v5 + 64),
      *(_QWORD *)(v5 + 40));
  if ( !*(_BYTE *)(v5 + 22648) || v8 < 0 )
    v26 = 0;
  this = 0x80000000LL;
  *(_BYTE *)(v5 + 22649) = v26;
  if ( v8 < 0 || v8 == 142213121 )
  {
    v37 = *(_QWORD *)(v5 + 24);
    v3 = 1;
    if ( v37 >= v23 )
      v23 = *(_QWORD *)(v5 + 184) * (v37 / *(_QWORD *)(v5 + 184) + 1);
    PerformanceCount.QuadPart = (v23 - v37) / 0x2710 + 1;
    v35 = (v23 - v37) / 0x2710 + 1;
    Sleep(v35);
    v19 = 0;
  }
  else
  {
    v35 = v44;
    v3 = 0;
  }
  v2 = v35;
  *(_BYTE *)(*(_QWORD *)(v5 + 22296) + 1368LL) = v3;
LABEL_51:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(this, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Stop, v3, v2);
  return (unsigned int)v19;
}
