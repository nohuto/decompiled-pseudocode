/*
 * XREFs of PnprQueryReplaceFeatures @ 0x1401D0350
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PnpQueryInterface @ 0x14050E494 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprQueryReplaceFeatures(__int64 a1, PDEVICE_OBJECT *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+38h] [rbp-40h]
  void (__fastcall *v7)(__int64); // [rsp+48h] [rbp-30h]
  int (__fastcall *v8)(__int64, int *); // [rsp+58h] [rbp-20h]
  int v9; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( (v2 & 4) != 0 )
  {
    result = 8LL;
  }
  else
  {
    result = 0LL;
    if ( (v2 & 8) != 0 )
      result = 16LL;
  }
  if ( (v2 & 0x10) != 0 )
    result = (unsigned int)result | 0x20;
  if ( !(_DWORD)result )
  {
    if ( (int)PnpQueryInterface(*a2, 0LL, v5) >= 0 )
    {
      if ( v8(v6, &v9) >= 0 )
      {
        if ( (v9 & 1) != 0 )
        {
          v3 = 8;
        }
        else if ( (v9 & 2) != 0 )
        {
          v3 = 16;
        }
        if ( (v9 & 4) != 0 )
          v3 |= 0x20u;
      }
      v7(v6);
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
