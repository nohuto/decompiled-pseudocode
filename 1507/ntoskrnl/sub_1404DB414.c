/*
 * XREFs of sub_1404DB414 @ 0x1404DB414
 * Callers:
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x140181390 (ZwPlugPlayControl.c)
 *     sub_1404DB560 @ 0x1404DB560 (sub_1404DB560.c)
 *     sub_1404DB5DC @ 0x1404DB5DC (sub_1404DB5DC.c)
 *     sub_1404DBA8C @ 0x1404DBA8C (sub_1404DBA8C.c)
 */

__int64 __fastcall sub_1404DB414(PDEVICE_OBJECT Pdo, __int64 a2)
{
  NTSTATUS v4; // r8d
  const WCHAR *v5; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+68h] [rbp+10h] BYREF

  sub_1404DBA8C(a2);
  v4 = sub_1404DB5DC(Pdo, a2);
  if ( v4 >= 0 )
  {
    if ( (int)sub_1404DB560(Pdo, 0LL, &DEVPKEY_Device_ClassGuid, 13LL, 16, a2 + 16) < 0 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    v4 = sub_1404DB560(Pdo, 0LL, &DEVPKEY_Device_RemovalPolicy, 7LL, 4, &v9);
    if ( v4 >= 0 )
    {
      v5 = *(const WCHAR **)(a2 + 8);
      *(_BYTE *)(a2 + 34) = v9;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v8 = 0LL;
      RtlInitUnicodeString(&DestinationString, v5);
      v4 = ZwPlugPlayControl(PlugPlayControlGetDeviceDepth, &DestinationString, 0x18u);
      if ( v4 >= 0 )
      {
        *(_DWORD *)(a2 + 36) = v8;
        v4 = sub_1404DB5DC(Pdo, (int)a2 + 56);
        if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741772 )
          return 0;
      }
    }
  }
  return (unsigned int)v4;
}
