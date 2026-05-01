/*
 * XREFs of ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001FCB4
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001F898 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpEnforcerContextInitialize(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  int v4; // eax

  *((_QWORD *)a2 + 9) = (char *)a2 + 64;
  *((_QWORD *)a2 + 8) = (char *)a2 + 64;
  memset_0((char *)a2 + 88, 0, 0x38uLL);
  *((_QWORD *)a2 + 12) = -500000LL;
  *((_DWORD *)a2 + 32) = 50;
  *((_BYTE *)a2 + 136) = 5;
  memset_0((char *)a2 + 144, 0, 0x20uLL);
  memset_0((char *)a2 + 176, 0, 0x28uLL);
  v4 = *((_DWORD *)a1 + 40);
  *((_QWORD *)a2 + 23) = (char *)a2 + 176;
  *((_QWORD *)a2 + 22) = (char *)a2 + 176;
  *((_DWORD *)a2 + 50) = v4;
  *((_DWORD *)a2 + 51) = *((_DWORD *)a1 + 41);
  *((_BYTE *)a2 + 208) = *((_BYTE *)a1 + 168);
  memset_0((char *)a2 + 216, 0, 0x60uLL);
  *((_QWORD *)a2 + 29) = (char *)a2 + 224;
  *((_QWORD *)a2 + 28) = (char *)a2 + 224;
  *((_QWORD *)a2 + 35) = -1LL;
  *((_QWORD *)a2 + 34) = 0LL;
  *((_QWORD *)a2 + 36) = 0LL;
  *((_QWORD *)a2 + 37) = 0LL;
  *((_QWORD *)a2 + 38) = 0LL;
  *((_DWORD *)a2 + 64) = *((_DWORD *)a1 + 38);
  *((_DWORD *)a2 + 65) = *((_DWORD *)a1 + 36);
  *((_DWORD *)a2 + 66) = *((_DWORD *)a1 + 37);
}
