/*
 * XREFs of Template_ppqzznhCR6zcqQ6qqqqqqqq @ 0x1C0001300
 * Callers:
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x1C0061690 (HUBDRIVER_EtwRundownUsbDevice.c)
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0065D40 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_ppqzznhCR6zcqQ6qqqqqqqq(
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
        char a24)
{
  __int64 v24; // rcx
  int v26; // r8d
  __int64 v27; // rax
  int v28; // r9d
  const wchar_t *v29; // r10
  const wchar_t *v30; // rax
  __int64 v31; // rax
  int v32; // r9d
  const wchar_t *v33; // rax
  bool v34; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  char *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  const wchar_t *v41; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v44; // [rsp+70h] [rbp-90h]
  int v45; // [rsp+78h] [rbp-88h]
  int v46; // [rsp+7Ch] [rbp-84h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+ACh] [rbp-54h]
  const wchar_t *v54; // [rsp+B0h] [rbp-50h]
  int v55; // [rsp+B8h] [rbp-48h]
  int v56; // [rsp+BCh] [rbp-44h]
  char *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  char *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  char *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  char *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  char *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  char *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  char *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  char *v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  char *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  char *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h] BYREF

  v79 = a4;
  UserData.Ptr = (unsigned __int64)&v79;
  *(_QWORD *)&UserData.Size = 8LL;
  v37 = &a5;
  v24 = -1LL;
  v39 = &a6;
  v38 = 8LL;
  v40 = 4LL;
  v26 = 10;
  if ( a7 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a7[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v28 = 10;
  }
  v42 = v28;
  v29 = L"NULL";
  v43 = 0;
  v30 = L"NULL";
  if ( a7 )
    v30 = a7;
  v41 = v30;
  if ( a8 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a8[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v45 = v32;
  v33 = L"NULL";
  v46 = 0;
  if ( a8 )
    v33 = a8;
  v48 = 18LL;
  v44 = v33;
  v47 = a10;
  v49 = &a11;
  v51 = a12;
  v52 = a11;
  v50 = 2LL;
  v53 = 0;
  v34 = a13 == 0LL;
  if ( a13 )
  {
    do
      ++v24;
    while ( a13[v24] );
    v26 = 2 * v24 + 2;
    v34 = a13 == 0LL;
  }
  if ( !v34 )
    v29 = a13;
  v55 = v26;
  v54 = v29;
  v57 = &a14;
  v56 = 0;
  v59 = &a15;
  v61 = a16;
  v58 = 1LL;
  v63 = &a17;
  v65 = &a18;
  v67 = &a19;
  v69 = &a20;
  v71 = &a21;
  v73 = &a22;
  v75 = &a23;
  v77 = &a24;
  v60 = 4LL;
  v62 = 24LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 0x14u, &UserData);
}
