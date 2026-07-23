/*
 * XREFs of MiSanitizePfnProtection @ 0x1400DF630
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400B6D28 (MiSetProtectionOnTransitionPte.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiUpdatePfnProtection @ 0x1401F0098 (MiUpdatePfnProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSanitizePfnProtection(__int64 a1, int a2, unsigned int a3)
{
  int v3; // edx
  int v4; // eax
  unsigned int v6; // edx
  unsigned int v7; // edx

  if ( a3 != 24 )
  {
    if ( a2 == 24 )
    {
      v6 = *(_DWORD *)(a1 + 48);
      if ( (v6 & 0x8000) != 0 )
        v7 = v6 >> 3;
      else
        v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 72) + 32LL) >> 1;
      a2 = v7 & 0x1F;
      if ( a2 == 24 )
        LOBYTE(a2) = 0;
    }
    v3 = a2 & 0x18;
    if ( v3 )
    {
      if ( v3 != 16 )
      {
        if ( v3 == 8 )
        {
          return a3 & 0xFFFFFFE7 | 8;
        }
        else if ( v3 == 24 )
        {
          a3 |= 0x18u;
        }
        return a3;
      }
    }
    else
    {
      v4 = a3 & 0x18;
      if ( v4 == 24 )
      {
        a3 &= 0xFFFFFFE7;
        return a3;
      }
      if ( v4 != 8 )
        return a3;
    }
    a3 &= ~8u;
    return a3;
  }
  return 24LL;
}
