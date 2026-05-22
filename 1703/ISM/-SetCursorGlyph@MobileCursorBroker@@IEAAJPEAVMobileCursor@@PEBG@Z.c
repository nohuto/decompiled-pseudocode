/*
 * XREFs of ?SetCursorGlyph@MobileCursorBroker@@IEAAJPEAVMobileCursor@@PEBG@Z @ 0x180026728
 * Callers:
 *     ?OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180025F90 (-OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180026580 (-OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ @ 0x180026EC8 (-GetHMonitor@MobileCursor@@QEAAPEAUHMONITOR__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::SetCursorGlyph(
        __int64 (__fastcall **this)(HMONITOR, const unsigned __int16 *),
        struct MobileCursor *a2,
        const unsigned __int16 *a3)
{
  unsigned int v3; // ebx
  HMONITOR HMonitor; // rax
  int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  if ( this[9] )
  {
    HMonitor = MobileCursor::GetHMonitor(a2);
    v7 = this[9](HMonitor, a3);
    v3 = v7;
    if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 595, v7);
  }
  return v3;
}
