/*
 * XREFs of CmpSecurityMethod @ 0x140403170
 * Callers:
 *     <none>
 * Callees:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000AEB8 (CmpQueryKeySecurity.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 */

__int64 __fastcall CmpSecurityMethod(
        _QWORD *a1,
        int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rbx
  ULONG_PTR v12; // rdi
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v18; // r9d
  int v19; // ecx
  int v20; // ebx
  int KeySecurity; // eax
  int v22; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-81h]
  _QWORD v25[2]; // [rsp+30h] [rbp-71h] BYREF
  __int64 v26; // [rsp+40h] [rbp-61h]
  PGENERIC_MAPPING v27; // [rsp+48h] [rbp-59h]
  _QWORD v28[7]; // [rsp+50h] [rbp-51h] BYREF
  int v29; // [rsp+88h] [rbp-19h] BYREF
  __int64 v30; // [rsp+8Ch] [rbp-15h]
  int v31; // [rsp+94h] [rbp-Dh]

  v9 = CmpTraceRoutine;
  v27 = a8;
  v12 = a2;
  v29 = 0;
  v30 = 0LL;
  v31 = 0;
  v26 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v29, 0x20000uLL);
    v9 = CmpTraceRoutine;
  }
  v25[1] = v25;
  v13 = 0;
  v25[0] = v25;
  memset(v28, 0, sizeof(v28));
  if ( v9 && a1 )
    v26 = a1[1];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
  {
    if ( (_DWORD)v12 == 1 )
    {
      v28[3] = a5;
      v18 = 37;
      v19 = 36;
    }
    else
    {
      if ( (_DWORD)v12 )
        goto LABEL_10;
      v18 = 39;
      v19 = 38;
    }
    v28[0] = a1;
    LOBYTE(v15) = 1;
    v28[1] = a3;
    v28[2] = a4;
    v20 = CmpCallCallBacks(v19, (unsigned int)v28, v15, v18, (__int64)a1, (__int64)v25);
    if ( v20 < 0 )
    {
      if ( v20 == -1073740541 )
        v20 = 0;
      goto LABEL_18;
    }
    v13 = 1;
  }
LABEL_10:
  if ( (_DWORD)v12 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, (__int64)a3, a4, a5, BugCheckParameter4);
  }
  else if ( (_DWORD)v12 )
  {
    if ( (_DWORD)v12 == 2 )
      goto LABEL_13;
    if ( (_DWORD)v12 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, a1[1], v12);
    KeySecurity = CmpAssignKeySecurity((__int64)a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity((__int64)a1, a3, a4, v16, a7, v27);
  }
  v20 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_13:
    v20 = 0;
  if ( !v13 )
    goto LABEL_18;
  if ( (_DWORD)v12 == 1 )
  {
    v22 = 37;
LABEL_17:
    v20 = CmPostCallbackNotification(v22, (_DWORD)a1, v20, (unsigned int)v28, (__int64)v25);
    goto LABEL_18;
  }
  if ( !(_DWORD)v12 )
  {
    v22 = 39;
    goto LABEL_17;
  }
LABEL_18:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  if ( CmpTraceRoutine )
    CmpTraceRoutine((unsigned __int8)(((_DWORD)v12 != 0) + 28), &v29, (unsigned int)v20, 0LL, v26, 0LL);
  return (unsigned int)v20;
}
