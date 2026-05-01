/*
 * XREFs of ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x180045018
 * Callers:
 *     ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@@Z @ 0x1800454C0 (-RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x1800053B4 (-CloseHandleHelper@Common@@YAXPEAX@Z.c)
 *     ?GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180007A20 (-GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180007AAC (-GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180007ABC (-GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180017C50 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800190A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x18001C59C (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x18001C5D0 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18001C8F0 (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z @ 0x1800439DC (-Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z.c)
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180043A08 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180044C8C (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 *     ?CommitTransaction@@YAHPEAX@Z @ 0x1800462CC (-CommitTransaction@@YAHPEAX@Z.c)
 *     ?PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z @ 0x180046300 (-PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::RemoveFromPermanentStore(
        const WCHAR *this,
        ExecutionModel::Internal *a2,
        HKEY *a3,
        const WCHAR *a4)
{
  unsigned __int16 *v4; // rbx
  int v5; // r15d
  char v6; // r13
  char v7; // r12
  struct _GUID *v9; // rdx
  struct _SECURITY_ATTRIBUTES *v10; // rcx
  int UserHKCU; // esi
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  signed int LastError; // eax
  void *v15; // rdx
  __int64 v16; // r8
  int Value; // eax
  struct Common::StringBuffer *v18; // r9
  unsigned __int16 *v19; // r8
  int ParentsChildrenStrings; // eax
  ExecutionModel::Internal *v21; // rcx
  unsigned __int64 v22; // rax
  char *v23; // r14
  unsigned __int16 *v24; // rcx
  int v25; // r8d
  int v26; // edx
  signed int v27; // eax
  bool v28; // cc
  const WCHAR *GameConfigStoreParentsPath; // rax
  bool v30; // cc
  const WCHAR *GameConfigStoreChildrenPath; // rax
  unsigned int dwOptions; // [rsp+20h] [rbp-E0h]
  unsigned int samDesired; // [rsp+28h] [rbp-D8h]
  unsigned __int16 *lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  char v36; // [rsp+60h] [rbp-A0h]
  DWORD dwDisposition; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE hTransaction; // [rsp+68h] [rbp-98h]
  HKEY v39; // [rsp+70h] [rbp-90h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-88h] BYREF
  LPCWSTR lpSubKey; // [rsp+80h] [rbp-80h]
  HKEY phkResult; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int16 *v43; // [rsp+90h] [rbp-70h] BYREF
  HKEY v44; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+A0h] [rbp-60h] BYREF
  HKEY v46; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int16 *v47; // [rsp+B0h] [rbp-50h] BYREF
  ExecutionModel::Internal *v48; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v49; // [rsp+C0h] [rbp-40h] BYREF
  void *Block; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+D0h] [rbp-30h]
  unsigned int v52; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v53; // [rsp+E0h] [rbp-20h] BYREF
  ExecutionModel::Internal *v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+F0h] [rbp-10h]
  WCHAR SubKey[48]; // [rsp+100h] [rbp+0h] BYREF

  v48 = a2;
  v47 = 0LL;
  v4 = 0LL;
  hKey = 0LL;
  v5 = 0;
  v44 = 0LL;
  v6 = 0;
  phkResult = 0LL;
  v7 = 0;
  v46 = 0LL;
  v39 = 0LL;
  v36 = 0;
  lpSubKey = a4;
  UserHKCU = ExecutionModel::Internal::GetUserHKCU(this, (unsigned __int16 *)&hKey, a3);
  if ( UserHKCU >= 0 )
  {
    hTransaction = PrivCreateTransaction(v10, v9, v12, v13, dwOptions, samDesired, lpSecurityAttributes);
    if ( hTransaction == (HANDLE)-1LL )
    {
      LastError = GetLastError();
      UserHKCU = LastError;
      if ( LastError > 0 )
        UserHKCU = (unsigned __int16)LastError | 0x80070000;
LABEL_48:
      Common::CloseHandleHelper((Common *)hTransaction, v15);
      goto LABEL_49;
    }
    UserHKCU = Common::RegistryKey::OpenSubKey(a3, lpSubKey, 0x20019u, &v39);
    if ( UserHKCU < 0 || (UserHKCU = Common::RegistryKey::GetUInt32Value(&v39, L"Type", (BYTE *)&v52), UserHKCU < 0) )
    {
LABEL_46:
      if ( !v36 )
        ExecutionModel::Internal::Cleanup_PermanentStoreOperation((ExecutionModel::Internal *)hTransaction, v15);
      goto LABEL_48;
    }
    Block = 0LL;
    LODWORD(v49) = 0;
    v51 = 0;
    Value = Common::RegistryKey::GetValue(&v39, L"Parent", v16, (struct Common::ByteBuffer *)&v49);
    UserHKCU = 0;
    if ( Value < 0 )
      UserHKCU = Value;
    if ( UserHKCU < 0 )
    {
LABEL_45:
      operator delete(Block);
      goto LABEL_46;
    }
    v54 = 0LL;
    v53 = 0;
    v55 = 0;
    UserHKCU = ExecutionModel::Internal::DecryptString(
                 (BYTE *)Block,
                 (const unsigned __int8 *)(unsigned int)v49,
                 (Common::StringBuffer *)&v53,
                 v18);
    if ( UserHKCU < 0
      || (UserHKCU = ExecutionModel::Internal::CalcSHA1(v54, SubKey, v19), UserHKCU < 0)
      || (ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                                     (HKEY *)v48,
                                     SubKey,
                                     (unsigned __int16 *)&v47,
                                     &v43),
          v4 = v47,
          UserHKCU = ParentsChildrenStrings,
          ParentsChildrenStrings < 0)
      || (UserHKCU = StringCchLengthW(v47, 0x7FFFFFFFLL, &v45), UserHKCU < 0) )
    {
LABEL_44:
      Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v53);
      goto LABEL_45;
    }
    v22 = v45;
    v23 = (char *)v4;
    if ( v45 )
    {
      while ( 1 )
      {
        v24 = (unsigned __int16 *)v23;
        do
        {
          v25 = *(unsigned __int16 *)((char *)v24 + (char *)lpSubKey - v23);
          v26 = *v24 - v25;
          if ( v26 )
            break;
          ++v24;
        }
        while ( v25 );
        if ( v26 )
        {
          v23 += 2 * v22 + 2;
          v6 = 1;
          v5 += v22 + 1;
        }
        else
        {
          UserHKCU = StringCchCopyW(v23, (unsigned int)v43, &v23[2 * v22 + 2]);
          if ( UserHKCU < 0 )
            goto LABEL_44;
          v7 = 1;
        }
        UserHKCU = StringCchLengthW((const unsigned __int16 *)v23, 0x7FFFFFFFLL, &v45);
        if ( UserHKCU < 0 )
          goto LABEL_44;
        v22 = v45;
        if ( !v45 )
        {
          if ( !v6 )
            break;
          if ( !v7 )
            goto LABEL_33;
          v27 = RegCreateKeyTransactedW(
                  *(HKEY *)v48,
                  SubKey,
                  0,
                  0LL,
                  0,
                  0xF003Fu,
                  0LL,
                  &phkResult,
                  &dwDisposition,
                  hTransaction,
                  0LL);
          UserHKCU = v27;
          v28 = v27 <= 0;
          if ( v27 )
            goto LABEL_41;
          if ( dwDisposition == 2 )
          {
            v4[v5] = 0;
            UserHKCU = Common::RegistryKey::SetValue(&phkResult, L"Children", (const BYTE *)v4, 2 * v5 + 2, 7u);
            if ( UserHKCU >= 0 )
              goto LABEL_33;
            goto LABEL_44;
          }
          goto LABEL_35;
        }
      }
    }
    GameConfigStoreParentsPath = ExecutionModel::Internal::GetGameConfigStoreParentsPath(v21);
    v27 = RegCreateKeyTransactedW(
            hKey,
            GameConfigStoreParentsPath,
            0,
            0LL,
            0,
            0xF003Fu,
            0LL,
            &v44,
            &dwDisposition,
            hTransaction,
            0LL);
    v30 = v27 <= 0;
    if ( !v27 )
    {
      if ( dwDisposition != 2 )
      {
LABEL_35:
        UserHKCU = -2147418113;
        goto LABEL_44;
      }
      v27 = RegDeleteKeyTransactedW(v44, SubKey, 0, 0, hTransaction, 0LL);
      v30 = v27 <= 0;
      if ( !v27 )
      {
LABEL_33:
        GameConfigStoreChildrenPath = ExecutionModel::Internal::GetGameConfigStoreChildrenPath(v21);
        v27 = RegCreateKeyTransactedW(
                hKey,
                GameConfigStoreChildrenPath,
                0,
                0LL,
                0,
                0xF003Fu,
                0LL,
                &v46,
                &dwDisposition,
                hTransaction,
                0LL);
        v30 = v27 <= 0;
        if ( !v27 )
        {
          if ( dwDisposition != 2 )
            goto LABEL_35;
          v27 = RegDeleteKeyTransactedW(v46, lpSubKey, 0, 0, hTransaction, 0LL);
          v30 = v27 <= 0;
          if ( !v27 )
          {
            if ( (unsigned int)CommitTransaction(hTransaction) )
            {
              v36 = 1;
              goto LABEL_44;
            }
            v27 = GetLastError();
            UserHKCU = v27;
            v28 = v27 <= 0;
LABEL_41:
            if ( v28 )
              goto LABEL_44;
            goto LABEL_42;
          }
        }
      }
    }
    if ( v30 )
    {
      UserHKCU = v27;
      goto LABEL_44;
    }
LABEL_42:
    UserHKCU = (unsigned __int16)v27 | 0x80070000;
    goto LABEL_44;
  }
LABEL_49:
  Common::AutoHandleCloseHKEY<HKEY__ *>(v39);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v46);
  Common::AutoHandleCloseHKEY<HKEY__ *>(phkResult);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v44);
  Common::AutoHandleCloseHKEY<HKEY__ *>(hKey);
  operator delete(v4);
  return (unsigned int)UserHKCU;
}
