/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D990
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C0013BD4 (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C0014DD8 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0067718 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

char __fastcall FxIoQueue::ProcessPowerEvents(
        FxIoQueue *this,
        unsigned __int8 *PreviousIrql,
        __int64 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueuePowerState *p_m_PowerState; // r15
  FxIoQueuePowerState m_PowerState; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  _LIST_ENTRY *p_m_PowerNotify; // rcx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *p_m_DriverOwned; // r14
  int v19; // ecx
  _LIST_ENTRY *p_m_PowerDriverNotified; // r12
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *p_acknowledgedList; // rdx
  char v23; // r13
  _LIST_ENTRY *v24; // rdx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *v26; // rax
  _LIST_ENTRY *v27; // rax
  _LIST_ENTRY *v28; // rdx
  _LIST_ENTRY *v29; // rdx
  _LIST_ENTRY *v30; // r14
  FxIoQueue *v31; // rax
  char v32; // al
  int v33; // r15d
  unsigned __int8 v34; // r8
  WDFREQUEST__ *v35; // r8
  WDFQUEUE__ *v36; // rdx
  __int64 v37; // r8
  unsigned __int8 v38; // r8
  _LIST_ENTRY *v39; // rcx
  _LIST_ENTRY *v40; // rax
  unsigned __int16 v41; // r9
  void *v42; // rdx
  void *v43; // rdx
  unsigned __int16 v44; // ax
  const void *v45; // rcx
  void *v46; // rcx
  unsigned __int16 v47; // r9
  unsigned __int16 v48; // ax
  const void *v49; // rbx
  _LIST_ENTRY *v50; // rcx
  _LIST_ENTRY *v51; // rax
  _LIST_ENTRY *v52; // rdx
  _LIST_ENTRY *v53; // rdx
  __m128i m_IoStop; // xmm0
  FxIoQueue *v55; // rax
  char v56; // al
  int v57; // r15d
  void *v58; // rdx
  unsigned __int16 v59; // ax
  const void *v60; // rcx
  unsigned __int8 v61; // r8
  WDFREQUEST__ *v62; // r8
  WDFQUEUE__ *v63; // rdx
  unsigned __int16 v64; // ax
  const void *v65; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v67; // rdx
  _LIST_ENTRY *Blink; // rdx
  void *v69; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v71; // rcx
  unsigned __int8 v72; // r8
  void *v73; // r8
  WDFQUEUE__ *v74; // rdx
  unsigned __int16 v75; // r9
  const void *v76; // rcx
  unsigned __int16 v77; // ax
  const void *v78; // rbx
  void *_a1; // [rsp+28h] [rbp-58h]
  void *_a2; // [rsp+30h] [rbp-50h]
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-40h] BYREF
  FxIoQueueIoStop stopCallback; // [rsp+50h] [rbp-30h] BYREF
  FxIoQueueIoStop v83; // [rsp+60h] [rbp-20h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+70h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  p_m_PowerState = &this->m_PowerState;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState > FxIoQueuePowerPurgeNotifyingDriver )
  {
    v9 = m_PowerState - 9;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          p_m_PowerNotify = &this->m_PowerNotify;
          if ( p_m_PowerNotify->Flink == p_m_PowerNotify )
          {
            *p_m_PowerState = FxIoQueuePowerRestartingDriverNotified;
            return 1;
          }
          Flink = p_m_PowerNotify->Flink;
          v67 = p_m_PowerNotify->Flink->Flink;
          if ( p_m_PowerNotify->Flink->Blink != p_m_PowerNotify || v67->Blink != Flink )
            __fastfail(3u);
          p_m_PowerNotify->Flink = v67;
          v67->Blink = p_m_PowerNotify;
          Blink = this->m_DriverOwned.Blink;
          if ( Blink->Flink != &this->m_DriverOwned )
            __fastfail(3u);
          Flink->Flink = &this->m_DriverOwned;
          v30 = Flink - 19;
          Flink->Blink = Blink;
          Blink->Flink = Flink;
          this->m_DriverOwned.Blink = Flink;
          resumeCallback = this->m_IoResume;
          if ( _mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] && !HIBYTE(v30[13].Flink) )
          {
            if ( m_Globals->FxVerboseOn )
            {
              v69 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
              m_ObjectSize = this->m_ObjectSize;
              if ( !WORD1(v30->Blink) )
                v69 = 0LL;
              v71 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              _a2 = v69;
              if ( !m_ObjectSize )
                v71 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x62u, WPP_FxIoQueue_cpp_Traceguids, v71, _a2);
            }
            FxObject::AddRef(
              (FxObject *)v30,
              (void *)0x646C6F48,
              5603,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxNonPagedObject::Unlock(this, *PreviousIrql, v72);
            v73 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v30->Blink) )
              v73 = 0LL;
            v74 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !this->m_ObjectSize )
              v74 = 0LL;
            FxIoQueueIoResume::Invoke((FxIoQueueIoState *)&resumeCallback, v74, v73);
            v37 = 5609LL;
            goto LABEL_56;
          }
          if ( !m_Globals->FxVerboseOn )
            return 1;
          v47 = 99;
