/*
 * XREFs of xxxChangeMonitorFlags @ 0x1C012B764
 * Callers:
 *     xxxEventWndProc @ 0x1C00A9CF0 (xxxEventWndProc.c)
 *     xxxCsDdeInitialize @ 0x1C012B4E8 (xxxCsDdeInitialize.c)
 *     NtUserUpdateInstance @ 0x1C021BA50 (NtUserUpdateInstance.c)
 * Callees:
 *     xxxCsEvent @ 0x1C000D8F0 (xxxCsEvent.c)
 */

_DWORD *__fastcall xxxChangeMonitorFlags(__int64 a1, int a2)
{
  unsigned int v2; // r11d
  _DWORD *result; // rax
  int v5; // r10d
  unsigned int v6; // ecx
  __int64 v7; // r8
  int v8; // edx
  _DWORD Src[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = MonitorFlags;
  result = &aMonitorCount;
  v5 = *(_DWORD *)(a1 + 40) ^ a2;
  *(_DWORD *)(a1 + 40) = a2;
  v6 = 0;
  MonitorFlags = 0;
  v7 = 10LL;
  do
  {
    v8 = result[1];
    if ( (v8 & v5) != 0 )
    {
      if ( (v8 & a2) != 0 )
        ++*result;
      else
        --*result;
    }
    if ( *result )
      v6 |= v8;
    result += 2;
    --v7;
  }
  while ( v7 );
  MonitorFlags = v6;
  if ( v2 != v6 )
  {
    Src[2] = v6;
    Src[0] = 0;
    Src[1] = 0x40000;
    return (_DWORD *)xxxCsEvent(Src, 4u);
  }
  return result;
}
