/*
 * XREFs of RegisterKernelIdleDomains @ 0x1C0014ACC
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0001A20 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     GetDevExtFromIndex @ 0x1C0003004 (GetDevExtFromIndex.c)
 *     RegisterIdleDomain @ 0x1C0020874 (RegisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C0021A94 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall RegisterKernelIdleDomains(_QWORD *a1)
{
  unsigned int *v1; // rdi
  SIZE_T v3; // r14
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // r10
  __int64 v10; // r9
  unsigned int v11; // edx
  __int64 v12; // r11
  unsigned int *v13; // rcx
  unsigned int v14; // ebx
  _DWORD *v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // r8d
  _DWORD *v19; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int i; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v23[24]; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v24[176]; // [rsp+40h] [rbp-79h] BYREF

  v1 = (unsigned int *)a1[60];
  v3 = 32 * *v1 + 8;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)v3);
  a1[84] = v5;
  *v5 = *v1;
  v6 = 0LL;
  for ( i = 0; (unsigned int)v6 < *v1; i = v6 )
  {
    *(_QWORD *)&v5[8 * (unsigned int)v6 + 2] = &v1[4 * v6 + 1 + (unsigned int)v6];
    v6 = i + 1;
  }
  v7 = 0LL;
  v8 = *(_DWORD *)(a1[82] + 56LL);
  i = 0;
  if ( v8 )
  {
    do
    {
      v9 = a1[82];
      v10 = 9 * v7;
      v11 = 0;
      if ( *v1 )
      {
        v12 = *(_QWORD *)(v9 + 72 * v7 + 64);
        do
        {
          v13 = &v5[8 * v11 + 2];
          if ( *(_QWORD *)v13 == v12 )
            *(_QWORD *)(v9 + 8 * v10 + 120) = v13;
          ++v11;
        }
        while ( v11 < *v1 );
        LODWORD(v7) = i;
      }
      v7 = (unsigned int)(v7 + 1);
      i = v7;
    }
    while ( (unsigned int)v7 < v8 );
  }
  if ( !a1[61] )
    return 0;
  KeInitializeAffinityEx(v24);
  v16 = (_DWORD *)a1[61];
  i = 0;
  if ( *v16 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)RegisterIdleDomain(a1) )
        goto LABEL_20;
      v17 = i;
      v18 = *(_DWORD *)(a1[61] + 24 * (i + 1LL));
      if ( v18 < *v5 )
        break;
LABEL_21:
      v19 = (_DWORD *)a1[61];
      i = v17 + 1;
      if ( v17 + 1 >= *v19 )
        goto LABEL_22;
    }
    KeOrAffinityEx(*(_QWORD *)(32LL * v18 + a1[84] + 16) + 48LL, v24, v24);
LABEL_20:
    v17 = i;
    goto LABEL_21;
  }
LABEL_22:
  v14 = 0;
  KeInitializeEnumerationContext(v23, v24);
  while ( !(unsigned int)KeEnumerateNextProcessor(&i, v23) )
  {
    DevExtFromIndex = GetDevExtFromIndex(i);
    updated = UpdateKernelIdleDomains(DevExtFromIndex);
    if ( updated < 0 )
      v14 = updated;
  }
  return v14;
}