LABEL_88:
          v48 = this->m_ObjectSize;
          v49 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v48 )
            v49 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v47, WPP_FxIoQueue_cpp_Traceguids, v49);
          return 1;
        }
        if ( v11 == 1 )
        {
          if ( m_Globals->FxVerboseOn )
          {
            v64 = this->m_ObjectSize;
            v65 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v64 )
              v65 = 0LL;
            WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x64u, WPP_FxIoQueue_cpp_Traceguids, v65);
          }
          *p_m_PowerState = FxIoQueuePowerOn;
        }
        return 0;
      }
      p_m_DriverOwned = &this->m_DriverOwned;
      *p_m_PowerState = FxIoQueuePowerRestartingNotifyingDriver;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !m_Globals->FxVerboseOn )
          return 1;
        v47 = 97;
        goto LABEL_88;
      }
      if ( m_Globals->FxVerboseOn )
      {
        v41 = 96;
        goto LABEL_83;
      }
      goto LABEL_58;
    }
    goto LABEL_21;
  }
  if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
  {
    v50 = &this->m_PowerNotify;
    if ( v50->Flink == v50 )
    {
      *p_m_PowerState = FxIoQueuePowerPurgeDriverNotified;
      return 1;
    }
    v51 = v50->Flink;
    v52 = v50->Flink->Flink;
    if ( v50->Flink->Blink != v50 || v52->Blink != v51 )
      __fastfail(3u);
    v50->Flink = v52;
    v52->Blink = v50;
    v53 = this->m_PowerDriverNotified.Blink;
    if ( v53->Flink != &this->m_PowerDriverNotified )
      __fastfail(3u);
    v51->Flink = &this->m_PowerDriverNotified;
    v30 = v51 - 19;
    v51->Blink = v53;
    v53->Flink = v51;
    this->m_PowerDriverNotified.Blink = v51;
    m_IoStop = (__m128i)this->m_IoStop;
    BYTE1(v51[3].Flink) = 0;
    v83 = (FxIoQueueIoStop)m_IoStop;
    if ( !_mm_srli_si128(m_IoStop, 8).m128i_u64[0] || HIBYTE(v30[13].Flink) )
      return 1;
    v55 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
    if ( v55 == (FxIoQueue *)&this->m_DriverCancelable )
    {
LABEL_102:
      v56 = 0;
    }
    else
    {
      while ( v55[-1].m_IoPkgListNode.m_ListEntry.Blink != (_LIST_ENTRY *)&v30[7].Blink )
      {
        v55 = (FxIoQueue *)v55->FxNonPagedObject::FxObject::__vftable;
        if ( v55 == (FxIoQueue *)&this->m_DriverCancelable )
          goto LABEL_102;
      }
      v56 = 1;
    }
    v57 = v56 != 0 ? 0x10000000 : 0;
    if ( m_Globals->FxVerboseOn )
    {
      v58 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v59 = this->m_ObjectSize;
      if ( !WORD1(v30->Blink) )
        v58 = 0LL;
      v60 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a2 = v58;
      if ( !v59 )
        v60 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Bu, WPP_FxIoQueue_cpp_Traceguids, v60, _a2);
    }
    FxObject::AddRef(
      (FxObject *)v30,
      (void *)0x646C6F48,
      5362,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v61);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags((FxRequestBase *)v30, 512);
    v62 = (WDFREQUEST__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v30->Blink) )
      v62 = 0LL;
    v63 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v63 = 0LL;
    FxIoQueueIoStop::Invoke(&v83, v63, v62, v57 + 2);
    v37 = 5372LL;
    goto LABEL_56;
  }
  v13 = m_PowerState - 3;
  if ( !v13 )
  {
    if ( this->m_Dispatching == 1 )
      KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
    return 0;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    p_m_DriverOwned = &this->m_DriverOwned;
    *p_m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
    if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
    {
      if ( !m_Globals->FxVerboseOn )
        return 1;
      v47 = 87;
      goto LABEL_88;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v41 = 86;
LABEL_83:
      v46 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v46 = 0LL;
      _a1 = v46;
LABEL_86:
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v41, WPP_FxIoQueue_cpp_Traceguids, _a1);
    }
