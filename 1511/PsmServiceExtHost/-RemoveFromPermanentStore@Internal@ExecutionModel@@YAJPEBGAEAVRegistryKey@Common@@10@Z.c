/*
 * XREFs of ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598
 * Callers:
 *     ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@@Z @ 0x18004AA70 (-RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006CD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180007010 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x18001C854 (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180020884 (-GetGameConfigStoreParentsPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ @ 0x180020894 (-GetGameConfigStoreChildrenPath@Internal@ExecutionModel@@YAPEBGXZ.c)
 *     ?GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x180025B08 (-GetUserHKCU@Internal@ExecutionModel@@YAJPEBGPEAPEAUHKEY__@@@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x180027A48 (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z @ 0x180027CC4 (-SetValue@RegistryKey@Common@@QEAAJPEBGPEBXKK@Z.c)
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x180027CF8 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x180047E90 (-CloseHandleHelper@Common@@YAXPEAX@Z.c)
 *     ?Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z @ 0x180048AFC (-Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z.c)
 *     ?DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z @ 0x180048B28 (-DecryptString@Internal@ExecutionModel@@YAJPEBEKAEAVStringBuffer@Common@@@Z.c)
 *     ?GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z @ 0x180049E80 (-GetValue@RegistryKey@Common@@QEAAJPEBG_KAEAVByteBuffer@2@PEAK@Z.c)
 *     ?CommitTransaction@@YAHPEAX@Z @ 0x18004B818 (-CommitTransaction@@YAHPEAX@Z.c)
 *     ?PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z @ 0x18004B84C (-PrivCreateTransaction@@YAPEAXPEAU_SECURITY_ATTRIBUTES@@PEAU_GUID@@KKKKPEAG@Z.c)
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
  int UserHKCU; // eax
  struct _GUID *v10; // rdx
  struct _SECURITY_ATTRIBUTES *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  HKEY v14; // rdi
  int UInt32Value; // esi
  signed int LastError; // eax
  void *v17; // rdx
  __int64 v18; // r8
  int Value; // eax
  struct Common::StringBuffer *v20; // r9
  unsigned __int16 *v21; // r8
  int ParentsChildrenStrings; // eax
  ExecutionModel::Internal *v23; // rcx
  HKEY v24; // rax
  char *v25; // r14
  unsigned __int16 *v26; // rcx
  int v27; // r8d
  int v28; // edx
  signed int v29; // eax
  bool v30; // cc
  const WCHAR *GameConfigStoreParentsPath; // rax
  bool v32; // cc
  const WCHAR *GameConfigStoreChildrenPath; // rax
  unsigned int dwOptions; // [rsp+20h] [rbp-E0h]
  unsigned int samDesired; // [rsp+28h] [rbp-D8h]
  unsigned __int16 *lpSecurityAttributes; // [rsp+30h] [rbp-D0h]
  char v38; // [rsp+60h] [rbp-A0h]
  DWORD dwDisposition; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE hTransaction; // [rsp+68h] [rbp-98h]
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  HKEY v42; // [rsp+78h] [rbp-88h] BYREF
  LPCWSTR lpSubKey; // [rsp+80h] [rbp-80h]
  HKEY phkResult; // [rsp+88h] [rbp-78h] BYREF
  HKEY v45; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v46; // [rsp+98h] [rbp-68h] BYREF
  HKEY v47; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 *v48; // [rsp+A8h] [rbp-58h] BYREF
  ExecutionModel::Internal *v49; // [rsp+B0h] [rbp-50h]
  unsigned __int8 *v50; // [rsp+B8h] [rbp-48h] BYREF
  void *Block; // [rsp+C0h] [rbp-40h]
  int v52; // [rsp+C8h] [rbp-38h]
  unsigned int v53; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v54; // [rsp+D8h] [rbp-28h] BYREF
  ExecutionModel::Internal *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  WCHAR SubKey[48]; // [rsp+F0h] [rbp-10h] BYREF

  v49 = a2;
  v48 = 0LL;
  v4 = 0LL;
  hKey = 0LL;
  v5 = 0;
  v45 = 0LL;
  v6 = 0;
  phkResult = 0LL;
  v7 = 0;
  v47 = 0LL;
  v42 = 0LL;
  v38 = 0;
  lpSubKey = a4;
  UserHKCU = ExecutionModel::Internal::GetUserHKCU(this, (unsigned __int16 *)&hKey, a3);
  v14 = hKey;
  UInt32Value = UserHKCU;
  if ( UserHKCU >= 0 )
  {
    hTransaction = PrivCreateTransaction(v11, v10, v12, v13, dwOptions, samDesired, lpSecurityAttributes);
    if ( hTransaction == (HANDLE)-1LL )
    {
      LastError = GetLastError();
      UInt32Value = LastError;
      if ( LastError > 0 )
        UInt32Value = (unsigned __int16)LastError | 0x80070000;
LABEL_48:
      Common::CloseHandleHelper((Common *)hTransaction, v17);
      goto LABEL_49;
    }
    UInt32Value = Common::RegistryKey::OpenSubKey(a3, lpSubKey, 0x20019u, &v42);
    if ( UInt32Value < 0
      || (UInt32Value = Common::RegistryKey::GetUInt32Value(&v42, L"Type", (BYTE *)&v53), UInt32Value < 0) )
    {
LABEL_46:
      if ( !v38 )
        ExecutionModel::Internal::Cleanup_PermanentStoreOperation((ExecutionModel::Internal *)hTransaction, v17);
      goto LABEL_48;
    }
    Block = 0LL;
    LODWORD(v50) = 0;
    v52 = 0;
    Value = Common::RegistryKey::GetValue(&v42, L"Parent", v18, (struct Common::ByteBuffer *)&v50);
    UInt32Value = 0;
    if ( Value < 0 )
      UInt32Value = Value;
    if ( UInt32Value < 0 )
    {
LABEL_45:
      operator delete(Block);
      goto LABEL_46;
    }
    v55 = 0LL;
    v54 = 0;
    v56 = 0;
    UInt32Value = ExecutionModel::Internal::DecryptString(
                    (BYTE *)Block,
                    (const unsigned __int8 *)(unsigned int)v50,
                    (Common::StringBuffer *)&v54,
                    v20);
    if ( UInt32Value < 0
      || (UInt32Value = ExecutionModel::Internal::CalcSHA1(v55, SubKey, v21), UInt32Value < 0)
      || (ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                                     (HKEY *)v49,
                                     SubKey,
                                     (unsigned __int16 *)&v48,
                                     &v46),
          v4 = v48,
          UInt32Value = ParentsChildrenStrings,
          ParentsChildrenStrings < 0)
      || (UInt32Value = StringCchLengthW(v48, 0x7FFFFFFFLL, (unsigned __int64 *)&hKey), UInt32Value < 0) )
    {
LABEL_44:
      Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v54);
      goto LABEL_45;
    }
    v24 = hKey;
    v25 = (char *)v4;
    if ( hKey )
    {
      while ( 1 )
      {
        v26 = (unsigned __int16 *)v25;
        do
        {
          v27 = *(unsigned __int16 *)((char *)v26 + (char *)lpSubKey - v25);
          v28 = *v26 - v27;
          if ( v28 )
            break;
          ++v26;
        }
        while ( v27 );
        if ( v28 )
        {
          v25 += 2 * (_QWORD)v24 + 2;
          v6 = 1;
          v5 += (_DWORD)v24 + 1;
        }
        else
        {
          UInt32Value = StringCchCopyW(v25, (unsigned int)v46, &v25[2 * ((_QWORD)v24 + 1)]);
          if ( UInt32Value < 0 )
            goto LABEL_44;
          v7 = 1;
        }
        UInt32Value = StringCchLengthW((const unsigned __int16 *)v25, 0x7FFFFFFFLL, (unsigned __int64 *)&hKey);
        if ( UInt32Value < 0 )
          goto LABEL_44;
        v24 = hKey;
        if ( !hKey )
        {
          if ( !v6 )
            break;
          if ( !v7 )
            goto LABEL_33;
          v29 = RegCreateKeyTransactedW(
                  *(HKEY *)v49,
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
          UInt32Value = v29;
          v30 = v29 <= 0;
          if ( v29 )
            goto LABEL_41;
          if ( dwDisposition == 2 )
          {
            v4[v5] = 0;
            UInt32Value = Common::RegistryKey::SetValue(&phkResult, L"Children", (const BYTE *)v4, 2 * v5 + 2, 7u);
            if ( UInt32Value >= 0 )
              goto LABEL_33;
            goto LABEL_44;
          }
          goto LABEL_35;
        }
      }
    }
    GameConfigStoreParentsPath = ExecutionModel::Internal::GetGameConfigStoreParentsPath(v23);
    v29 = RegCreateKeyTransactedW(
            v14,
            GameConfigStoreParentsPath,
            0,
            0LL,
            0,
            0xF003Fu,
            0LL,
            &v45,
            &dwDisposition,
            hTransaction,
            0LL);
    v32 = v29 <= 0;
    if ( !v29 )
    {
      if ( dwDisposition != 2 )
      {
LABEL_35:
        UInt32Value = -2147418113;
        goto LABEL_44;
      }
      v29 = RegDeleteKeyTransactedW(v45, SubKey, 0, 0, hTransaction, 0LL);
      v32 = v29 <= 0;
      if ( !v29 )
      {
LABEL_33:
        GameConfigStoreChildrenPath = ExecutionModel::Internal::GetGameConfigStoreChildrenPath(v23);
        v29 = RegCreateKeyTransactedW(
                v14,
                GameConfigStoreChildrenPath,
                0,
                0LL,
                0,
                0xF003Fu,
                0LL,
                &v47,
                &dwDisposition,
                hTransaction,
                0LL);
        v32 = v29 <= 0;
        if ( !v29 )
        {
          if ( dwDisposition != 2 )
            goto LABEL_35;
          v29 = RegDeleteKeyTransactedW(v47, lpSubKey, 0, 0, hTransaction, 0LL);
          v32 = v29 <= 0;
          if ( !v29 )
          {
            if ( (unsigned int)CommitTransaction(hTransaction) )
            {
              v38 = 1;
              goto LABEL_44;
            }
            v29 = GetLastError();
            UInt32Value = v29;
            v30 = v29 <= 0;
LABEL_41:
            if ( v30 )
              goto LABEL_44;
            goto LABEL_42;
          }
        }
      }
    }
    if ( v32 )
    {
      UInt32Value = v29;
      goto LABEL_44;
    }
LABEL_42:
    UInt32Value = (unsigned __int16)v29 | 0x80070000;
    goto LABEL_44;
  }
LABEL_49:
  if ( (unsigned __int64)v42 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v42);
  if ( (unsigned __int64)v47 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v47);
  if ( (unsigned __int64)phkResult - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(phkResult);
  if ( (unsigned __int64)v45 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v45);
  if ( (unsigned __int64)v14 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(v14);
  operator delete(v4);
  return (unsigned int)UInt32Value;
}
