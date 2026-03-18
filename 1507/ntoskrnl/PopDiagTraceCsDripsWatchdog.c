/*
 * XREFs of PopDiagTraceCsDripsWatchdog @ 0x14023D5F8
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDripsWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9)
{
  _UNKNOWN **v9; // rax
  REGHANDLE v11; // rbx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v15; // [rsp+38h] [rbp-B1h] BYREF
  int v16; // [rsp+3Ch] [rbp-ADh] BYREF
  int v17; // [rsp+40h] [rbp-A9h] BYREF
  int v18; // [rsp+44h] [rbp-A5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-A1h] BYREF
  int *v20; // [rsp+58h] [rbp-91h]
  __int64 v21; // [rsp+60h] [rbp-89h]
  int *v22; // [rsp+68h] [rbp-81h]
  __int64 v23; // [rsp+70h] [rbp-79h]
  int *v24; // [rsp+78h] [rbp-71h]
  __int64 v25; // [rsp+80h] [rbp-69h]
  char *v26; // [rsp+88h] [rbp-61h]
  __int64 v27; // [rsp+90h] [rbp-59h]
  int *v28; // [rsp+98h] [rbp-51h]
  __int64 v29; // [rsp+A0h] [rbp-49h]
  char *v30; // [rsp+A8h] [rbp-41h]
  __int64 v31; // [rsp+B0h] [rbp-39h]
  int *v32; // [rsp+B8h] [rbp-31h]
  __int64 v33; // [rsp+C0h] [rbp-29h]
  __int64 v34; // [rsp+C8h] [rbp-21h]
  __int64 v35; // [rsp+D0h] [rbp-19h]
  int *v36; // [rsp+D8h] [rbp-11h]
  __int64 v37; // [rsp+E0h] [rbp-9h]
  __int64 v38; // [rsp+E8h] [rbp-1h]
  __int64 v39; // [rsp+F0h] [rbp+7h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+37h] BYREF
  int v41; // [rsp+128h] [rbp+3Fh] BYREF
  int v42; // [rsp+130h] [rbp+47h] BYREF
  int v43; // [rsp+138h] [rbp+4Fh] BYREF

  v9 = &retaddr;
  v43 = a3;
  v42 = a2;
  v41 = a1;
  if ( PopDiagHandleRegistered )
  {
    v11 = PopDiagHandle;
    LOBYTE(v9) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG);
    if ( (_BYTE)v9 )
    {
      v18 = a6;
      v17 = a4;
      UserData.Ptr = (ULONGLONG)&v41;
      v20 = &v42;
      v22 = &v43;
      v24 = &v17;
      v26 = &a5;
      v28 = &v18;
      v30 = &a7;
      *(_QWORD *)&UserData.Size = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 1LL;
      v33 = 2LL;
      if ( a8 )
      {
        v12 = *a8;
        v35 = *a8;
        LOWORD(v15) = v12 >> 1;
        v32 = &v15;
        v34 = *((_QWORD *)a8 + 1);
      }
      else
      {
        LOWORD(v15) = 0;
        v32 = &v15;
        v34 = 0LL;
        v35 = 0LL;
      }
      v37 = 2LL;
      if ( a9 )
      {
        v13 = *a9;
        v39 = *a9;
        LOWORD(v16) = v13 >> 1;
        v36 = &v16;
        v38 = *((_QWORD *)a9 + 1);
      }
      else
      {
        LOWORD(v16) = 0;
        v36 = &v16;
        v38 = 0LL;
        v39 = 0LL;
      }
      LOBYTE(v9) = EtwWrite(v11, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG, 0LL, 0xBu, &UserData);
    }
  }
  return (char)v9;
}