LABEL_58:
    v39 = p_m_DriverOwned->Flink;
    this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
    this->m_PowerNotify.Flink = v39;
    v39->Blink = &this->m_PowerNotify;
    this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
    p_m_DriverOwned->Blink = p_m_DriverOwned;
    p_m_DriverOwned->Flink = p_m_DriverOwned;
    return 1;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v16 = &this->m_PowerNotify;
    if ( v16->Flink == v16 )
    {
      *p_m_PowerState = FxIoQueuePowerStoppingDriverNotified;
      return 1;
    }
    v27 = v16->Flink;
    v28 = v16->Flink->Flink;
    if ( v16->Flink->Blink != v16 || v28->Blink != v27 )
      __fastfail(3u);
    v16->Flink = v28;
    v28->Blink = v16;
    v29 = this->m_PowerDriverNotified.Blink;
    if ( v29->Flink != &this->m_PowerDriverNotified )
      __fastfail(3u);
    v27->Flink = &this->m_PowerDriverNotified;
    v30 = v27 - 19;
    v27->Blink = v29;
    v29->Flink = v27;
    this->m_PowerDriverNotified.Blink = v27;
    stopCallback = this->m_IoStop;
    if ( !_mm_srli_si128((__m128i)stopCallback, 8).m128i_u64[0] || HIBYTE(v30[13].Flink) )
      return 1;
    v31 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
    if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
    {
LABEL_76:
      v32 = 0;
    }
    else
    {
      while ( v31[-1].m_IoPkgListNode.m_ListEntry.Blink != (_LIST_ENTRY *)&v30[7].Blink )
      {
        v31 = (FxIoQueue *)v31->FxNonPagedObject::FxObject::__vftable;
        if ( v31 == (FxIoQueue *)&this->m_DriverCancelable )
          goto LABEL_76;
      }
      v32 = 1;
    }
    v33 = v32 != 0 ? 0x10000000 : 0;
    if ( m_Globals->FxVerboseOn )
    {
      v43 = (void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v44 = this->m_ObjectSize;
      if ( !WORD1(v30->Blink) )
        v43 = 0LL;
      v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a2 = v43;
      if ( !v44 )
        v45 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x5Au, WPP_FxIoQueue_cpp_Traceguids, v45, _a2);
    }
    FxObject::AddRef(
      (FxObject *)v30,
      (void *)0x646C6F48,
      5280,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Unlock(this, *PreviousIrql, v34);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags((FxRequestBase *)v30, 512);
    v35 = (WDFREQUEST__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v30->Blink) )
      v35 = 0LL;
    v36 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v36 = 0LL;
    FxIoQueueIoStop::Invoke(&stopCallback, v36, v35, v33 + 1);
    v37 = 5290LL;
LABEL_56:
    ((void (__fastcall *)(_LIST_ENTRY *, void *, __int64, const char *))v30->Flink[1].Flink)(
      v30,
      (void *)1684827976,
      v37,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, PreviousIrql, v38);
    return 1;
  }
  v19 = v15 - 1;
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      p_m_DriverOwned = &this->m_DriverOwned;
      *p_m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
      if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
      {
        if ( !m_Globals->FxVerboseOn )
          return 1;
        v47 = 89;
        goto LABEL_88;
      }
      if ( m_Globals->FxVerboseOn )
      {
        v41 = 88;
        v42 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v42 = 0LL;
        _a1 = v42;
        goto LABEL_86;
      }
      goto LABEL_58;
    }
    return 0;
  }
LABEL_21:
  p_m_PowerDriverNotified = &this->m_PowerDriverNotified;
  v21 = this->m_PowerDriverNotified.Flink;
  acknowledgedList.Blink = &acknowledgedList;
  p_acknowledgedList = &acknowledgedList;
  acknowledgedList.Flink = &acknowledgedList;
  v23 = 0;
  if ( v21 != &this->m_PowerDriverNotified )
  {
    do
    {
      v24 = v21->Flink;
      if ( (unsigned __int8)(BYTE1(v21[3].Flink) - 1) <= 1u )
      {
        v25 = v21->Blink;
        if ( v24->Blink != v21 || v25->Flink != v21 )
          __fastfail(3u);
        v25->Flink = v24;
        v24->Blink = v25;
        v26 = acknowledgedList.Blink;
        if ( acknowledgedList.Blink->Flink != &acknowledgedList )
          __fastfail(3u);
        v21->Blink = acknowledgedList.Blink;
        v21->Flink = &acknowledgedList;
        v26->Flink = v21;
        acknowledgedList.Blink = v21;
      }
      v21 = v24;
    }
    while ( v24 != p_m_PowerDriverNotified );
    goto LABEL_39;
  }
  while ( p_acknowledgedList != &acknowledgedList )
  {
    v40 = p_acknowledgedList->Flink;
    if ( p_acknowledgedList->Blink != &acknowledgedList || v40->Blink != p_acknowledgedList )
      __fastfail(3u);
    acknowledgedList.Flink = p_acknowledgedList->Flink;
    v40->Blink = &acknowledgedList;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], PreviousIrql, a4);
    v23 = 1;
LABEL_39:
    p_acknowledgedList = acknowledgedList.Flink;
  }
  if ( p_m_PowerDriverNotified->Flink == p_m_PowerDriverNotified )
  {
    if ( !this->m_TwoPhaseCompletions )
    {
      if ( this->m_Dispatching == 1 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v76 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v76 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Eu, WPP_FxIoQueue_cpp_Traceguids, v76);
        }
        *p_m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( !m_Globals->FxVerboseOn )
        return v23;
      v75 = 95;
      goto LABEL_152;
    }
    if ( m_Globals->FxVerboseOn )
    {
      v75 = 93;
      goto LABEL_152;
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    v75 = 92;
LABEL_152:
    v77 = this->m_ObjectSize;
    v78 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v77 )
      v78 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v75, WPP_FxIoQueue_cpp_Traceguids, v78);
  }
  return v23;
}
