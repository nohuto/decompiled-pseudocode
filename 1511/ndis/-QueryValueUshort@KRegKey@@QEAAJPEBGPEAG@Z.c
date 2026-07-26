/*
 * XREFs of ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00A1A78
 * Callers:
 *     ndisCheckNetworkInterfaceDataMismatch @ 0x1C00AC080 (ndisCheckNetworkInterfaceDataMismatch.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00A1CD0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueUshort(KRegKey *this, const unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v4; // rax
  const unsigned __int16 *v5; // rdx
  __int64 result; // rax
  struct _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF
  const unsigned __int16 *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  *(_DWORD *)&v7.Length = 0;
  v7.Buffer = 0LL;
  v4 = 0x7FFFLL;
  v5 = L"*IfType";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
    return 3221225485LL;
  v7.Buffer = (wchar_t *)L"*IfType";
  v7.Length = 2 * (0x7FFF - v4);
  v7.MaximumLength = v7.Length + 2;
  result = KRegKey::QueryValueUlong(this, &v7, (unsigned int *)&v8);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)v8 > 0xFFFF )
    {
      return 3221225621LL;
    }
    else
    {
      *a3 = (unsigned __int16)v8;
      return 0LL;
    }
  }
  return result;
}
