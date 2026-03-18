/*
 * XREFs of ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000B888
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000721C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x1C00084C0 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0095EBC (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

char __fastcall FxIoQueue::ProcessPowerEvents(
        FxIoQueue *this,
        unsigned __int8 *PreviousIrql,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueuePowerState *p_m_PowerState; // r15
  FxIoQueuePowerState m_PowerState; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  _LIST_ENTRY *v12; // rax
  __int32 v13; // ecx
  __int32 v14; // ecx
  __int32 v15; // ecx
  _LIST_ENTRY *p_m_PowerNotify; // rcx
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
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v29; // rdx
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v31; // r14
  WDFQUEUE__ *v32; // rbx
  FxIoQueue *v33; // rax
  unsigned int v34; // r12d
  unsigned int v35; // ecx
  FxTagTracker *v36; // rax
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // r8
  WDFREQUEST__ *v39; // r8
  __int64 v40; // r8
  unsigned __int8 v41; // r8
  unsigned __int8 *v42; // rdx
  const void *v43; // rbx
  _LIST_ENTRY *v44; // rcx
  _LIST_ENTRY *v45; // rax
  unsigned __int8 *v46; // r8
  unsigned __int16 v47; // r9
  const void *v48; // rdi
  unsigned __int16 v49; // r9
  const void *_a2; // rax
  const void *_a1; // rcx
  _LIST_ENTRY *v52; // rcx
  unsigned __int8 v53; // r8
  FxVerifierLock *v54; // rcx
  _LIST_ENTRY *v55; // rax
  _LIST_ENTRY *v56; // r14
  _LIST_ENTRY *v57; // rcx
  _LIST_ENTRY *v58; // rcx
  WDFQUEUE__ *v59; // rbx
  FxIoQueueIoStop v60; // xmm0
  FxIoQueue *v61; // rax
  unsigned int v62; // r12d
  const void *v63; // rax
  const void *v64; // rcx
  unsigned int v65; // ecx
  FxTagTracker *v66; // rax
  unsigned __int8 v67; // dl
  _LIST_ENTRY *v68; // rcx
  unsigned __int8 v69; // r8
  unsigned __int8 v70; // r8
  FxVerifierLock *v71; // rcx
  WDFREQUEST__ *v72; // r8
  const void *v73; // rdi
  _LIST_ENTRY *v74; // r14
  _LIST_ENTRY *v75; // rcx
  _LIST_ENTRY *v76; // rcx
  WDFQUEUE__ *v77; // rbx
  _LIST_ENTRY *v78; // r14
  const void *v79; // rax
  const void *v80; // rcx
  unsigned int v81; // ecx
  FxTagTracker *v82; // rax
  unsigned __int8 v83; // dl
  _LIST_ENTRY *v84; // rcx
  void *v85; // r8
  const void *v86; // rdi
  unsigned __int16 v87; // r9
  _LIST_ENTRY acknowledgedList; // [rsp+40h] [rbp-40h] BYREF
  FxIoQueueIoStop stopCallback; // [rsp+50h] [rbp-30h] BYREF
  FxIoQueueIoStop m_IoStop; // [rsp+60h] [rbp-20h] BYREF
  FxIoQueueIoResume resumeCallback; // [rsp+70h] [rbp-10h] BYREF
  KIRQL NewIrql; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 *v93; // [rsp+C8h] [rbp+48h]
  KIRQL v94; // [rsp+D0h] [rbp+50h] BYREF

  v93 = PreviousIrql;
  m_Globals = this->m_Globals;
  p_m_PowerState = &this->m_PowerState;
  m_PowerState = this->m_PowerState;
  if ( m_PowerState <= FxIoQueuePowerPurgeNotifyingDriver )
  {
    if ( m_PowerState != FxIoQueuePowerPurgeNotifyingDriver )
    {
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
              v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v48 = 0LL;
            v49 = 85;
            goto LABEL_112;
          }
          v43 = 0LL;
          if ( m_Globals->FxVerboseOn )
          {
            if ( this->m_ObjectSize )
              v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            v47 = 84;
            goto LABEL_105;
          }
          goto LABEL_64;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          p_m_PowerNotify = &this->m_PowerNotify;
          if ( p_m_PowerNotify->Flink == p_m_PowerNotify )
          {
            *p_m_PowerState = FxIoQueuePowerStoppingDriverNotified;
            return 1;
          }
          Flink = p_m_PowerNotify->Flink;
          v29 = p_m_PowerNotify->Flink->Flink;
          if ( p_m_PowerNotify->Flink->Blink != p_m_PowerNotify || v29->Blink != Flink )
            __fastfail(3u);
          p_m_PowerNotify->Flink = v29;
          v29->Blink = p_m_PowerNotify;
          Blink = this->m_PowerDriverNotified.Blink;
          Flink->Flink = &this->m_PowerDriverNotified;
          Flink->Blink = Blink;
          if ( Blink->Flink != &this->m_PowerDriverNotified )
            __fastfail(3u);
          Blink->Flink = Flink;
          v31 = Flink - 19;
          this->m_PowerDriverNotified.Blink = Flink;
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
            WPP_IFR_SF_qq(
              m_Globals,
              5u,
              0xDu,
              0x58u,
              (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
              _a1,
              _a2);
          }
          v35 = _InterlockedIncrement((volatile signed __int32 *)&v31->Blink + 1);
          if ( SLOBYTE(v31[1].Blink) < 0 )
            v36 = (FxTagTracker *)v31[-2].Flink;
          else
            v36 = 0LL;
          if ( v36 )
            FxTagTracker::UpdateTagHistory(
              v36,
              (void *)0x646C6F48,
              5255,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagAddRef,
              v35);
          v37 = *v93;
          if ( (this->m_ObjectFlags & 0x80) != 0 && (v52 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
            FxVerifierLock::Unlock((FxVerifierLock *)v52, v37, a3);
          else
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, v37);
          if ( m_Globals->FxVerifierOn )
          {
            FxNonPagedObject::Lock((FxNonPagedObject *)v31, &NewIrql, v38);
            WORD1(v31[13].Blink) |= 0x200u;
            if ( ((__int64)v31[1].Blink & 0x80) != 0 && (v54 = (FxVerifierLock *)v31[-2].Blink) != 0LL )
              FxVerifierLock::Unlock(v54, NewIrql, v53);
            else
              KeReleaseSpinLock((PKSPIN_LOCK)&v31[7], NewIrql);
          }
          if ( WORD1(v31->Blink) )
            v39 = (WDFREQUEST__ *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v39 = 0LL;
          if ( this->m_ObjectSize )
            v32 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          FxIoQueueIoStop::Invoke(&stopCallback, v32, v39, v34);
          v40 = 5265LL;
          goto LABEL_61;
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
              v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v48 = 0LL;
            v49 = 87;
            goto LABEL_112;
          }
          v43 = 0LL;
          if ( m_Globals->FxVerboseOn )
          {
            if ( this->m_ObjectSize )
              v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            v47 = 86;
            goto LABEL_105;
          }
LABEL_64:
          v44 = p_m_DriverOwned->Flink;
          this->m_PowerNotify.Blink = this->m_DriverOwned.Blink;
          this->m_PowerNotify.Flink = v44;
          v44->Blink = &this->m_PowerNotify;
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
    v55 = &this->m_PowerNotify;
    if ( v55->Flink == v55 )
    {
      *p_m_PowerState = FxIoQueuePowerPurgeDriverNotified;
      return 1;
    }
    v56 = v55->Flink;
    v57 = v55->Flink->Flink;
    if ( v55->Flink->Blink != v55 || v57->Blink != v56 )
      __fastfail(3u);
    v55->Flink = v57;
    v57->Blink = v55;
    v58 = this->m_PowerDriverNotified.Blink;
    v56->Flink = &this->m_PowerDriverNotified;
    v56->Blink = v58;
    if ( v58->Flink != &this->m_PowerDriverNotified )
      __fastfail(3u);
    v58->Flink = v56;
    v59 = 0LL;
    this->m_PowerDriverNotified.Blink = v56;
    v31 = v56 - 19;
    m_IoStop = this->m_IoStop;
    v60 = m_IoStop;
    BYTE1(v31[22].Flink) = 0;
    if ( !_mm_srli_si128((__m128i)v60, 8).m128i_u64[0] || HIBYTE(v31[13].Flink) )
      return 1;
    v61 = (FxIoQueue *)this->m_DriverCancelable.m_Queue.Flink;
    v62 = 2;
    if ( v61 != (FxIoQueue *)&this->m_DriverCancelable )
    {
      while ( v61[-1].m_IoPkgListNode.m_ListEntry.Blink != (_LIST_ENTRY *)&v31[7].Blink )
      {
        v61 = (FxIoQueue *)v61->FxNonPagedObject::FxObject::__vftable;
        if ( v61 == (FxIoQueue *)&this->m_DriverCancelable )
          goto LABEL_126;
      }
      v62 = 268435458;
    }
LABEL_126:
    if ( m_Globals->FxVerboseOn )
    {
      if ( WORD1(v31->Blink) )
        v63 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v63 = 0LL;
      if ( this->m_ObjectSize )
        v64 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v64 = 0LL;
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xDu,
        0x59u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v64,
        v63);
    }
    v65 = _InterlockedIncrement((volatile signed __int32 *)&v31->Blink + 1);
    if ( SLOBYTE(v31[1].Blink) >= 0 )
      v66 = 0LL;
    else
      v66 = (FxTagTracker *)v31[-2].Flink;
    if ( v66 )
      FxTagTracker::UpdateTagHistory(
        v66,
        (void *)0x646C6F48,
        5337,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        v65);
    v67 = *v93;
    if ( (this->m_ObjectFlags & 0x80) != 0 && (v68 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v68, v67, a3);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v67);
    if ( m_Globals->FxVerifierOn )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)v31, &v94, v69);
      WORD1(v31[13].Blink) |= 0x200u;
      if ( ((__int64)v31[1].Blink & 0x80) != 0 && (v71 = (FxVerifierLock *)v31[-2].Blink) != 0LL )
        FxVerifierLock::Unlock(v71, v94, v70);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)&v31[7], v94);
    }
    if ( WORD1(v31->Blink) )
      v72 = (WDFREQUEST__ *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v72 = 0LL;
    if ( this->m_ObjectSize )
      v59 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    FxIoQueueIoStop::Invoke(&m_IoStop, v59, v72, v62);
    v40 = 5347LL;
LABEL_61:
    ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v31->Flink[1].Flink)(
      v31,
      1684827976LL,
      v40,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    v42 = v93;
LABEL_62:
    FxNonPagedObject::Lock(this, v42, v41);
    return 1;
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
        v74 = v12->Flink;
        v75 = v12->Flink->Flink;
        if ( v12->Flink->Blink != v12 || v75->Blink != v74 )
          __fastfail(3u);
        v12->Flink = v75;
        v75->Blink = v12;
        v76 = this->m_DriverOwned.Blink;
        v74->Flink = &this->m_DriverOwned;
        v74->Blink = v76;
        if ( v76->Flink != &this->m_DriverOwned )
          __fastfail(3u);
        v76->Flink = v74;
        v77 = 0LL;
        this->m_DriverOwned.Blink = v74;
        v78 = v74 - 19;
        resumeCallback = this->m_IoResume;
        if ( _mm_srli_si128((__m128i)resumeCallback, 8).m128i_u64[0] && !HIBYTE(v78[13].Flink) )
        {
          if ( m_Globals->FxVerboseOn )
          {
            if ( WORD1(v78->Blink) )
              v79 = (const void *)((unsigned __int64)v78 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v79 = 0LL;
            if ( this->m_ObjectSize )
              v80 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v80 = 0LL;
            WPP_IFR_SF_qq(
              m_Globals,
              5u,
              0xDu,
              0x60u,
              (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
              v80,
              v79);
          }
          v81 = _InterlockedIncrement((volatile signed __int32 *)&v78->Blink + 1);
          if ( SLOBYTE(v78[1].Blink) >= 0 )
            v82 = 0LL;
          else
            v82 = (FxTagTracker *)v78[-2].Flink;
          if ( v82 )
            FxTagTracker::UpdateTagHistory(
              v82,
              (void *)0x646C6F48,
              5578,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagAddRef,
              v81);
          v83 = *PreviousIrql;
          if ( (this->m_ObjectFlags & 0x80) != 0 && (v84 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
            FxVerifierLock::Unlock((FxVerifierLock *)v84, v83, a3);
          else
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, v83);
          if ( WORD1(v78->Blink) )
            v85 = (void *)((unsigned __int64)v78 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v85 = 0LL;
          if ( this->m_ObjectSize )
            v77 = (WDFQUEUE__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          FxIoQueueIoResume::Invoke((FxIoQueueIoState *)&resumeCallback, v77, v85);
          ((void (__fastcall *)(_LIST_ENTRY *, __int64, __int64, const char *))v78->Flink[1].Flink)(
            v78,
            1684827976LL,
            5584LL,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          v42 = PreviousIrql;
          goto LABEL_62;
        }
        if ( !m_Globals->FxVerboseOn )
          return 1;
        if ( this->m_ObjectSize )
          v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v48 = 0LL;
        v49 = 97;
LABEL_112:
        WPP_IFR_SF_q(
          m_Globals,
          5u,
          0xDu,
          v49,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v48);
        return 1;
      }
      if ( v11 == 1 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          if ( this->m_ObjectSize )
            v73 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v73 = 0LL;
          WPP_IFR_SF_q(
            m_Globals,
            5u,
            0xDu,
            0x62u,
            (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
            v73);
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
        v48 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v48 = 0LL;
      v49 = 95;
      goto LABEL_112;
    }
    v43 = 0LL;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v47 = 94;
LABEL_105:
      WPP_IFR_SF_q(
        m_Globals,
        5u,
        0xDu,
        v47,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v43);
      goto LABEL_64;
    }
    goto LABEL_64;
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
    v45 = p_acknowledgedList->Flink;
    if ( p_acknowledgedList->Blink != &acknowledgedList || v45->Blink != p_acknowledgedList )
      __fastfail(3u);
    v46 = v93;
    acknowledgedList.Flink = p_acknowledgedList->Flink;
    v45->Blink = &acknowledgedList;
    FxIoQueue::ProcessAcknowledgedRequests(this, (FxRequest *)&p_acknowledgedList[-19], v46, a4);
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
          WPP_IFR_SF_q(
            m_Globals,
            5u,
            0xDu,
            0x5Cu,
            (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
            v21);
        }
        *p_m_PowerState = FxIoQueuePowerOff;
        KeSetEvent(&this->m_PowerIdle.m_Event, 0, 0);
        return 1;
      }
      if ( !m_Globals->FxVerboseOn )
        return v24;
      if ( this->m_ObjectSize )
        v86 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v86 = 0LL;
      v87 = 93;
      goto LABEL_217;
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v86 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v86 = 0LL;
      v87 = 91;
LABEL_217:
      WPP_IFR_SF_q(
        m_Globals,
        5u,
        0xDu,
        v87,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        v86);
    }
  }
  else if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      v86 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v86 = 0LL;
    v87 = 90;
    goto LABEL_217;
  }
  return v24;
}
