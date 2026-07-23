/*
 * XREFs of sub_1404D2FB0 @ 0x1404D2FB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404D8AA8 (ExpHwidAppendDeviceInfoBlock.c)
 */

__int64 __fastcall sub_1404D2FB0(__int64 a1)
{
  bool v2; // zf
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v5[8]; // [rsp+28h] [rbp-30h] BYREF

  v2 = *(_BYTE *)(a1 + 12) == 0;
  v4 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6288LL) << 12;
  if ( v2 )
  {
    memset(v5, 0, sizeof(v5));
    LOBYTE(v5[1]) = 2;
    *(_OWORD *)&v5[3] = SL_HWID_IF_GUID_SYSTEM_MEMORY;
  }
  return ExpHwidAppendDeviceInfoBlock(a1, v5, &v4, 8LL);
}
