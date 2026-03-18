/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0083390
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0016F8C (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpIsOnDefaultDesktop@@YAEXZ @ 0x1C0014D04 (-CitpIsOnDefaultDesktop@@YAEXZ.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0014DCC (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C00528B0 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00834BC (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rbx
  char v3; // al
  int v4; // edx
  bool IsUserDesktopActive; // al

  memset(a1, 0, 0x310uLL);
  *((_QWORD *)a1 + 40) = (char *)a1 + 312;
  *((_QWORD *)a1 + 39) = (char *)a1 + 312;
  *((_QWORD *)a1 + 42) = (char *)a1 + 328;
  *((_QWORD *)a1 + 41) = (char *)a1 + 328;
  *((_QWORD *)a1 + 44) = (char *)a1 + 344;
  *((_QWORD *)a1 + 43) = (char *)a1 + 344;
  *((_DWORD *)a1 + 94) = 0;
  *((_QWORD *)a1 + 48) = 0LL;
  *((_DWORD *)a1 + 95) = 0;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_BYTE *)a1 + 432) & 0xD7 | 8;
  *((_DWORD *)a1 + 122) = 1;
  *((_BYTE *)a1 + 432) = v3;
  *((_BYTE *)a1 + 432) ^= (*((_BYTE *)a1 + 432) ^ (16 * CitpIsOnDefaultDesktop())) & 0x10;
  *((_DWORD *)a1 + 125) = v2;
  *((_DWORD *)a1 + 126) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 512), 1);
  *((_DWORD *)a1 + 131) = v2;
  *((_DWORD *)a1 + 132) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 536), v4);
  IsUserDesktopActive = CitpIsUserDesktopActive(a1);
  *((_DWORD *)a1 + 139) = 0;
  *((_BYTE *)a1 + 544) = IsUserDesktopActive;
  *((_DWORD *)a1 + 138) = v2;
  CitpContextResetTrackingValues(a1, v2);
  *((_DWORD *)a1 + 115) = dword_1C0102028;
  *((_QWORD *)a1 + 58) = qword_1C0102018;
}
