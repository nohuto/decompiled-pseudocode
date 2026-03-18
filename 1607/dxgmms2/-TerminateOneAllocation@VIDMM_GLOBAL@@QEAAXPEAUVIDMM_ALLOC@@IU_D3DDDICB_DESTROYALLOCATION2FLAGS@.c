/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0055A2C
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C005763C (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C00013B0 (VidSchSubmitDeviceCommand.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C005B900 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // r14
  bool v14; // zf
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD v32[2]; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v33[2]; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v34[8]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v35; // [rsp+60h] [rbp-59h]
  int v36; // [rsp+68h] [rbp-51h]
  _QWORD v37[16]; // [rsp+78h] [rbp-41h] BYREF
  char v38; // [rsp+130h] [rbp+77h]

  v38 = (char)a4.0;
  v7 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v7 + 320));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 320), v8, v9, v10);
  v13 = a2[1];
  a2[26] = (__int64 *)a5;
  v14 = *v13 == -41520;
  v15 = *v13 + 41520;
  *((_BYTE *)v13 + 48) = 1;
  v35 = v15;
  if ( !v14 && *(struct _KTHREAD **)(v15 + 8) == KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v27 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v27);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v28 = *(_DWORD *)(v15 + 16);
      if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v16, &EventBlockThread, v17, v28);
    }
    ExAcquirePushLockExclusiveEx(v15, 0LL);
  }
  *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
  v18 = *((_DWORD *)v13 + 13) & 7;
  v36 = 2;
  if ( v18 == 4 )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v13, 3LL);
    KeSetEvent(*(PRKEVENT *)(*(_QWORD *)*v13 + 152LL), 0, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  while ( *((_DWORD *)a2 + 44) )
    KeWaitForSingleObject(a2 + 23, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    Template_p(v19, &EventTerminateAllocation, v20, a2);
  v21 = **a2;
  v22 = *(_QWORD *)(v21 + 16);
  if ( (**(_DWORD **)(v21 + 504) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1926);
    *((_QWORD *)this + 964) += v22;
  }
  else
  {
    ++*((_DWORD *)this + 1930);
    *((_QWORD *)this + 966) += v22;
  }
  v32[1] = a2;
  v32[0] = 1LL;
  memset(v37, 0, sizeof(v37));
  LODWORD(v37[5]) = 0;
  v37[3] = 0LL;
  v37[6] = v32;
  LODWORD(v37[0]) = (v38 & 1) == 0 || (**(_DWORD **)(v7 + 504) & 0x4000) != 0;
  v23 = a2[1][4];
  v24 = VidSchSubmitDeviceCommand(v23, (__int64)v37);
  v26 = v24;
  if ( v24 < 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v25);
    *(_QWORD *)(v29 + 24) = v26;
    WdLogEvent5_WdWarning(v29);
    v33[0] = 5LL;
    v33[1] = 0LL;
    VidSchFlushDevice(v23, (int *)v33, v30, v31);
    LODWORD(v37[0]) = 0;
    VidSchSubmitDeviceCommand(v23, (__int64)v37);
  }
  if ( !LOBYTE(v32[0]) )
    *((_DWORD *)a2 + 8) |= 2u;
}
