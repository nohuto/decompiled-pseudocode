/*
 * XREFs of DrvDbGetCompositeMappedPropertyKeys @ 0x1406E118C
 * Callers:
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1406E1204 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1406E12D8 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E1714 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDbGetCompositeMappedPropertyKeys(
        __int64 a1,
        _OWORD **a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned int v8; // r11d
  _OWORD *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx

  result = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( a4 )
      {
        if ( (unsigned int)v7 < a5 )
        {
          v10 = *a2;
          v11 = 5 * v7;
          v7 = (unsigned int)(v7 + 1);
          *(_OWORD *)(a4 + 4 * v11) = **a2;
          *(_DWORD *)(a4 + 4 * v11 + 16) = *((_DWORD *)v10 + 4);
        }
      }
      v12 = *a6 + 1;
      if ( v12 < *a6 )
        break;
      result = 0LL;
      *a6 = v12;
      ++v8;
      ++a2;
      if ( v8 >= a3 )
        return result;
    }
    *a6 = -1;
    result = 3221225621LL;
    *a6 = 0;
  }
  return result;
}
