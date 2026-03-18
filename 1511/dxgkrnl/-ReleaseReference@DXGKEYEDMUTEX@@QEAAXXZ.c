/*
 * XREFs of ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088
 * Callers:
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C001FA08 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005C394 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z @ 0x1C005C730 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z.c)
 *     DxgkShareObjects @ 0x1C00621B0 (DxgkShareObjects.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00BF0D0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C01508CC (-AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0151220 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 * Callees:
 *     ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C005C330 (-DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::ReleaseReference(DXGKEYEDMUTEX *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = _InterlockedDecrement64((volatile signed __int64 *)this + 3);
  if ( !v1 )
    DXGGLOBAL::DestroyKeyedMutex(*((DXGGLOBAL **)this + 2), this);
  if ( v1 < 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v2 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v2);
  }
}
