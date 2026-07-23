/*
 * XREFs of Template_qhzr1z @ 0x1401D0E18
 * Callers:
 *     PnpCallAddDevice @ 0x140543BB4 (PnpCallAddDevice.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qhzr1z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        __int64 a6,
        const wchar_t *a7)
{
  __int64 v7; // rax
  int v8; // edx
  const wchar_t *v9; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 *v12; // [rsp+40h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a4;
  UserData.Ptr = (ULONGLONG)&v20;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v14 = a6;
  v13 = 2LL;
  v15 = 2 * a5;
  v16 = 0;
  if ( a7 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a7[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v18 = v8;
  v9 = L"NULL";
  v19 = 0;
  if ( a7 )
    v9 = a7;
  v17 = v9;
  return EtwWrite(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DeviceAdd_Start, 0LL, 4u, &UserData);
}
