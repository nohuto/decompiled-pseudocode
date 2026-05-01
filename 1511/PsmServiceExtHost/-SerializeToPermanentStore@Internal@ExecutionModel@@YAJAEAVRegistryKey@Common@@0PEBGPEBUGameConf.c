/*
 * XREFs of ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180048950 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x18004A370 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x180027CC4 (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x180047E90 (-CloseHandleHelper@Common@@YAXPEAX@Z.c)
 *     ??1?$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ @ 0x18004892C (--1-$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ.c)
 *     ?Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z @ 0x180048AFC (-Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z.c)
 *     ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180048F00 (-EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z.c)
 *     ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x180049400 (-GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z.c)
 *     ?GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z @ 0x180049720 (-GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z.c)
 *     ?SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z @ 0x18004B1A8 (-SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z.c)
 *     ?CommitTransaction@@YAHPEAX@Z @ 0x18004B818 (-CommitTransaction@@YAHPEAX@Z.c)
 *     ?PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z @ 0x18004B84C (-PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::SerializeToPermanentStore(
        struct _SECURITY_ATTRIBUTES *this,
        struct _GUID *a2,
        WCHAR *a3,
        unsigned __int16 *a4,
        const struct ExecutionModel::GameConfig *a5)
{
  void *hTransaction; // rax
  signed int LastError; // eax
  void *v11; // rdx
  int GameParentIdentifier; // edi
  HKEY v13; // rcx
  LSTATUS v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rcx
  const unsigned __int16 *v22; // r8
  unsigned int v23; // esi
  unsigned __int16 *v24; // r8
  __int64 v25; // r14
  LSTATUS v26; // eax
  size_t v27; // rax
  void *v28; // rax
  const unsigned __int16 *v29; // rdx
  void *v30; // rbx
  signed int v31; // eax
  DWORD dwOptions; // [rsp+20h] [rbp-E0h]
  REGSAM samDesired; // [rsp+28h] [rbp-D8h]
  unsigned __int16 *lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  char v36; // [rsp+60h] [rbp-A0h]
  DWORD lpdwDisposition; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+70h] [rbp-90h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  HKEY hKey; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v41[4]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v42; // [rsp+90h] [rbp-70h]
  DWORD dwDisposition; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v44; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v45; // [rsp+A8h] [rbp-58h] BYREF
  char v46; // [rsp+B0h] [rbp-50h]
  WCHAR SubKey[48]; // [rsp+C0h] [rbp-40h] BYREF

  v36 = 0;
  hTransaction = PrivCreateTransaction(
                   this,
                   a2,
                   (unsigned int)a3,
                   (unsigned int)a4,
                   dwOptions,
                   samDesired,
                   lpSecurityAttributes);
  v42 = hTransaction;
  if ( hTransaction == (void *)-1LL )
  {
    LastError = GetLastError();
    GameParentIdentifier = LastError;
    if ( LastError > 0 )
      GameParentIdentifier = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_54;
  }
  v13 = *(HKEY *)&a2->Data1;
  phkResult = 0LL;
  dwDisposition = 0;
  v14 = RegCreateKeyTransactedW(v13, a3, 0, 0LL, 0, 0xF003Fu, 0LL, &phkResult, &dwDisposition, hTransaction, 0LL);
  GameParentIdentifier = v14;
  if ( v14 )
  {
    if ( v14 > 0 )
      GameParentIdentifier = (unsigned __int16)v14 | 0x80070000;
    goto LABEL_50;
  }
  lpdwDisposition = *((_DWORD *)a4 + 5);
  GameParentIdentifier = Common::RegistryKey::SetValue(&phkResult, L"Type", (const BYTE *)&lpdwDisposition, 4u, 4u);
  if ( GameParentIdentifier >= 0 )
  {
    lpdwDisposition = *((_DWORD *)a4 + 8);
    GameParentIdentifier = Common::RegistryKey::SetValue(&phkResult, L"Flags", (const BYTE *)&lpdwDisposition, 4u, 4u);
    if ( GameParentIdentifier >= 0 )
    {
      lpdwDisposition = *(_DWORD *)a4;
      GameParentIdentifier = Common::RegistryKey::SetValue(
                               &phkResult,
                               L"Revision",
                               (const BYTE *)&lpdwDisposition,
                               4u,
                               4u);
      if ( GameParentIdentifier >= 0 )
      {
        v15 = *((_DWORD *)a4 + 5);
        *(_QWORD *)v41 = 0LL;
        v16 = 0LL;
        v45 = v41;
        v46 = 1;
        if ( (unsigned int)(v15 - 1) <= 1 )
        {
          GameParentIdentifier = ExecutionModel::Internal::EncryptString(
                                   *((ExecutionModel::Internal **)a4 + 3),
                                   v41,
                                   0LL);
          if ( GameParentIdentifier < 0 )
            goto LABEL_49;
          v16 = *(_QWORD *)v41;
        }
        GameParentIdentifier = Common::RegistryKey::SetValue(
                                 &phkResult,
                                 L"Parent",
                                 *(const BYTE **)(v16 + 8),
                                 *(_DWORD *)v16,
                                 3u);
        if ( GameParentIdentifier >= 0 )
        {
          v19 = *((_DWORD *)a4 + 4);
          v20 = 0;
          if ( v19 )
          {
            while ( v19 < 3 )
            {
              v21 = *((_QWORD *)a4 + 1);
              v22 = *(const unsigned __int16 **)(v21 + 16LL * v20 + 8);
              if ( !v22 )
                break;
              GameParentIdentifier = Common::RegistryKey::SetStringValue(
                                       (Common::RegistryKey *)&phkResult,
                                       (const unsigned __int16 *)(&ExecutionModel::Strings::DescriptorKeys)[*(int *)(v21 + 16LL * v20)],
                                       v22,
                                       v18);
              if ( GameParentIdentifier < 0 )
                goto LABEL_49;
              v19 = *((_DWORD *)a4 + 4);
              if ( ++v20 >= v19 )
                goto LABEL_19;
            }
            GameParentIdentifier = -2147024809;
            goto LABEL_49;
          }
LABEL_19:
          if ( !(_BYTE)a5 )
            goto LABEL_45;
          hKey = 0LL;
          v38 = 0;
          lpdwDisposition = 0;
          v23 = 0;
          GameParentIdentifier = StringCchLengthW(a3, 0x7FFFFFFFLL, &v44);
          if ( GameParentIdentifier >= 0 )
          {
            v25 = v44 + 1;
            GameParentIdentifier = ExecutionModel::Internal::GetGameParentIdentifier(
                                     (ExecutionModel::Internal **)a4,
                                     SubKey,
                                     v24);
            if ( GameParentIdentifier >= 0 )
            {
              v26 = RegCreateKeyTransactedW(
                      *(HKEY *)&this->nLength,
                      SubKey,
                      0,
                      0LL,
                      0,
                      0xF003Fu,
                      0LL,
                      &hKey,
                      &lpdwDisposition,
                      v42,
                      0LL);
              GameParentIdentifier = v26;
              if ( v26 )
              {
                if ( v26 > 0 )
                  GameParentIdentifier = (unsigned __int16)v26 | 0x80070000;
                goto LABEL_25;
              }
              if ( lpdwDisposition != 2 )
                goto LABEL_33;
              if ( *((_DWORD *)a4 + 5) != 1 )
              {
                GameParentIdentifier = -2147024809;
                goto LABEL_25;
              }
              GameParentIdentifier = Common::RegistryKey::GetMultiStringValue(&hKey, v17, 0LL, &v38);
              if ( GameParentIdentifier >= 0 )
              {
                v23 = v38;
LABEL_33:
                v27 = 2 * (v25 + v23);
                if ( !is_mul_ok(v25 + v23, 2uLL) )
                  v27 = -1LL;
                v28 = operator new[](v27, (const struct std::nothrow_t *)&std::nothrow);
                v30 = v28;
                if ( !v28 )
                {
                  GameParentIdentifier = -2147024882;
LABEL_42:
                  operator delete(v30);
                  goto LABEL_25;
                }
                if ( lpdwDisposition == 2 )
                {
                  GameParentIdentifier = Common::RegistryKey::GetMultiStringValue(
                                           &hKey,
                                           v29,
                                           (BYTE *)v28 + 2 * v25,
                                           &v38);
                  if ( GameParentIdentifier < 0 )
                    goto LABEL_42;
                  v23 = v38;
                }
                GameParentIdentifier = StringCchCopyW((char *)v30, v25, (char *)a3);
                if ( GameParentIdentifier < 0 )
                  goto LABEL_42;
                GameParentIdentifier = Common::RegistryKey::SetValue(
                                         &hKey,
                                         L"Children",
                                         (const BYTE *)v30,
                                         2 * (v25 + v23),
                                         7u);
                if ( GameParentIdentifier < 0 )
                  goto LABEL_42;
                operator delete(v30);
                if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                  RegCloseKey(hKey);
LABEL_45:
                if ( (unsigned int)CommitTransaction(v42) )
                {
                  v36 = 1;
                }
                else
                {
                  v31 = GetLastError();
                  GameParentIdentifier = v31;
                  if ( v31 > 0 )
                    GameParentIdentifier = (unsigned __int16)v31 | 0x80070000;
                }
                goto LABEL_49;
              }
            }
          }
LABEL_25:
          if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            RegCloseKey(hKey);
        }
LABEL_49:
        tlx::_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>::~_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>(
          (__int64)&v45,
          (struct _CRYPTOAPI_BLOB *)v17);
      }
    }
  }
LABEL_50:
  if ( (unsigned __int64)phkResult - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(phkResult);
  if ( !v36 )
    ExecutionModel::Internal::Cleanup_PermanentStoreOperation((ExecutionModel::Internal *)v42, v11);
LABEL_54:
  Common::CloseHandleHelper((Common *)v42, v11);
  return (unsigned int)GameParentIdentifier;
}
