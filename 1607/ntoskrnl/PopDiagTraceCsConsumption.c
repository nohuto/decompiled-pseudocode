/*
 * XREFs of PopDiagTraceCsConsumption @ 0x140670DD0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceCsConsumption(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // r9d
  __int64 v3; // r10
  char v4; // r11
  __int128 *v5; // rcx
  __int64 v6; // rdx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rax
  __int128 v9; // [rsp+30h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 104);
  v4 = *(_BYTE *)(a1 + 100);
  v9 = 0uLL;
  LODWORD(v9) = *(_DWORD *)a1;
  *(_QWORD *)((char *)&v9 + 4) = (unsigned __int16)(v1 / 0x3938700);
  if ( v1 )
  {
    BYTE6(v9) = 100LL * *(_QWORD *)(a1 + 24) / v1;
    BYTE7(v9) = 100LL * *(_QWORD *)(a1 + 32) / v1;
    BYTE10(v9) = 100LL * *(_QWORD *)(a1 + 48) / v1;
    BYTE11(v9) = 100LL * *(_QWORD *)(a1 + 56) / v1;
    BYTE13(v9) = 100LL * *(_QWORD *)(a1 + 64) / v1;
    BYTE14(v9) = 100LL * *(_QWORD *)(a1 + 72) / v1;
    if ( v3 == -1 )
      HIBYTE(v9) = -1;
    else
      HIBYTE(v9) = 100 * v3 / v1;
  }
  BYTE12(v9) = v4;
  v5 = &v9;
  if ( v2 > 0xFFFF )
    LOWORD(v2) = -1;
  v6 = 4LL;
  WORD4(v9) = v2;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  do
  {
    p_Reserved->Reserved = 0;
    *(_QWORD *)&p_Reserved[-3].Reserved = v5;
    v5 = (__int128 *)((char *)v5 + 4);
    p_Reserved[-1].Reserved = 4;
    p_Reserved += 4;
    --v6;
  }
  while ( v6 );
  return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_CONSUMPTION_PERFTRACK, 0LL, 4u, &UserData);
}
