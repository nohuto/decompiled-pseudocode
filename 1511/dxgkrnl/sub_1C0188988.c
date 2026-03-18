/*
 * XREFs of sub_1C0188988 @ 0x1C0188988
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00E0D54 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     sub_1C00E2758 @ 0x1C00E2758 (sub_1C00E2758.c)
 */

char __fastcall sub_1C0188988(_DWORD *a1, _DWORD *a2, int *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v10; // eax
  size_t v11; // r8
  _WORD v12[264]; // [rsp+30h] [rbp-248h] BYREF

  if ( a1[1] != 1 )
    return 0;
  memset(v12, 0, 0x208uLL);
  v10 = a1[2];
  v11 = 518LL;
  if ( v10 <= 0x206 )
    v11 = v10;
  memmove(v12, a1 + 3, v11);
  return sub_1C00E2758(v12, 1, a2, a3, a4, a5);
}
