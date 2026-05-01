/*
 * XREFs of ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180043F30
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x18001C620 (-EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z.c)
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x18001C764 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18001C8F0 (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x18004D88C (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetAllGameIds(
        ExecutionModel::GameConfigStoreServer *this,
        struct _GUID *a2,
        unsigned int *a3)
{
  const WCHAR *v6; // rcx
  int v7; // ebx
  DWORD v8; // ecx
  DWORD v9; // esi
  struct _FILETIME *v10; // r9
  unsigned int i; // edx
  __int64 v12; // rax
  HKEY v13; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int16 v14[4]; // [rsp+68h] [rbp+Fh] BYREF
  void *v15; // [rsp+70h] [rbp+17h] BYREF
  unsigned __int16 *v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+80h] [rbp+27h]
  DWORD cSubKeys; // [rsp+D0h] [rbp+77h] BYREF
  HKEY hKey; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( !a3 )
    return 2147942487LL;
  v6 = (const WCHAR *)*((_QWORD *)this + 1);
  *(_QWORD *)v14 = 0LL;
  v13 = 0LL;
  hKey = 0LL;
  v7 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v6, (HKEY *)v14, &v13, &hKey);
  if ( v7 >= 0 )
  {
    cSubKeys = 0;
    v7 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v7 >= 0 )
    {
      if ( a2 )
      {
        v8 = cSubKeys;
        if ( *a3 >= cSubKeys )
        {
          v9 = 0;
          if ( cSubKeys )
          {
            while ( 1 )
            {
              v16 = 0LL;
              LODWORD(v15) = 0;
              v17 = 0;
              v7 = Common::StringBuffer::SetCapacity(&v15, 0xFFu);
              if ( v7 < 0 )
                break;
              v7 = Common::RegistryKey::EnumKey(&hKey, v9, (struct Common::StringBuffer *)&v15, v10);
              if ( v7 < 0 )
                break;
              v7 = Common::Guid::Decode(v16, (unsigned int)v15, &a2[v9]);
              if ( v7 < 0 )
                break;
              Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v15);
              v8 = cSubKeys;
              if ( ++v9 >= cSubKeys )
                goto LABEL_14;
            }
            Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v15);
          }
          else
          {
LABEL_14:
            for ( i = v8; i < *a3; a2[v12] = (struct _GUID)xmmword_180050678 )
              v12 = i++;
            *a3 = v8;
          }
        }
        else
        {
          v7 = -2147024662;
        }
      }
      else
      {
        *a3 = cSubKeys;
      }
    }
  }
  Common::AutoHandleCloseHKEY<HKEY__ *>(hKey);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v13);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v14);
  return (unsigned int)v7;
}
