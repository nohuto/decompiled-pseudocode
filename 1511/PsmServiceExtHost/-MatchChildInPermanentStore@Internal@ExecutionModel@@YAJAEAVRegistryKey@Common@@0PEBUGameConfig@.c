/*
 * XREFs of ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x180049F50
 * Callers:
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180048950 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x18004A370 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x18001C854 (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x180027A48 (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x180027B70 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x180049400 (-GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z.c)
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x1800543AC (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 *     wcsistr @ 0x180054A8C (wcsistr.c)
 */

__int64 __fastcall ExecutionModel::Internal::MatchChildInPermanentStore(
        HKEY *this,
        struct Common::RegistryKey *a2,
        ExecutionModel::Internal **a3,
        const struct ExecutionModel::GameConfig *a4,
        bool *a5,
        struct _GUID *a6)
{
  void *v6; // rbx
  struct _GUID *v7; // r12
  char v8; // r13
  char v11; // r14
  __int64 result; // rax
  LSTATUS v13; // eax
  int v14; // edi
  bool v15; // sf
  unsigned int v16; // ecx
  ExecutionModel::Internal *v17; // r8
  __int64 v18; // rdx
  int ParentsChildrenStrings; // eax
  unsigned __int16 *v20; // r11
  unsigned int v21; // r12d
  int v22; // r13d
  __int64 v23; // r8
  bool v24; // di
  __int64 *v25; // r15
  const unsigned __int16 **v26; // rbx
  __int64 v27; // r14
  const unsigned __int16 *v28; // rdx
  unsigned __int16 *v29; // rdx
  __int64 v30; // r8
  int v31; // eax
  int v32; // ecx
  __int64 v33; // r13
  __int64 v34; // rax
  char v35; // [rsp+30h] [rbp-D0h]
  char v36; // [rsp+31h] [rbp-CFh]
  int v37; // [rsp+34h] [rbp-CCh]
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v39[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v41; // [rsp+50h] [rbp-B0h]
  void *Block; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+70h] [rbp-90h]
  struct _GUID *v46; // [rsp+78h] [rbp-88h]
  const struct ExecutionModel::GameConfig *v47; // [rsp+80h] [rbp-80h]
  Common::RegistryKey *v48; // [rsp+88h] [rbp-78h]
  struct _GUID *v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h] BYREF
  int v51; // [rsp+A0h] [rbp-60h]
  WCHAR SubKey[48]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 0LL;
  v7 = a6;
  v8 = 1;
  v47 = a4;
  v48 = a2;
  v46 = (struct _GUID *)a5;
  v11 = 0;
  v49 = a6;
  v40 = 0;
  v35 = 1;
  *(_BYTE *)a4 = 0;
  if ( a5 )
    *(_OWORD *)a5 = xmmword_180059730;
  if ( a6 )
    LOBYTE(a6->Data1) = 0;
  result = ExecutionModel::Internal::GetGameParentIdentifier(a3, SubKey, (unsigned __int16 *)a3);
  if ( (int)result < 0 )
    return result;
  v13 = RegOpenKeyExW(*this, SubKey, 0, 0x20019u, &hKey);
  v14 = v13;
  if ( v13 )
  {
    if ( (unsigned int)(v13 - 2) <= 1 )
    {
      v11 = 0;
      v14 = 0;
    }
    else
    {
      v15 = v13 < 0;
      if ( v13 <= 0 )
        goto LABEL_13;
      v14 = (unsigned __int16)v13 | 0x80070000;
    }
    v15 = v14 < 0;
LABEL_13:
    if ( v15 )
      return (unsigned int)v14;
    goto LABEL_14;
  }
  v11 = 1;
  RegCloseKey(hKey);
  v14 = 0;
LABEL_14:
  if ( !a3[3] )
    return 2147942487LL;
  if ( !v11 )
    goto LABEL_61;
  Block = 0LL;
  *(_QWORD *)v39 = 0LL;
  v11 = 0;
  v50 = -1LL;
  v16 = 0;
  v51 = -1;
  v36 = 0;
  if ( *((_DWORD *)a3 + 4) )
  {
    v17 = a3[1];
    while ( *((int *)v17 + 4 * v16) < 3 )
    {
      v18 = *((int *)v17 + 4 * v16);
      if ( *((_DWORD *)&v50 + v18) != -1 )
        break;
      *((_DWORD *)&v50 + v18) = v16++;
      if ( v16 >= *((_DWORD *)a3 + 4) )
        goto LABEL_22;
    }
    v14 = -2147024809;
LABEL_67:
    operator delete(v6);
    return (unsigned int)v14;
  }
