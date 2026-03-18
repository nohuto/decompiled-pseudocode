/*
 * XREFs of ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004A540 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18004B2E0 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800519D4 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180062E60 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18006C51C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x1800DF37C (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800DF408 (-UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INF.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     Template_qN16 @ 0x1800E1E54 (Template_qN16.c)
 *     Template_xxxxq @ 0x1800E2200 (Template_xxxxq.c)
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x1800E3718 (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x1800E8D50 (-PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::PresentFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        char a4,
        char a5)
{
  int v6; // r12d
  CPartitionVerticalBlankScheduler *v8; // rbx
  CRenderTargetManager **v9; // rcx
  int v10; // eax
  int v11; // r14d
  char v12; // dl
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned int v16; // r14d
  __int64 v17; // r12
  CHwFullScreenRenderTarget **v18; // r13
  bool v19; // al
  unsigned int *v20; // rcx
  int LastPresentCount; // eax
  int v22; // edx
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int i; // r15d
  __int64 v28; // rsi
  __int64 v29; // r15
  __int64 v30; // rax
  CChannelContext *v31; // r12
  int v32; // eax
  char v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // edi
  int v37; // eax
  int v38; // [rsp+40h] [rbp-61h]
  bool (__fastcall *v39)(__int64, int); // [rsp+48h] [rbp-59h]
  __int64 (__fastcall *v40)(CHwFullScreenRenderTarget **, unsigned int *); // [rsp+48h] [rbp-59h]
  __int128 v41; // [rsp+60h] [rbp-41h] BYREF
  char *v42; // [rsp+70h] [rbp-31h]
  int v43; // [rsp+78h] [rbp-29h]
  __int16 v44; // [rsp+7Ch] [rbp-25h]
  __int128 v45; // [rsp+80h] [rbp-21h] BYREF
  __int64 v46; // [rsp+90h] [rbp-11h]
  unsigned int v47; // [rsp+98h] [rbp-9h]
  int v48; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v49; // [rsp+A4h] [rbp+3h]
  __int64 v50; // [rsp+ACh] [rbp+Bh]
  __int64 v51; // [rsp+B4h] [rbp+13h]
  unsigned int v53; // [rsp+108h] [rbp+67h]

  v6 = a3;
  v8 = this;
  if ( *((_BYTE *)a2 + 272) && !*((_BYTE *)a2 + 273) || a5 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xxxxq(
        *((_DWORD *)a2 + 20) - 1,
        (_DWORD)a2,
        *((_QWORD *)this + 3),
        *((_DWORD *)a2 + 338) - *((_DWORD *)this + 46),
        *((_QWORD *)a2 + 11),
        *((_BYTE *)a2 + 80) - 1,
        a5);
    v46 = 0LL;
    v45 = 0LL;
    v47 = 0;
    if ( *((_BYTE *)v8 + 22648) )
      *((_DWORD *)a2 + 24) = 0;
    v9 = (CRenderTargetManager **)*((_QWORD *)v8 + 21);
    *((_QWORD *)&v41 + 1) = (char *)v8 + 176;
    v43 = *((_DWORD *)v8 + 52);
    v42 = (char *)v8 + 22328;
    LOBYTE(v44) = *((_BYTE *)v8 + 22648);
    HIBYTE(v44) = *((_BYTE *)v8 + 22650);
    *(_QWORD *)&v41 = a2;
    if ( a4 )
    {
      v37 = CRenderTargetManager::PresentOutOfFrameDirectFlip(v9[4]);
      v38 = v37;
      v11 = v37;
      if ( v37 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x32Fu);
    }
    else
    {
      v10 = CComposition::Present((CComposition *)v9, (struct FRAME_TIME_INFO *)&v41);
      v38 = v10;
      v11 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x333u);
    }
    if ( v11 == 142213130 )
    {
      v11 = 0;
      v38 = 0;
      *((_BYTE *)v8 + 22651) = 1;
    }
    else
    {
      *((_BYTE *)v8 + 22651) = 0;
    }
    v12 = v44;
    *((_BYTE *)a2 + 1180) = v44;
    *((_DWORD *)a2 + 294) = v11;
    v13 = *(unsigned int *)(*((_QWORD *)v8 + 21) + 336LL);
    *((_DWORD *)a2 + 296) = v13;
    *((_BYTE *)v8 + 22648) |= v12;
    if ( v11 >= 0 )
    {
      *((_BYTE *)a2 + 273) = 1;
      ++*((_DWORD *)v8 + 6316);
      if ( *((_BYTE *)a2 + 273) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
        v14 = *((_QWORD *)v8 + 21);
        v15 = 0;
        v53 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v14 + 32) + 48LL) )
        {
          v16 = 0;
          v17 = *(_QWORD *)(v14 + 32);
          do
          {
            if ( v15 >= 0x10 )
              break;
            v18 = *(CHwFullScreenRenderTarget ***)(*(_QWORD *)(v17 + 24) + 8LL * v16);
            v39 = (bool (__fastcall *)(__int64, int))*((_QWORD *)*v18 + 6);
            if ( v39 == CHwndRenderTarget::IsOfType )
              v19 = CHwndRenderTarget::IsOfType((__int64)v18, 36);
            else
              v19 = v39((__int64)v18, 36);
            if ( v19 )
            {
              if ( (*((unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget **))*v18 + 16))(v18) )
              {
                v15 = v53;
              }
              else
              {
                v20 = (unsigned int *)((char *)a2 + 4 * v53 + 16);
                v40 = (__int64 (__fastcall *)(CHwFullScreenRenderTarget **, unsigned int *))*((_QWORD *)v18[5] + 15);
                if ( v40 == CHwndRenderTarget::GetLastPresentCount )
                  LastPresentCount = CHwndRenderTarget::GetLastPresentCount(v18 + 5, v20);
                else
                  LastPresentCount = v40(v18 + 5, v20);
                if ( LastPresentCount < 0 )
                  MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, LastPresentCount, 0x47Cu);
                v15 = ++v53;
              }
            }
            ++v16;
          }
          while ( v16 < *(_DWORD *)(v17 + 48) );
          v8 = this;
          v11 = v38;
          v6 = a3;
        }
        MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2003304307, 0x100Bu);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qN16(v13, v22, v15, v23, (__int64)a2 + 16);
      }
      v24 = *((_QWORD *)v8 + 7);
      *((_DWORD *)v8 + 5572) = v6;
      *((_QWORD *)a2 + 35) = v24;
      v25 = *((_QWORD *)v8 + 21);
      if ( !*(_QWORD *)(*(_QWORD *)(v25 + 40) + 376LL) )
      {
        if ( *(_DWORD *)(v25 + 400) )
        {
          v28 = 0LL;
          v29 = *(unsigned int *)(v25 + 400);
          do
          {
            v30 = *(_QWORD *)(v25 + 376);
            v48 = 1;
            v31 = *(CChannelContext **)(v28 + v30);
            v49 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            v32 = CChannelContext::PostMessageToChannel(v31, (const struct MIL_MESSAGE *)&v48);
            if ( v32 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x61u);
            CMILRefCountBase::Release(v31);
            v28 += 8LL;
            --v29;
          }
          while ( v29 );
        }
        *(_DWORD *)(v25 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize((__int64 *)(v25 + 376));
      }
      ++*((_QWORD *)v8 + 5);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v13, &EVTDESC_SCHEDULE_PRESENT_Stop);
    }
    for ( i = 0; i < v47; ++i )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(v45 + 8LL * i));
    v47 = 0;
    DynArrayImpl<0>::ShrinkToSize(&v45, 8u);
    if ( (_QWORD)v45 != *((_QWORD *)&v45 + 1) )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v45);
    return (unsigned int)v11;
  }
  else if ( *((_BYTE *)this + 22651) )
  {
    v33 = *((_BYTE *)this + 22648);
    v46 = 0LL;
    v45 = 0LL;
    v41 = 0LL;
    v47 = 0;
    v42 = 0LL;
    v43 = 0;
    v44 = 0;
    CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(this, a2, v33, (struct FRAME_TIME_INFO *)&v41);
    v35 = CComposition::PresentFollowUp(*(CComposition **)(v34 + 168), (const struct FRAME_TIME_INFO *)&v41);
    v36 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x37Eu);
    if ( v36 == 142213130 )
    {
      v36 = 0;
      *((_BYTE *)v8 + 22651) = 1;
    }
    else
    {
      *((_BYTE *)v8 + 22651) = 0;
    }
    FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)&v41);
    return v36;
  }
  else
  {
    return 0LL;
  }
}
