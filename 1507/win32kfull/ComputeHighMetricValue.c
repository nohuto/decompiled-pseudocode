/*
 * XREFs of ComputeHighMetricValue @ 0x1C01C7948
 * Callers:
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 * Callees:
 *     ComputePower @ 0x1C01C7A10 (ComputePower.c)
 */

__int64 __fastcall ComputeHighMetricValue(__int64 a1)
{
  char v1; // dl
  unsigned int v3; // ebx
  unsigned __int16 v4; // di
  unsigned int v5; // ecx
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // r10
  __int16 v11; // r9

  v1 = *(_BYTE *)(a1 + 32) & 0xF;
  v3 = 0;
  v4 = 1000;
  v5 = 0;
  v6 = word_1C02EB9B8;
  do
  {
    if ( *(_BYTE *)v6 == v1 )
      break;
    ++v5;
    v6 += 2;
  }
  while ( v5 < 0xB );
  v7 = *(_DWORD *)(a1 + 36) & 0xF;
  if ( (unsigned int)v7 < 5 )
  {
    v8 = dword_1C02EB9A0[v7];
    if ( v8 != 2 )
    {
      if ( v8 != 1 )
      {
        UserLogError(2147483910LL);
        return v3;
      }
      v4 = 2540;
    }
    if ( v5 < 0xB )
    {
      v9 = ComputePower(word_1C02EB9B8[2 * v5 + 1]);
      if ( v11 >= 0 )
      {
        return v9 * v4 * (*(_DWORD *)(v10 + 52) - *(_DWORD *)(v10 + 48));
      }
      else if ( v9 )
      {
        return (*(_DWORD *)(v10 + 52) - *(_DWORD *)(v10 + 48)) * (unsigned int)v4 / v9;
      }
    }
  }
  return v3;
}
