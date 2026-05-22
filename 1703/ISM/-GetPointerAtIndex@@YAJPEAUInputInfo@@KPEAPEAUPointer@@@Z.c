/*
 * XREFs of ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800092F0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800148E0 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 *     ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x18007EA94 (-SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall GetPointerAtIndex(struct InputInfo *a1, unsigned int a2, struct Pointer **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 && a2 < *((_DWORD *)a1 + 12) )
  {
    *a3 = (struct InputInfo *)((char *)a1 + 48 * a2 + 52);
  }
  else
  {
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, 71, 87);
  }
  return v3;
}
