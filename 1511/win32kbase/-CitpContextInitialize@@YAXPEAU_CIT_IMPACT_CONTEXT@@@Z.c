/*
 * XREFs of ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079454
 * Callers:
 *     ?CitpStart@@YAJXZ @ 0x1C0068724 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1C00479FC (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 *     ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C007958C (-CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpIsOnDefaultDesktop@@YAEXZ @ 0x1C00796F4 (-CitpIsOnDefaultDesktop@@YAEXZ.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00797BC (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // rbx
  char v3; // al
  int v4; // edx
  unsigned __int8 IsUserDesktopActive; // al

  memset(a1, 0, 0x358uLL);
  *((_QWORD *)a1 + 40) = (char *)a1 + 312;
  *((_QWORD *)a1 + 39) = (char *)a1 + 312;
  *((_QWORD *)a1 + 42) = (char *)a1 + 328;
  *((_QWORD *)a1 + 41) = (char *)a1 + 328;
  *((_QWORD *)a1 + 44) = (char *)a1 + 344;
  *((_QWORD *)a1 + 43) = (char *)a1 + 344;
  *((_DWORD *)a1 + 94) = 0;
  *((_QWORD *)a1 + 48) = 0LL;
  *((_DWORD *)a1 + 95) = 0;
  *((_QWORD *)a1 + 104) = (char *)a1 + 824;
  *((_QWORD *)a1 + 103) = (char *)a1 + 824;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_BYTE *)a1 + 432) & 0xD7 | 8;
  *((_DWORD *)a1 + 132) = 1;
  *((_BYTE *)a1 + 432) = v3;
  *((_BYTE *)a1 + 432) ^= (*((_BYTE *)a1 + 432) ^ (16 * CitpIsOnDefaultDesktop())) & 0x10;
  *((_DWORD *)a1 + 135) = v2;
  *((_DWORD *)a1 + 136) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 552), 1);
  *((_DWORD *)a1 + 141) = v2;
  *((_DWORD *)a1 + 142) = v2;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 576), v4);
  IsUserDesktopActive = CitpIsUserDesktopActive(a1);
  *((_DWORD *)a1 + 149) = 0;
  *((_BYTE *)a1 + 584) = IsUserDesktopActive;
  *((_DWORD *)a1 + 148) = v2;
  CitpContextResetTrackingValues(a1, v2);
  *((_DWORD *)a1 + 125) = dword_1C01071C8;
  *((_QWORD *)a1 + 63) = qword_1C01071B8;
}
