/*
 * XREFs of ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4
 * Callers:
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C0074480 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00747D0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C00CD880 (-DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z.c)
 *     ?DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C014D7A0 (-DxgkEnumAdapters@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00A3220 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGADAPTER::DestroyHandle(__int64 a1)
{
  unsigned int v1; // edi
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *ProcessDxgProcess; // rbx
  HMGRTABLE *v6; // r9
  unsigned int v7; // edx
  __int64 v8; // rbx
  int v9; // r8d
  DXGADAPTER *v10; // rbx
  __int64 v12; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (_DWORD *)PsGetProcessDxgProcess(CurrentProcess, v3);
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 2834LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v13,
    (struct DXGPROCESS *)ProcessDxgProcess);
  v6 = (HMGRTABLE *)(ProcessDxgProcess + 52);
  v7 = (v1 >> 6) & 0xFFFFFF;
  if ( v7 < ProcessDxgProcess[56]
    && (v8 = *(_QWORD *)v6,
        v9 = *(_DWORD *)(*(_QWORD *)v6 + 16LL * v7 + 8),
        ((v1 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)v6 + 16LL * v7 + 8) & 0x30))
    && (v9 & 0x1000) == 0
    && (v9 & 0xF) != 0
    && (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0xF) == 1
    && (v10 = *(DXGADAPTER **)(v8 + 16LL * v7)) != 0LL )
  {
    HMGRTABLE::FreeHandle(v6, v1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    DXGADAPTER::ReleaseReferenceNoTracking(v10);
    return 0LL;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 3221225485LL;
  }
}
