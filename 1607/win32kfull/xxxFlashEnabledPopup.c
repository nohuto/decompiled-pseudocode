/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C022A65C
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C007B458 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C000C690 (DWP_GetEnabledPopup.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  __int64 EnabledPopup; // rbx
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (xmmword_1C032BBAC & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v6;
      v6[1] = EnabledPopup;
      ++*(_DWORD *)(EnabledPopup + 8);
      v2 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow((struct tagWND *)EnabledPopup, ((unsigned __int16)*v2 << 16) | 3, *(_DWORD *)(gpsi + 5392LL) >> 3);
      ThreadUnlock1(v4, v3);
    }
  }
  return xxxMessageBeep(0LL);
}
