/*
 * XREFs of ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0070860
 * Callers:
 *     OPMDestroyAllProtectedOutputs @ 0x1C006CFB0 (OPMDestroyAllProtectedOutputs.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00BAF80 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C000F0F0 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C0068694 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00686D0 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(__int64 *a1, _DWORD *a2)
{
  char result; // al
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  for ( result = CList<COPMProtectedOutput>::GetFirstElementIndex((__int64)a1, &v5);
        result;
        result = CList<COPMProtectedOutput>::GetNextElementIndex(a1, v5, &v5) )
  {
    CList<COPMProtectedOutput>::GetElement((__int64)a1, v5, &v6);
    if ( !a2 || v6[16] == *a2 && v6[17] == a2[1] )
    {
      (*(void (**)(void))(*(_QWORD *)v6 + 8LL))();
      v6 = 0LL;
    }
  }
  return result;
}
