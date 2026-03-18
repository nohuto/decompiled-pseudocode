/*
 * XREFs of HvlQueryDmaProtectionInfo @ 0x1405F6724
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlpProcessIommu @ 0x1401B3E24 (HvlpProcessIommu.c)
 *     HviGetHardwareFeatures @ 0x140217CE4 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall HvlQueryDmaProtectionInfo(__int16 *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  char v7; // al
  __int16 v9; // [rsp+20h] [rbp-38h]
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  if ( (unsigned int)a2 >= 2 )
  {
    if ( (HvlpFlags & 1) == 0 || (HvlpFlags & 4) != 0 )
    {
      if ( (HvlpFlags & 1) != 0 && (HvlpFlags & 4) != 0 )
      {
        HviGetHardwareFeatures((__int64)v10, a2, (__int64)a3, a4);
        v7 = LOBYTE(v10[0]) >> 7;
        HIBYTE(v9) = LOBYTE(v10[0]) >> 7;
      }
      else
      {
        v7 = HvlpProcessIommu();
        HIBYTE(v9) = 0;
      }
      LOBYTE(v9) = v7;
    }
    else
    {
      v9 = 257;
    }
    *a1 = v9;
    *a3 = 2;
  }
  else
  {
    v6 = -1073741584;
    *a3 = 0;
  }
  return v6;
}
