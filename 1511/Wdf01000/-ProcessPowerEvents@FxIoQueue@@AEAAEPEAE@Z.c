/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E4F8
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000EA8C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C000F8FC (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C00573F8 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
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
  _LIST_ENTRY *v12; // rcx
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *p_m_DriverOwned; // r14
  int v19; // ecx
  _LIST_ENTRY *p_m_PowerDriverNotified; // r12
  const void *v21; // rbx
  _LIST_ENTRY *v22; // rcx
  _LIST_ENTRY *p_acknowledgedList; // rdx
  char v24; // r13
  _LIST_ENTRY *v25; // rdx
  _LIST_ENTRY *v26; // rax
  _LIST_ENTRY *v27; // rax
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY *v29; // rdx
  _LIST_ENTRY *v30; // rdx
  _LIST_ENTRY *v31; // r14
  WDFQUEUE__ *v32; // rbx
  FxIoQueue *v33; // rax
  unsigned int v34; // r12d
  unsigned __int8 v35; // r8
  WDFREQUEST__ *v36; // r8
  __int64 v37; // r8
  unsigned __int8 v38; // r8
  const void *v39; // rbx
  _LIST_ENTRY *v40; // rcx
  _LIST_ENTRY *v41; // rax
  unsigned __int16 v42; // r9
  const void *v43; // rdi
  unsigned __int16 v44; // r9
  const void *_a2; // rax
  const void *_a1; // rcx
  _LIST_ENTRY *p_m_PowerNotify; // rax
  _LIST_ENTRY *Flink; // r14
  _LIST_ENTRY *v49; // rcx
  _LIST_ENTRY *Blink; // rcx
  WDFQUEUE__ *v51; // rbx
  FxIoQueueIoStop v52; // xmm0
  FxIoQueue *v53; // rax
  unsigned int v54; // r12d
  const void *v55; // rax
  const void *v56; // rcx
  unsigned __int8 v57; // r8
  WDFREQUEST__ *v58; // r8
  const void *v59; // rdi
  _LIST_ENTRY *v60; // rax
  _LIST_ENTRY *v61; // rdx
  _LIST_ENTRY *v62; // rdx
  WDFQUEUE__ *v63; // rbx
  const void *v64; // rax
  const void *v65; // rcx
  unsigned __int8 v66; // r8
  void *v67; // r8
  const void *v68; // rdi
  unsigned __int16 v69; // r9
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-40h] BYREF
  FxIoQueueIoStop stopCallback; // [rsp+50h] [rbp-30h] BYREF
  FxIoQueueIoStop m_IoStop; // [rsp+60h] [rbp-20h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+70h] [rbp-10h] BYREF

  m_Globals = this->m_Globals;
  p_m_PowerState = &this->m_PowerState;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState <= FxIoQueuePowerPurgeNotifyingDriver )
  {
    if ( m_PowerState == FxIoQueuePowerPurgeNotifyingDriver )
    {
      p_m_PowerNotify = &this->m_PowerNotify;
      if ( p_m_PowerNotify->Flink == p_m_PowerNotify )
      {
        *p_m_PowerState = FxIoQueuePowerPurgeDriverNotified;
        return 1;
      }
      Flink = p_m_PowerNotify->Flink;
      v49 = p_m_PowerNotify->Flink->Flink;
      if ( p_m_PowerNotify->Flink->Blink != p_m_PowerNotify || v49->Blink != Flink )
        __fastfail(3u);
      p_m_PowerNotify->Flink = v49;
      v49->Blink = p_m_PowerNotify;
      Blink = this->m_PowerDriverNotified.Blink;
      Flink->Flink = &this->m_PowerDriverNotified;
      Flink->Blink = Blink;
      if ( Blink->Flink != &this->m_PowerDriverNotified )
        __fastfail(3u);
      Blink->Flink = Flink;
      v51 = 0LL;
      this->m_PowerDriverNotified.Blink = Flink;
      v31 = Flink - 19;
      m_IoStop = this->m_IoStop;
      v52 = m_IoStop;
      BYTE1(v31[22].Flink) = 0;
      if ( !_mm_srli_si128((__m128i)v52, 8).m128i_u64[0] || HIBYTE(v31[13].Flink) )
        return 1;
      v53 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
      v54 = 2;
      if ( v53 != (FxIoQueue *)&this->m_DriverCancelable )
      {
        while ( v53[-1].m_IoPkgListNode.m_ListEntry.Blink != (_LIST_ENTRY *)&v31[7].Blink )
        {
          v53 = (FxIoQueue *)v53->FxNonPagedObject::FxObject::__vftable;
          if ( v53 == (FxIoQueue *)&this->m_DriverCancelable )
            goto LABEL_113;
        }
        v54 = 268435458;
      }
LABEL_113:
      if ( m_Globals->FxVerboseOn )
      {
        if ( WORD1(v31->Blink) )
          v55 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v55 = 0LL;
        if ( this->m_ObjectSize )
          v56 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v56 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x59u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v56, v55);
      }
      FxObject::AddRef(
        (FxObject *)v31,
        (void *)0x646C6F48,
        5337,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Unlock(this, *PreviousIrql, v57);
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags((FxRequestBase *)v31, 512);
      if ( WORD1(v31->Blink) )
        v58 = (WDFREQUEST__ *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v58 = 0LL;
      if ( this->m_ObjectSize )
        v51 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      FxIoQueueIoStop::Invoke(&m_IoStop, v51, v58, v54);
      v37 = 5347LL;
      goto LABEL_56;
    }
    v13 = m_PowerState - 3;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        p_m_DriverOwned = &this->m_DriverOwned;
        *p_m_PowerState = FxIoQueuePowerStoppingNotifyingDriver;
        if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
        {
          if ( !m_Globals->FxVerboseOn )
            return 1;
          if ( this->m_ObjectSize )
            v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v43 = 0LL;
          v44 = 85;
          goto LABEL_99;
        }
        v39 = 0LL;
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v42 = 84;
          goto LABEL_92;
        }
        goto LABEL_58;
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
        v28 = v16->Flink;
        v29 = v16->Flink->Flink;
        if ( v16->Flink->Blink != v16 || v29->Blink != v28 )
          __fastfail(3u);
        v16->Flink = v29;
        v29->Blink = v16;
        v30 = this->m_PowerDriverNotified.Blink;
        v28->Flink = &this->m_PowerDriverNotified;
        v28->Blink = v30;
        if ( v30->Flink != &this->m_PowerDriverNotified )
          __fastfail(3u);
        v30->Flink = v28;
        v31 = v28 - 19;
        this->m_PowerDriverNotified.Blink = v28;
        v32 = 0LL;
        stopCallback = this->m_IoStop;
        if ( !_mm_srli_si128((__m128i)stopCallback, 8).m128i_u64[0] || HIBYTE(v31[13].Flink) )
          return 1;
        v33 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
        v34 = 1;
        if ( v33 != (FxIoQueue *)&this->m_DriverCancelable )
        {
          while ( v33[-1].m_IoPkgListNode.m_ListEntry.Blink != (_LIST_ENTRY *)&v31[7].Blink )
          {
            v33 = (FxIoQueue *)v33->FxNonPagedObject::FxObject::__vftable;
            if ( v33 == (FxIoQueue *)&this->m_DriverCancelable )
              goto LABEL_48;
          }
          v34 = 268435457;
        }
LABEL_48:
        if ( m_Globals->FxVerboseOn )
        {
          if ( WORD1(v31->Blink) )
            _a2 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a2 = 0LL;
          if ( this->m_ObjectSize )
            _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a1 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x58u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1, _a2);
        }
        FxObject::AddRef(
          (FxObject *)v31,
          (void *)0x646C6F48,
          5255,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Unlock(this, *PreviousIrql, v35);
        if ( m_Globals->FxVerifierOn )
          FxRequestBase::SetVerifierFlags((FxRequestBase *)v31, 512);
        if ( WORD1(v31->Blink) )
          v36 = (WDFREQUEST__ *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v36 = 0LL;
        if ( this->m_ObjectSize )
          v32 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        FxIoQueueIoStop::Invoke(&stopCallback, v32, v36, v34);
        v37 = 5265LL;
LABEL_56:
        ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v31->Flink[1].Flink)(
          v31,
          1684827976LL,
          v37,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(this, PreviousIrql, v38);
        return 1;
      }
      v19 = v15 - 1;
      if ( !v19 )
        goto LABEL_21;
      if ( v19 == 1 )
      {
        p_m_DriverOwned = &this->m_DriverOwned;
        *p_m_PowerState = FxIoQueuePowerPurgeNotifyingDriver;
        if ( p_m_DriverOwned->Flink == p_m_DriverOwned )
        {
          if ( !m_Globals->FxVerboseOn )
            return 1;
          if ( this->m_ObjectSize )
            v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v43 = 0LL;
          v44 = 87;
          goto LABEL_99;
        }
        v39 = 0LL;
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          v42 = 86;
          goto LABEL_92;
        }
LABEL_58:
        v40 = p_m_DriverOwned->Flink;
        this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
        this->m_PowerNotify.Flink = v40;
        v40->Blink = &this->m_PowerNotify;
        this->m_PowerNotify.Blink->Flink = &this->m_PowerNotify;
        p_m_DriverOwned->Blink = p_m_DriverOwned;
        p_m_DriverOwned->Flink = p_m_DriverOwned;
        return 1;
      }
    }
    else if ( this->m_Dispatching == 1 )
    {
      KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
    }
    return 0;
  }
  v9 = m_PowerState - 9;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v12 = &this->m_PowerNotify;
        if ( v12->Flink == v12 )
        {
          *p_m_PowerState = FxIoQueuePowerRestartingDriverNotified;
          return 1;
        }
        v60 = v12->Flink;
        v61 = v12->Flink->Flink;
        if ( v12->Flink->Blink != v12 || v61->Blink != v60 )
          __fastfail(3u);
        v12->Flink = v61;
        v61->Blink = v12;
        v62 = this->m_DriverOwned.Blink;
        v60->Flink = &this->m_DriverOwned;
        v60->Blink = v62;
        if ( v62->Flink != &this->m_DriverOwned )
          __fastfail(3u);
        v62->Flink = v60;
        v31 = v60 - 19;
        this->m_DriverOwned.Blink = v60;
        v63 = 0LL;
        resumeCallback = this->m_IoResume;
        if ( _mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] && !HIBYTE(v31[13].Flink) )
        {
          if ( m_Globals->FxVerboseOn )
          {
            if ( WORD1(v31->Blink) )
              v64 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v64 = 0LL;
            if ( this->m_ObjectSize )
              v65 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v65 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x60u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v65, v64);
          }
          FxObject::AddRef(
            (FxObject *)v31,
            (void *)0x646C6F48,
            5578,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxNonPagedObject::Unlock(this, *PreviousIrql, v66);
          if ( WORD1(v31->Blink) )
            v67 = (void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v67 = 0LL;
          if ( this->m_ObjectSize )
            v63 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          FxIoQueueIoResume::Invoke((FxIoQueueIoState *)&resumeCallback, v63, v67);
          v37 = 5584LL;
          goto LABEL_56;
        }
        if ( !m_Globals->FxVerboseOn )
          return 1;
        if ( this->m_ObjectSize )
          v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v43 = 0LL;
        v44 = 97;
LABEL_99:
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v44, (const _GUID *)&FxObject::`vftable'.DebugExtension, v43);
        return 1;
      }
      if ( v11 == 1 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v59 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v59 = 0LL;
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x62u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v59);
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
      if ( this->m_ObjectSize )
        v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v43 = 0LL;
      v44 = 95;
      goto LABEL_99;
    }
    v39 = 0LL;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v42 = 94;
LABEL_92:
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v42, (const _GUID *)&FxObject::`vftable'.DebugExtension, v39);
      goto LABEL_58;
    }
    goto LABEL_58;
  }
