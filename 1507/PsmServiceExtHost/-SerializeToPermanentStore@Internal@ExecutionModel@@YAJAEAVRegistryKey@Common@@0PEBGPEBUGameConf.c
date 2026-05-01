/*
 * XREFs of ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x18001BD20 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x1800053B4 (-CloseHandleHelper@Common@@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800190A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x18001B8E4 (-GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z.c)
 *     ?GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z @ 0x18001C2EC (-GetMultiStringValue@RegistryKey@Common@@QEAAJPEBGPEAGPEAK@Z.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x18001C59C (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024DA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ @ 0x18004398C (--1-$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ.c)
 *     ?Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z @ 0x1800439DC (-Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z.c)
 *     ?EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180043DD0 (-EncryptString@Internal@ExecutionModel@@YAJPEBGPEAPEAU_CRYPTOAPI_BLOB@@@Z.c)
 *     ?SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z @ 0x180045C64 (-SetStringValue@RegistryKey@Common@@QEAAJPEBG0K@Z.c)
 *     ?CommitTransaction@@YAHPEAX@Z @ 0x1800462CC (-CommitTransaction@@YAHPEAX@Z.c)
 *     ?PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z @ 0x180046300 (-PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z.c)
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
  struct _CRYPTOAPI_BLOB *v17; // rdx
  unsigned int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rcx
  const unsigned __int16 *v22; // r8
  unsigned int v23; // esi
  unsigned __int16 *v24; // r8
  __int64 v25; // r14
  LSTATUS v26; // eax
  const unsigned __int16 *v27; // rdx
  size_t v28; // rax
  void *v29; // rax
  const unsigned __int16 *v30; // rdx
  void *v31; // rbx
  signed int v32; // eax
  DWORD dwOptions; // [rsp+20h] [rbp-E0h]
  REGSAM samDesired; // [rsp+28h] [rbp-D8h]
  unsigned __int16 *lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  char v37; // [rsp+60h] [rbp-A0h]
  DWORD lpdwDisposition; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-90h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  HKEY v41; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v42[4]; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v43; // [rsp+90h] [rbp-70h]
  DWORD dwDisposition; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v46; // [rsp+A8h] [rbp-58h] BYREF
  char v47; // [rsp+B0h] [rbp-50h]
  WCHAR SubKey[48]; // [rsp+C0h] [rbp-40h] BYREF

  v37 = 0;
  hTransaction = PrivCreateTransaction(
                   this,
                   a2,
                   (unsigned int)a3,
                   (unsigned int)a4,
                   dwOptions,
                   samDesired,
                   lpSecurityAttributes);
  v43 = hTransaction;
  if ( hTransaction == (void *)-1LL )
  {
    LastError = GetLastError();
    GameParentIdentifier = LastError;
    if ( LastError > 0 )
      GameParentIdentifier = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_50;
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
    goto LABEL_48;
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
        *(_QWORD *)v42 = 0LL;
        v16 = 0LL;
        v46 = v42;
        v47 = 1;
        if ( (unsigned int)(v15 - 1) <= 1 )
        {
          GameParentIdentifier = ExecutionModel::Internal::EncryptString(
                                   *((ExecutionModel::Internal **)a4 + 3),
                                   v42,
                                   0LL);
          if ( GameParentIdentifier < 0 )
            goto LABEL_47;
          v16 = *(_QWORD *)v42;
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
                goto LABEL_47;
              v19 = *((_DWORD *)a4 + 4);
              if ( ++v20 >= v19 )
                goto LABEL_19;
            }
            GameParentIdentifier = -2147024809;
            goto LABEL_47;
          }
LABEL_19:
          if ( (_BYTE)a5 )
          {
            v41 = 0LL;
            v39 = 0;
            lpdwDisposition = 0;
            v23 = 0;
            GameParentIdentifier = StringCchLengthW(a3, 0x7FFFFFFFLL, &v45);
            if ( GameParentIdentifier < 0 )
              goto LABEL_25;
            v25 = v45 + 1;
            GameParentIdentifier = ExecutionModel::Internal::GetGameParentIdentifier(
                                     (ExecutionModel::Internal **)a4,
                                     SubKey,
                                     v24);
            if ( GameParentIdentifier < 0 )
              goto LABEL_25;
            v26 = RegCreateKeyTransactedW(
                    *(HKEY *)&this->nLength,
                    SubKey,
                    0,
                    0LL,
                    0,
                    0xF003Fu,
                    0LL,
                    &v41,
                    &lpdwDisposition,
                    v43,
                    0LL);
            GameParentIdentifier = v26;
            if ( v26 )
            {
              if ( v26 > 0 )
                GameParentIdentifier = (unsigned __int16)v26 | 0x80070000;
              goto LABEL_25;
            }
            if ( lpdwDisposition == 2 )
            {
              if ( *((_DWORD *)a4 + 5) != 1 )
              {
                GameParentIdentifier = -2147024809;
LABEL_25:
                Common::AutoHandleCloseHKEY<HKEY__ *>(v41);
                goto LABEL_47;
              }
              GameParentIdentifier = Common::RegistryKey::GetMultiStringValue(&v41, v27, 0LL, &v39);
              if ( GameParentIdentifier < 0 )
                goto LABEL_25;
              v23 = v39;
            }
            v28 = 2 * (v25 + v23);
            if ( !is_mul_ok(v25 + v23, 2uLL) )
              v28 = -1LL;
            v29 = operator new[](v28, (const struct std::nothrow_t *)&std::nothrow);
            v31 = v29;
            if ( !v29 )
            {
              GameParentIdentifier = -2147024882;
LABEL_41:
              operator delete(v31);
              goto LABEL_25;
            }
            if ( lpdwDisposition == 2 )
            {
              GameParentIdentifier = Common::RegistryKey::GetMultiStringValue(&v41, v30, (BYTE *)v29 + 2 * v25, &v39);
              if ( GameParentIdentifier < 0 )
                goto LABEL_41;
              v23 = v39;
            }
            GameParentIdentifier = StringCchCopyW((char *)v31, v25, (char *)a3);
            if ( GameParentIdentifier < 0 )
              goto LABEL_41;
            GameParentIdentifier = Common::RegistryKey::SetValue(
                                     &v41,
                                     L"Children",
                                     (const BYTE *)v31,
                                     2 * (v25 + v23),
                                     7u);
            if ( GameParentIdentifier < 0 )
              goto LABEL_41;
            operator delete(v31);
            Common::AutoHandleCloseHKEY<HKEY__ *>(v41);
          }
          if ( (unsigned int)CommitTransaction(v43) )
          {
            v37 = 1;
          }
          else
          {
            v32 = GetLastError();
            GameParentIdentifier = v32;
            if ( v32 > 0 )
              GameParentIdentifier = (unsigned __int16)v32 | 0x80070000;
          }
        }
LABEL_47:
        tlx::_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>::~_UndoSolo<_lambda_8f8ac64dbc926c8fd5f875692dc53996_>(
          (__int64)&v46,
          v17);
      }
    }
  }
LABEL_48:
  Common::AutoHandleCloseHKEY<HKEY__ *>(phkResult);
  if ( !v37 )
    ExecutionModel::Internal::Cleanup_PermanentStoreOperation((ExecutionModel::Internal *)v43, v11);
LABEL_50:
  Common::CloseHandleHelper((Common *)v43, v11);
  return (unsigned int)GameParentIdentifier;
}
