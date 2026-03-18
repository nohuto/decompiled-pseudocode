/*
 * XREFs of SdbReadQWORDTag @ 0x14054ED94
 * Callers:
 *     SdbpMatchOsVersion @ 0x1405354A8 (SdbpMatchOsVersion.c)
 *     KsepDbReadKFlag @ 0x14054ECF8 (KsepDbReadKFlag.c)
 *     KsepDbReadKData @ 0x14061D890 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbpCheckPackageAttributes @ 0x14067E384 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14067E9B0 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x14067FAB0 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1403B65CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v9, 8u);
    v7 = v9;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
