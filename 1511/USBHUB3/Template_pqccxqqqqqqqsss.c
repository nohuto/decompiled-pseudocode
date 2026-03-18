/*
 * XREFs of Template_pqccxqqqqqqqsss @ 0x1C0001694
 * Callers:
 *     HUBDRIVER_EtwRundownHub @ 0x1C0061490 (HUBDRIVER_EtwRundownHub.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0062E40 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 */

NTSTATUS Template_pqccxqqqqqqqsss(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  int v6; // edx
  const char *v7; // r9
  const char *v8; // rax
  __int64 v9; // rdx
  int v10; // edx
  const char *v11; // rax
  int v12; // ecx
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
  va_list v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  va_list v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  va_list v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  va_list v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  const char *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  const char *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]
  const char *v43; // [rsp+110h] [rbp+10h]
  int v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+11Ch] [rbp+1Ch]
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
  __int64 v62; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va8; // [rsp+1A8h] [rbp+A8h]
  __int64 v64; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va9; // [rsp+1B0h] [rbp+B0h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va10; // [rsp+1B8h] [rbp+B8h]
  __int64 v68; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va11; // [rsp+1C0h] [rbp+C0h]
  const char *v70; // [rsp+1C8h] [rbp+C8h]
  const char *v71; // [rsp+1D0h] [rbp+D0h]
  const char *v72; // [rsp+1D8h] [rbp+D8h]
  va_list va12; // [rsp+1E0h] [rbp+E0h] BYREF

  va_start(va12, a3);
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
  va_copy(va9, va8);
  v62 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v64 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v66 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v68 = va_arg(va12, _QWORD);
  v70 = va_arg(va12, const char *);
  v71 = va_arg(va12, const char *);
  v72 = va_arg(va12, const char *);
  va_copy((va_list)UserData.Ptr, va);
  va_copy(v15, va1);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v17, va2);
  v3 = -1LL;
  v16 = 4LL;
  va_copy(v19, va3);
  va_copy(v21, va4);
  va_copy(v23, va5);
  va_copy(v25, va6);
  va_copy(v27, va7);
  va_copy(v29, va8);
  va_copy(v31, va9);
  va_copy(v33, va10);
  va_copy(v35, va11);
  v18 = 1LL;
  v20 = 1LL;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  if ( v70 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v70[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5;
  }
  v38 = v6;
  v7 = "NULL";
  v39 = 0;
  v8 = "NULL";
  if ( v70 )
    v8 = v70;
  v37 = v8;
  if ( v71 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v71[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v41 = v10;
  v11 = "NULL";
  v42 = 0;
  if ( v71 )
    v11 = v71;
  v40 = v11;
  if ( v72 )
  {
    do
      ++v3;
    while ( v72[v3] );
    v12 = v3 + 1;
  }
  else
  {
    v12 = 5;
  }
  v44 = v12;
  v45 = 0;
  if ( v72 )
    v7 = v72;
  v43 = v7;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 0xFu, &UserData);
}
