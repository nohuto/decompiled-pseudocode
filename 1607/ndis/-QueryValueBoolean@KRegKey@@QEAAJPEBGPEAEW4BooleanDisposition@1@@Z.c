/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C00A7D10
 * Callers:
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C00A744C (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A74DC (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00A773C (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(KRegKey *this, wchar_t *a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  wchar_t *v6; // r9
  __int64 v7; // rax
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v4 = 0;
  *(_DWORD *)&v9.Length = 0;
  v6 = a2;
  v9.Buffer = 0LL;
  if ( a2 )
  {
    v7 = 0x7FFFLL;
    do
    {
      if ( !*a2 )
        break;
      ++a2;
      --v7;
    }
    while ( v7 );
    if ( !v7 )
      return 3221225485LL;
    v9.Buffer = v6;
    v9.Length = 2 * (0x7FFF - v7);
    v9.MaximumLength = v9.Length + 2;
  }
  if ( KRegKey::QueryValueUlong(this, &v9, &v10) == -1073741772 || !v10 )
  {
    *a3 = 0;
  }
  else if ( v10 == 1 )
  {
    *a3 = 1;
  }
  else
  {
    return (unsigned int)-1073739509;
  }
  return v4;
}
