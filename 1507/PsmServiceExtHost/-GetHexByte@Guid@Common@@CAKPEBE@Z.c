/*
 * XREFs of ?GetHexByte@Guid@Common@@CAKPEBE@Z @ 0x18004D988
 * Callers:
 *     ?Decode@Guid@Common@@SAJPEBEKPEAU_GUID@@@Z @ 0x18004D714 (-Decode@Guid@Common@@SAJPEBEKPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Common::Guid::GetHexByte(const unsigned __int8 *a1)
{
  if ( (unsigned __int8)(*a1 | a1[1]) < 0x80u )
    return *((unsigned __int16 *)&Common::Guid::char2valHi + *a1) | (unsigned int)*((unsigned __int16 *)&Common::Guid::char2valLo
                                                                                  + a1[1]);
  else
    return 256LL;
}
