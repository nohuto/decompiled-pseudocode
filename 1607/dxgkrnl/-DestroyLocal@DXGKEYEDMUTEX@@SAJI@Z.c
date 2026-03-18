/*
 * XREFs of ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C006F7BC
 * Callers:
 *     DxgkDestroyKeyedMutex @ 0x1C006F5D0 (DxgkDestroyKeyedMutex.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D2AA0 (DxgkOpenResourceFromNtHandle.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C017B748 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0070150 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::DestroyLocal(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v5; // rcx
  struct DXGPROCESS *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  DXGKEYEDMUTEX *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v3);
  v6 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v15 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, ProcessDxgProcess);
  v10 = ((unsigned int)v1 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 >= *((_DWORD *)v6 + 56)
    || (v8 = *((_QWORD *)v6 + 26),
        v9 = (unsigned int)v1 >> 30,
        v7 = *(unsigned int *)(v8 + 16LL * (unsigned int)v10 + 8),
        (_DWORD)v9 != ((*(_DWORD *)(v8 + 16LL * (unsigned int)v10 + 8) >> 4) & 3))
    || (v7 & 0x1000) != 0
    || (v7 & 0xF) == 0
    || (v7 = 2LL * (unsigned int)v10, (*(_BYTE *)(v8 + 16LL * (unsigned int)v10 + 8) & 0xF) != 9)
    || (v11 = *(DXGKEYEDMUTEX **)(v8 + 16LL * (unsigned int)v10)) == 0LL )
  {
    v17 = WdLogNewEntry5_WdWarning(v10, v7, v8, v9);
    *(_QWORD *)(v17 + 24) = v1;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    return 3221225485LL;
  }
  if ( (unsigned int)v10 < *((_DWORD *)v6 + 56) )
  {
    v12 = *(_DWORD *)(v8 + 16LL * (unsigned int)v10 + 8);
    if ( (_DWORD)v9 == ((v12 >> 4) & 3) && (v12 & 0x1000) == 0 && (v12 & 0xF) != 0 )
      *(_DWORD *)(v8 + 16 * (((unsigned __int64)(unsigned int)v1 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  DXGKEYEDMUTEX::SignalAbandonedInternal(v11, v1, 0);
  if ( !DXGKEYEDMUTEX::DestroyHandle(v1) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v16 + 24) = 2840LL;
    WdLogEvent5_WdAssertion(v16);
  }
  return 0LL;
}
