/*
 * XREFs of ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x18001C610
 * Callers:
 *     ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x18001C740 (-GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180006AB0 (-GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180007010 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x18001C854 (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x180027A48 (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x180027B70 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x180027CF8 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?FuzzyMatchProcessValue@Internal@ExecutionModel@@YA_NPEBG0@Z @ 0x180049058 (-FuzzyMatchProcessValue@Internal@ExecutionModel@@YA_NPEBG0@Z.c)
 *     ?GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x1800499A0 (-GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180049A3C (-GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180049D8C (-GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x18004B700 (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x1800543AC (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 *     wcsistr @ 0x180054A8C (wcsistr.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetWin32GameIdFromPID(
        ExecutionModel::GameConfigStoreServer *this,
        DWORD a2,
        struct _GUID *a3)
{
  unsigned __int16 *v4; // rdi
  unsigned __int16 *v5; // rbx
  unsigned __int16 *v6; // rsi
  unsigned __int16 *v7; // r14
  char v8; // r13
  unsigned __int16 *v9; // r8
  int ProcessNameByPID; // r15d
  int ParentsChildrenStrings; // eax
  unsigned __int16 *v13; // r11
  ExecutionModel::Internal *v14; // rcx
  bool matched; // r12
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  const unsigned __int16 *v18; // rdx
  const unsigned __int16 *v19; // r15
  unsigned __int16 **v20; // r8
  int ProcessParentDirectoryByPID; // eax
  int ProcessWorkingDirectoryByPID; // eax
  int ProcessArgsByPID; // eax
  unsigned __int16 *v24; // r12
  __int64 v25; // rdx
  const unsigned __int16 *v26; // r9
  unsigned int v27; // r12d
  unsigned int *v28; // [rsp+20h] [rbp-E0h]
  unsigned int *v29; // [rsp+20h] [rbp-E0h]
  char v30; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+31h] [rbp-CFh]
  unsigned int v32; // [rsp+34h] [rbp-CCh]
  unsigned int v33; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v34; // [rsp+40h] [rbp-C0h] BYREF
  DWORD dwProcessId; // [rsp+48h] [rbp-B8h]
  int v36; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v37; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v40; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v41[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42[2]; // [rsp+78h] [rbp-88h] BYREF
  void *Block; // [rsp+80h] [rbp-80h] BYREF
  LPCWSTR lpStringValue[2]; // [rsp+90h] [rbp-70h] BYREF
  int v45; // [rsp+A0h] [rbp-60h]
  ExecutionModel::Internal *v46; // [rsp+B0h] [rbp-50h]
  ExecutionModel::GameConfigStoreServer *v47; // [rsp+B8h] [rbp-48h]
  struct _GUID *v48; // [rsp+C0h] [rbp-40h]
  struct _GUID v49; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v50[48]; // [rsp+E0h] [rbp-20h] BYREF

  v48 = a3;
  dwProcessId = a2;
  v47 = this;
  Block = 0LL;
  v34 = 0LL;
  *(_QWORD *)v39 = 0LL;
  *a3 = (struct _GUID)xmmword_180059730;
  v4 = 0LL;
  *(_QWORD *)v41 = 0LL;
  v5 = 0LL;
  *(_QWORD *)v42 = 0LL;
  v6 = 0LL;
  v37 = 0LL;
  v7 = 0LL;
  v33 = 0;
  v8 = 0;
  v30 = 0;
  ProcessNameByPID = ExecutionModel::Internal::GetProcessNameByPID(
                       a2,
                       (unsigned __int16 **)&Block,
                       (unsigned __int16 **)a2);
  if ( ProcessNameByPID < 0 )
    goto LABEL_4;
  ProcessNameByPID = ExecutionModel::Internal::CalcSHA1((ExecutionModel::Internal *)Block, v50, v9);
  if ( ProcessNameByPID < 0 )
    goto LABEL_4;
  ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                             (ExecutionModel::GameConfigStoreServer *)((char *)this + 16),
                             (struct Common::RegistryKey *)v50,
                             (const unsigned __int16 *)&v34,
                             0LL,
                             v28);
  v4 = v34;
  ProcessNameByPID = ParentsChildrenStrings;
  if ( ParentsChildrenStrings < 0 )
    goto LABEL_4;
  ProcessNameByPID = StringCchLengthW(v34, 0x7FFFFFFFLL, &v37);
  if ( ProcessNameByPID < 0 )
    goto LABEL_4;
  if ( !v37 )
    goto LABEL_58;
  v14 = (ExecutionModel::GameConfigStoreServer *)((char *)this + 8);
  v46 = (ExecutionModel::GameConfigStoreServer *)((char *)this + 8);
  while ( 2 )
  {
    v32 = 0;
    hKey = 0LL;
    matched = 1;
    ProcessNameByPID = Common::RegistryKey::OpenSubKey(v14, v13, 0x20019u, (struct Common::AutoHandleHKEY *)&hKey);
    if ( ProcessNameByPID < 0 )
      goto LABEL_51;
    ProcessNameByPID = Common::RegistryKey::GetUInt32Value((Common::RegistryKey *)&hKey, L"Revision", &v40);
    if ( ProcessNameByPID < 0 )
      goto LABEL_51;
    v17 = 0LL;
    v36 = 0;
    while ( (unsigned int)v17 < 3 )
    {
      lpStringValue[1] = 0LL;
      v18 = (const unsigned __int16 *)(&ExecutionModel::Strings::DescriptorKeys)[v17];
      LODWORD(lpStringValue[0]) = 0;
      v19 = 0LL;
      v45 = 0;
      v31 = 0;
      if ( Common::RegistryKey::GetStringValue(
             (Common::RegistryKey *)&hKey,
             v18,
             v16,
             (struct Common::StringBuffer *)lpStringValue,
             v29) >= 0 )
      {
        ++v32;
        matched = 0;
        if ( v36 )
        {
          if ( v36 == 1 )
          {
            if ( !v6 )
            {
              ProcessWorkingDirectoryByPID = ExecutionModel::Internal::GetProcessWorkingDirectoryByPID(
                                               dwProcessId,
                                               (unsigned int)v41,
                                               v20);
              v6 = *(unsigned __int16 **)v41;
              ProcessNameByPID = ProcessWorkingDirectoryByPID;
              if ( ProcessWorkingDirectoryByPID < 0 )
              {
LABEL_50:
                Common::StringBuffer::~StringBuffer((Common::StringBuffer *)lpStringValue);
                goto LABEL_51;
              }
            }
            v19 = v6;
          }
          else
          {
            if ( v36 != 2 )
              goto LABEL_31;
            if ( !v7 )
            {
              ProcessParentDirectoryByPID = ExecutionModel::Internal::GetProcessParentDirectoryByPID(
                                              dwProcessId,
                                              (unsigned int)v42,
                                              v20);
              v7 = *(unsigned __int16 **)v42;
              ProcessNameByPID = ProcessParentDirectoryByPID;
              if ( ProcessParentDirectoryByPID < 0 )
                goto LABEL_50;
            }
            v19 = v7;
          }
        }
        else
        {
          if ( !v5 )
          {
            ProcessArgsByPID = ExecutionModel::Internal::GetProcessArgsByPID(dwProcessId, (unsigned int)v39, v20);
            v5 = *(unsigned __int16 **)v39;
            ProcessNameByPID = ProcessArgsByPID;
            if ( ProcessArgsByPID < 0 )
              goto LABEL_50;
            if ( !*(_QWORD *)v39 || (v30 = 1, !**(_WORD **)v39) )
              v30 = 0;
          }
          v19 = v5;
          v31 = 1;
        }
        if ( !v19 || !wcsistr(v19, lpStringValue[1]) )
        {
LABEL_31:
          if ( v31 && v40 <= 1 )
            matched = ExecutionModel::Internal::FuzzyMatchProcessValue(
                        lpStringValue[1],
                        v19,
                        (const unsigned __int16 *)v20);
          goto LABEL_34;
        }
        matched = 1;
      }
LABEL_34:
      Common::StringBuffer::~StringBuffer((Common::StringBuffer *)lpStringValue);
      v17 = (unsigned int)++v36;
      if ( !matched )
        break;
    }
    if ( !matched )
      goto LABEL_41;
    v24 = v34;
    v25 = -1LL;
    do
      ++v25;
    while ( v34[v25] );
    ProcessNameByPID = Common::Guid::Decode(v34, v25, &v49);
    if ( ProcessNameByPID < 0 )
    {
LABEL_51:
      if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        RegCloseKey(hKey);
      goto LABEL_4;
    }
    if ( ExecutionModel::Internal::VerifyParentIdentifier(v46, (struct Common::RegistryKey *)v50, v24, v26) >= 0 )
    {
      if ( !v8 || (v27 = v33, v32 > v33) )
      {
        v27 = v32;
        v8 = 1;
        v33 = v32;
        *v48 = v49;
      }
    }
    else
    {
      *(struct _GUID *)lpStringValue = v49;
      (*(void (__fastcall **)(ExecutionModel::GameConfigStoreServer *, LPCWSTR *))(*(_QWORD *)v47 + 8LL))(
        v47,
        lpStringValue);
LABEL_41:
      v27 = v33;
    }
    v34 += v37 + 1;
    ProcessNameByPID = StringCchLengthW(v34, 0x7FFFFFFFLL, &v37);
    if ( ProcessNameByPID < 0 )
      goto LABEL_51;
    if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      RegCloseKey(hKey);
      v13 = v34;
    }
    if ( v37 )
    {
      v14 = v46;
      continue;
    }
    break;
  }
  if ( !v8 )
    goto LABEL_58;
  if ( !v27 && v30 )
    v8 = 0;
  if ( !v8 )
LABEL_58:
    ProcessNameByPID = -2147024894;
LABEL_4:
  operator delete(v7);
  operator delete(v6);
  operator delete(v5);
  operator delete(v4);
  operator delete(Block);
  return (unsigned int)ProcessNameByPID;
}
