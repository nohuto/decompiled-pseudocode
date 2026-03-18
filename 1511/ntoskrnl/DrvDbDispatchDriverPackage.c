/*
 * XREFs of DrvDbDispatchDriverPackage @ 0x1404437A8
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetObjectContext @ 0x1404438EC (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140443F94 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x1404442A0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14051971C (DrvDbGetObjectList.c)
 *     DrvDbDeleteObjectRegKey @ 0x14069A72C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14069B21C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14069C28C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x14069C990 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int *a5)
{
  int ObjectContext; // eax
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // r8
  int v10; // r11d
  int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int DriverPackageMappedProperty; // eax
  int v21; // ecx
  int v22[6]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v22 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v22[0];
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
        goto LABEL_23;
    }
    else
    {
      if ( v8 <= 2 )
        goto LABEL_3;
      if ( v8 <= 4 )
        goto LABEL_23;
      if ( v8 > 6 && v8 != 8 )
      {
        if ( v8 != 9 )
          goto LABEL_3;
LABEL_23:
        if ( (v11 & 0x40000000) != 0 )
          goto LABEL_3;
        goto LABEL_27;
      }
    }
    if ( v11 < 0 )
      goto LABEL_3;
LABEL_27:
    LODWORD(v9) = -1073741790;
    return (unsigned int)v9;
  }
LABEL_3:
  v12 = v8 - 1;
  if ( !v12 )
  {
    DriverPackageMappedProperty = DrvDbValidateDriverInfFileName(v7, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    DriverPackageMappedProperty = DrvDbOpenObjectRegKey(
                                    v22[0],
                                    0,
                                    2,
                                    a2,
                                    *a5,
                                    *((_BYTE *)a5 + 4),
                                    *((_QWORD *)a5 + 1),
                                    (__int64)(a5 + 4));
LABEL_11:
    LODWORD(v9) = DriverPackageMappedProperty;
    return (unsigned int)v9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DriverPackageMappedProperty = DrvDbSetDriverPackageMappedProperty(
                                            v22[0],
                                            a2,
                                            *(_QWORD *)a5,
                                            *((_QWORD *)a5 + 2),
                                            a5[6],
                                            *((void **)a5 + 4),
                                            a5[10]);
          }
          else
          {
            DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                            v22[0],
                                            a2,
                                            *(_QWORD *)a5,
                                            *((_QWORD *)a5 + 2),
                                            *((_QWORD *)a5 + 3),
                                            *((NTSTRSAFE_PWSTR *)a5 + 4),
                                            a5[10],
                                            *((_QWORD *)a5 + 6));
          }
        }
        else
        {
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedPropertyKeys(
                                          v22[0],
                                          a2,
                                          *(_QWORD *)a5,
                                          *((_QWORD *)a5 + 3),
                                          a5[8],
                                          *((_QWORD *)a5 + 5));
        }
      }
      else
      {
        DriverPackageMappedProperty = DrvDbGetObjectList(
                                        v22[0],
                                        2,
                                        *(_QWORD *)a5,
                                        *((_QWORD *)a5 + 1),
                                        *((_QWORD *)a5 + 2),
                                        a5[6],
                                        *((_QWORD *)a5 + 4),
                                        0);
      }
    }
    else
    {
      DriverPackageMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v22, 2LL, a2, 0LL);
    }
    goto LABEL_11;
  }
  v21 = *a5;
  v22[0] = 0;
  LODWORD(v9) = DrvDbOpenObjectRegKey(v10, 0, 2, a2, v21, 1, (__int64)(a5 + 2), (__int64)v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = v22[0] == 1;
  return (unsigned int)v9;
}
