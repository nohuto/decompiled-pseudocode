/*
 * XREFs of ?AppModelPolicy_GetPolicy@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@@Z @ 0x1800167F0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy(__int64 a1, int a2, _DWORD *a3)
{
  int v5; // r8d
  char v6; // al
  char v7; // dl
  int v8; // ecx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, &v10, &v11);
  v6 = v10;
  if ( v5 == -1073741275 )
  {
    v7 = 0;
    v6 = 0;
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
  return v5 | 0x10000000u;
}
