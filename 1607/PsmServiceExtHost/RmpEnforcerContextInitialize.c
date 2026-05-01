/*
 * XREFs of RmpEnforcerContextInitialize @ 0x18001E3B8
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001E19C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpEnforcerContextInitialize(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 result; // rax

  *(_QWORD *)(a2 + 88) = a2 + 80;
  *(_QWORD *)(a2 + 80) = a2 + 80;
  memset_0((void *)(a2 + 104), 0, 0x38uLL);
  *(_QWORD *)(a2 + 112) = -500000LL;
  *(_DWORD *)(a2 + 144) = 50;
  *(_BYTE *)(a2 + 152) = 5;
  memset_0((void *)(a2 + 160), 0, 0x20uLL);
  memset_0((void *)(a2 + 192), 0, 0x28uLL);
  v4 = *(_DWORD *)(a1 + 160);
  *(_QWORD *)(a2 + 200) = a2 + 192;
  *(_QWORD *)(a2 + 192) = a2 + 192;
  *(_DWORD *)(a2 + 216) = v4;
  *(_DWORD *)(a2 + 220) = *(_DWORD *)(a1 + 164);
  *(_BYTE *)(a2 + 224) = *(_BYTE *)(a1 + 168);
  memset_0((void *)(a2 + 232), 0, 0x60uLL);
  *(_QWORD *)(a2 + 248) = a2 + 240;
  *(_QWORD *)(a2 + 240) = a2 + 240;
  *(_QWORD *)(a2 + 296) = -1LL;
  *(_QWORD *)(a2 + 288) = 0LL;
  *(_QWORD *)(a2 + 304) = 0LL;
  *(_QWORD *)(a2 + 312) = 0LL;
  *(_QWORD *)(a2 + 320) = 0LL;
  *(_DWORD *)(a2 + 272) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a2 + 276) = *(_DWORD *)(a1 + 148);
  result = *(unsigned int *)(a1 + 152);
  *(_DWORD *)(a2 + 280) = result;
  return result;
}
