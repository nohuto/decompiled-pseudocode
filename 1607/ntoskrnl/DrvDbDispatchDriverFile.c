/*
 * XREFs of DrvDbDispatchDriverFile @ 0x1406E3BD0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxGetObjectContext @ 0x1404E5A84 (_PnpCtxGetObjectContext.c)
 *     DrvDbDeleteObjectRegKey @ 0x1406E0C24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x1406E14A4 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1406E15CC (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x1406E1A28 (DrvDbGetObjectList.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x1406E2BDC (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x1406E36B0 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverFile(__int64 a1, wchar_t *a2, int a3, __int64 a4, int *a5)
{
  __int64 v6; // rcx
  int ObjectContext; // r8d
  int v8; // r10d
  __int64 **v9; // r11
  int v10; // eax
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v19; // ecx
  __int64 **v21[3]; // [rsp+40h] [rbp-18h] BYREF

  v21[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v21);
  if ( ObjectContext < 0 )
    return (unsigned int)ObjectContext;
  v9 = v21[0];
  v10 = *((_DWORD *)v21[0] + 3);
  if ( (v10 & 0x10000000) != 0 )
    goto LABEL_12;
  if ( !v10 )
    return (unsigned int)-1073740697;
  if ( v8 == 2 )
  {
    if ( *((_BYTE *)a5 + 4) )
    {
LABEL_11:
      if ( (v10 & 0x40000000) != 0 )
        goto LABEL_12;
      return (unsigned int)-1073741790;
    }
    goto LABEL_22;
  }
  if ( v8 <= 2 )
    goto LABEL_12;
  if ( v8 <= 4 )
    goto LABEL_11;
  if ( v8 <= 6 || v8 == 8 )
  {
LABEL_22:
    if ( v10 < 0 )
      goto LABEL_12;
    return (unsigned int)-1073741790;
  }
  if ( v8 == 9 )
    goto LABEL_11;
LABEL_12:
  v11 = v8 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbValidateDriverInfFileName(v6, a2);
  v12 = v11 - 1;
  if ( !v12 )
    return (unsigned int)DrvDbOpenObjectRegKey(v21[0], 0LL, 4, a2, *a5, *((_BYTE *)a5 + 4), *((_QWORD *)a5 + 1), a5 + 4);
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverFileMappedProperty(
                                   v21[0],
                                   (__int64)a2,
                                   *(_QWORD *)a5,
                                   *((_QWORD *)a5 + 2),
                                   a5[6],
                                   *((_QWORD *)a5 + 4),
                                   a5[10]);
          }
          else
          {
            return (unsigned int)DrvDbGetDriverFileMappedProperty(
                                   v21[0],
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *((_QWORD *)a5 + 2),
                                   *((_DWORD **)a5 + 3),
                                   *((_WORD **)a5 + 4),
                                   a5[10],
                                   *((_DWORD **)a5 + 6));
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverFileMappedPropertyKeys(
                                 v21[0],
                                 (__int64)a2,
                                 *(_QWORD *)a5,
                                 *((_QWORD *)a5 + 3),
                                 a5[8],
                                 *((_DWORD **)a5 + 5));
        }
      }
      else
      {
        return (unsigned int)DrvDbGetObjectList(
                               (__int64)v21[0],
                               4,
                               *(_QWORD *)a5,
                               *((_QWORD *)a5 + 1),
                               *((_QWORD *)a5 + 2),
                               a5[6],
                               *((_DWORD **)a5 + 4),
                               0);
      }
    }
    else
    {
      return (unsigned int)DrvDbDeleteObjectRegKey((__int64)v21[0], 4, a2, 0);
    }
  }
  v19 = *a5;
  LODWORD(v21[0]) = 0;
  ObjectContext = DrvDbOpenObjectRegKey(v9, 0LL, 4, a2, v19, 1, a5 + 2, v21);
  if ( ObjectContext >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v21[0]) == 1;
  return (unsigned int)ObjectContext;
}
