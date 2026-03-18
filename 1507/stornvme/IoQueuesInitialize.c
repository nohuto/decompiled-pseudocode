/*
 * XREFs of IoQueuesInitialize @ 0x1C0002AC4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004400 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x1C00022EC (NVMeAllocateDmaBuffer.c)
 *     NVMeSubmissionQueueInit @ 0x1C000243C (NVMeSubmissionQueueInit.c)
 *     NVMeCompletionQueueInit @ 0x1C0002534 (NVMeCompletionQueueInit.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

char __fastcall IoQueuesInitialize(__int64 a1)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v3; // r8
  __int64 v4; // rcx
  void ***v5; // r13
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int k; // esi
  void **v14; // r10
  __int64 v15; // rdi
  unsigned int i; // edi
  __int64 v17; // r8
  unsigned int j; // edi
  void *v19; // r8
  __int64 v20; // r8
  void *v22; // r10
  unsigned __int64 v23; // rcx
  bool v24; // cf
  unsigned int m; // edi
  __int64 v26; // rsi
  void *v27; // r10
  void *v28; // [rsp+30h] [rbp-18h]
  void *v29; // [rsp+30h] [rbp-18h]
  char *v30; // [rsp+98h] [rbp+50h]
  char *v31; // [rsp+A0h] [rbp+58h]
  char *v32; // [rsp+A8h] [rbp+60h]

  v32 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v2 = *(_WORD *)(a1 + 226);
  if ( !v2 )
    return 0;
  v3 = *(_WORD *)(a1 + 224);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 222);
  v5 = (void ***)(a1 + 544);
  v6 = 16 * v4;
  v7 = (_DWORD)v4 << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    StorPortExtendedFunction(0LL, a1, 168 * (unsigned int)v2, 1701672526LL);
    StorPortExtendedFunction(0LL, a1, 136 * (unsigned int)*(unsigned __int16 *)(a1 + 224), 1701672526LL);
    if ( *v5 && *(_QWORD *)(a1 + 536) )
      StorPortExtendedFunction(
        0LL,
        a1,
        16 * *(unsigned __int16 *)(a1 + 222) * (unsigned int)*(unsigned __int16 *)(a1 + 224),
        1701672526LL);
LABEL_16:
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( *(_QWORD *)(a1 + 536) )
      {
        for ( i = 0; i < *(unsigned __int16 *)(a1 + 224); ++i )
        {
          v17 = *(_QWORD *)(136LL * i + *(_QWORD *)(a1 + 536));
          if ( v17 )
            StorPortExtendedFunction(25LL, a1, v17, v7);
        }
      }
      if ( *v5 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(a1 + 226); ++j )
        {
          v19 = (*v5)[21 * j];
          if ( v19 )
            StorPortExtendedFunction(25LL, a1, v19, v6);
        }
      }
      if ( v30 )
        StorPortExtendedFunction(1LL, a1, v30, v8);
      if ( v31 )
        StorPortExtendedFunction(1LL, a1, v31, v8);
      if ( v32 )
        StorPortExtendedFunction(1LL, a1, v32, v8);
      if ( *v5 )
        StorPortExtendedFunction(1LL, a1, *v5, v8);
      v20 = *(_QWORD *)(a1 + 536);
      if ( v20 )
        StorPortExtendedFunction(1LL, a1, v20, v8);
    }
    *(_DWORD *)(a1 + 224) = 0;
    return 0;
  }
  v32 = (char *)**v5 + v6;
  v9 = 16 * v3 * v4;
  v31 = &v32[v9];
  v30 = &v32[v9 + v9];
  v10 = (16 * *(unsigned __int16 *)(a1 + 222) * (unsigned int)*(unsigned __int16 *)(a1 + 224)) >> 2;
  if ( v10 )
    memset(v32, 0, 4LL * v10);
  v11 = (16 * *(unsigned __int16 *)(a1 + 222) * (unsigned int)*(unsigned __int16 *)(a1 + 224)) >> 2;
  if ( v11 )
    memset(v31, 0, 4LL * v11);
  v12 = (8 * (unsigned int)*(unsigned __int16 *)(a1 + 226)) >> 2;
  if ( v12 )
    memset(v30, 0, 4LL * v12);
  for ( k = 0;
        k < *(unsigned __int16 *)(a1 + 224);
        NVMeSubmissionQueueInit(a1, v15, ++k, (__int64)v22, (__int64)&v32[v23], (__int64)&v31[v23]) )
  {
    v14 = *(void ***)(a1 + 536);
    v15 = (__int64)&v14[17 * k];
    if ( !*(_BYTE *)(a1 + 16) )
    {
      NVMeAllocateDmaBuffer(a1, v7);
      goto LABEL_16;
    }
    v22 = *v14;
    v28 = v22;
    if ( (v7 & 3) != 0 )
    {
      if ( v7 )
      {
        memset(v22, 0, v7);
        goto LABEL_44;
      }
    }
    else if ( v7 >> 2 )
    {
      memset(v22, 0, 4LL * (v7 >> 2));
LABEL_44:
      v22 = v28;
    }
    v23 = 16 * k * (unsigned __int64)*(unsigned __int16 *)(a1 + 222);
  }
  v24 = *(_WORD *)(a1 + 226) != 0;
  for ( m = 0; v24 && m < *(unsigned __int16 *)(a1 + 224); v24 = m < *(unsigned __int16 *)(a1 + 226) )
  {
    v26 = (__int64)&(*v5)[21 * m];
    if ( !*(_BYTE *)(a1 + 16) )
    {
      NVMeAllocateDmaBuffer(a1, v6);
      goto LABEL_16;
    }
    v27 = **v5;
    v29 = v27;
    if ( (v6 & 3) != 0 )
    {
      if ( !v6 )
        goto LABEL_57;
      memset(v27, 0, v6);
    }
    else
    {
      if ( !(v6 >> 2) )
        goto LABEL_57;
      memset(v27, 0, 4LL * (v6 >> 2));
    }
    v27 = v29;
LABEL_57:
    NVMeCompletionQueueInit(a1, v26, m + 1, (__int64)v27, (__int64)&v30[8 * m]);
    ++m;
  }
  return 1;
}
