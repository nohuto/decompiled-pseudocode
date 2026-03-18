/*
 * XREFs of DpiVerifyResources @ 0x1C016BBF0
 * Callers:
 *     DpMapMemory @ 0x1C0166410 (DpMapMemory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiVerifyResources(
        __int64 a1,
        union _LARGE_INTEGER *a2,
        __int64 a3,
        union _LARGE_INTEGER a4,
        char a5,
        _DWORD *a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  _QWORD *v8; // r14
  unsigned int v9; // edi
  char v10; // r11
  char v11; // r10
  __int64 v12; // r12
  union _LARGE_INTEGER *v13; // rsi
  _DWORD *v14; // r15
  union _LARGE_INTEGER v15; // rax
  __int64 (__fastcall *v16)(__int64, union _LARGE_INTEGER, _QWORD, BOOL *); // r10
  union _LARGE_INTEGER v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int64 v20; // r11
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned int v23; // ebp
  __int64 v24; // rax
  struct _KMUTANT *v25; // rbp
  __int64 *v26; // rbx
  __int64 *v27; // r8
  signed __int64 QuadPart; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  BOOL v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+40h] [rbp-48h]
  union _LARGE_INTEGER v37; // [rsp+48h] [rbp-40h]
  char v38; // [rsp+90h] [rbp+8h]
  char LowPart; // [rsp+A8h] [rbp+20h]

  LowPart = a4.LowPart;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = a7;
  v9 = 0;
  LODWORD(v35) = 0;
  v10 = a4.LowPart;
  LODWORD(v36) = 0;
  LOBYTE(a4.LowPart) = 0;
  v11 = 0;
  v12 = (unsigned int)a3;
  *a7 = 0LL;
  v13 = a2;
  v14 = *(_DWORD **)(v7 + 1064);
  HIDWORD(v35) = 0;
  HIDWORD(v36) = 0;
  v38 = 0;
  if ( !v14 )
    goto LABEL_34;
  v15 = *a2;
  a1 = 786432LL;
  if ( a2->QuadPart == 786432 || v15.QuadPart == 655360 || v15.QuadPart == 944 || v15.QuadPart == 960 )
  {
    if ( *(_BYTE *)(v7 + 1059) != 1 )
    {
      v9 = -1073741811;
      v32 = (_QWORD *)WdLogNewEntry5_WdError(786432LL);
      v32[4] = 0LL;
      v32[3] = DpiVerifyResources;
      v32[5] = -1073741811LL;
      WdLogEvent5_WdError(v32);
      return v9;
    }
    if ( v15.QuadPart != 786432 )
    {
      v16 = *(__int64 (__fastcall **)(__int64, union _LARGE_INTEGER, _QWORD, BOOL *))(v7 + 560);
      if ( v16 )
      {
        v17 = *a2;
        v18 = *(_QWORD *)(v7 + 536);
        v34 = v10 != 0;
        v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v16)(
                v18,
                (union _LARGE_INTEGER)v17.QuadPart,
                (unsigned int)a3,
                &v34);
        LOBYTE(a4.LowPart) = 0;
        if ( v19 == 1 )
          *v13 = v37;
      }
    }
    v11 = 1;
  }
  v20 = 0LL;
  if ( v11 == 1 )
    goto LABEL_33;
  a1 = v35;
  v21 = v36;
  do
  {
    if ( (unsigned int)v20 >= *v14 )
      break;
    a3 = 9 * v20;
    a2 = (union _LARGE_INTEGER *)(unsigned int)v20;
    v22 = v14[9 * v20 + 4];
    v23 = 0;
    if ( !v22 )
      goto LABEL_31;
    LOBYTE(a2) = LowPart;
    a3 = (__int64)&v14[a3 + 8];
    while ( (_BYTE)a2 != 1 )
    {
      if ( !(_BYTE)a2 && *(_BYTE *)(a3 - 12) == 3 )
      {
        a1 = *(_QWORD *)(a3 - 8);
        LOBYTE(a4.LowPart) = 1;
        v21 = a1 + *(unsigned int *)a3;
        v38 = 1;
      }
LABEL_23:
      if ( LOBYTE(a4.LowPart) == 1 )
        goto LABEL_24;
LABEL_28:
      ++v23;
      a3 += 20LL;
      if ( v23 >= v22 )
        goto LABEL_31;
    }
    if ( *(_BYTE *)(a3 - 12) != 1 )
      goto LABEL_23;
    a1 = *(_QWORD *)(a3 - 8);
    v21 = a1 + *(unsigned int *)a3;
LABEL_24:
    a4 = *v13;
    v38 = 0;
    if ( v13->QuadPart < a1 )
    {
LABEL_27:
      LOBYTE(a4.LowPart) = 0;
      goto LABEL_28;
    }
    a2 = (union _LARGE_INTEGER *)(a4.QuadPart + v12);
    if ( a4.QuadPart + v12 > v21 )
    {
      LOBYTE(a2) = LowPart;
      goto LABEL_27;
    }
    v11 = 1;
LABEL_31:
    LOBYTE(a4.LowPart) = v38;
    v20 = (unsigned int)(v20 + 1);
  }
  while ( v11 != 1 );
  v8 = a7;
LABEL_33:
  if ( v11 )
  {
    v25 = (struct _KMUTANT *)(v7 + 1264);
    KeWaitForSingleObject((PVOID)(v7 + 1264), Executive, 0, 0, 0LL);
    v26 = *(__int64 **)(v7 + 1248);
    v27 = v26;
    if ( (__int64 *)*v26 != v26 )
    {
      QuadPart = v13->QuadPart;
      while ( 1 )
      {
        v29 = v26[4];
        if ( QuadPart < v29 + *((unsigned int *)v26 + 10) && QuadPart + v12 > v29 )
          break;
        v26 = (__int64 *)*v26;
        if ( (__int64 *)*v26 == v27 )
          goto LABEL_47;
      }
      v30 = *((unsigned int *)v26 + 14);
      *a6 = v30;
      if ( v26[4] == v13->QuadPart
        && *((_DWORD *)v26 + 10) == (_DWORD)v12
        && *((_BYTE *)v26 + 45) == a5
        && (!a5 || v26[6] == PsGetCurrentProcess(v30)) )
      {
        v31 = v26[8];
        ++*((_DWORD *)v26 + 6);
        *v8 = v31;
      }
    }
LABEL_47:
    KeReleaseMutex(v25, 0);
  }
  else
  {
LABEL_34:
    v9 = -1073741811;
    v24 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(
            a1,
            a2,
            a3,
            (union _LARGE_INTEGER)a4.QuadPart);
    *(_QWORD *)(v24 + 24) = DpiVerifyResources;
    *(union _LARGE_INTEGER *)(v24 + 32) = *v13;
    WdLogEvent5_WdWarning(v24);
  }
  return v9;
}
