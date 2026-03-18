/*
 * XREFs of ACPIConvertWideStringToUpperCaseHelper @ 0x1C0004110
 * Callers:
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0003E30 (ACPIDeviceIdMutiStringMatchCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIConvertWideStringToUpperCaseHelper(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 i; // rax
  __int16 v4; // dx

  if ( a1 )
  {
    if ( a2 >= 2 )
    {
      v2 = a2 >> 1;
      for ( i = 0LL; i < v2; ++i )
      {
        v4 = *(_WORD *)(a1 + 2 * i);
        if ( (unsigned __int16)(v4 - 97) <= 0x19u )
          *(_WORD *)(a1 + 2 * i) = v4 - 32;
      }
    }
  }
}
