/*
 * XREFs of sub_14045913C @ 0x14045913C
 * Callers:
 *     sub_14045751C @ 0x14045751C (sub_14045751C.c)
 *     sub_140495DD4 @ 0x140495DD4 (sub_140495DD4.c)
 *     sub_140496110 @ 0x140496110 (sub_140496110.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x140152A20 (ZwPlugPlayControl.c)
 *     sub_140459288 @ 0x140459288 (sub_140459288.c)
 *     sub_140459304 @ 0x140459304 (sub_140459304.c)
 *     sub_14045C114 @ 0x14045C114 (sub_14045C114.c)
 */

__int64 __fastcall sub_14045913C(PDEVICE_OBJECT Pdo, __int64 a2)
{
  NTSTATUS v4; // r8d
  const WCHAR *v5; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+68h] [rbp+10h] BYREF

  sub_14045C114(a2);
  v4 = sub_140459304(Pdo, a2);
  if ( v4 >= 0 )
  {
    if ( (int)sub_140459288(Pdo, 0LL, &DEVPKEY_Device_ClassGuid, 13LL, 16, a2 + 16) < 0 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 24) = 0LL;
    }
    v4 = sub_140459288(Pdo, 0LL, &DEVPKEY_Device_RemovalPolicy, 7LL, 4, &v9);
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
        v4 = sub_140459304(Pdo, (int)a2 + 56);
        if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741772 )
          return 0;
      }
    }
  }
  return (unsigned int)v4;
}
