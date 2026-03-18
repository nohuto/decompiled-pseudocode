/*
 * XREFs of AdminQueueInitialize @ 0x1C0005094
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0006D5C (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeCompletionQueueInit @ 0x1C0006744 (NVMeCompletionQueueInit.c)
 *     NVMeFreePool @ 0x1C000761C (NVMeFreePool.c)
 *     NVMeSubmissionQueueInit @ 0x1C00085F8 (NVMeSubmissionQueueInit.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  char result; // al
  __int64 v5; // rdx
  char *v6; // [rsp+50h] [rbp+20h]
  char *v7; // [rsp+58h] [rbp+28h]

  v1 = a1 + 240;
  v2 = a1 + 376;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v5 = 16LL * *(unsigned __int16 *)(a1 + 228);
    v7 = (char *)(v5 + *(_QWORD *)v2);
    v6 = &v7[v5];
    NVMeZeroMemory(v7, 16 * *(unsigned __int16 *)(a1 + 228));
    NVMeZeroMemory(v6, 16 * *(unsigned __int16 *)(a1 + 228));
    NVMeSubmissionQueueInit(a1, v1, 0, *(_QWORD *)v1, (__int64)v7, (__int64)v6);
    NVMeCompletionQueueInit(a1, v2, 0, *(_QWORD *)v2, 0LL);
    NVMeZeroMemory(*(void **)v1, *(unsigned __int16 *)(a1 + 228) << 6);
    NVMeZeroMemory(*(void **)v2, 16 * *(unsigned __int16 *)(a1 + 228));
    *(_WORD *)(v1 + 50) = 0;
    result = 1;
    *(_DWORD *)(v2 + 108) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 228));
    NVMeFreePool(a1);
    NVMeFreePool(a1);
    return 0;
  }
  return result;
}
