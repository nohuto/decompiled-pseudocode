/*
 * XREFs of PopDiagTraceCsDripsWatchdog @ 0x1402079DC
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406752EC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
        unsigned __int16 *a9,
        char a10)
{
  _UNKNOWN **v10; // rax
  REGHANDLE v12; // rbx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  int *v21; // [rsp+58h] [rbp-B0h]
  __int64 v22; // [rsp+60h] [rbp-A8h]
  int *v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  int *v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  char *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  char *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  int *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  char *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  int v44; // [rsp+138h] [rbp+30h] BYREF
  int v45; // [rsp+140h] [rbp+38h] BYREF
  int v46; // [rsp+148h] [rbp+40h] BYREF

  v10 = &retaddr;
  v46 = a3;
  v45 = a2;
  v44 = a1;
  if ( PopDiagHandleRegistered )
  {
    v12 = PopDiagHandle;
    LOBYTE(v10) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG);
    if ( (_BYTE)v10 )
    {
      v19 = a6;
      v18 = a4;
      UserData.Ptr = (ULONGLONG)&v44;
      v21 = &v45;
      v23 = &v46;
      v25 = &v18;
      v27 = &a5;
      v29 = &v19;
      v31 = &a7;
      *(_QWORD *)&UserData.Size = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 1LL;
      v34 = 2LL;
      if ( a8 )
      {
        v13 = *a8;
        v36 = *a8;
        LOWORD(v16) = v13 >> 1;
        v33 = &v16;
        v35 = *((_QWORD *)a8 + 1);
      }
      else
      {
        LOWORD(v16) = 0;
        v33 = &v16;
        v35 = 0LL;
        v36 = 0LL;
      }
      v38 = 2LL;
      if ( a9 )
      {
        v14 = *a9;
        v40 = *a9;
        LOWORD(v17) = v14 >> 1;
        v37 = &v17;
        v39 = *((_QWORD *)a9 + 1);
      }
      else
      {
        LOWORD(v17) = 0;
        v37 = &v17;
        v39 = 0LL;
        v40 = 0LL;
      }
      v42 = 4LL;
      v41 = &a10;
      LOBYTE(v10) = EtwWrite(v12, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG, 0LL, 0xCu, &UserData);
    }
  }
  return (char)v10;
}
