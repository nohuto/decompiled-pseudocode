/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1C0005D80
 * Callers:
 *     RIMIsParallelDevice @ 0x1C0008A30 (RIMIsParallelDevice.c)
 * Callees:
 *     RIMIsValueCapsEqual @ 0x1C0005E34 (RIMIsValueCapsEqual.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0007948 (RIMRetrieveAllLinkIndexUsages.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     RIMIsButtonCapsEqual @ 0x1C00C4ED4 (RIMIsButtonCapsEqual.c)
 */

_BOOL8 __fastcall RIMValidateAllCollectionUsages(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  BOOL v6; // ebx
  __int16 v12; // [rsp+30h] [rbp-20h] BYREF
  __int16 v13; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  v14 = 0LL;
  v12 = 0;
  v15 = 0LL;
  v13 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(
                       a5,
                       a6,
                       (unsigned int)&v12,
                       (unsigned int)&v14,
                       (__int64)&v13,
                       (__int64)&v15) == 1114112 )
  {
    if ( v12 == a2 && (unsigned int)RIMIsValueCapsEqual(a1, v14, a2) && v13 == a4 )
      v6 = RIMIsButtonCapsEqual(a3, v15, a4) != 0;
    Win32FreePool(v14);
    Win32FreePool(v15);
  }
  return v6;
}
