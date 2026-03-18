/*
 * XREFs of sub_1404DB260 @ 0x1404DB260
 * Callers:
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 * Callees:
 *     sub_1404DB560 @ 0x1404DB560 (sub_1404DB560.c)
 *     sub_1404DB5DC @ 0x1404DB5DC (sub_1404DB5DC.c)
 *     sub_1404DB9DC @ 0x1404DB9DC (sub_1404DB9DC.c)
 */

__int64 __fastcall sub_1404DB260(PDEVICE_OBJECT Pdo, __int64 a2)
{
  char v4; // si
  char v5; // bl
  char v6; // bp
  char v7; // al
  int v8; // eax
  __int64 result; // rax
  char v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (int)sub_1404DB560(Pdo, 0LL, &DEVPKEY_Device_IsPresent, 17LL, 1, &v10) < 0 )
  {
    v5 = 4;
  }
  else if ( v10 == -1 )
  {
    v6 = 1;
    v4 = 2;
    goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  if ( (int)sub_1404DB5DC(Pdo, (int)a2 + 40) < 0 )
  {
    v5 |= 8u;
LABEL_22:
    v7 = 1;
    v4 |= 4u;
    goto LABEL_7;
  }
  if ( *(_WORD *)(a2 + 40) == 8 && **(_QWORD **)(a2 + 48) == *(_QWORD *)L"SWD" )
    goto LABEL_22;
  v7 = 0;
LABEL_7:
  if ( !v5 && v6 && !v7 && *(_DWORD *)(a2 + 36) >= 2u )
  {
    v8 = sub_1404DB5DC(Pdo, (int)a2 + 72);
    v5 = 0;
    if ( v8 == -1073741772 )
      v8 = 0;
    if ( v8 < 0 )
      v5 = 2;
    if ( (int)sub_1404DB560(Pdo, 0LL, &DEVPKEY_Device_ReportedDeviceIdsHash, 7LL, 4, &v12) < 0 )
    {
      v5 |= 1u;
    }
    else
    {
      v11 = 0;
      if ( (int)sub_1404DB9DC(&v11, a2 + 56) >= 0 && (int)sub_1404DB9DC(&v11, a2 + 72) >= 0 && v11 == v12 )
        v4 |= 1u;
    }
  }
  *(_BYTE *)(a2 + 33) |= v5;
  result = 0LL;
  *(_BYTE *)(a2 + 32) = v4;
  return result;
}
