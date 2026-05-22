/*
 * XREFs of ?CreateHardwareCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAUIInputDisplay@@@Z @ 0x18001E888
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x18001E820 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@DWMHardwareCursor@@SAJPEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180020060 (-Create@DWMHardwareCursor@@SAJPEAUIInputDisplay@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::CreateHardwareCursor(__int64 a1, char a2, struct IInputDisplay *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  struct DWMHardwareCursor *v6; // rbx
  __int64 v7; // rcx
  struct DWMHardwareCursor *v9; // [rsp+58h] [rbp+20h] BYREF

  if ( (a2 & 8) != 0 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 418, 87);
  }
  else
  {
    v9 = 0LL;
    v5 = DWMHardwareCursor::Create(a3, &v9);
    v6 = v9;
    v4 = v5;
    if ( v9 )
      v6 = (struct DWMHardwareCursor *)((char *)v9 + 8);
    if ( v6 )
      (*(void (__fastcall **)(struct DWMHardwareCursor *))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *(_QWORD *)(a1 + 1304);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *(_QWORD *)(a1 + 1304) = v6;
  }
  return v4;
}
