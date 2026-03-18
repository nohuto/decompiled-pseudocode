/*
 * XREFs of QueryFontReg @ 0x1C013D6D4
 * Callers:
 *     InitFNTCache @ 0x1C013D3F0 (InitFNTCache.c)
 * Callees:
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C013D80C (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall QueryFontReg(PCWSTR SourceString, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  NTSTATUS v6; // edi
  HANDLE KeyHandle; // [rsp+30h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-60h] BYREF
  _QWORD KeyInformation[4]; // [rsp+40h] [rbp-58h] BYREF
  int v11; // [rsp+60h] [rbp-38h]

  v3 = 0;
  *a3 = 0;
  KeyHandle = 0LL;
  if ( (int)GetGreRegKey(&KeyHandle, 0x20019u, SourceString) >= 0 )
  {
    v6 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v6 >= 0 )
    {
      *a3 = v11;
      *a2 = KeyInformation[0];
    }
    ZwClose(KeyHandle);
    if ( v6 >= 0 )
      return 1;
  }
  return v3;
}
