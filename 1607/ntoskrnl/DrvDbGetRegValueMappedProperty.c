/*
 * XREFs of DrvDbGetRegValueMappedProperty @ 0x1404E6F3C
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x1404B8CDC (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1404E7460 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140576810 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x1406E14A4 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverPackageSignerName @ 0x1406E197C (DrvDbGetDriverPackageSignerName.c)
 * Callees:
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall DrvDbGetRegValueMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v9; // eax
  unsigned int v10; // edi
  _WORD *v11; // rbx
  int *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // ecx
  _DWORD v18[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  int v20; // [rsp+70h] [rbp+30h] BYREF

  v19 = a1;
  v18[0] = 0;
  v20 = 0;
  v9 = *(_DWORD *)(a3 + 8);
  v10 = a6;
  v11 = a5;
  if ( v9 == 17 || v9 == 5 )
  {
    v12 = &v20;
    LODWORD(v19) = 4;
  }
  else
  {
    v12 = (int *)a5;
    LODWORD(v19) = a6;
  }
  v13 = PnpCtxRegQueryValue(&v19, a2, *(_QWORD *)(a3 + 16), v18, v12, &v19);
  v14 = v13;
  if ( v13 == -1073741772 )
    return (unsigned int)-1073741275;
  if ( !v13 || v13 == -1073741789 )
  {
    if ( v18[0] == *(_DWORD *)(a3 + 24) )
    {
      *a4 = *(_DWORD *)(a3 + 8);
      v15 = *(_DWORD *)(a3 + 8);
      if ( v15 == 5 )
      {
        *a7 = 2;
        if ( !v11 || v10 < 2 )
          return (unsigned int)-1073741789;
        if ( v14 != -1073741789 )
        {
          *v11 = v20;
          return v14;
        }
      }
      else
      {
        if ( v15 != 17 )
        {
          v16 = v19;
          *a7 = v19;
          if ( v11 && v10 >= v16 )
            return v14;
          return (unsigned int)-1073741789;
        }
        *a7 = 1;
        if ( !v11 || !v10 )
          return (unsigned int)-1073741789;
        if ( v14 != -1073741789 )
        {
          *(_BYTE *)v11 = -(v20 != 0);
          return v14;
        }
      }
    }
    return (unsigned int)-1073741595;
  }
  return v14;
}
