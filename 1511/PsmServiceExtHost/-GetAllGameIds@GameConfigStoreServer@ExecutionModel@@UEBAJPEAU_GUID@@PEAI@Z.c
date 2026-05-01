/*
 * XREFs of ?GetAllGameIds@GameConfigStoreServer@ExecutionModel@@UEBAJPEAU_GUID@@PEAI@Z @ 0x180049150
 * Callers:
 *     <none>
 * Callees:
 *     ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x180027DBC (-EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z.c)
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x180027EF0 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x1800543AC (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 */

LSTATUS __fastcall ExecutionModel::GameConfigStoreServer::GetAllGameIds(
        ExecutionModel::GameConfigStoreServer *this,
        struct _GUID *a2,
        unsigned int *a3)
{
  LSTATUS result; // eax
  HKEY *v6; // r15
  HKEY v7; // rcx
  int v8; // ebx
  DWORD v9; // ecx
  DWORD v10; // esi
  struct _FILETIME *v11; // r9
  unsigned int i; // edx
  __int64 v13; // rax
  void *v14; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int16 *v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  DWORD cSubKeys; // [rsp+B0h] [rbp+30h] BYREF

  if ( !a3 )
    return -2147024809;
  v6 = (HKEY *)((char *)this + 8);
  v7 = (HKEY)*((_QWORD *)this + 1);
  cSubKeys = 0;
  result = RegQueryInfoKeyW(v7, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  v8 = result;
  if ( result >= 0 )
  {
    v9 = cSubKeys;
    if ( a2 )
    {
      if ( *a3 < cSubKeys )
        return -2147024662;
      v10 = 0;
      if ( cSubKeys )
      {
        while ( 1 )
        {
          v15 = 0LL;
          LODWORD(v14) = 0;
          v16 = 0;
          v8 = Common::StringBuffer::SetCapacity(&v14, 0xFFu);
          if ( v8 < 0 )
            break;
          v8 = Common::RegistryKey::EnumKey(v6, v10, (struct Common::StringBuffer *)&v14, v11);
          if ( v8 < 0 )
            break;
          v8 = Common::Guid::Decode(v15, (unsigned int)v14, &a2[v10]);
          if ( v8 < 0 )
            break;
          Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v14);
          v9 = cSubKeys;
          if ( ++v10 >= cSubKeys )
            goto LABEL_12;
        }
        Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v14);
        return v8;
      }
LABEL_12:
      for ( i = v9; i < *a3; a2[v13] = (struct _GUID)xmmword_180059730 )
        v13 = i++;
    }
    *a3 = v9;
    return v8;
  }
  return result;
}
