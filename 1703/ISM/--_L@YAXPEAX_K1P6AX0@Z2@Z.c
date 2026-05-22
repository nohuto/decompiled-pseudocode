/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E04C
 * Callers:
 *     ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180011898 (--0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x180018CDC (-SetValueForKey@-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180056210 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??0TargetingArbitrationComponent@@IEAA@XZ @ 0x18007F514 (--0TargetingArbitrationComponent@@IEAA@XZ.c)
 *     ?OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18007F7E0 (-OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarg.c)
 *     ?OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18007FC50 (-OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEA.c)
 *     ?DoConvergedTargetingDecision@TargetingArbitrationComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180080090 (-DoConvergedTargetingDecision@TargetingArbitrationComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDi.c)
 *     ??0BufferedInputTarget@@IEAA@XZ @ 0x18008034C (--0BufferedInputTarget@@IEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF7C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
