/*
 * XREFs of ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007C274
 * Callers:
 *     FxDestroy @ 0x1C00257A8 (FxDestroy.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 */

void __fastcall FxMdlDump(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rbx
  char v3; // r14
  FxAllocatedMdls *p_AllocatedMdls; // rbx
  const void **p_Owner; // rdi
  __int64 v6; // rbp
  const void *_a1; // rcx

  DebugExtension = FxDriverGlobals->DebugExtension;
  if ( DebugExtension )
  {
    v3 = 0;
    p_AllocatedMdls = &DebugExtension->AllocatedMdls;
    if ( p_AllocatedMdls )
    {
      do
      {
        p_Owner = (const void **)&p_AllocatedMdls->Info[0].Owner;
        v6 = 16LL;
        do
        {
          _a1 = *(p_Owner - 1);
          if ( _a1 )
          {
            v3 = 1;
            WPP_IFR_SF_qqq(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_WdfpoolKm_cpp_Traceguids, _a1, *p_Owner, p_Owner[1]);
          }
          p_Owner += 3;
          --v6;
        }
        while ( v6 );
        p_AllocatedMdls = p_AllocatedMdls->Next;
      }
      while ( p_AllocatedMdls );
      if ( v3 )
      {
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
      }
    }
  }
}
