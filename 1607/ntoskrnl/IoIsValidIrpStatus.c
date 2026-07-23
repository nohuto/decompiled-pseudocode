/*
 * XREFs of IoIsValidIrpStatus @ 0x140703860
 * Callers:
 *     ViGenericIsValidIrpStatus @ 0x140703978 (ViGenericIsValidIrpStatus.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsValidIrpStatus(unsigned int a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // edx
  bool result; // al
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  v1 = (unsigned __int16)a1;
  v2 = HIWORD(a1) & 0xFFF;
  if ( (a1 & 0x20000000) != 0 )
    return 1;
  result = 0;
  if ( v2 < 0xEC )
  {
    v4 = a1 >> 30;
    if ( !v4 )
      return v1 < 0x250;
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 || v2 == 7 || v1 < 0x400 )
        return 1;
      return result;
    }
    return v1 < 0x400;
  }
  return result;
}
