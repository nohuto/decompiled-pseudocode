/*
 * XREFs of AppModelPolicy_GetPolicy @ 0x18005DF34
 * Callers:
 *     LdrpInitializePolicy @ 0x18005DE1C (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x18005E0C0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy(_PS_PKG_CLAIM a1, int a2, _DWORD *a3)
{
  NTSTATUS v5; // r8d
  char Flags; // al
  char v7; // dl
  int v8; // ecx
  _PS_PKG_CLAIM v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a1;
  v5 = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, &v10, &v11);
  Flags = v10.Flags;
  if ( v5 == -1073741275 )
  {
    v7 = 0;
    Flags = 0;
    v5 = 0;
  }
  else
  {
    v7 = v11;
  }
  *a3 = 0;
  if ( v5 >= 0 )
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
        else if ( (Flags & 4) == 0 )
        {
          v8 = (Flags & 8) != 0 ? 8 : 1;
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
  return v5 | 0x10000000u;
}
