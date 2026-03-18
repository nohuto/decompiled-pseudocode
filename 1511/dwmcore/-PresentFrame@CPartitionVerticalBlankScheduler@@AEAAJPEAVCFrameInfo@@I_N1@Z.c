/*
 * XREFs of ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ @ 0x18007B12C (-PresentOutOfFrameDirectFlip@CRenderTargetManager@@QEAAJXZ.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007BA90 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18007C970 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18009DFE8 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A1918 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800A41C0 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x1800FC7E8 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ?UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800FC9F4 (-UpdateFrameTimeInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAVCFrameInfo@@_NPEAUFRAME_TIME_INF.c)
 *     Template_qN16 @ 0x180100140 (Template_qN16.c)
 *     Template_xxxxq @ 0x1801004EC (Template_xxxxq.c)
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x18010132C (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::PresentFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        char a4,
        char a5)
{
  int v6; // r15d
  CPartitionVerticalBlankScheduler *v8; // rbx
  char v9; // al
  CRenderTargetManager **v11; // rcx
  int v12; // eax
  int v13; // r14d
  char v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // r14d
  __int64 v19; // r15
  CHwFullScreenRenderTarget **v20; // r13
  bool v21; // al
  unsigned int *v22; // rcx
  int LastPresentCount; // eax
  int v24; // edx
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int i; // r15d
  __int64 v29; // rsi
  __int64 v30; // r15
  __int64 v31; // rax
  CChannelContext *v32; // r12
  int v33; // eax
  char v34; // r8
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // edi
  int v38; // eax
  int v39; // [rsp+40h] [rbp-61h]
  bool (__fastcall *v40)(__int64, int); // [rsp+48h] [rbp-59h]
  __int64 (__fastcall *v41)(CHwFullScreenRenderTarget **, unsigned int *); // [rsp+48h] [rbp-59h]
  __int128 v42; // [rsp+60h] [rbp-41h] BYREF
  char *v43; // [rsp+70h] [rbp-31h]
  int v44; // [rsp+78h] [rbp-29h]
  __int16 v45; // [rsp+7Ch] [rbp-25h]
  __int128 v46; // [rsp+80h] [rbp-21h] BYREF
  __int64 v47; // [rsp+90h] [rbp-11h]
  unsigned int v48; // [rsp+98h] [rbp-9h]
  int v49; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v50; // [rsp+A4h] [rbp+3h]
  __int64 v51; // [rsp+ACh] [rbp+Bh]
  __int64 v52; // [rsp+B4h] [rbp+13h]
  unsigned int v54; // [rsp+108h] [rbp+67h]

  v6 = a3;
  v8 = this;
  if ( *((_BYTE *)a2 + 272) && !*((_BYTE *)a2 + 273) )
  {
    v9 = a5;
    goto LABEL_7;
  }
  v9 = a5;
  if ( a5 )
  {
LABEL_7:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_xxxxq(
        *((_DWORD *)a2 + 20) - 1,
        (_DWORD)a2,
        *((_QWORD *)this + 4),
        *((_DWORD *)a2 + 338) - *((_DWORD *)this + 48),
        *((_QWORD *)a2 + 11),
        *((_BYTE *)a2 + 80) - 1,
        v9);
    v47 = 0LL;
    v46 = 0LL;
    v48 = 0;
    if ( *((_BYTE *)v8 + 22656) )
      *((_DWORD *)a2 + 24) = 0;
    v11 = (CRenderTargetManager **)*((_QWORD *)v8 + 22);
    *((_QWORD *)&v42 + 1) = (char *)v8 + 184;
    v44 = *((_DWORD *)v8 + 54);
    v43 = (char *)v8 + 22336;
    LOBYTE(v45) = *((_BYTE *)v8 + 22656);
    HIBYTE(v45) = *((_BYTE *)v8 + 22658);
    *(_QWORD *)&v42 = a2;
    if ( a4 )
    {
      v38 = CRenderTargetManager::PresentOutOfFrameDirectFlip(v11[4]);
      v39 = v38;
      v13 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x32Fu);
    }
    else
    {
      v12 = CComposition::Present((CComposition *)v11, (struct FRAME_TIME_INFO *)&v42);
      v39 = v12;
      v13 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x333u);
    }
    if ( v13 == 142213130 )
    {
      v13 = 0;
      v39 = 0;
      *((_BYTE *)v8 + 22659) = 1;
    }
    else
    {
      *((_BYTE *)v8 + 22659) = 0;
    }
    v14 = v45;
    *((_BYTE *)a2 + 1180) = v45;
    *((_DWORD *)a2 + 294) = v13;
    v15 = *(unsigned int *)(*((_QWORD *)v8 + 22) + 336LL);
    *((_DWORD *)a2 + 296) = v15;
    *((_BYTE *)v8 + 22656) |= v14;
    if ( v13 >= 0 )
    {
      *((_BYTE *)a2 + 273) = 1;
      ++*((_DWORD *)v8 + 6348);
      if ( *((_BYTE *)a2 + 273) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_GETPRESENTCOUNT_Start);
        v16 = *((_QWORD *)v8 + 22);
        v17 = 0;
        v54 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(v16 + 32) + 48LL) )
        {
          v18 = 0;
          v19 = *(_QWORD *)(v16 + 32);
          do
          {
            if ( v17 >= 0x10 )
              break;
            v20 = *(CHwFullScreenRenderTarget ***)(*(_QWORD *)(v19 + 24) + 8LL * v18);
            v40 = (bool (__fastcall *)(__int64, int))*((_QWORD *)*v20 + 6);
            if ( v40 == CHwndRenderTarget::IsOfType )
              v21 = CHwndRenderTarget::IsOfType((__int64)v20, 37);
            else
              v21 = v40((__int64)v20, 37);
            if ( v21 )
            {
              if ( (*((unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget **))*v20 + 17))(v20) )
              {
                v17 = v54;
              }
              else
              {
                v22 = (unsigned int *)((char *)a2 + 4 * v54 + 16);
                v41 = (__int64 (__fastcall *)(CHwFullScreenRenderTarget **, unsigned int *))*((_QWORD *)v20[5] + 15);
                if ( v41 == CHwndRenderTarget::GetLastPresentCount )
                  LastPresentCount = CHwndRenderTarget::GetLastPresentCount(v20 + 5, v22);
                else
                  LastPresentCount = v41(v20 + 5, v22);
                if ( LastPresentCount < 0 )
                  MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, LastPresentCount, 0x478u);
                v17 = ++v54;
              }
            }
            ++v18;
          }
          while ( v18 < *(_DWORD *)(v19 + 48) );
          v8 = this;
          v13 = v39;
          v6 = a3;
        }
        MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2003304307, 0x1029u);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qN16(v15, v24, v17, v25, (__int64)a2 + 16);
      }
      v26 = *((_QWORD *)v8 + 8);
      *((_DWORD *)v8 + 5574) = v6;
      *((_QWORD *)a2 + 35) = v26;
      v27 = *((_QWORD *)v8 + 22);
      if ( !*(_QWORD *)(*(_QWORD *)(v27 + 40) + 376LL) )
      {
        if ( *(_DWORD *)(v27 + 400) )
        {
          v29 = 0LL;
          v30 = *(unsigned int *)(v27 + 400);
          do
          {
            v31 = *(_QWORD *)(v27 + 376);
            v49 = 1;
            v32 = *(CChannelContext **)(v29 + v31);
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            v33 = CChannelContext::PostMessageToChannel(v32, (const struct MIL_MESSAGE *)&v49);
            if ( v33 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x61u);
            CMILRefCountBase::Release(v32);
            v29 += 8LL;
            --v30;
          }
          while ( v30 );
        }
        *(_DWORD *)(v27 + 400) = 0;
        DynArrayImpl<1>::ShrinkToSize();
      }
      ++*((_QWORD *)v8 + 6);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v15, &EVTDESC_SCHEDULE_PRESENT_Stop);
    }
    for ( i = 0; i < v48; ++i )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(v46 + 8LL * i));
    v48 = 0;
    DynArrayImpl<0>::ShrinkToSize(&v46, 8u);
    if ( (_QWORD)v46 != *((_QWORD *)&v46 + 1) )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v46);
    return (unsigned int)v13;
  }
  if ( !*((_BYTE *)this + 22659) )
    return 0LL;
  v34 = *((_BYTE *)this + 22656);
  v47 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v48 = 0;
  v43 = 0LL;
  v44 = 0;
  v45 = 0;
  CPartitionVerticalBlankScheduler::UpdateFrameTimeInfo(this, a2, v34, (struct FRAME_TIME_INFO *)&v42);
  v36 = CComposition::PresentFollowUp(*(CComposition **)(v35 + 176), (const struct FRAME_TIME_INFO *)&v42);
  v37 = v36;
  if ( v36 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x37Eu);
  if ( v37 == 142213130 )
  {
    v37 = 0;
    *((_BYTE *)v8 + 22659) = 1;
  }
  else
  {
    *((_BYTE *)v8 + 22659) = 0;
  }
  FRAME_TIME_INFO::~FRAME_TIME_INFO((FRAME_TIME_INFO *)&v42);
  return v37;
}
