/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509D0
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509A8 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C000F300 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     Template_pc @ 0x1C000F374 (Template_pc.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D95C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        struct DXGADAPTER **this,
        struct VIDMM_ALLOC *a2,
        __int64 a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // rcx
  DXGFASTMUTEX *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *i; // r15
  _QWORD *v19; // r14
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  VIDMM_GLOBAL *v26; // rdx
  VIDMM_GLOBAL **v27; // r8
  bool v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v34; // [rsp+30h] [rbp-50h]
  _QWORD v35[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v36[7]; // [rsp+48h] [rbp-38h] BYREF
  int v37; // [rsp+C8h] [rbp+48h]
  char v38; // [rsp+D8h] [rbp+58h]

  v38 = (char)a4.0;
  v5 = (int)a3;
  v7 = **(_QWORD **)a2;
  v8 = **(unsigned int **)(v7 + 472);
  if ( (v8 & 0x40000000) != 0 || (int)v8 < 0 )
  {
    v10 = WdLogNewEntry5_WdWarning(v8, a2, a3);
    goto LABEL_40;
  }
  if ( *(_DWORD *)(v7 + 336) )
  {
    v9 = WdLogNewEntry5_WdWarning(v8, a2, a3);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdWarning(v9);
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors(this[3]) )
      return 3221225485LL;
  }
  switch ( (_DWORD)v5 )
  {
    case 1:
      *(_DWORD *)(v7 + 416) = 1;
      goto LABEL_15;
    case 2:
      goto LABEL_13;
    case 3:
      *(_DWORD *)(v7 + 416) = 3;
      goto LABEL_15;
  }
  if ( (_DWORD)v5 != 4 )
  {
    v10 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 3), a2, a3);
    *(_QWORD *)(v10 + 32) = v5;
LABEL_40:
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdWarning(v10);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v7 + 376) < 0xA0000000 )
  {
LABEL_13:
    *(_DWORD *)(v7 + 416) = 2;
    goto LABEL_15;
  }
  *(_DWORD *)(v7 + 416) = 4;
LABEL_15:
  v11 = 0;
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a2 + 12) + 8LL), 1u);
  v12 = *((_QWORD *)a2 + 12);
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 4), 1, 0) )
  {
    v29 = WdLogNewEntry5_WdWarning(v12, a2, a3);
    *(_QWORD *)(v29 + 24) = a2;
    *(_QWORD *)(v29 + 32) = *(int *)(*((_QWORD *)a2 + 12) + 4LL);
    WdLogEvent5_WdWarning(v29);
    v11 = DxgkVidMmAllowFailOnOfferReclaimErrors(this[3]) != 0 ? 0xC000000D : 0;
  }
  else
  {
    *(_QWORD *)(v7 + 424) = this[576];
    if ( (v38 & 1) == 0 )
    {
      memset(v36, 0, sizeof(v36));
      v13 = *(DXGFASTMUTEX **)(v7 + 312);
      v36[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v36[6]) = 3;
      LODWORD(v36[0]) = 1;
      DXGFASTMUTEX::Acquire(v13);
      v17 = (_QWORD *)(v7 + 288);
      for ( i = *(_QWORD **)(v7 + 288); i != v17; i = (_QWORD *)*i )
      {
        v19 = (_QWORD *)*(i - 2);
        if ( v19 != i - 2 )
        {
          do
          {
            v20 = v19 - 5;
            if ( (*(_DWORD *)(v19 - 1) & 1) == 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v20[12] + 8LL));
              v21 = v20[1];
              v36[4] = v19 - 5;
              v34 = *(_QWORD *)(v21 + 32);
              v37 = VidSchSubmitDeviceCommand(v34, (__int64)v36);
              if ( v37 < 0 )
              {
                v23 = WdLogNewEntry5_WdWarning(v22, v14, v15);
                *(_QWORD *)(v23 + 24) = v37;
                WdLogEvent5_WdWarning(v23);
                v35[0] = 3LL;
                v35[1] = 0LL;
                VidSchFlushDevice(v34, (int *)v35, v24, v25);
                LODWORD(v36[0]) = 0;
                VidSchSubmitDeviceCommand(v34, (__int64)v36);
              }
            }
            v19 = (_QWORD *)*v19;
          }
          while ( v19 != i - 2 );
          v17 = (_QWORD *)(v7 + 288);
        }
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 312), v14, v15, v16);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4980));
    v26 = (VIDMM_GLOBAL *)(v7 + 400);
    v27 = (VIDMM_GLOBAL **)this[4979];
    v28 = this[4978] == (struct DXGADAPTER *)(this + 4978);
    *(_QWORD *)(v7 + 400) = this + 4978;
    *(_QWORD *)(v7 + 408) = v27;
    if ( *v27 != (VIDMM_GLOBAL *)(this + 4978) )
      __fastfail(3u);
    *v27 = v26;
    this[4979] = v26;
    this[4981] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4980, 0LL);
    KeLeaveCriticalRegion();
    if ( v28 )
      KeSetEvent(*((PRKEVENT *)*this + 15), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(a2);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 12) + 4LL) == 2 && (gVidMmGlobalFault & 0x4000) != 0 )
    VIDMM_GLOBAL::ForceDiscardOffer((VIDMM_GLOBAL *)this, (__int64 **)a2);
  if ( bTracingEnabled )
  {
    v32 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LOBYTE(v32) = *(_BYTE *)(v7 + 416);
      Template_pc(v32, v30, v31, a2, v32);
    }
  }
  return v11;
}
