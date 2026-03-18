/*
 * XREFs of DpiVerifyResources @ 0x1C019687C
 * Callers:
 *     DpMapMemory @ 0x1C01926B0 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiVerifyResources(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  _QWORD *v9; // r14
  char v10; // r11
  __int64 v11; // r12
  __int64 *v12; // rsi
  char v13; // r10
  unsigned int *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(_QWORD, __int64, _QWORD, BOOL *, __int64 *); // rax
  __int64 v18; // rdx
  char v19; // al
  unsigned int v20; // r11d
  __int64 v21; // rax
  unsigned int v22; // ebp
  unsigned int v23; // r14d
  struct _KMUTANT *v24; // rbp
  __int64 *v25; // rbx
  __int64 *v26; // r8
  signed __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  BOOL v33; // [rsp+30h] [rbp-58h] BYREF
  __int64 v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  __int64 v36[8]; // [rsp+48h] [rbp-40h] BYREF
  char v37; // [rsp+90h] [rbp+8h]
  char v38; // [rsp+A8h] [rbp+20h]

  v38 = a4;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0;
  v9 = a7;
  v10 = a4;
  v11 = (unsigned int)a3;
  v12 = (__int64 *)a2;
  v13 = 0;
  v34 = 0LL;
  v35 = 0LL;
  LOBYTE(a4) = 0;
  *a7 = 0LL;
  v14 = *(unsigned int **)(v7 + 1152);
  v37 = 0;
  if ( !v14 )
  {
LABEL_2:
    v8 = -1073741811;
    v15 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = *v12;
    WdLogEvent5_WdWarning(v15);
    return v8;
  }
  v16 = *(_QWORD *)a2;
  a1 = 786432LL;
  if ( *(_QWORD *)a2 == 786432LL || v16 == 655360 || v16 == 944 || v16 == 960 )
  {
    if ( *(_BYTE *)(v7 + 1140) != 1 )
    {
      v8 = -1073741811;
      v31 = WdLogNewEntry5_WdError(786432LL);
      *(_QWORD *)(v31 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v31);
      return v8;
    }
    if ( v16 != 786432 )
    {
      v17 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, __int64 *))(v7 + 592);
      if ( v17 )
      {
        v18 = *(_QWORD *)a2;
        v33 = v10 != 0;
        v19 = v17(*(_QWORD *)(v7 + 568), v18, (unsigned int)a3, &v33, v36);
        LOBYTE(a4) = 0;
        if ( v19 == 1 )
          *v12 = v36[0];
      }
    }
    v13 = 1;
  }
  v20 = 0;
  if ( v13 == 1 )
    goto LABEL_34;
  a1 = v34;
  v21 = v35;
  do
  {
    if ( v20 >= *v14 )
      break;
    a2 = v20;
    v22 = 0;
    a3 = 9LL * v20;
    v23 = v14[9 * v20 + 4];
    if ( !v23 )
      goto LABEL_32;
    LOBYTE(a2) = v38;
    a3 = (__int64)&v14[a3 + 8];
    while ( (_BYTE)a2 != 1 )
    {
      if ( !(_BYTE)a2 && *(_BYTE *)(a3 - 12) == 3 )
      {
        a1 = *(_QWORD *)(a3 - 8);
        LOBYTE(a4) = 1;
        v21 = a1 + *(unsigned int *)a3;
        v37 = 1;
      }
LABEL_24:
      if ( (_BYTE)a4 == 1 )
        goto LABEL_25;
LABEL_29:
      ++v22;
      a3 += 20LL;
      if ( v22 >= v23 )
        goto LABEL_32;
    }
    if ( *(_BYTE *)(a3 - 12) != 1 )
      goto LABEL_24;
    a1 = *(_QWORD *)(a3 - 8);
    v21 = a1 + *(unsigned int *)a3;
LABEL_25:
    a4 = *v12;
    v37 = 0;
    if ( *v12 < a1 )
    {
LABEL_28:
      LOBYTE(a4) = 0;
      goto LABEL_29;
    }
    a2 = a4 + v11;
    if ( a4 + v11 > v21 )
    {
      LOBYTE(a2) = v38;
      goto LABEL_28;
    }
    v13 = 1;
LABEL_32:
    LOBYTE(a4) = v37;
    ++v20;
  }
  while ( v13 != 1 );
  v9 = a7;
LABEL_34:
  if ( !v13 )
    goto LABEL_2;
  v24 = (struct _KMUTANT *)(v7 + 2384);
  KeWaitForSingleObject((PVOID)(v7 + 2384), Executive, 0, 0, 0LL);
  v25 = *(__int64 **)(v7 + 2368);
  v26 = v25;
  if ( (__int64 *)*v25 != v25 )
  {
    v27 = *v12;
    while ( 1 )
    {
      v28 = v25[4];
      if ( v27 < v28 + *((unsigned int *)v25 + 10) && v27 + v11 > v28 )
        break;
      v25 = (__int64 *)*v25;
      if ( (__int64 *)*v25 == v26 )
        goto LABEL_47;
    }
    v29 = *((unsigned int *)v25 + 14);
    *a6 = v29;
    if ( v25[4] == *v12
      && *((_DWORD *)v25 + 10) == (_DWORD)v11
      && *((_BYTE *)v25 + 45) == a5
      && (!a5 || v25[6] == PsGetCurrentProcess(v29)) )
    {
      v30 = v25[8];
      ++*((_DWORD *)v25 + 6);
      *v9 = v30;
    }
  }
LABEL_47:
  KeReleaseMutex(v24, 0);
  return v8;
}
