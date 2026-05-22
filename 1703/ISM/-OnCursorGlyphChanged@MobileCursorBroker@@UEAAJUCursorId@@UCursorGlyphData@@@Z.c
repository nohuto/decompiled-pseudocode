/*
 * XREFs of ?OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180026580
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C (-GetValueForKey@-$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCur.c)
 *     ?SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z @ 0x180026728 (-SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::OnCursorGlyphChanged(__int64 a1, __int64 a2, const unsigned __int16 *a3)
{
  int ValueForKey; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  int v9; // r9d
  struct MobileCursor *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct MobileCursor *v14[2]; // [rsp+30h] [rbp-38h] BYREF

  ValueForKey = FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey((_DWORD *)(a1 + 88), (unsigned int *)a2, v14);
  v8 = ValueForKey;
  if ( ValueForKey >= 0 )
  {
    v10 = v14[0];
    if ( ((*(__int64 (__fastcall **)(struct MobileCursor *))(*(_QWORD *)v14[0] + 48LL))(v14[0]) & 8) != 0 )
    {
      v8 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 512, 87);
    }
    else
    {
      v12 = *(_QWORD *)((*(__int64 (__fastcall **)(struct MobileCursor *, struct MobileCursor **))(*(_QWORD *)v10 + 40LL))(
                          v10,
                          v14)
                      + 8);
      if ( v12 == *(_QWORD *)(a2 + 8) )
      {
        ValueForKey = MobileCursorBroker::SetCursorGlyph((MobileCursorBroker *)(a1 - 8), v10, a3);
        v8 = ValueForKey;
        if ( ValueForKey < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v9 = 520;
          goto LABEL_13;
        }
      }
      else
      {
        v8 = -2147024891;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 517, 5);
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 507;
LABEL_13:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v9, ValueForKey);
  }
  return v8;
}
