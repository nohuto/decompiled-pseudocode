/*
 * XREFs of ?GetDefaultCursor@MobileCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x180026120
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::GetDefaultCursor(__int64 this, struct ICursor **a2)
{
  _DWORD *v2; // r9
  _DWORD *v4; // rax
  unsigned int v5; // edi
  int ValueForKey; // eax
  __int64 v8; // rcx
  struct ICursor *v9; // rbx
  unsigned int v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  struct ICursor *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (_DWORD *)(this + 96);
  v10 = 1;
  v11 = 0LL;
  if ( *(_DWORD *)(this + 1296) == 1 )
  {
LABEL_5:
    v5 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(this, &MinInput_Warning_CheckResult, 0, 267, 255);
  }
  else
  {
    LODWORD(this) = 0;
    v4 = v2;
    while ( *v4 != 1 )
    {
      this = (unsigned int)(this + 1);
      v4 += 6;
      if ( (unsigned int)this >= 0x32 )
        goto LABEL_5;
    }
    ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(v2, &v10, &v12);
    v5 = ValueForKey;
    if ( ValueForKey >= 0 )
    {
      v9 = v12;
      (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v12 + 8LL))(v12);
      *a2 = v9;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 262, ValueForKey);
    }
  }
  return v5;
}
