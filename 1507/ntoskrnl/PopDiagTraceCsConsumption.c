/*
 * XREFs of PopDiagTraceCsConsumption @ 0x1406B8AD4
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceCsConsumption(int *a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  __int64 v3; // r10
  char v4; // r11
  int *v5; // rcx
  __int64 v6; // rdx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rax
  int v9; // [rsp+30h] [rbp-9h] BYREF
  __int16 v10; // [rsp+34h] [rbp-5h]
  __int16 v11; // [rsp+36h] [rbp-3h]
  __int16 v12; // [rsp+38h] [rbp-1h]
  __int16 v13; // [rsp+3Ah] [rbp+1h]
  char v14; // [rsp+3Ch] [rbp+3h]
  __int16 v15; // [rsp+3Dh] [rbp+4h]
  char v16; // [rsp+3Fh] [rbp+6h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v2 = a1[10];
  v3 = *((_QWORD *)a1 + 12);
  v4 = *((_BYTE *)a1 + 92);
  v9 = *a1;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v10 = v1 / 0x3938700;
  if ( v1 )
  {
    LOBYTE(v11) = 100LL * *((_QWORD *)a1 + 3) / v1;
    HIBYTE(v11) = 100LL * *((_QWORD *)a1 + 4) / v1;
    LOBYTE(v13) = 100LL * *((_QWORD *)a1 + 6) / v1;
    HIBYTE(v13) = 100LL * *((_QWORD *)a1 + 7) / v1;
    LOBYTE(v15) = 100LL * *((_QWORD *)a1 + 8) / v1;
    HIBYTE(v15) = 100LL * *((_QWORD *)a1 + 9) / v1;
    if ( v3 == -1 )
      v16 = -1;
    else
      v16 = 100 * v3 / v1;
  }
  v14 = v4;
  v5 = &v9;
  if ( v2 > 0xFFFF )
    LOWORD(v2) = -1;
  v6 = 4LL;
  v12 = v2;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  do
  {
    p_Reserved->Reserved = 0;
    *(_QWORD *)&p_Reserved[-3].Reserved = v5++;
    p_Reserved[-1].Reserved = 4;
    p_Reserved += 4;
    --v6;
  }
  while ( v6 );
  return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_CONSUMPTION_PERFTRACK, 0LL, 4u, &UserData);
}
