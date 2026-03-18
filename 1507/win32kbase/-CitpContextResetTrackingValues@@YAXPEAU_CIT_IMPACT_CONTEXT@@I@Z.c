/*
 * XREFs of ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00834BC
 * Callers:
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0083390 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E2F1C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0014D80 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CitpContextResetTrackingValues(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  union _LARGE_INTEGER v4; // rax
  __int64 v5; // rcx
  union _LARGE_INTEGER v6; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+40h] [rbp+18h] BYREF

  v6.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&v6, &v7);
  v4 = v7;
  *((_BYTE *)a1 + 432) &= ~2u;
  *((union _LARGE_INTEGER *)a1 + 70) = v4;
  *((_DWORD *)a1 + 114) = a2;
  *((_DWORD *)a1 + 120) = a2;
  *((_DWORD *)a1 + 123) = a2;
  *((_DWORD *)a1 + 115) = a2;
  *((_QWORD *)a1 + 58) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 544), a2);
  LODWORD(v5) = *(_DWORD *)(v5 + 12);
  *((_DWORD *)a1 + 119) = *((_DWORD *)a1 + 137);
  *((_DWORD *)a1 + 118) = v5;
}
