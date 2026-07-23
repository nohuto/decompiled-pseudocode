/*
 * XREFs of DrvDbDispatchDriverPackage @ 0x1404E5974
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x1404E5A84 (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x1406E0C24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E1714 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x1406E1A28 (DrvDbGetObjectList.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1406E36B0 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // r8
  __int64 **v10; // r11
  int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int DriverPackageMappedProperty; // eax
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // ecx
  int v22[2]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v22 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = *(__int64 ***)v22;
  v11 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
  if ( (v11 & 0x10000000) == 0 )
  {
    if ( !v11 )
    {
      LODWORD(v9) = -1073740697;
      return (unsigned int)v9;
    }
    if ( v8 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_22:
        if ( (v11 & 0x40000000) != 0 )
          goto LABEL_3;
LABEL_26:
        LODWORD(v9) = -1073741790;
        return (unsigned int)v9;
      }
    }
    else
    {
      if ( v8 <= 2 )
        goto LABEL_3;
      if ( v8 <= 4 )
        goto LABEL_22;
      if ( v8 > 6 && v8 != 8 )
      {
        if ( v8 != 9 )
          goto LABEL_3;
        goto LABEL_22;
      }
    }
    if ( v11 < 0 )
      goto LABEL_3;
    goto LABEL_26;
  }
LABEL_3:
  v12 = v8 - 1;
  if ( !v12 )
  {
    DriverPackageMappedProperty = DrvDbValidateDriverInfFileName(v7, a2, v9);
    goto LABEL_6;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                    *(__int64 ***)v22,
                                    0LL,
                                    2,
                                    a2,
                                    *(_DWORD *)a5,
                                    *((_BYTE *)a5 + 4),
                                    a5[1],
                                    a5 + 2);
LABEL_6:
    LODWORD(v9) = DriverPackageMappedProperty;
    return (unsigned int)v9;
  }
  v16 = v13 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( v20 )
          {
            if ( v20 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DriverPackageMappedProperty = DrvDbSetDriverPackageMappedProperty(
                                            v22[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            *((_DWORD *)a5 + 6),
                                            (void *)a5[4],
                                            *((_DWORD *)a5 + 10));
          }
          else
          {
            DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                            v22[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            a5[3],
                                            (NTSTRSAFE_PWSTR)a5[4],
                                            *((_DWORD *)a5 + 10),
                                            a5[6]);
          }
        }
        else
        {
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedPropertyKeys(
                                          *(_QWORD *)v22,
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverPackageMappedProperty = DrvDbGetObjectList(v22[0], 2, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverPackageMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v22, 2LL, a2);
    }
    goto LABEL_6;
  }
  v21 = *(_DWORD *)a5;
  v22[0] = 0;
  LODWORD(v9) = DrvDbOpenObjectRegKey(v10, 0LL, 2, a2, v21, 1, a5 + 1, v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = v22[0] == 1;
  return (unsigned int)v9;
}
