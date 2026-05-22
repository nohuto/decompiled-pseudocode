/*
 * XREFs of ?OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180026470
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z @ 0x180026690 (-ShowCursor@MobileCursorBroker@@IEAAXPEAVMobileCursor@@_N@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::OnCursorVisibilityChanged(__int64 a1, __int64 a2, bool a3)
{
  int ValueForKey; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  struct MobileCursor *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool v12; // zf
  struct MobileCursor *v14[2]; // [rsp+30h] [rbp-38h] BYREF

  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((_DWORD *)(a1 + 88), (unsigned int *)a2, v14);
  v8 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    v9 = v14[0];
    if ( ((*(__int64 (__fastcall **)(struct MobileCursor *))(*(_QWORD *)v14[0] + 48LL))(v14[0]) & 8) != 0 )
    {
      v8 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 485, 87);
    }
    else
    {
      v11 = *(_QWORD *)((*(__int64 (__fastcall **)(struct MobileCursor *, struct MobileCursor **))(*(_QWORD *)v9 + 40LL))(
                          v9,
                          v14)
                      + 8);
      if ( v11 == *(_QWORD *)(a2 + 8) )
      {
        v12 = *((_DWORD *)v9 + 16) == 0;
        *((_BYTE *)v9 + 56) = a3;
        if ( v12 )
          MobileCursorBroker::ShowCursor((MobileCursorBroker *)(a1 - 8), v9, a3);
        return 0;
      }
      else
      {
        v8 = -2147024891;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 490, 5);
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 480, ValueForKey);
  }
  return v8;
}
