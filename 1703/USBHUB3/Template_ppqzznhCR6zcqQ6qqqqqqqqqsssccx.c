/*
 * XREFs of Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C0001334
 * Callers:
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0065940 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A240 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_ppqzznhCR6zcqQ6qqqqqqqqqsssccx(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        __int64 a9,
        __int64 a10,
        unsigned __int16 a11,
        __int64 a12,
        const wchar_t *a13,
        char a14,
        char a15,
        __int64 a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        const char *a26,
        const char *a27,
        const char *a28,
        char a29,
        char a30,
        char a31)
{
  __int64 v32; // rcx
  int v34; // r8d
  __int64 v35; // rax
  int v36; // r9d
  const wchar_t *v37; // r10
  const wchar_t *v38; // rax
  __int64 v39; // rax
  int v40; // r9d
  const wchar_t *v41; // rax
  bool v42; // zf
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // edx
  const char *v46; // r9
  const char *v47; // rax
  __int64 v48; // rdx
  int v49; // edx
  const char *v50; // rax
  int v51; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h]
  char *v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  const wchar_t *v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v61; // [rsp+70h] [rbp-90h]
  int v62; // [rsp+78h] [rbp-88h]
  int v63; // [rsp+7Ch] [rbp-84h]
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v66; // [rsp+90h] [rbp-70h]
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+ACh] [rbp-54h]
  const wchar_t *v71; // [rsp+B0h] [rbp-50h]
  int v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+BCh] [rbp-44h]
  char *v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  char *v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E0h] [rbp-20h]
  __int64 v79; // [rsp+E8h] [rbp-18h]
  char *v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  char *v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  char *v84; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+118h] [rbp+18h]
  char *v86; // [rsp+120h] [rbp+20h]
  __int64 v87; // [rsp+128h] [rbp+28h]
  char *v88; // [rsp+130h] [rbp+30h]
  __int64 v89; // [rsp+138h] [rbp+38h]
  char *v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  char *v92; // [rsp+150h] [rbp+50h]
  __int64 v93; // [rsp+158h] [rbp+58h]
  char *v94; // [rsp+160h] [rbp+60h]
  __int64 v95; // [rsp+168h] [rbp+68h]
  char *v96; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+178h] [rbp+78h]
  const char *v98; // [rsp+180h] [rbp+80h]
  int v99; // [rsp+188h] [rbp+88h]
  int v100; // [rsp+18Ch] [rbp+8Ch]
  const char *v101; // [rsp+190h] [rbp+90h]
  int v102; // [rsp+198h] [rbp+98h]
  int v103; // [rsp+19Ch] [rbp+9Ch]
  const char *v104; // [rsp+1A0h] [rbp+A0h]
  int v105; // [rsp+1A8h] [rbp+A8h]
  int v106; // [rsp+1ACh] [rbp+ACh]
  char *v107; // [rsp+1B0h] [rbp+B0h]
  __int64 v108; // [rsp+1B8h] [rbp+B8h]
  char *v109; // [rsp+1C0h] [rbp+C0h]
  __int64 v110; // [rsp+1C8h] [rbp+C8h]
  char *v111; // [rsp+1D0h] [rbp+D0h]
  __int64 v112; // [rsp+1D8h] [rbp+D8h]
  __int64 v113; // [rsp+248h] [rbp+148h] BYREF

  v113 = a4;
  UserData.Ptr = (unsigned __int64)&v113;
  *(_QWORD *)&UserData.Size = 8LL;
  v54 = &a5;
  v32 = -1LL;
  v56 = &a6;
  v55 = 8LL;
  v57 = 4LL;
  v34 = 10;
  if ( a7 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a7[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v36 = 10;
  }
  v59 = v36;
  v37 = L"NULL";
  v60 = 0;
  v38 = L"NULL";
  if ( a7 )
    v38 = a7;
  v58 = v38;
  if ( a8 )
  {
    v39 = -1LL;
    do
      ++v39;
    while ( a8[v39] );
    v40 = 2 * v39 + 2;
  }
  else
  {
    v40 = 10;
  }
  v62 = v40;
  v41 = L"NULL";
  v63 = 0;
  if ( a8 )
    v41 = a8;
  v65 = 18LL;
  v61 = v41;
  v64 = a10;
  v66 = &a11;
  v68 = a12;
  v69 = a11;
  v67 = 2LL;
  v70 = 0;
  v42 = a13 == 0LL;
  if ( a13 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( a13[v43] );
    v34 = 2 * v43 + 2;
    v42 = a13 == 0LL;
  }
  if ( !v42 )
    v37 = a13;
  v72 = v34;
  v74 = &a14;
  v76 = &a15;
  v78 = a16;
  v80 = &a17;
  v82 = &a18;
  v84 = &a19;
  v86 = &a20;
  v88 = &a21;
  v90 = &a22;
  v92 = &a23;
  v71 = v37;
  v94 = &a24;
  v96 = &a25;
  v73 = 0;
  v75 = 1LL;
  v77 = 4LL;
  v79 = 24LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v97 = 4LL;
  if ( a26 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( a26[v44] );
    v45 = v44 + 1;
  }
  else
  {
    v45 = 5;
  }
  v99 = v45;
  v46 = "NULL";
  v100 = 0;
  v47 = "NULL";
  if ( a26 )
    v47 = a26;
  v98 = v47;
  if ( a27 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( a27[v48] );
    v49 = v48 + 1;
  }
  else
  {
    v49 = 5;
  }
  v102 = v49;
  v50 = "NULL";
  v103 = 0;
  if ( a27 )
    v50 = a27;
  v101 = v50;
  if ( a28 )
  {
    do
      ++v32;
    while ( a28[v32] );
    v51 = v32 + 1;
  }
  else
  {
    v51 = 5;
  }
  v105 = v51;
  v106 = 0;
  if ( a28 )
    v46 = a28;
  v108 = 1LL;
  v104 = v46;
  v107 = &a29;
  v110 = 1LL;
  v109 = &a30;
  v112 = 8LL;
  v111 = &a31;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 0x1Bu, &UserData);
}
