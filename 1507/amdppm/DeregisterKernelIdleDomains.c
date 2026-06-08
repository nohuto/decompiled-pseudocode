/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C0016948
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0002E50 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0004B30 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     UpdateKernelIdleDomains @ 0x1C0016BA0 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  _DWORD *v2; // rax
  unsigned int v3; // edi
  unsigned int v4; // edx
  _QWORD *v5; // r14
  __int64 v6; // rax
  unsigned int *v7; // rcx
  char v8; // dl
  _QWORD *v9; // rdi
  _QWORD *v10; // r8
  unsigned __int64 v11; // r10
  unsigned int *v12; // r9
  _QWORD *i; // rax
  unsigned int *v14; // rcx
  bool v15; // si
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  void **v19; // rax
  unsigned int *v20; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int j; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v27[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v28[176]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v29[176]; // [rsp+F0h] [rbp-10h] BYREF

  KeInitializeAffinityEx(v28);
  v2 = *(_DWORD **)(a1 + 664);
  if ( v2 )
  {
    v4 = 0;
    j = 0;
    if ( *v2 )
    {
      do
      {
        v5 = (_QWORD *)(32LL * v4 + *(_QWORD *)(a1 + 664) + 8LL);
        v6 = v5[1];
        if ( v6 )
        {
          KeCopyAffinityEx(v29, v6 + 48);
          v7 = *(unsigned int **)(a1 + 664);
          v8 = 1;
          v9 = (_QWORD *)v5[1];
          v10 = v9 + 2;
          v11 = (unsigned __int64)&v7[8 * *v7 + 2];
          v12 = v7 + 2;
          for ( i = (_QWORD *)v9[2]; i != v10; i = (_QWORD *)*i )
          {
            v14 = (unsigned int *)(i - 2);
            if ( i - 2 != v5 && v14 >= v12 && (unsigned __int64)v14 < v11 )
              v8 = 0;
          }
          v15 = 0;
          if ( v8 )
          {
            v15 = *((_DWORD *)v9 + 8) == *((_DWORD *)v9 + 11);
            KeRemoveProcessorAffinityEx(v9 + 6, *(unsigned int *)(a1 + 56), v10, v12);
            --*((_DWORD *)v9 + 8);
          }
          v16 = v5[2];
          v17 = (_QWORD *)v5[3];
          if ( *(_QWORD **)(v16 + 8) != v5 + 2 || (_QWORD *)*v17 != v5 + 2 )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          if ( v17 == (_QWORD *)v16 )
          {
            v18 = (_QWORD *)*v9;
            v19 = (void **)v9[1];
            if ( *(_QWORD **)(*v9 + 8LL) != v9 || *v19 != v9 )
              __fastfail(3u);
            *v19 = v18;
            v18[1] = v19;
            ExFreePoolWithTag(v9, 0);
          }
          v5[1] = 0LL;
          if ( v15 )
            KeOrAffinityEx(v29, v28, v28);
          v4 = j;
        }
        v20 = *(unsigned int **)(a1 + 664);
        j = ++v4;
      }
      while ( v4 < *v20 );
    }
    v3 = 0;
    KeInitializeEnumerationContext(v27, v28);
    while ( !(unsigned int)KeEnumerateNextProcessor(&j, v27) )
    {
      DevExtFromIndex = GetDevExtFromIndex(j);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v3 = updated;
    }
    v23 = *(_DWORD *)(*(_QWORD *)(a1 + 648) + 56LL);
    v24 = 0LL;
    for ( j = 0; (unsigned int)v24 < v23; j = v24 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 648) + 72 * v24 + 120) = 0LL;
      v24 = j + 1;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 664), 0x72637250u);
    *(_QWORD *)(a1 + 664) = 0LL;
  }
  else
  {
    return 0;
  }
  return v3;
}
