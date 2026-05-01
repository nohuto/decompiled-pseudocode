/*
 * XREFs of ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x180045A20
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ??1RegistryKey@Common@@QEAA@XZ @ 0x180007F44 (--1RegistryKey@Common@@QEAA@XZ.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z @ 0x18001C3A4 (-GetValue@RegistryKey@Common@@QEAAJPEBGPEAXPEAK2@Z.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x18001C59C (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800247E8 (__report_rangecheckfailure.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x18004D900 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::SetGameProperty(
        __int64 a1,
        const struct _GUID *a2,
        int a3,
        const BYTE *a4,
        DWORD a5)
{
  const WCHAR *v5; // rcx
  __int64 v7; // rdi
  int Value; // ebx
  __int64 v10; // rdi
  LSTATUS v11; // eax
  const unsigned __int16 *v12; // rdx
  DWORD v13; // r8d
  unsigned int v15; // [rsp+30h] [rbp-81h] BYREF
  HKEY v16; // [rsp+38h] [rbp-79h] BYREF
  HKEY v17; // [rsp+40h] [rbp-71h] BYREF
  BYTE v18[8]; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 v19[4]; // [rsp+50h] [rbp-61h] BYREF
  HKEY v20; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-51h] BYREF
  int v22[3]; // [rsp+64h] [rbp-4Dh] BYREF
  unsigned __int16 v23[40]; // [rsp+70h] [rbp-41h] BYREF

  v5 = *(const WCHAR **)(a1 + 8);
  v7 = a3;
  v16 = 0LL;
  *(_QWORD *)v19 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v15 = 36;
  Value = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v5, (HKEY *)v19, &v20, &v17);
  if ( Value < 0 )
    goto LABEL_23;
  if ( !*(_QWORD *)&a2->Data1 && !*(_QWORD *)a2->Data4 )
    goto LABEL_4;
  if ( (unsigned int)v7 <= 0xE )
  {
    if ( a4 && a5 )
    {
      v10 = 3 * v7;
      if ( !*((_BYTE *)&off_1800522B0 + 8 * v10 + 12) )
      {
        Value = -2147024891;
        goto LABEL_23;
      }
      v11 = Common::Guid::Encode(a2, v23, 0x24u, &v15);
      if ( v11 >= 0 )
      {
        if ( 2 * (unsigned __int64)v15 >= 0x4A )
          _report_rangecheckfailure();
        v23[v15] = 0;
        v11 = Common::RegistryKey::OpenSubKey(&v17, v23, 0xF003Fu, &v16);
        if ( v11 >= 0 )
        {
          v12 = (&off_1800522B0)[v10];
          if ( *((_BYTE *)&off_1800522B0 + 8 * v10 + 14) )
          {
            v15 = 4;
            Value = Common::RegistryKey::GetValue(&v16, v12, v18, &v15, &v21);
            if ( Value < 0 )
              goto LABEL_23;
            v13 = *((_DWORD *)&off_1800522B0 + 2 * v10 + 2);
            if ( v21 != v13 || v15 != 4 )
            {
              Value = -2147418113;
              goto LABEL_23;
            }
            if ( a5 != 4 )
              goto LABEL_4;
            v22[0] = ((*(_DWORD *)a4 != 0) << LODWORD((&off_1800522B0)[v10 + 1])) | *(_DWORD *)v18 & ~(1 << LODWORD((&off_1800522B0)[v10 + 1]));
            if ( v22[0] == *(_DWORD *)v18 )
              goto LABEL_23;
            v11 = Common::RegistryKey::SetValue(&v16, (&off_1800522B0)[v10], (const BYTE *)v22, 4u, v13);
          }
          else
          {
            v11 = Common::RegistryKey::SetValue(&v16, v12, a4, a5, *((_DWORD *)&off_1800522B0 + 2 * v10 + 2));
          }
        }
      }
      Value = v11;
      goto LABEL_23;
    }
LABEL_4:
    Value = -2147024809;
LABEL_23:
    Common::RegistryKey::~RegistryKey(&v17);
    Common::RegistryKey::~RegistryKey(&v20);
    Common::RegistryKey::~RegistryKey((HKEY *)v19);
    Common::RegistryKey::~RegistryKey(&v16);
    return (unsigned int)Value;
  }
  Common::RegistryKey::~RegistryKey(&v17);
  Common::RegistryKey::~RegistryKey(&v20);
  Common::RegistryKey::~RegistryKey((HKEY *)v19);
  Common::RegistryKey::~RegistryKey(&v16);
  return 2147942487LL;
}
