/*
 * XREFs of ?GetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@PEAPEAVDWMCursor@@@Z @ 0x18001ED5C
 * Callers:
 *     ?OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x18001E190 (-OnTargetChanged@DWMCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x18001E4E0 (-SetLocked@DWMCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
 *     ?SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBoundsRect@@@Z @ 0x18001E570 (-SetClosestInteractiveBounds@DWMCursorBroker@@UEAAJUCursorIdInfo@@UCursorClosestInteractiveBound.c)
 *     ?CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z @ 0x18001E934 (-CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z.c)
 *     ?CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025DC0 (-CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 *     ?OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z @ 0x180025F90 (-OnTargetChanged@MobileCursorBroker@@UEAAJPEAUCursorId@@@Z.c)
 *     ?GetDefaultCursor@MobileCursorBroker@@UEAAJPEAPEAUICursor@@@Z @ 0x180026120 (-GetDefaultCursor@MobileCursorBroker@@UEAAJPEAPEAUICursor@@@Z.c)
 *     ?SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z @ 0x1800261F0 (-SetSuppressionState@MobileCursorBroker@@UEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ?OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x180026470 (-OnCursorVisibilityChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180026580 (-OnCursorGlyphChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?SetLocked@MobileCursorBroker@@UEAAJUCursorIdInfo@@_N@Z @ 0x1800267B0 (-SetLocked@MobileCursorBroker@@UEAAJUCursorIdInfo@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeMap<CursorId,DWMCursor *,50>::GetValueForKey(_DWORD *a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rdx
  char v8; // al
  int v9; // r9d

  v4 = 0;
  v5 = *a2;
  if ( (_DWORD)v5 != a1[300] && a3 )
  {
    v6 = 0LL;
    v7 = a1;
    do
    {
      if ( *v7 == (_DWORD)v5 )
      {
        *a3 = *(_QWORD *)&a1[6 * v6 + 4];
        return v4;
      }
      v6 = (unsigned int)(v6 + 1);
      v7 += 6;
    }
    while ( (unsigned int)v6 < 0x32 );
    v8 = 5;
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v4;
    v9 = 113;
    goto LABEL_11;
  }
  v8 = 87;
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 96;
LABEL_11:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v9, v8);
  }
  return v4;
}
