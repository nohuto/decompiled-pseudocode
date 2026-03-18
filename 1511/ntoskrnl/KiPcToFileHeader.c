/*
 * XREFs of KiPcToFileHeader @ 0x1401C6550
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KiDumpParameterImages @ 0x1401C633C (KiDumpParameterImages.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 */

unsigned __int64 __fastcall KiPcToFileHeader(unsigned __int64 a1, __int64 **a2, int a3, _BYTE *a4)
{
  __int64 *v8; // r10
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  __int64 *v11; // r8
  int v12; // r11d
  unsigned int v13; // r11d
  __int64 *v14; // rcx
  unsigned __int64 v15; // rdx

  if ( (unsigned int)InitializationPhase >= 2 )
    v8 = (__int64 *)&PsLoadedModuleList;
  else
    v8 = (__int64 *)(KeLoaderBlock_0 + 16);
  v9 = *v8;
  v10 = 0LL;
  *a4 = 0;
  if ( v9 )
  {
    while ( (__int64 *)v9 != v8 )
    {
      if ( !MiIsAddressValid(v9) )
        return 0LL;
      v13 = v12 + 1;
      if ( v13 <= 2 && a3 == 1 )
      {
        v9 = *v11;
      }
      else
      {
        v14 = v11;
        v9 = *v11;
        v15 = v14[6];
        if ( a1 >= v15 && a1 < v15 + *((unsigned int *)v14 + 16) )
        {
          *a2 = v14;
          v10 = v15;
          if ( v13 <= 2 )
            *a4 = 1;
          return v10;
        }
      }
    }
  }
  return v10;
}