LABEL_21:
  p_m_PowerDriverNotified = &this->m_PowerDriverNotified;
  v21 = 0LL;
  v22 = this->m_PowerDriverNotified.Flink;
  acknowledgedList.Blink = &acknowledgedList;
  p_acknowledgedList = &acknowledgedList;
  acknowledgedList.Flink = &acknowledgedList;
  v24 = 0;
  if ( v22 != &this->m_PowerDriverNotified )
  {
    do
    {
      v25 = v22->Flink;
      if ( (unsigned __int8)(BYTE1(v22[3].Flink) - 1) <= 1u )
      {
        v26 = v22->Blink;
        if ( v25->Blink != v22 || v26->Flink != v22 )
          __fastfail(3u);
        v26->Flink = v25;
        v25->Blink = v26;
        v27 = acknowledgedList.Blink;
        v22->Flink = &acknowledgedList;
        v22->Blink = v27;
        if ( v27->Flink != &acknowledgedList )
          __fastfail(3u);
        v27->Flink = v22;
        acknowledgedList.Blink = v22;
      }
      v22 = v25;
    }
    while ( v25 != p_m_PowerDriverNotified );
    goto LABEL_39;
  }
  while ( p_acknowledgedList != &acknowledgedList )
  {
    v41 = p_acknowledgedList->Flink;
    if ( p_acknowledgedList->Blink != &acknowledgedList || v41->Blink != p_acknowledgedList )
      __fastfail(3u);
    acknowledgedList.Flink = p_acknowledgedList->Flink;
    v41->Blink = &acknowledgedList;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], PreviousIrql, a4);
    v24 = 1;
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
          if ( this->m_ObjectSize )
            v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x5Cu, (const _GUID *)&FxObject::`vftable'.DebugExtension, v21);
        }
        *p_m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( !m_Globals->FxVerboseOn )
        return v24;
      if ( this->m_ObjectSize )
        v68 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v68 = 0LL;
      v69 = 93;
      goto LABEL_183;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v68 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v68 = 0LL;
      v69 = 91;
LABEL_183:
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, v69, (const _GUID *)&FxObject::`vftable'.DebugExtension, v68);
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v68 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v68 = 0LL;
    v69 = 90;
    goto LABEL_183;
  }
  return v24;
}
