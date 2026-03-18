/*
 * XREFs of ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C007958C
 * Callers:
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079454 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00E4080 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0079770 (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CitpContextResetTrackingValues(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  union _LARGE_INTEGER v6; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+40h] [rbp+18h] BYREF

  v6.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&v6, &v7);
  *((union _LARGE_INTEGER *)a1 + 75) = v7;
  *((_DWORD *)a1 + 114) = a2;
  *((_DWORD *)a1 + 130) = a2;
  *((_DWORD *)a1 + 133) = a2;
  *((_DWORD *)a1 + 125) = a2;
  *((_DWORD *)a1 + 212) = a2;
  v4 = MEMORY[0xFFFFF78000000014];
  *((_BYTE *)a1 + 432) &= ~2u;
  *((_QWORD *)a1 + 105) = v4;
  *((_QWORD *)a1 + 63) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 584), a2);
  LODWORD(v5) = *(_DWORD *)(v5 + 12);
  *((_DWORD *)a1 + 129) = *((_DWORD *)a1 + 147);
  *((_DWORD *)a1 + 128) = v5;
}
