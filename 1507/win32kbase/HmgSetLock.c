/*
 * XREFs of HmgSetLock @ 0x1C005C2A0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgSetLock(int a1)
{
  _WORD *v1; // r8
  __int32 v3; // [rsp+10h] [rbp+10h]

  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr
    && (v1 = (_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a1), v1[6] == HIWORD(a1)) )
  {
    HIWORD(v3) = HIWORD(*(_DWORD *)(*(_QWORD *)v1 + 12LL));
    LOWORD(v3) = 0;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v1 + 12LL), v3);
  }
  else
  {
    LODWORD(v1) = 0;
  }
  return (unsigned int)v1;
}
