/*
 * XREFs of sub_1C00E26C4 @ 0x1C00E26C4
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00E0D54 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     sub_1C00E2758 @ 0x1C00E2758 (sub_1C00E2758.c)
 */

__int64 __fastcall sub_1C00E26C4(const void **a1, int a2, int a3)
{
  size_t v6; // r8
  _BYTE v8[528]; // [rsp+30h] [rbp-238h] BYREF

  memset(v8, 0, 0x208uLL);
  v6 = 518LL;
  if ( *(_WORD *)a1 <= 0x206u )
    v6 = *(unsigned __int16 *)a1;
  memmove(v8, a1[1], v6);
  return sub_1C00E2758((unsigned int)v8, 0, a2, a3, 0LL, 0LL);
}
