/*
 * XREFs of HvpFreeMap @ 0x1403D4688
 * Callers:
 *     HvpExpandMap @ 0x1403D5150 (HvpExpandMap.c)
 *     HvpInitMap @ 0x1403D5B10 (HvpInitMap.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1403D8960 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 *     HvpCleanMap @ 0x1405EBCCC (HvpCleanMap.c)
 *     HvpShrinkMap @ 0x1405EBD78 (HvpShrinkMap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpFreeMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  __int64 v9; // rcx

  if ( a2 )
  {
    v4 = a4;
    result = 1023LL;
    if ( a4 >= 0x400 )
      v4 = 1023;
    while ( a3 <= v4 )
    {
      v9 = *(_QWORD *)(a2 + 8LL * a3);
      if ( v9 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 32))(v9, 20480LL);
        *(_QWORD *)(a2 + 8LL * a3) = 0LL;
      }
      ++a3;
    }
  }
  return result;
}
