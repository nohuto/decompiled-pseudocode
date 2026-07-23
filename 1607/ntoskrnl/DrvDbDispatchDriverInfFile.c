/*
 * XREFs of DrvDbDispatchDriverInfFile @ 0x1404E6E34
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x1404E5A84 (_PnpCtxGetObjectContext.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1404E7460 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x1406E0C24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1406E1670 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x1406E1A28 (DrvDbGetObjectList.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x1406E2CF4 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1406E36B0 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, __int64 a2, int a3, __int64 a4, int *a5)
{
  int ObjectContext; // eax
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // r8
  __int64 **v10; // r11
  int v11; // eax
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int DriverInfFileMappedProperty; // eax
  int v21; // ecx
  __int64 **v22[3]; // [rsp+40h] [rbp-18h] BYREF

  v22[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v22[0];
  v11 = *((_DWORD *)v22[0] + 3);
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
        goto LABEL_22;
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
LABEL_22:
        if ( (v11 & 0x40000000) != 0 )
          goto LABEL_3;
        goto LABEL_26;
      }
    }
    if ( v11 < 0 )
      goto LABEL_3;
LABEL_26:
    LODWORD(v9) = -1073741790;
    return (unsigned int)v9;
  }
LABEL_3:
  v12 = v8 - 1;
  if ( !v12 )
  {
    DriverInfFileMappedProperty = DrvDbValidateDriverInfFileName(v7, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    DriverInfFileMappedProperty = DrvDbOpenObjectRegKey(
                                    v22[0],
                                    0LL,
                                    3,
                                    a2,
                                    *a5,
                                    *((_BYTE *)a5 + 4),
                                    *((_QWORD *)a5 + 1),
                                    a5 + 4);
LABEL_11:
    LODWORD(v9) = DriverInfFileMappedProperty;
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
            DriverInfFileMappedProperty = DrvDbSetDriverInfFileMappedProperty(
                                            v22[0],
                                            a2,
                                            *(_QWORD *)a5,
                                            *((_QWORD *)a5 + 2),
                                            a5[6],
                                            *((_QWORD *)a5 + 4),
                                            a5[10]);
          }
          else
          {
            DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedProperty(
                                            v22[0],
                                            a2,
                                            *(_QWORD *)a5,
                                            *((_QWORD *)a5 + 2),
                                            *((_QWORD *)a5 + 3),
                                            *((_QWORD *)a5 + 4),
                                            a5[10],
                                            *((_QWORD *)a5 + 6));
          }
        }
        else
        {
          DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedPropertyKeys(
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
        DriverInfFileMappedProperty = DrvDbGetObjectList(
                                        v22[0],
                                        3,
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
      DriverInfFileMappedProperty = DrvDbDeleteObjectRegKey(v22[0], 3LL, a2);
    }
    goto LABEL_11;
  }
  v21 = *a5;
  LODWORD(v22[0]) = 0;
  LODWORD(v9) = DrvDbOpenObjectRegKey(v10, 0LL, 3, a2, v21, 1, a5 + 2, v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v22[0]) == 1;
  return (unsigned int)v9;
}
