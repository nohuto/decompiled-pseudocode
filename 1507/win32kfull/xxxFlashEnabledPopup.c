/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C02313E4
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0064790 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C0008050 (DWP_GetEnabledPopup.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     xxxMessageBeep @ 0x1C01FEAE0 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  __int64 EnabledPopup; // rbx
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (xmmword_1C0328824 & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      v6[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v6;
      v6[1] = EnabledPopup;
      ++*(_DWORD *)(EnabledPopup + 8);
      v2 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow(EnabledPopup, ((unsigned __int16)*v2 << 16) | 3, *(_DWORD *)(gpsi + 4000LL) >> 3);
      ThreadUnlock1(v4, v3);
    }
  }
  return xxxMessageBeep(0LL);
}
