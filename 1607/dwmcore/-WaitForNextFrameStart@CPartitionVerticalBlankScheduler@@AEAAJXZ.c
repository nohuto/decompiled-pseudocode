/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B90
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004492C (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180073B80 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180074830 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x1800748E0 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 *     ?UpdateTimes@CPartitionScheduler@@IEAAJXZ @ 0x1800B6380 (-UpdateTimes@CPartitionScheduler@@IEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180119AB0 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(CPartitionVerticalBlankScheduler *this)
{
  unsigned int *v1; // rbp
  char v2; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  signed int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rax
  char v10; // r12
  __int64 v11; // r14
  unsigned int v12; // r13d
  __int64 v13; // r12
  CHwndRenderTarget *v14; // rcx
  bool (__fastcall *v15)(CHwndRenderTarget *__hidden); // rax
  char v16; // al
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  CHwndRenderTarget *v20; // rcx
  int (*v21)(CHwndRenderTarget *__hidden, void **); // rax
  void **v22; // rdx
  CHwndRenderTarget *v23; // rcx
  int (*v24)(CHwndRenderTarget *__hidden, unsigned int); // rax
  __int64 v25; // rdx
  int refreshed; // eax
  __int64 v27; // rax
  unsigned __int8 v28; // r14
  char *v29; // rsi
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  int updated; // eax
  unsigned __int64 v37; // r8
  unsigned int v38; // eax
  unsigned int v39; // [rsp+70h] [rbp+0h] BYREF

  v1 = (unsigned int *)((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL);
  v2 = Microsoft_Windows_Dwm_CoreEnableBits;
  v4 = 0LL;
  v5 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    TemplateEventDescriptor(0LL, &EVTDESC_SCHEDULE_WFVB_Start);
    v2 = Microsoft_Windows_Dwm_CoreEnableBits;
    v4 = 0LL;
  }
  v6 = *((_QWORD *)this + 2742);
  if ( v6 && !*(_BYTE *)(v6 + 288) && *(_BYTE *)(v6 + 648) )
  {
    v31 = *(_DWORD *)(*((_QWORD *)this + 2741) + 680LL) + 1;
    v32 = *(_DWORD *)(v6 + 680) + 1;
    *v1 = v32;
    if ( v32 <= v31 )
      *v1 = v31;
    v4 = 0LL;
  }
  else
  {
    *v1 = 0;
  }
  if ( (v2 & 2) != 0 )
  {
    TemplateEventDescriptor(0LL, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Start);
    v4 = 0LL;
  }
  v7 = -2003304307;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *((_QWORD *)this + 16);
  v8 = 0LL;
  v9 = *((_QWORD *)this + 23);
  v10 = 1;
  *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  v11 = *(_QWORD *)(v9 + 32);
  v12 = *(_DWORD *)(v11 + 48);
  if ( v12 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(CHwndRenderTarget **)(v13 + *(_QWORD *)(v11 + 24));
      v15 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v14 + 176LL);
      v16 = v15 == CHwndRenderTarget::IsPrimaryMonitor
          ? CHwndRenderTarget::IsPrimaryMonitor(v14)
          : ((__int64 (*)(void))v15)();
      if ( v16
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + *(_QWORD *)(v11 + 24)) + 144LL))(*(_QWORD *)(v13 + *(_QWORD *)(v11 + 24))) )
      {
        break;
      }
      v13 += 8LL;
      v38 = *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4) + 1;
      *(_DWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v38;
      if ( v38 >= v12 )
        goto LABEL_17;
    }
    v17 = 8LL * *(unsigned int *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v18 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + v17);
    v19 = *(_QWORD *)(v18 + 112);
    v20 = (CHwndRenderTarget *)(v18 + 112);
    v21 = *(int (**)(CHwndRenderTarget *__hidden, void **))(v19 + 88);
    v22 = (void **)(v1 + 2);
    if ( v21 == CHwndRenderTarget::GetVBlankEvent )
      CHwndRenderTarget::GetVBlankEvent(v20, v22);
    else
      ((void (__fastcall *)(CHwndRenderTarget *, void **))v21)(v20, v22);
    v8 = *(_QWORD *)(v17 + *(_QWORD *)(v11 + 24));
LABEL_17:
    if ( *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    {
      v23 = (CHwndRenderTarget *)(v8 + 112);
      v24 = *(int (**)(CHwndRenderTarget *__hidden, unsigned int))(*(_QWORD *)(v8 + 112) + 96LL);
      v25 = *v1;
      if ( v24 == CHwndRenderTarget::SetSyncRefreshCountWaitTarget )
        refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTarget(v23, v25);
      else
        refreshed = ((__int64 (__fastcall *)(CHwndRenderTarget *, __int64))v24)(v23, v25);
      v7 = refreshed;
      v10 = 1;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, refreshed, 0x4B9u);
      if ( v7 >= 0 && v7 != 142213121 )
      {
        v27 = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x10);
        *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v27;
        v7 = WaitForMultipleObjects(2u, (const HANDLE *)v1 + 3, 0, 0x64u);
      }
    }
    else
    {
      if ( v8 )
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v8 + 112) + 104LL))(
               v8 + 112,
               *(_QWORD *)(((unsigned __int64)&v39 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      v10 = 1;
    }
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801AD7B8, 2u, v7, 0x17Eu);
  if ( !*((_BYTE *)this + 22280) || v7 < 0 )
    v10 = 0;
  *((_BYTE *)this + 22281) = v10;
  if ( v7 < 0 || v7 == 142213121 )
  {
    v28 = 1;
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2003304307 )
      MilInstrumentationCheckHR(0x14u, &dword_1801AD7B8, 2u, v7, 0x18Du);
    v33 = *((_QWORD *)this + 2742);
    if ( *(_QWORD *)(v33 + 88) )
    {
      v5 = *(_QWORD *)(v33 + 240);
      v34 = *((_QWORD *)this + 4) - v5;
    }
    else
    {
      v34 = *((_QWORD *)this + 4);
    }
    v35 = (v34 / *((_QWORD *)this + 25) + 1) * *((_QWORD *)this + 25) + v5;
    updated = CPartitionScheduler::UpdateTimes(this);
    *((_DWORD *)this + 6324) = updated;
    v7 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801AD7B8, 2u, updated, 0x192u);
      goto LABEL_34;
    }
    CPartitionVerticalBlankScheduler::TraceTime(this);
    v37 = *((_QWORD *)this + 4);
    if ( v37 >= v35 )
      v35 = *((_QWORD *)this + 25) * (v37 / *((_QWORD *)this + 25) + 1);
    v5 = (v35 - v37) / 0x2710 + 1;
    Sleep(v5);
    v7 = 0;
    *(_BYTE *)(*((_QWORD *)this + 2741) + 1344LL) = 1;
  }
  else
  {
    v28 = 0;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(v4, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Stop, v28, (unsigned int)v5);
LABEL_34:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    TemplateEventDescriptor(v4, &EVTDESC_SCHEDULE_WFVB_Stop);
  v29 = (char *)this + 25584;
  if ( v29[24] )
  {
    *(_WORD *)(v29 + 25) = 1;
    *((_QWORD *)v29 + 6) = 0LL;
    *((_QWORD *)v29 + 5) = 0LL;
    *((_QWORD *)v29 + 5) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v29);
  }
  return (unsigned int)v7;
}
