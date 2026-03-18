/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C004CF30
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0051A40 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00128D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pc @ 0x1C001CD98 (Template_pc.c)
 *     VidSchFlushDevice @ 0x1C003C560 (VidSchFlushDevice.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007AD24 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        struct DXGADAPTER **this,
        __int64 **a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  __int64 v5; // rbx
  __int64 v7; // rdi
  int v8; // edx
  unsigned int v9; // ebp
  __int64 *v10; // rcx
  union _LARGE_INTEGER *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *i; // rsi
  _QWORD *j; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  VIDMM_GLOBAL *v23; // rdx
  VIDMM_GLOBAL **v24; // r8
  bool v25; // si
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int8 v41; // [rsp+20h] [rbp-98h]
  __int64 v42; // [rsp+30h] [rbp-88h]
  _QWORD v43[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v44[7]; // [rsp+48h] [rbp-70h] BYREF
  int v45; // [rsp+C8h] [rbp+10h]
  char v46; // [rsp+D8h] [rbp+20h]

  v46 = (char)a4.0;
  v5 = a3;
  v7 = **a2;
  v8 = **(_DWORD **)(v7 + 472);
  if ( (v8 & 0x40000000) != 0 || v8 < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(this);
    *(_QWORD *)(v40 + 24) = a2;
    WdLogEvent5_WdWarning(v40);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v7 + 336) )
  {
    v29 = WdLogNewEntry5_WdWarning(this);
    *(_QWORD *)(v29 + 24) = a2;
    WdLogEvent5_WdWarning(v29);
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors(this[3]) )
      return 3221225485LL;
  }
  if ( (_DWORD)v5 != 2 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      *(_DWORD *)(v7 + 416) = 1;
      goto LABEL_6;
    }
    if ( (_DWORD)v5 == 3 )
    {
      *(_DWORD *)(v7 + 416) = 3;
      goto LABEL_6;
    }
    if ( (_DWORD)v5 != 4 )
    {
      v30 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 3));
      *(_QWORD *)(v30 + 24) = a2;
      *(_QWORD *)(v30 + 32) = v5;
      WdLogEvent5_WdWarning(v30);
      return 3221225485LL;
    }
    if ( *(_DWORD *)(v7 + 376) >= 0xA0000000 )
    {
      *(_DWORD *)(v7 + 416) = 4;
      goto LABEL_6;
    }
  }
  *(_DWORD *)(v7 + 416) = 2;
LABEL_6:
  v9 = 0;
  _InterlockedIncrement((volatile signed __int32 *)a2[12] + 2);
  v10 = a2[12];
  if ( _InterlockedCompareExchange((volatile signed __int32 *)v10 + 1, 1, 0) )
  {
    v39 = WdLogNewEntry5_WdWarning(v10);
    *(_QWORD *)(v39 + 24) = a2;
    *(_QWORD *)(v39 + 32) = *((int *)a2[12] + 1);
    WdLogEvent5_WdWarning(v39);
    v9 = DxgkVidMmAllowFailOnOfferReclaimErrors(this[3]) != 0 ? 0xC000000D : 0;
  }
  else
  {
    *(_QWORD *)(v7 + 424) = this[576];
    if ( (v46 & 1) == 0 )
    {
      memset(v44, 0, sizeof(v44));
      v11 = *(union _LARGE_INTEGER **)(v7 + 312);
      v44[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v44[6]) = 3;
      LODWORD(v44[0]) = 1;
      DXGFASTMUTEX::Acquire(v11);
      for ( i = *(_QWORD **)(v7 + 288); i != (_QWORD *)(v7 + 288); i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
        {
          v13 = j - 5;
          if ( (*(_DWORD *)(j - 1) & 1) == 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v13[12] + 8LL));
            v18 = v13[1];
            v44[4] = j - 5;
            v42 = *(_QWORD *)(v18 + 32);
            v45 = VidSchSubmitDeviceCommand(v42, (__int64)v44, v14, v15);
            if ( v45 < 0 )
            {
              v31 = WdLogNewEntry5_WdWarning(v13);
              *(_QWORD *)(v31 + 24) = v45;
              WdLogEvent5_WdWarning(v31);
              v43[0] = 5LL;
              v43[1] = 0LL;
              VidSchFlushDevice(v42, (int *)v43, v32, v33);
              LODWORD(v44[0]) = 0;
              VidSchSubmitDeviceCommand(v42, (__int64)v44, v34, v35);
            }
          }
        }
      }
      v19 = *(_QWORD *)(v7 + 312);
      if ( *(struct _KTHREAD **)v19 != KeGetCurrentThread() )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14, v15);
        v36[3] = 275LL;
        v36[4] = 4LL;
        v36[5] = v19;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
      }
      if ( *(int *)(v19 + 12) <= 0 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        *(_QWORD *)(v37 + 24) = 374LL;
        WdLogEvent5_WdAssertion(v37);
      }
      if ( (*(_DWORD *)(v19 + 12))-- == 1 )
      {
        *(_QWORD *)v19 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) != 1 )
          KeSetEvent((PRKEVENT)(v19 + 24), 0, 0);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v19 + 8));
      }
      KeLeaveCriticalRegion();
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(this + 4980, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v38 = *((_DWORD *)this + 9964);
        if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v21, &EventBlockThread, v22, v38);
      }
      ExAcquirePushLockExclusiveEx(this + 4980, 0LL);
    }
    v23 = (VIDMM_GLOBAL *)(v7 + 400);
    this[4981] = KeGetCurrentThread();
    v24 = (VIDMM_GLOBAL **)this[4979];
    v25 = this[4978] == (struct DXGADAPTER *)(this + 4978);
    *(_QWORD *)(v7 + 400) = this + 4978;
    *(_QWORD *)(v7 + 408) = v24;
    if ( *v24 != (VIDMM_GLOBAL *)(this + 4978) )
      __fastfail(3u);
    *v24 = v23;
    this[4979] = v23;
    this[4981] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4980, 0LL);
    KeLeaveCriticalRegion();
    if ( v25 )
      KeSetEvent(*((PRKEVENT *)*this + 15), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(a2);
  if ( *((_DWORD *)a2[12] + 1) == 2 && (gVidMmGlobalFault & 0x4000) != 0 )
    VIDMM_GLOBAL::ForceDiscardOffer((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)a2);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      v41 = *(_BYTE *)(v7 + 416);
      Template_pc(v41, v26, v27, a2, v41);
    }
  }
  return v9;
}
