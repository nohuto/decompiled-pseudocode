/*
 * XREFs of RegisterKernelIdleDomains @ 0x1C0017DF4
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003830 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0006184 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 *     memset @ 0x1C0006B40 (memset.c)
 *     UpdateKernelIdleDomains @ 0x1C001837C (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(__int64 a1)
{
  unsigned int *v1; // rbx
  SIZE_T v3; // rsi
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r11
  unsigned int *v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rbx
  PVOID v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // r8d
  _DWORD *v29; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int i; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v34[24]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v35[176]; // [rsp+40h] [rbp-89h] BYREF

  v1 = *(unsigned int **)(a1 + 480);
  v3 = 32 * *v1 + 8;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v3);
  *(_QWORD *)(a1 + 672) = v5;
  *v5 = *v1;
  v7 = 0LL;
  for ( i = 0; (unsigned int)v7 < *v1; i = v7 )
  {
    *(_QWORD *)&v5[8 * (unsigned int)v7 + 2] = &v1[4 * v7 + 1 + (unsigned int)v7];
    v7 = i + 1;
  }
  v8 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 656) + 56LL);
  i = 0;
  if ( v9 )
  {
    do
    {
      v10 = *(_QWORD *)(a1 + 656);
      v11 = 9 * v8;
      v12 = 0;
      if ( *v1 )
      {
        v13 = *(_QWORD *)(v10 + 72 * v8 + 64);
        do
        {
          v14 = &v5[8 * v12 + 2];
          if ( *(_QWORD *)v14 == v13 )
            *(_QWORD *)(v10 + 8 * v11 + 120) = v14;
          ++v12;
        }
        while ( v12 < *v1 );
        LODWORD(v8) = i;
      }
      v8 = (unsigned int)(v8 + 1);
      i = v8;
    }
    while ( (unsigned int)v8 < v9 );
  }
  if ( !*(_QWORD *)(a1 + 488) )
    return 0;
  KeInitializeAffinityEx(v35);
  v15 = *(_DWORD **)(a1 + 488);
  v16 = 0LL;
  i = 0;
  if ( *v15 )
  {
    while ( 1 )
    {
      v17 = qword_1C00093E8;
      v18 = 3 * v16;
      v19 = *(_QWORD *)(a1 + 488);
      if ( (__int64 *)qword_1C00093E8 == &qword_1C00093E8 )
        goto LABEL_20;
      do
      {
        v20 = v17;
        if ( *(_DWORD *)(v17 + 36) == *(_DWORD *)(v19 + 24 * v16 + 12) )
          break;
        v17 = *(_QWORD *)v17;
        v20 = 0LL;
      }
      while ( (__int64 *)v17 != &qword_1C00093E8 );
      if ( !v20 )
      {
LABEL_20:
        v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x72637250u);
        v20 = (__int64)v21;
        if ( !v21 )
          goto LABEL_29;
        memset(v21, 0, 0xD8uLL);
        *(_QWORD *)(v20 + 24) = v20 + 16;
        *(_QWORD *)(v20 + 16) = v20 + 16;
        v22 = (__int64 *)qword_1C00093F0;
        if ( *(__int64 **)qword_1C00093F0 != &qword_1C00093E8 )
          __fastfail(3u);
        *(_QWORD *)v20 = &qword_1C00093E8;
        *(_QWORD *)(v20 + 8) = v22;
        *v22 = v20;
        qword_1C00093F0 = v20;
        KeInitializeAffinityEx(v20 + 48);
        *(_DWORD *)(v20 + 36) = *(_DWORD *)(v19 + 8 * v18 + 12);
        *(_DWORD *)(v20 + 40) = *(_DWORD *)(v19 + 8 * v18 + 16);
        *(_DWORD *)(v20 + 44) = *(_DWORD *)(v19 + 8 * v18 + 20);
      }
      v23 = *(_QWORD *)(a1 + 672);
      v24 = 32LL * *(unsigned int *)(v19 + 8 * v18 + 24);
      v25 = (_QWORD *)(v24 + v23 + 24);
      *(_QWORD *)(v24 + v23 + 16) = v20;
      v26 = *(_QWORD **)(v20 + 24);
      if ( *v26 != v20 + 16 )
        __fastfail(3u);
      v25[1] = v26;
      *v25 = v20 + 16;
      *v26 = v25;
      *(_QWORD *)(v20 + 24) = v25;
      if ( !(unsigned int)KeCheckProcessorAffinityEx(v20 + 48, *(unsigned int *)(a1 + 56)) )
      {
        KeAddProcessorAffinityEx(v20 + 48, *(unsigned int *)(a1 + 56));
        ++*(_DWORD *)(v20 + 32);
      }
      if ( *(_DWORD *)(v20 + 32) != *(_DWORD *)(v20 + 44) )
        goto LABEL_29;
      v27 = i;
      v28 = *(_DWORD *)(*(_QWORD *)(a1 + 488) + 24 * (i + 1LL));
      if ( v28 < *v5 )
        break;
LABEL_30:
      v29 = *(_DWORD **)(a1 + 488);
      v16 = v27 + 1;
      i = v16;
      if ( (unsigned int)v16 >= *v29 )
        goto LABEL_31;
    }
    KeOrAffinityEx(*(_QWORD *)(32LL * v28 + *(_QWORD *)(a1 + 672) + 16) + 48LL, v35, v35);
LABEL_29:
    v27 = i;
    goto LABEL_30;
  }
LABEL_31:
  v6 = 0;
  KeInitializeEnumerationContext(v34, v35);
  while ( !(unsigned int)KeEnumerateNextProcessor(&i, v34) )
  {
    DevExtFromIndex = GetDevExtFromIndex(i);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v6 = updated;
  }
  return v6;
}
