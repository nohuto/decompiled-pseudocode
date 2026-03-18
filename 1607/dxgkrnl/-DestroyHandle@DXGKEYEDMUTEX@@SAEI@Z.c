/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C
 * Callers:
 *     DxgkCreateKeyedMutex2 @ 0x1C006F040 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C006F330 (DxgkOpenKeyedMutex2.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C006F7BC (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C0176EC0 (DxgkCreateKeyedMutex.c)
 *     DxgkOpenKeyedMutex @ 0x1C0177180 (DxgkOpenKeyedMutex.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C017B748 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000115C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00A3220 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(unsigned int a1)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *ProcessDxgProcess; // rbx
  HMGRTABLE *v6; // r9
  unsigned int v7; // edx
  __int64 v8; // rbx
  DXGKEYEDMUTEX *v9; // rbx
  __int64 v11; // rax
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (_DWORD *)PsGetProcessDxgProcess(CurrentProcess, v3);
  if ( !ProcessDxgProcess )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 2982LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v12,
    (struct DXGPROCESS *)ProcessDxgProcess);
  v6 = (HMGRTABLE *)(ProcessDxgProcess + 52);
  v7 = (a1 >> 6) & 0xFFFFFF;
  if ( v7 < ProcessDxgProcess[56]
    && (v8 = *(_QWORD *)v6, ((a1 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v6 + 16LL * v7 + 8) & 0x30))
    && (*(_DWORD *)(*(_QWORD *)v6 + 16LL * v7 + 8) & 0xF) != 0
    && (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0xF) == 9
    && (v9 = *(DXGKEYEDMUTEX **)(v8 + 16LL * v7)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v6, a1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    DXGKEYEDMUTEX::ReleaseReference(v9);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return 0;
  }
}
