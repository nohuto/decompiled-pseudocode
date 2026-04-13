/*
 * XREFs of sub_180008E88 @ 0x180008E88
 * Callers:
 *     sub_180008F20 @ 0x180008F20 (sub_180008F20.c)
 *     sub_18000909C @ 0x18000909C (sub_18000909C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180008E88(__int64 a1)
{
  HANDLE Event; // rax
  signed int v3; // eax
  signed int v4; // ecx
  signed int LastError; // eax

  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  *(_QWORD *)(a1 + 112) = Event;
  if ( Event )
  {
    if ( GetModuleHandleExW(4u, (LPCWSTR)StartAddress, (HMODULE *)(a1 + 72)) )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v4 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v4 = LastError;
      if ( v4 >= 0 )
        return (unsigned int)-2147467259;
    }
  }
  else
  {
    v3 = GetLastError();
    v4 = (unsigned __int16)v3 | 0x80070000;
    if ( v3 <= 0 )
      v4 = v3;
    if ( v4 >= 0 )
      return (unsigned int)-2147467259;
  }
  return (unsigned int)v4;
}
