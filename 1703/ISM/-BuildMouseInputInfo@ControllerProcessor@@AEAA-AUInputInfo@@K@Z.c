/*
 * XREFs of ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AUInputInfo@@K@Z @ 0x18003368C
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003332C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsPointerMappings@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180033534 (-SendGamepadAsPointerMappings@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

_DWORD *__fastcall ControllerProcessor::BuildMouseInputInfo(__int64 a1, _DWORD *a2, int a3)
{
  int *v6; // rax
  int v7; // ecx
  _DWORD *result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  memset(a2, 0, 0x760uLL);
  *a2 = 2;
  a2[2] = GetTickCount();
  *((LARGE_INTEGER *)a2 + 2) = PerformanceCount;
  v6 = *(int **)(a1 + 32);
  a2[10] = 1888;
  v7 = *v6;
  *((_OWORD *)a2 + 44) = 0uLL;
  a2[1] = v7;
  *((_QWORD *)a2 + 90) = 0LL;
  *((_WORD *)a2 + 353) = 0;
  *(_QWORD *)(a2 + 179) = 0LL;
  result = a2;
  a2[177] = a3;
  return result;
}
