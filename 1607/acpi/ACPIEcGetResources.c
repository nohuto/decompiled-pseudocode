/*
 * XREFs of ACPIEcGetResources @ 0x1C009B01C
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C004CE80 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcGetResources(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // r9d
  _DWORD *v6; // rdx
  unsigned int i; // r11d
  __int64 v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // rax

  v3 = 0;
  if ( !a1 )
    return 2147483674LL;
  if ( !*a1 )
    return 3221225473LL;
  v6 = a1 + 5;
  for ( i = 0; i < a1[4]; v6 += 5 )
  {
    if ( *(_BYTE *)v6 == 1 )
    {
      v8 = (unsigned int)v6[1];
      if ( i )
      {
        if ( i == 1 )
        {
          *(_QWORD *)(a3 + 32) = v8;
          *(_QWORD *)(a3 + 40) = v8;
        }
      }
      else
      {
        *(_QWORD *)(a3 + 24) = v8;
      }
    }
    if ( *(_BYTE *)v6 == 2 && !*(_DWORD *)(a3 + 900) )
    {
      *(_DWORD *)(a3 + 900) = v6[2];
      *(_BYTE *)(a3 + 804) = 1;
    }
    ++i;
  }
  if ( *a2 )
  {
    if ( *(_BYTE *)(a3 + 804) )
    {
      v9 = a2[4];
      v10 = a2 + 5;
      if ( v9 )
      {
        while ( *(_BYTE *)v10 != 2 )
        {
          ++v3;
          v10 += 5;
          if ( v3 >= v9 )
            return 0LL;
        }
        *(_OWORD *)(a3 + 880) = *(_OWORD *)v10;
        *(_DWORD *)(a3 + 896) = v10[4];
      }
    }
  }
  return 0LL;
}
