/*
 * XREFs of ?SetLocked@MobileCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x1800267B0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::SetLocked(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  int ValueForKey; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  char v11; // bl
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v4 = *(_QWORD *)(a2 + 8);
  v14 = *(_DWORD *)a2;
  v15 = v4;
  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((_DWORD *)(a1 + 72), &v14, &v13);
  if ( ValueForKey >= 0 )
  {
    v7 = v13;
    if ( *(_QWORD *)((*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 40LL))(v13, &v14) + 8) == v4 )
    {
      LOBYTE(v8) = a3;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 80LL))(v7, v8);
      v11 = v10;
      if ( v10 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq((unsigned int)Microsoft_OneCore_MinInputEnableBits, &MinInput_Warning_CheckResult, 0, 581, v10);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq((unsigned int)Microsoft_OneCore_MinInputEnableBits, &MinInput_Warning_CheckResult, 0, 640, v11);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 637, 5);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, 633, ValueForKey);
  }
  return 0LL;
}
