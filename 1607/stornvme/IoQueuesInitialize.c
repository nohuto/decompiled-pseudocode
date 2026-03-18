/*
 * XREFs of IoQueuesInitialize @ 0x1C0005EFC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00065A0 (NVMeAllocateDmaBuffer.c)
 *     NVMeCompletionQueueInit @ 0x1C0006744 (NVMeCompletionQueueInit.c)
 *     NVMeFreeDmaBuffer @ 0x1C0007514 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x1C000761C (NVMeFreePool.c)
 *     NVMeSubmissionQueueInit @ 0x1C00085F8 (NVMeSubmissionQueueInit.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  unsigned int v1; // r12d
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // r8
  __int64 v5; // rdx
  void ***v6; // rsi
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  __int64 v9; // rdx
  void **v10; // rcx
  unsigned int v11; // edi
  void *v12; // rcx
  unsigned int i; // edi
  __int64 v14; // r8
  unsigned int j; // edi
  void *v16; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // edi
  void **v20; // rcx
  unsigned int v21; // r14d
  void *v22; // rcx
  _QWORD v23[3]; // [rsp+30h] [rbp-18h] BYREF
  char *v24; // [rsp+98h] [rbp+50h]
  char *v25; // [rsp+A0h] [rbp+58h]
  char *v26; // [rsp+A8h] [rbp+60h]

  v1 = 0;
  v3 = *(_WORD *)(a1 + 234);
  if ( !v3 )
    return 0;
  v4 = *(_WORD *)(a1 + 232);
  if ( !v4 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 230);
  v6 = (void ***)(a1 + 552);
  v7 = 16 * v5;
  v8 = *(unsigned __int16 *)(a1 + 230) << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    StorPortExtendedFunction(0LL, a1, 168 * (unsigned int)v3);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 232));
    if ( *v6 && *(_QWORD *)(a1 + 544) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 230) * (unsigned int)*(unsigned __int16 *)(a1 + 232));
LABEL_11:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 544) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 232); ++i )
        {
          v14 = *(_QWORD *)(136LL * i + *(_QWORD *)(a1 + 544));
          if ( v14 )
            NVMeFreeDmaBuffer(a1, v8, v14);
        }
      }
      if ( *v6 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 234); ++j )
        {
          v16 = (*v6)[21 * j];
          if ( v16 )
            NVMeFreeDmaBuffer(a1, v7, v16);
        }
      }
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
      NVMeFreePool(a1);
    }
    *(_DWORD *)(a1 + 232) = 0;
    return 0;
  }
  v26 = (char *)**v6 + v7;
  v9 = 16 * v4 * v5;
  v25 = &v26[v9];
  v24 = &v26[v9 + v9];
  NVMeZeroMemory(v26, 16 * *(unsigned __int16 *)(a1 + 230) * *(unsigned __int16 *)(a1 + 232));
  NVMeZeroMemory(v25, 16 * *(unsigned __int16 *)(a1 + 230) * *(unsigned __int16 *)(a1 + 232));
  NVMeZeroMemory(v24, 8 * *(unsigned __int16 *)(a1 + 234));
  if ( *(_WORD *)(a1 + 232) )
  {
    do
    {
      v10 = *(void ***)(a1 + 544);
      v23[0] = 0LL;
      v11 = (_DWORD)v10 + 136 * v1;
      if ( *(_BYTE *)(a1 + 16) )
      {
        v12 = *v10;
        v23[0] = v12;
      }
      else
      {
        if ( (unsigned int)NVMeAllocateDmaBuffer(a1, v8, v23) )
          goto LABEL_11;
        v12 = (void *)v23[0];
        if ( !v23[0] )
          goto LABEL_11;
      }
      NVMeZeroMemory(v12, v8);
      v18 = 16 * v1 * (unsigned __int64)*(unsigned __int16 *)(a1 + 230);
      NVMeSubmissionQueueInit(a1, v11, ++v1, v23[0], (__int64)&v26[v18], (__int64)&v25[v18]);
    }
    while ( v1 < *(unsigned __int16 *)(a1 + 232) );
  }
  v19 = 0;
  if ( *(_WORD *)(a1 + 234) )
  {
    while ( v19 < *(unsigned __int16 *)(a1 + 232) )
    {
      v20 = *v6;
      v23[0] = 0LL;
      v21 = (_DWORD)v20 + 168 * v19;
      if ( *(_BYTE *)(a1 + 16) )
      {
        v22 = *v20;
        v23[0] = v22;
      }
      else
      {
        if ( (unsigned int)NVMeAllocateDmaBuffer(a1, v7, v23) )
          goto LABEL_11;
        v22 = (void *)v23[0];
        if ( !v23[0] )
          goto LABEL_11;
      }
      NVMeZeroMemory(v22, v7);
      NVMeCompletionQueueInit(a1, v21, v19 + 1, v23[0], (__int64)&v24[8 * v19]);
      if ( ++v19 >= *(unsigned __int16 *)(a1 + 234) )
        return 1;
    }
  }
  return 1;
}