LABEL_22:
  ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                             this,
                             SubKey,
                             (unsigned __int16 *)&Block,
                             0LL);
  v6 = Block;
  v14 = ParentsChildrenStrings;
  if ( ParentsChildrenStrings < 0 )
    goto LABEL_67;
  v41 = (unsigned __int16 *)Block;
  v14 = StringCchLengthW((const unsigned __int16 *)Block, 0x7FFFFFFFLL, (unsigned __int64 *)v39);
  if ( v14 < 0 )
    goto LABEL_67;
  if ( !*(_QWORD *)v39 )
    goto LABEL_60;
  do
  {
    v37 = 0;
    hKey = 0LL;
    v21 = 0;
    v22 = 0;
    v14 = Common::RegistryKey::OpenSubKey((HKEY *)v48, v20, 0x20019u, &hKey);
    if ( v14 < 0 )
    {
LABEL_65:
      if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        RegCloseKey(hKey);
      goto LABEL_67;
    }
    v24 = 1;
    v25 = &v50;
    v26 = (const unsigned __int16 **)&ExecutionModel::Strings::DescriptorKeys;
    v27 = 3LL;
    do
    {
      v28 = *v26;
      v44 = 0LL;
      v43 = 0;
      v45 = 0;
      if ( Common::RegistryKey::GetStringValue(&hKey, v28, v23, (struct Common::StringBuffer *)&v43) < 0 )
      {
        if ( v24 )
          v24 = *(_DWORD *)v25 == -1;
      }
      else
      {
        ++v21;
        if ( v24 )
        {
          if ( *(_DWORD *)v25 == -1 )
            v24 = 0;
          if ( v24 )
          {
            if ( *(_DWORD *)v25 == -1 )
              goto LABEL_40;
            v29 = (unsigned __int16 *)*((_QWORD *)a3[1] + 2 * *(unsigned int *)v25 + 1);
            v30 = v44 - (_QWORD)v29;
            do
            {
              v31 = *(unsigned __int16 *)((char *)v29 + v30);
              v32 = *v29 - v31;
              if ( v32 )
                break;
              ++v29;
            }
            while ( v31 );
            v24 = v32 == 0;
          }
        }
        if ( *(_DWORD *)v25 == -1 )
          goto LABEL_40;
        v33 = 2LL * *(unsigned int *)v25;
        if ( !wcsistr(v44, *((_QWORD *)a3[1] + 2 * *(unsigned int *)v25 + 1)) )
        {
          v34 = wcsistr(*((_QWORD *)a3[1] + v33 + 1), v44);
          v22 = v37;
          if ( v34 )
            goto LABEL_45;
LABEL_40:
          v37 = ++v22;
          goto LABEL_45;
        }
        v22 = v37;
      }
LABEL_45:
      Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v43);
      ++v26;
      v25 = (__int64 *)((char *)v25 + 4);
      --v27;
    }
    while ( v27 );
    v6 = Block;
    v11 = v36;
    if ( v35 && v21 )
    {
      v8 = v22 != 0 ? v35 : 0;
      v35 = v8;
    }
    else
    {
      v8 = v35;
    }
    if ( v24 && (!v36 || v21 > v40) )
    {
      v11 = 1;
      v36 = 1;
      v40 = v21;
      if ( v46 )
      {
        v14 = Common::Guid::Decode(v41, v39[0], v46);
        if ( v14 < 0 )
          goto LABEL_65;
      }
    }
    v41 += *(_QWORD *)v39 + 1;
    v14 = StringCchLengthW(v41, 0x7FFFFFFFLL, (unsigned __int64 *)v39);
    if ( v14 < 0 )
      goto LABEL_65;
    if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      RegCloseKey(hKey);
      v20 = v41;
    }
  }
  while ( *(_QWORD *)v39 );
  v7 = v49;
LABEL_60:
  operator delete(v6);
LABEL_61:
  *(_BYTE *)v47 = v11;
  if ( v7 )
    LOBYTE(v7->Data1) = v8;
  return (unsigned int)v14;
}
