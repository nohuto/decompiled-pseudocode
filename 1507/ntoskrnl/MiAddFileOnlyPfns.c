/*
 * XREFs of MiAddFileOnlyPfns @ 0x1406AA220
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1406AA3C8 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiAddFileOnlyPfns(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2 << 12;
  v7 = a1 << 12;
  v6 = a2 << 12;
  result = MiAddPhysicalMemory(MiSystemPartition, &v7, &v6, 2);
  if ( (int)result >= 0 )
  {
    if ( v6 == v2 )
    {
      return (unsigned int)result;
    }
    else
    {
      MiRemovePhysicalMemory(a1, v6 / 4096, 2LL, v5);
      return 3221225711LL;
    }
  }
  return result;
}
