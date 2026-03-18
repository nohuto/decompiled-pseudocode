/*
 * XREFs of DWP_GetEnabledPopup @ 0x1C0008050
 * Callers:
 *     GetActiveTrackPwnd @ 0x1C01E1EC4 (GetActiveTrackPwnd.c)
 *     xxxActivateEnabledPopup @ 0x1C0231300 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C02313E4 (xxxFlashEnabledPopup.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C00873C0 (_GhostWindowFromHungWindow.c)
 */

__int64 __fastcall DWP_GetEnabledPopup(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *i; // rax
  __int64 v6; // rax

  v1 = a1[9];
  v2 = 0LL;
  v3 = a1[2];
  while ( (_QWORD *)v1 != a1 )
  {
    if ( v1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v1 + 16) + 392LL) == *(_QWORD *)(v3 + 392) && (*(_BYTE *)(v1 + 55) & 0x18) == 0x10 )
      {
        for ( i = *(_QWORD **)(v1 + 104); i; i = (_QWORD *)i[13] )
        {
          if ( i == a1 )
            goto LABEL_7;
        }
      }
      v1 = *(_QWORD *)(v1 + 72);
    }
    else
    {
      if ( (_DWORD)v2 )
        return 0LL;
      v2 = 1LL;
      v1 = *(_QWORD *)(a1[11] + 96LL);
    }
  }
  v1 = 0LL;
LABEL_7:
  if ( v1 )
  {
    v6 = GhostWindowFromHungWindow(v1, a1, v2, v3);
    if ( v6 )
      return v6;
  }
  return v1;
}
