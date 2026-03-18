/*
 * XREFs of NVMeQueuesReInit @ 0x1C0008418
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C00070C0 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C00072C8 (NVMeControllerReset.c)
 * Callees:
 *     CompletionQueueReInit @ 0x1C00052A4 (CompletionQueueReInit.c)
 *     SubmissionQueueReInit @ 0x1C00087C8 (SubmissionQueueReInit.c)
 */

void *__fastcall NVMeQueuesReInit(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  void *result; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // edi
  unsigned int v9; // edx
  __int64 v10; // rcx

  v1 = (_DWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 560) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 26;
    --v3;
  }
  while ( v3 );
  SubmissionQueueReInit(a1, a1 + 240);
  result = CompletionQueueReInit(a1, a1 + 376);
  v5 = 0;
  if ( *(_WORD *)(a1 + 228) )
  {
    do
    {
      v6 = *(_QWORD *)(a1 + 272);
      if ( *(_QWORD *)(v6 + 16LL * v5) )
        *(_QWORD *)(v6 + 16LL * v5) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 228);
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  v7 = 0;
  if ( *(_WORD *)(a1 + 232) )
  {
    do
    {
      SubmissionQueueReInit(a1, *(_QWORD *)(a1 + 544) + 136LL * v7);
      result = (void *)*(unsigned __int16 *)(a1 + 232);
      ++v7;
    }
    while ( v7 < (unsigned int)result );
  }
  v8 = 0;
  if ( *(_WORD *)(a1 + 234) )
  {
    do
    {
      CompletionQueueReInit(a1, *(_QWORD *)(a1 + 552) + 168LL * v8);
      result = (void *)*(unsigned __int16 *)(a1 + 234);
      ++v8;
    }
    while ( v8 < (unsigned int)result );
  }
  v9 = 0;
  if ( *(_WORD *)(a1 + 162) )
  {
    do
    {
      v10 = v9++;
      *(_QWORD *)(32 * v10 + *(_QWORD *)(a1 + 192) + 24) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 162);
    }
    while ( v9 < (unsigned int)result );
  }
  return result;
}
