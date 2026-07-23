/*
 * XREFs of PopDiagTraceCsExitReason @ 0x140670F9C
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsExitReason(int *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  unsigned int v7; // ecx
  char result; // al
  REGHANDLE v9; // rdi
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  BOOL v13; // [rsp+44h] [rbp-C4h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+70h] [rbp-98h] BYREF
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h] BYREF
  __int64 v24; // [rsp+88h] [rbp-80h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  __int64 *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  __int64 *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  int *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  BOOL *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  __int64 *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  __int64 *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  int *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  __int64 *v53; // [rsp+178h] [rbp+70h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  __int64 *v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  int *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  int *v59; // [rsp+1A8h] [rbp+A0h]
  __int64 v60; // [rsp+1B0h] [rbp+A8h]
  __int64 *v61; // [rsp+1B8h] [rbp+B0h]
  __int64 v62; // [rsp+1C0h] [rbp+B8h]

  v2 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 8);
  v11 = *a1;
  v21 = *((_QWORD *)a1 + 3);
  v18 = *((_QWORD *)a1 + 4);
  v12 = a1[10];
  v20 = *((_QWORD *)a1 + 6);
  v19 = *((_QWORD *)a1 + 7);
  v24 = *((_QWORD *)a1 + 9);
  v27 = *((_QWORD *)a1 + 10);
  v4 = *((_QWORD *)a1 + 13);
  v5 = *((_BYTE *)a1 + 100);
  v25 = v4;
  LOBYTE(v10) = v5 >> 1;
  v14 = a1[23];
  v6 = *((_QWORD *)a1 + 16);
  v15 = v5 & 1;
  v7 = *((unsigned __int8 *)a1 + 101);
  v26 = v6;
  result = v7 & 1;
  v23 = v2;
  v22 = v3;
  v17 = v7 & 1;
  v16 = (v7 >> 1) & 1;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON);
    if ( result )
    {
      if ( !v2 )
      {
        v3 = 0LL;
        v18 = 0LL;
        v22 = 0LL;
        v21 = 0LL;
        v20 = 0LL;
        v19 = 0LL;
      }
      *(_QWORD *)&UserData.Size = 4LL;
      v30 = 8LL;
      v32 = 8LL;
      v34 = 8LL;
      v13 = v3 != 0;
      v36 = 8LL;
      UserData.Ptr = (ULONGLONG)&v11;
      v38 = 8LL;
      v29 = &v18;
      v40 = 4LL;
      v31 = &v19;
      v33 = &v20;
      v35 = &v21;
      v37 = &v23;
      v39 = &v12;
      v41 = &v10;
      v43 = &v13;
      v45 = &v14;
      v47 = &v22;
      v49 = &v24;
      v51 = &v15;
      v53 = &v25;
      v55 = &v26;
      v57 = &v16;
      v59 = &v17;
      v61 = &v27;
      v42 = 1LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 4LL;
      v54 = 8LL;
      v56 = 8LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 8LL;
      return EtwWrite(v9, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, 0x12u, &UserData);
    }
  }
  return result;
}
