/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0054F00
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0059000 (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_O.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00019F0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pc @ 0x1C001E10C (Template_pc.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  int v8; // r9d
  unsigned int v9; // r12d
  __int64 v10; // rdi
  char v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 *v17; // rcx
  signed __int16 v18; // si
  __int64 v19; // rdi
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  VIDMM_GLOBAL *v26; // rdx
  VIDMM_GLOBAL **v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *i; // rdi
  _QWORD *j; // rsi
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // r9d
  __int64 *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 **v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int8 v68; // [rsp+20h] [rbp-E8h]
  int v69; // [rsp+30h] [rbp-D8h]
  __int64 v70; // [rsp+38h] [rbp-D0h]
  _QWORD v71[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v72[16]; // [rsp+50h] [rbp-B8h] BYREF
  bool v73; // [rsp+118h] [rbp+10h]
  char v74; // [rsp+128h] [rbp+20h]

  v74 = (char)a4.0;
  v5 = a3;
  v7 = **a2;
  v8 = **(_DWORD **)(v7 + 504);
  if ( (v8 & 0x40000000) != 0 || v8 < 0 )
  {
    v67 = WdLogNewEntry5_WdWarning(this);
    *(_QWORD *)(v67 + 24) = a2;
    WdLogEvent5_WdWarning(v67);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v7 + 344) )
  {
    if ( (*((_BYTE *)this + 40872) & 2) == 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(this);
      *(_QWORD *)(v42 + 24) = a2;
      WdLogEvent5_WdWarning(v42);
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
        return 3221225485LL;
    }
  }
  if ( (_DWORD)v5 != 2 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      *(_DWORD *)(v7 + 448) = 1;
      goto LABEL_6;
    }
    if ( (_DWORD)v5 == 3 )
    {
      *(_DWORD *)(v7 + 448) = 3;
      goto LABEL_6;
    }
    if ( (_DWORD)v5 != 4 )
    {
      v43 = WdLogNewEntry5_WdWarning((unsigned int)(v5 - 3));
      *(_QWORD *)(v43 + 24) = a2;
      *(_QWORD *)(v43 + 32) = v5;
      WdLogEvent5_WdWarning(v43);
      return 3221225485LL;
    }
    if ( *(_DWORD *)(v7 + 392) >= 0xA0000000 )
    {
      *(_DWORD *)(v7 + 448) = 4;
      goto LABEL_6;
    }
  }
  *(_DWORD *)(v7 + 448) = 2;
LABEL_6:
  v9 = 0;
  _InterlockedIncrement((volatile signed __int32 *)a2[12] + 2);
  v10 = *(_QWORD *)(v7 + 320);
  v11 = 0;
  v73 = 0;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v10 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v10 + 24) <= 0 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v44 + 24) = 326LL;
      WdLogEvent5_WdAssertion(v44);
    }
    ++*(_DWORD *)(v10 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v10 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = *(_DWORD *)(v10 + 28);
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v16, &EventBlockThread, v14, v45);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v10);
      ExAcquirePushLockExclusiveEx(v10 + 16, 0LL);
    }
    if ( *(_QWORD *)(v10 + 8) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v16, v12);
      *(_QWORD *)(v46 + 24) = 350LL;
      WdLogEvent5_WdAssertion(v46);
    }
    if ( *(_DWORD *)(v10 + 24) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v16, v12);
      *(_QWORD *)(v47 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v47);
    }
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v10 + 24) = 1;
  }
  v17 = a2[12];
  v18 = _InterlockedCompareExchange16((volatile signed __int16 *)v17 + 2, 1, 0);
  if ( !v18 )
  {
    if ( (v74 & 2) == 0 && !dword_1C003540C
      || (v17 = *(__int64 **)(v7 + 504), (*(_DWORD *)v17 & 0x20000000) != 0)
      || (*((_BYTE *)this + 40872) & 2) != 0 )
    {
      v11 = 0;
    }
    else
    {
      *(_DWORD *)(v7 + 92) |= 2u;
      v11 = 1;
    }
  }
  v19 = *(_QWORD *)(v7 + 320);
  if ( *(struct _KTHREAD **)(v19 + 8) != KeGetCurrentThread() )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v12, v14, v15);
    v48[3] = 275LL;
    v48[4] = 4LL;
    v48[5] = v19;
    v48[6] = 0LL;
    v48[7] = 0LL;
    WdLogEvent5_WdCriticalError(v48);
  }
  if ( *(int *)(v19 + 24) <= 0 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v17, v12);
    *(_QWORD *)(v49 + 24) = 370LL;
    WdLogEvent5_WdAssertion(v49);
  }
  v20 = (*(_DWORD *)(v19 + 24))-- == 1;
  if ( v20 )
  {
    *(_QWORD *)(v19 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v19 + 16, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( this != (VIDMM_GLOBAL *)-39912LL && *((struct _KTHREAD **)this + 4990) == KeGetCurrentThread() )
  {
    v50 = WdLogNewEntry5_WdAssertion(v22, v21);
    *(_QWORD *)(v50 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v50);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 39912, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v51 = *((_DWORD *)this + 9982);
      if ( v51 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v23, &EventBlockThread, v24, v51);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 39912, 0LL);
  }
  *((_QWORD *)this + 4990) = KeGetCurrentThread();
  if ( !v18 )
  {
    v25 = (_QWORD *)((char *)this + 39896);
    v26 = (VIDMM_GLOBAL *)(v7 + 416);
    v27 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4988);
    v73 = *v25 == (_QWORD)v25;
    if ( *v27 != (VIDMM_GLOBAL *)((char *)this + 39896) )
      __fastfail(3u);
    *(_QWORD *)v26 = v25;
    *(_QWORD *)(v7 + 424) = v27;
    *v27 = v26;
    *((_QWORD *)this + 4988) = v26;
    *(_QWORD *)(v7 + 456) = *((_QWORD *)this + 576);
    if ( v11 )
    {
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL) + 32LL) + 312LL),
        *(_QWORD *)(v7 + 8));
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL) + 32LL)
                                                        + 304LL));
      v52 = (__int64 *)(v7 + 432);
      v53 = *(unsigned int *)(*((_QWORD *)this + 3) + 200LL);
      v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL) + 16LL) + 8 * v53) + 384LL;
      v55 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL) + 16LL) + 8 * v53) + 392LL);
      if ( *v55 != (__int64 *)v54 )
        __fastfail(3u);
      *v52 = v54;
      *(_QWORD *)(v7 + 440) = v55;
      *v55 = v52;
      *(_QWORD *)(v54 + 8) = v52;
    }
  }
  *((_QWORD *)this + 4990) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 39912, 0LL);
  KeLeaveCriticalRegion();
  if ( v18 )
  {
    v66 = WdLogNewEntry5_WdWarning(v28);
    *(_QWORD *)(v66 + 24) = a2;
    *(_QWORD *)(v66 + 32) = *((unsigned __int16 *)a2[12] + 2);
    WdLogEvent5_WdWarning(v66);
    v9 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v7 + 504) & 0x20000000) != 0 )
    {
      if ( (v74 & 2) != 0 || dword_1C003540C )
      {
        v56 = *(_QWORD *)(v7 + 8);
        ++*((_DWORD *)this + 1950);
        *((_QWORD *)this + 976) += v56;
      }
      v41 = *(_QWORD *)(v7 + 8);
      ++*((_DWORD *)this + 1946);
      *((_QWORD *)this + 974) += v41;
    }
    *((_QWORD *)this + 972) += *(_QWORD *)(v7 + 8);
    ++*((_DWORD *)this + 1942);
    if ( (v74 & 1) == 0 )
    {
      memset(v72, 0, sizeof(v72));
      v29 = *(_QWORD *)(v7 + 320);
      v72[3] = VIDMM_GLOBAL::VidMmiOfferAllocationCallback;
      LODWORD(v72[5]) = 3;
      LODWORD(v72[0]) = 1;
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v29 + 8) == KeGetCurrentThread() )
      {
        if ( *(int *)(v29 + 24) <= 0 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v57 + 24) = 326LL;
          WdLogEvent5_WdAssertion(v57);
        }
        ++*(_DWORD *)(v29 + 24);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v29 + 16, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v58 = *(_DWORD *)(v29 + 28);
            if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v31, &EventBlockThread, v32, v58);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v29);
          ExAcquirePushLockExclusiveEx(v29 + 16, 0LL);
        }
        if ( *(_QWORD *)(v29 + 8) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v59 + 24) = 350LL;
          WdLogEvent5_WdAssertion(v59);
        }
        if ( *(_DWORD *)(v29 + 24) )
        {
          v60 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v60 + 24) = 351LL;
          WdLogEvent5_WdAssertion(v60);
        }
        *(_QWORD *)(v29 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v29 + 24) = 1;
      }
      for ( i = *(_QWORD **)(v7 + 296); i != (_QWORD *)(v7 + 296); i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
        {
          v31 = (__int64)(j - 5);
          if ( (*(_DWORD *)(j - 1) & 1) == 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v31 + 96) + 8LL));
            v36 = *(_QWORD *)(v31 + 8);
            v72[6] = j - 5;
            v70 = *(_QWORD *)(v36 + 32);
            v69 = VidSchSubmitDeviceCommand(v70, (__int64)v72);
            if ( v69 < 0 )
            {
              v61 = WdLogNewEntry5_WdWarning(v31);
              *(_QWORD *)(v61 + 24) = v69;
              WdLogEvent5_WdWarning(v61);
              v71[0] = 5LL;
              v71[1] = 0LL;
              VidSchFlushDevice(v70, (int *)v71, v62, v63);
              LODWORD(v72[0]) = 0;
              VidSchSubmitDeviceCommand(v70, (__int64)v72);
            }
          }
        }
      }
      v37 = *(_QWORD *)(v7 + 320);
      if ( *(struct _KTHREAD **)(v37 + 8) != KeGetCurrentThread() )
      {
        v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30, v32, v33);
        v64[3] = 275LL;
        v64[4] = 4LL;
        v64[5] = v37;
        v64[6] = 0LL;
        v64[7] = 0LL;
        WdLogEvent5_WdCriticalError(v64);
      }
      if ( *(int *)(v37 + 24) <= 0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v65 + 24) = 370LL;
        WdLogEvent5_WdAssertion(v65);
      }
      v20 = (*(_DWORD *)(v37 + 24))-- == 1;
      if ( v20 )
      {
        *(_QWORD *)(v37 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v37 + 16, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    if ( v73 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
  VIDMM_GLOBAL::VidMmiOfferAllocationCallback(a2);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v68 = *(_BYTE *)(v7 + 448);
      Template_pc(v68, v38, v39, a2, v68);
    }
  }
  return v9;
}
