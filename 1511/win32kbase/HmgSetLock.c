/*
 * XREFs of HmgSetLock @ 0x1C0073464
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgSetLock(int a1)
{
  _WORD *v1; // r8
  __int32 v3; // [rsp+10h] [rbp+10h]

  if ( (unsigned __int16)a1 < (unsigned int)gcMaxHmgr
    && (v1 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)a1, v1[6] == HIWORD(a1)) )
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
