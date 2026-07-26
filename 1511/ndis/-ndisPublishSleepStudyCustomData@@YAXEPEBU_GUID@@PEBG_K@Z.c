/*
 * XREFs of ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00D6CFC
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0069040 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00D6E48 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

void __fastcall ndisPublishSleepStudyCustomData(
        char a1,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        ULONGLONG a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp-99h] BYREF
  int v9; // [rsp+34h] [rbp-95h] BYREF
  int v10; // [rsp+38h] [rbp-91h] BYREF
  _UNICODE_STRING String; // [rsp+40h] [rbp-89h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-79h] BYREF
  int *v13; // [rsp+60h] [rbp-69h]
  __int64 v14; // [rsp+68h] [rbp-61h]
  const struct _GUID *v15; // [rsp+70h] [rbp-59h]
  __int64 v16; // [rsp+78h] [rbp-51h]
  int *v17; // [rsp+80h] [rbp-49h]
  __int64 v18; // [rsp+88h] [rbp-41h]
  const unsigned __int16 *v19; // [rsp+90h] [rbp-39h]
  int v20; // [rsp+98h] [rbp-31h]
  int v21; // [rsp+9Ch] [rbp-2Dh]
  int *v22; // [rsp+A0h] [rbp-29h]
  __int64 v23; // [rsp+A8h] [rbp-21h]
  _WORD *v24; // [rsp+B0h] [rbp-19h]
  int v25; // [rsp+B8h] [rbp-11h]
  int v26; // [rsp+BCh] [rbp-Dh]
  _WORD v27[24]; // [rsp+C0h] [rbp-9h] BYREF
  char v28; // [rsp+130h] [rbp+67h] BYREF

  v28 = a1;
  memset(v27, 0, 42);
  v10 = 1;
  String.Buffer = v27;
  *(_DWORD *)&String.Length = 2752512;
  if ( RtlInt64ToUnicodeString(a4, 0xAu, &String) >= 0 )
  {
    v6 = -1LL;
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v9 = v7;
    do
      ++v6;
    while ( v27[v6] );
    v8 = v6;
    v20 = 2 * v7;
    UserData.Ptr = (unsigned __int64)&v28;
    v22 = &v8;
    v13 = &v10;
    v24 = v27;
    v17 = &v9;
    v25 = 2 * v6;
    *(_QWORD *)&UserData.Size = 1LL;
    v14 = 4LL;
    v15 = a2;
    v16 = 16LL;
    v18 = 4LL;
    v19 = a3;
    v21 = 0;
    v23 = 4LL;
    v26 = 0;
    EtwWrite(Microsoft_Windows_SleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, a2, 7u, &UserData);
  }
}
