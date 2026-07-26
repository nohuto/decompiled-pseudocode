/*
 * XREFs of Template_qxzzxxxxxx @ 0x1C006F254
 * Callers:
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006EC2C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qxzzxxxxxx(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  __int64 v13; // rcx
  __int64 v15; // rax
  int v16; // r8d
  const wchar_t *v17; // r9
  const wchar_t *v18; // rax
  int v19; // edx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-A1h] BYREF
  char *v22; // [rsp+48h] [rbp-91h]
  __int64 v23; // [rsp+50h] [rbp-89h]
  const wchar_t *v24; // [rsp+58h] [rbp-81h]
  int v25; // [rsp+60h] [rbp-79h]
  int v26; // [rsp+64h] [rbp-75h]
  const wchar_t *v27; // [rsp+68h] [rbp-71h]
  int v28; // [rsp+70h] [rbp-69h]
  int v29; // [rsp+74h] [rbp-65h]
  char *v30; // [rsp+78h] [rbp-61h]
  __int64 v31; // [rsp+80h] [rbp-59h]
  char *v32; // [rsp+88h] [rbp-51h]
  __int64 v33; // [rsp+90h] [rbp-49h]
  char *v34; // [rsp+98h] [rbp-41h]
  __int64 v35; // [rsp+A0h] [rbp-39h]
  char *v36; // [rsp+A8h] [rbp-31h]
  __int64 v37; // [rsp+B0h] [rbp-29h]
  char *v38; // [rsp+B8h] [rbp-21h]
  __int64 v39; // [rsp+C0h] [rbp-19h]
  char *v40; // [rsp+C8h] [rbp-11h]
  __int64 v41; // [rsp+D0h] [rbp-9h]
  int v42; // [rsp+110h] [rbp+37h] BYREF

  v42 = a4;
  UserData.Ptr = (unsigned __int64)&v42;
  v13 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v22 = &a5;
  v23 = 8LL;
  if ( a6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a6[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v16 = 10;
  }
  v25 = v16;
  v17 = L"NULL";
  v26 = 0;
  v18 = L"NULL";
  if ( a6 )
    v18 = a6;
  v24 = v18;
  if ( a7 )
  {
    do
      ++v13;
    while ( a7[v13] );
    v19 = 2 * v13 + 2;
  }
  else
  {
    v19 = 10;
  }
  v28 = v19;
  v29 = 0;
  if ( a7 )
    v17 = a7;
  v31 = 8LL;
  v27 = v17;
  v30 = &a8;
  v33 = 8LL;
  v32 = &a9;
  v35 = 8LL;
  v34 = &a10;
  v37 = 8LL;
  v36 = &a11;
  v38 = &a12;
  v40 = &a13;
  v39 = 8LL;
  v41 = 8LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &MiniportCsTraffic, a3, 0xAu, &UserData);
}
