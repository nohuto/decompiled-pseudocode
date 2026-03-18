/*
 * XREFs of ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0067C38
 * Callers:
 *     OPMDestroyAllProtectedOutputs @ 0x1C0066470 (OPMDestroyAllProtectedOutputs.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BC7B0 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C0067C6C (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C0083554 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0083590 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  for ( result = CList<COPMProtectedOutput>::GetFirstElementIndex(a1, &v5);
        (_BYTE)result;
        result = CList<COPMProtectedOutput>::GetNextElementIndex(a1, v5, &v5) )
  {
    CList<COPMProtectedOutput>::GetElement(a1, v5, &v6);
    if ( !a2 || v6[16] == *a2 && v6[17] == a2[1] )
    {
      (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
      v6 = 0LL;
    }
  }
  return result;
}
