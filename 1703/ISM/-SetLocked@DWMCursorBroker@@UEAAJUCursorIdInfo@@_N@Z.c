/*
 * XREFs of ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x18001E4E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::SetLocked(__int64 a1, int *a2, char a3)
{
  int ValueForKey; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r9d
  int v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v9 = *a2;
  v10 = *((_QWORD *)a2 + 1);
  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(a1 + 32, &v9, &v11);
  if ( ValueForKey >= 0 )
  {
    LOBYTE(v5) = a3;
    ValueForKey = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 80LL))(v11, v5);
    if ( ValueForKey < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 256;
      goto LABEL_7;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 255;
LABEL_7:
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v7, ValueForKey);
  }
  return 0LL;
}
