/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F458
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C005110C (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C0011EB4 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C004F590 (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpIsOnDefaultDesktop@@YAEXZ @ 0x1C004F704 (-CitpIsOnDefaultDesktop@@YAEXZ.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F7CC (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rbx
  char v3; // al
  int v4; // edx
  unsigned __int8 IsUserDesktopActive; // al

  memset(a1, 0, 0x390uLL);
  *((_QWORD *)a1 + 40) = (char *)a1 + 312;
  *((_QWORD *)a1 + 39) = (char *)a1 + 312;
  *((_QWORD *)a1 + 42) = (char *)a1 + 328;
  *((_QWORD *)a1 + 41) = (char *)a1 + 328;
  *((_QWORD *)a1 + 44) = (char *)a1 + 344;
  *((_QWORD *)a1 + 43) = (char *)a1 + 344;
  *((_DWORD *)a1 + 94) = 0;
  *((_QWORD *)a1 + 48) = 0LL;
  *((_DWORD *)a1 + 95) = 0;
  *((_QWORD *)a1 + 109) = (char *)a1 + 864;
  *((_QWORD *)a1 + 108) = (char *)a1 + 864;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_BYTE *)a1 + 432) & 0xD7 | 8;
  *((_DWORD *)a1 + 134) = 1;
  *((_BYTE *)a1 + 432) = v3;
  *((_BYTE *)a1 + 432) ^= (*((_BYTE *)a1 + 432) ^ (16 * CitpIsOnDefaultDesktop())) & 0x10;
  *((_DWORD *)a1 + 137) = v2;
  *((_DWORD *)a1 + 138) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 560), 1);
  *((_DWORD *)a1 + 143) = v2;
  *((_DWORD *)a1 + 144) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 584), v4);
  IsUserDesktopActive = CitpIsUserDesktopActive(a1);
  *((_DWORD *)a1 + 151) = 0;
  *((_BYTE *)a1 + 592) = IsUserDesktopActive;
  *((_DWORD *)a1 + 150) = v2;
  CitpContextResetTrackingValues(a1, v2);
  *((_DWORD *)a1 + 126) = dword_1C011E618;
  *((_QWORD *)a1 + 64) = qword_1C011E608;
}
