/*
 * XREFs of HvlQueryDmaProtectionInfo @ 0x140620388
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpProcessIommu @ 0x1401BF828 (HvlpProcessIommu.c)
 *     HviGetHardwareFeatures @ 0x140231D08 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall HvlQueryDmaProtectionInfo(__int16 *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  char v7; // al
  __int16 v9; // [rsp+20h] [rbp-38h]
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  if ( (unsigned int)a2 >= 2 )
  {
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) == 0 )
      {
        v9 = 257;
LABEL_9:
        *a1 = v9;
        *a3 = 2;
        return v6;
      }
      HviGetHardwareFeatures((__int64)v10, a2, (__int64)a3, a4);
      v7 = v10[0] >> 7;
      HIBYTE(v9) = v10[0] >> 7;
    }
    else
    {
      v7 = HvlpProcessIommu();
      HIBYTE(v9) = 0;
    }
    LOBYTE(v9) = v7;
    goto LABEL_9;
  }
  v6 = -1073741584;
  *a3 = 0;
  return v6;
}
