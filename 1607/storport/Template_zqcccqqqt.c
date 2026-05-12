/*
 * XREFs of Template_zqcccqqqt @ 0x1C002FFEC
 * Callers:
 *     StorPortSetDeviceQueueDepth @ 0x1C0002B20 (StorPortSetDeviceQueueDepth.c)
 *     RaUnitSetQueueDepth @ 0x1C0016C4C (RaUnitSetQueueDepth.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqcccqqqt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rax
  unsigned int v13; // ecx
  const wchar_t *v14; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-89h] BYREF
  char *v17; // [rsp+40h] [rbp-79h]
  __int64 v18; // [rsp+48h] [rbp-71h]
  char *v19; // [rsp+50h] [rbp-69h]
  __int64 v20; // [rsp+58h] [rbp-61h]
  char *v21; // [rsp+60h] [rbp-59h]
  __int64 v22; // [rsp+68h] [rbp-51h]
  char *v23; // [rsp+70h] [rbp-49h]
  __int64 v24; // [rsp+78h] [rbp-41h]
  char *v25; // [rsp+80h] [rbp-39h]
  __int64 v26; // [rsp+88h] [rbp-31h]
  char *v27; // [rsp+90h] [rbp-29h]
  __int64 v28; // [rsp+98h] [rbp-21h]
  char *v29; // [rsp+A0h] [rbp-19h]
  __int64 v30; // [rsp+A8h] [rbp-11h]
  char *v31; // [rsp+B0h] [rbp-9h]
  __int64 v32; // [rsp+B8h] [rbp-1h]

  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  UserData.Size = v13;
  v14 = L"NULL";
  UserData.Reserved = 0;
  if ( a4 )
    v14 = a4;
  v18 = 4LL;
  UserData.Ptr = (unsigned __int64)v14;
  v20 = 1LL;
  v17 = &a5;
  v22 = 1LL;
  v19 = &a6;
  v24 = 1LL;
  v21 = &a7;
  v23 = &a8;
  v25 = &a9;
  v27 = &a10;
  v29 = &a11;
  v31 = &a12;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventSetLunQueueDepthBtl8, 0LL, 9u, &UserData);
}
