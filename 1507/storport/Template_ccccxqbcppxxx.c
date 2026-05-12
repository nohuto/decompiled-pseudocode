/*
 * XREFs of Template_ccccxqbcppxxx @ 0x1C0035E6C
 * Callers:
 *     StorEtwLogoRequestServiceTimeEventData @ 0x1C0035600 (StorEtwLogoRequestServiceTimeEventData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_ccccxqbcppxxx(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        __int64 a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  char *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  char *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  char *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  char v43; // [rsp+138h] [rbp+38h] BYREF

  v43 = a4;
  UserData.Ptr = (unsigned __int64)&v43;
  *(_QWORD *)&UserData.Size = 1LL;
  v18 = &a5;
  v20 = &a6;
  v22 = &a7;
  v19 = 1LL;
  v24 = &a8;
  v26 = &a9;
  v28 = a10;
  v29 = a9;
  v31 = &a11;
  v33 = &a12;
  v35 = &a13;
  v37 = &a14;
  v39 = &a15;
  v41 = &a16;
  v21 = 1LL;
  v23 = 1LL;
  v25 = 8LL;
  v27 = 4LL;
  v30 = 0;
  v32 = 1LL;
  v34 = 8LL;
  v36 = 8LL;
  v38 = 8LL;
  v40 = 8LL;
  v42 = 8LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, a2, a3, 0xDu, &UserData);
}
