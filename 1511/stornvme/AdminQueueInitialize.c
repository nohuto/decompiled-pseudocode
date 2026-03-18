/*
 * XREFs of AdminQueueInitialize @ 0x1C00026C8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000436C (NVMeControllerInitPart1.c)
 * Callees:
 *     NVMeSubmissionQueueInit @ 0x1C000252C (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1C0002624 (NVMeCompletionQueueInit.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

char __fastcall AdminQueueInitialize(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  char result; // al
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  char *v10; // [rsp+50h] [rbp+20h]
  char *v11; // [rsp+58h] [rbp+28h]

  v1 = a1 + 232;
  v2 = a1 + 368;
  if ( *(_BYTE *)(a1 + 16) )
  {
    v5 = 16LL * *(unsigned __int16 *)(a1 + 220);
    v11 = (char *)(v5 + *(_QWORD *)v2);
    v10 = &v11[v5];
    v6 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 220)) >> 2;
    if ( v6 )
      memset(v11, 0, 4LL * v6);
    v7 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 220)) >> 2;
    if ( v7 )
      memset(v10, 0, 4LL * v7);
    NVMeSubmissionQueueInit(a1, v1, 0, *(_QWORD *)v1, (__int64)v11, (__int64)v10);
    NVMeCompletionQueueInit(a1, v2, 0, *(_QWORD *)v2, 0LL);
    v8 = (unsigned int)(*(unsigned __int16 *)(a1 + 220) << 6) >> 2;
    if ( v8 )
      memset(*(void **)v1, 0, 4LL * v8);
    v9 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 220)) >> 2;
    if ( v9 )
      memset(*(void **)v2, 0, 4LL * v9);
    *(_WORD *)(v1 + 50) = 0;
    result = 1;
    *(_DWORD *)(v2 + 108) = 1;
  }
  else
  {
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 220), 1701672526LL);
    return 0;
  }
  return result;
}
