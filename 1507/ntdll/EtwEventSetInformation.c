/*
 * XREFs of EtwEventSetInformation @ 0x18000E180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwEventSetInformation(__int64 a1, int a2, char *a3, int a4)
{
  int v4; // edx

  if ( a2 )
  {
    v4 = a2 - 2;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 50LL;
      if ( a3 && a4 == 1 )
        return EtwpUseDescriptorType(a1, a3);
    }
    else if ( a3 && (unsigned int)(a4 - 3) <= 0xFFFC )
    {
      return EtwpSetProviderTraits(a1, a3, (unsigned __int16)a4);
    }
  }
  else if ( !a4 )
  {
    return EtwpTrackProviderBinary(a1);
  }
  return 87LL;
}
