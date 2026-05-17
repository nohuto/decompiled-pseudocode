/*
 * XREFs of AppModelPolicy_GetPolicy @ 0x18005DF44
 * Callers:
 *     LdrpInitializePolicy @ 0x18005DE2C (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x18005E0D0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy(__int64 a1, int a2, _DWORD *a3)
{
  int PackageClaims; // r8d
  char v6; // al
  char v7; // dl
  int v8; // ecx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a1;
  PackageClaims = RtlQueryPackageClaims(-4, 0, 0, 0, 0LL, 0LL, (__int64)&v10, (__int64)&v11);
  v6 = v10;
  if ( PackageClaims == -1073741275 )
  {
    v7 = 0;
    v6 = 0;
    PackageClaims = 0;
  }
  else
  {
    v7 = v11;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      v8 = 2;
      if ( (v7 & 2) != 0 )
      {
        if ( (v7 & 4) != 0 )
        {
          v8 = 5;
        }
        else if ( (v6 & 4) == 0 )
        {
          v8 = (v6 & 8) != 0 ? 8 : 1;
        }
      }
      else
      {
        v8 = 6;
      }
    }
    else
    {
      v8 = 3;
    }
    *a3 = `AppModelPolicy_GetPolicy'::`2'::AppModelPolicy_PolicyValue_Table[8 * (a2 - 1) + v8 - 1];
  }
  return PackageClaims | 0x10000000u;
}
