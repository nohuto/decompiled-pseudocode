/*
 * XREFs of _PnpDispatchInstallerClass @ 0x14057E91C
 * Callers:
 *     <none>
 * Callees:
 *     _CmValidateInstallerClassName @ 0x140440558 (_CmValidateInstallerClassName.c)
 *     _CmOpenInstallerClassRegKey @ 0x140440574 (_CmOpenInstallerClassRegKey.c)
 *     _CmGetInstallerClassMappedProperty @ 0x14057EA60 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetMatchingCommonClassList @ 0x1405A87F8 (_CmGetMatchingCommonClassList.c)
 *     _CmCreateInstallerClass @ 0x140712430 (_CmCreateInstallerClass.c)
 *     _CmDeleteInstallerClass @ 0x140713AA0 (_CmDeleteInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x14071842C (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyLocales @ 0x14071877C (_CmGetInstallerClassMappedPropertyLocales.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140718E1C (_CmSetInstallerClassMappedProperty.c)
 */

__int64 __fastcall PnpDispatchInstallerClass(__int64 *a1, const WCHAR *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 (__fastcall *v5)(); // r8
  _QWORD *v6; // rbx
  int v7; // r9d
  unsigned int InstallerClassMappedProperty; // eax
  __int64 v10; // r9
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  _QWORD v17[3]; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v5) = 0;
  LODWORD(v6) = 0;
  v7 = a4 - 1;
  if ( v7 )
  {
    v10 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
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
                  if ( v16 != 1 )
                    return PnpMapCmStatusToDispatchStatus(0xC000000D);
                  InstallerClassMappedProperty = CmSetInstallerClassMappedProperty(
                                                   (_DWORD)a1,
                                                   (_DWORD)a2,
                                                   *(_QWORD *)a5,
                                                   *(_QWORD *)(a5 + 8),
                                                   *(_QWORD *)(a5 + 16),
                                                   *(_DWORD *)(a5 + 24),
                                                   *(_QWORD *)(a5 + 32),
                                                   *(_DWORD *)(a5 + 40));
                }
                else
                {
                  InstallerClassMappedProperty = CmGetInstallerClassMappedProperty(
                                                   (_DWORD)a1,
                                                   (_DWORD)a2,
                                                   *(_QWORD *)a5,
                                                   *(_QWORD *)(a5 + 8),
                                                   *(_QWORD *)(a5 + 16),
                                                   *(_QWORD *)(a5 + 24),
                                                   *(_QWORD *)(a5 + 32),
                                                   *(_DWORD *)(a5 + 40),
                                                   *(_QWORD *)(a5 + 48));
                }
              }
              else
              {
                InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyLocales(
                                                 (_DWORD)a1,
                                                 (_DWORD)a2,
                                                 0,
                                                 *(_QWORD *)(a5 + 8),
                                                 *(_QWORD *)(a5 + 16),
                                                 *(_DWORD *)(a5 + 24),
                                                 *(_QWORD *)(a5 + 32));
              }
            }
            else
            {
              InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyKeys(
                                               (_DWORD)a1,
                                               (_DWORD)a2,
                                               *(_QWORD *)a5,
                                               0,
                                               *(_QWORD *)(a5 + 24),
                                               *(_DWORD *)(a5 + 32),
                                               *(_QWORD *)(a5 + 40));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              v17[0] = *(_QWORD *)a5;
              v5 = PnpCmMatchCallbackRoutine;
              v6 = v17;
              v17[1] = *(_QWORD *)(a5 + 8);
            }
            InstallerClassMappedProperty = CmGetMatchingCommonClassList(
                                             (_DWORD)a1,
                                             2,
                                             (_DWORD)v5,
                                             (_DWORD)v6,
                                             *(_QWORD *)(a5 + 16),
                                             *(_DWORD *)(a5 + 24),
                                             *(_QWORD *)(a5 + 32),
                                             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
          }
        }
        else
        {
          InstallerClassMappedProperty = CmDeleteInstallerClass(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        InstallerClassMappedProperty = CmCreateInstallerClass(
                                         (_DWORD)a1,
                                         (_DWORD)a2,
                                         *(_DWORD *)a5,
                                         (int)a5 + 8,
                                         a5 + 16,
                                         *(_DWORD *)(a5 + 20) & 0xFFFF0000);
      }
    }
    else
    {
      InstallerClassMappedProperty = CmOpenInstallerClassRegKey(
                                       a1,
                                       (__int64)a2,
                                       0LL,
                                       v10,
                                       *(_DWORD *)a5,
                                       *(_BYTE *)(a5 + 4),
                                       *(_QWORD *)(a5 + 8),
                                       (_DWORD *)(a5 + 16));
    }
  }
  else
  {
    InstallerClassMappedProperty = CmValidateInstallerClassName((__int64)a1, a2);
  }
  return PnpMapCmStatusToDispatchStatus(InstallerClassMappedProperty);
}
