/*
 * XREFs of Template_pqqqqqqqsssxqqq @ 0x1C00333C0
 * Callers:
 *     Etw_ControllerCreate @ 0x1C0004FD0 (Etw_ControllerCreate.c)
 *     Etw_ControllerRundown @ 0x1C0007174 (Etw_ControllerRundown.c)
 *     Etw_ControllerDelete @ 0x1C00327AC (Etw_ControllerDelete.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C0032898 (Etw_ControllerFirmareVersionUpdate.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 */

NTSTATUS Template_pqqqqqqqsssxqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ecx
  const char *v7; // r9
  const char *v8; // rax
  __int64 v9; // rcx
  int v10; // ecx
  const char *v11; // rax
  int v12; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  va_list v15; // [rsp+40h] [rbp-C0h]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  va_list v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  va_list v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  va_list v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  va_list v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  va_list v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  va_list v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  const char *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  const char *v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  const char *v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  va_list v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  va_list v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  va_list v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  va_list v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  __int64 v46; // [rsp+168h] [rbp+68h] BYREF
  va_list va; // [rsp+168h] [rbp+68h]
  __int64 v48; // [rsp+170h] [rbp+70h] BYREF
  va_list va1; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h] BYREF
  va_list va2; // [rsp+178h] [rbp+78h]
  __int64 v52; // [rsp+180h] [rbp+80h] BYREF
  va_list va3; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h] BYREF
  va_list va4; // [rsp+188h] [rbp+88h]
  __int64 v56; // [rsp+190h] [rbp+90h] BYREF
  va_list va5; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h] BYREF
  va_list va6; // [rsp+198h] [rbp+98h]
  __int64 v60; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va7; // [rsp+1A0h] [rbp+A0h]
  const char *v62; // [rsp+1A8h] [rbp+A8h]
  const char *v63; // [rsp+1B0h] [rbp+B0h]
  const char *v64; // [rsp+1B8h] [rbp+B8h]
  __int64 v65; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va8; // [rsp+1C0h] [rbp+C0h]
  __int64 v67; // [rsp+1C8h] [rbp+C8h] BYREF
  va_list va9; // [rsp+1C8h] [rbp+C8h]
  __int64 v69; // [rsp+1D0h] [rbp+D0h] BYREF
  va_list va10; // [rsp+1D0h] [rbp+D0h]
  va_list va11; // [rsp+1D8h] [rbp+D8h] BYREF

  va_start(va11, a3);
  va_start(va10, a3);
  va_start(va9, a3);
  va_start(va8, a3);
  va_start(va7, a3);
  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v46 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v48 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v50 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v52 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v54 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v56 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v58 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v60 = va_arg(va8, _QWORD);
  v62 = va_arg(va8, const char *);
  v63 = va_arg(va8, const char *);
  v64 = va_arg(va8, const char *);
  va_copy(va9, va8);
  v65 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v67 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v69 = va_arg(va11, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v15, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v17, va2);
  v16 = 4LL;
  va_copy(v19, va3);
  v4 = -1LL;
  v18 = 4LL;
  va_copy(v21, va4);
  va_copy(v23, va5);
  va_copy(v25, va6);
  va_copy(v27, va7);
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  if ( v62 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v62[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v30 = v6;
  v7 = "NULL";
  v31 = 0;
  v8 = "NULL";
  if ( v62 )
    v8 = v62;
  v29 = v8;
  if ( v63 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v63[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v33 = v10;
  v11 = "NULL";
  v34 = 0;
  if ( v63 )
    v11 = v63;
  v32 = v11;
  if ( v64 )
  {
    do
      ++v4;
    while ( v64[v4] );
    v12 = v4 + 1;
  }
  else
  {
    v12 = 5;
  }
  v36 = v12;
  v37 = 0;
  if ( v64 )
    v7 = v64;
  v39 = 8LL;
  v35 = v7;
  va_copy(v38, va8);
  v41 = 4LL;
  va_copy(v40, va9);
  v43 = 4LL;
  va_copy(v42, va10);
  v45 = 4LL;
  va_copy(v44, va11);
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, a2, a3, 0xFu, &UserData);
}
