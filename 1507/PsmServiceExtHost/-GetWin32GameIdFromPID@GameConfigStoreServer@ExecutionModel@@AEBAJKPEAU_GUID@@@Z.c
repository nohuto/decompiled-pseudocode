/*
 * XREFs of ?GetWin32GameIdFromPID@GameConfigStoreServer@ExecutionModel@@AEBAJKPEAU_GUID@@@Z @ 0x180007CA0
 * Callers:
 *     ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x180007EF0 (-GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z @ 0x180017C50 (-CalcSHA1@Internal@ExecutionModel@@YAJPEBGPEAG@Z.c)
 *     ?GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180019120 (-GetProcessNameByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x18001C3E0 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18001C8F0 (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x1800447AC (-GetProcessArgsByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180044848 (-GetProcessParentDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z @ 0x180044B98 (-GetProcessWorkingDirectoryByPID@Internal@ExecutionModel@@YAJKPEAPEAG@Z.c)
 *     ?VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z @ 0x1800461BC (-VerifyParentIdentifier@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBG1@Z.c)
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x18004D88C (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 *     wcsistr @ 0x18004DF3C (wcsistr.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::GetWin32GameIdFromPID(
        const WCHAR **this,
        DWORD a2,
        struct _GUID *a3)
{
  ExecutionModel::Internal *v3; // r15
  unsigned __int16 *v4; // r14
  void *v5; // rbx
  void *v6; // rdi
  void *v7; // rsi
  unsigned __int16 **v8; // r8
  int v9; // r12d
  DWORD v10; // ecx
  int ProcessNameByPID; // eax
  unsigned __int16 *v12; // r8
  int ParentsChildrenStrings; // eax
  ExecutionModel::Internal *v15; // r11
  unsigned __int64 v16; // r8
  bool v17; // r13
  unsigned int v18; // r12d
  unsigned __int16 **v19; // r8
  int ProcessParentDirectoryByPID; // eax
  void *v21; // rcx
  int ProcessWorkingDirectoryByPID; // eax
  int ProcessArgsByPID; // eax
  __int64 v24; // rdx
  const unsigned __int16 *v25; // r9
  const WCHAR *v26; // rax
  unsigned int *v27; // [rsp+20h] [rbp-E0h]
  ExecutionModel::Internal *v28; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwProcessId; // [rsp+38h] [rbp-C8h]
  unsigned int v30; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 *v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  HKEY v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34[2]; // [rsp+58h] [rbp-A8h] BYREF
  HKEY v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v37[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID *v38; // [rsp+78h] [rbp-88h]
  unsigned __int16 v39[4]; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v40; // [rsp+90h] [rbp-70h] BYREF
  int v41; // [rsp+A0h] [rbp-60h]
  const WCHAR **v42; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v43[48]; // [rsp+C0h] [rbp-40h] BYREF

  v42 = this;
  v38 = a3;
  dwProcessId = a2;
  v3 = 0LL;
  v28 = 0LL;
  v4 = 0LL;
  v31 = 0LL;
  v5 = 0LL;
  *(_QWORD *)v36 = 0LL;
  v6 = 0LL;
  *(_QWORD *)v37 = 0LL;
  v7 = 0LL;
  *(_QWORD *)v34 = 0LL;
  v32 = 0LL;
  *(_QWORD *)v39 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v9 = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(this[1], (HKEY *)v39, &v35, &v33);
  if ( v9 < 0 )
    goto LABEL_5;
  v10 = dwProcessId;
  *v38 = (struct _GUID)xmmword_180050678;
  ProcessNameByPID = ExecutionModel::Internal::GetProcessNameByPID(v10, (unsigned int)&v28, v8);
  v3 = v28;
  v9 = ProcessNameByPID;
  if ( ProcessNameByPID < 0 )
    goto LABEL_5;
  v9 = ExecutionModel::Internal::CalcSHA1(v28, v43, v12);
  if ( v9 < 0 )
    goto LABEL_5;
  ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(&v35, v43, (unsigned __int16 *)&v31, 0LL);
  v4 = v31;
  v9 = ParentsChildrenStrings;
  if ( ParentsChildrenStrings < 0 )
    goto LABEL_5;
  v28 = (ExecutionModel::Internal *)v31;
  v9 = StringCchLengthW(v31, 0x7FFFFFFFuLL, &v32);
  if ( v9 < 0 )
    goto LABEL_5;
  while ( 2 )
  {
    if ( !v32 )
    {
      v9 = -2147024894;
      break;
    }
    v31 = 0LL;
    v9 = Common::RegistryKey::OpenSubKey(
           (Common::RegistryKey *)&v33,
           (const unsigned __int16 *)v15,
           0x20019u,
           (struct Common::AutoHandleHKEY *)&v31);
    if ( v9 < 0 )
      goto LABEL_39;
    v17 = 1;
    v30 = 0;
    v18 = 0;
    do
    {
      if ( v18 >= 3 )
        break;
      *(_QWORD *)v40.Data4 = 0LL;
      v40.Data1 = 0;
      v41 = 0;
      if ( Common::RegistryKey::GetStringValue(
             (Common::RegistryKey *)&v31,
             (const unsigned __int16 *)(&ExecutionModel::Strings::DescriptorKeys)[v18],
             v16,
             (struct Common::StringBuffer *)&v40,
             v27) >= 0 )
      {
        v17 = 0;
        if ( v18 )
        {
          if ( v18 == 1 )
          {
            if ( !v6 )
            {
              ProcessWorkingDirectoryByPID = ExecutionModel::Internal::GetProcessWorkingDirectoryByPID(
                                               dwProcessId,
                                               (unsigned int)v37,
                                               v19);
              v6 = *(void **)v37;
              v9 = ProcessWorkingDirectoryByPID;
              if ( ProcessWorkingDirectoryByPID < 0 )
                goto LABEL_38;
              v18 = v30;
            }
            v21 = v6;
          }
          else
          {
            if ( !v7 )
            {
              ProcessParentDirectoryByPID = ExecutionModel::Internal::GetProcessParentDirectoryByPID(
                                              dwProcessId,
                                              (unsigned int)v34,
                                              v19);
              v7 = *(void **)v34;
              v9 = ProcessParentDirectoryByPID;
              if ( ProcessParentDirectoryByPID < 0 )
                goto LABEL_38;
              v18 = v30;
            }
            v21 = v7;
          }
        }
        else
        {
          if ( !v5 )
          {
            ProcessArgsByPID = ExecutionModel::Internal::GetProcessArgsByPID(dwProcessId, (unsigned int)v36, v19);
            v5 = *(void **)v36;
            v9 = ProcessArgsByPID;
            if ( ProcessArgsByPID < 0 )
            {
LABEL_38:
              Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v40);
              goto LABEL_39;
            }
            v18 = v30;
          }
          v21 = v5;
        }
        if ( v21 )
          v17 = wcsistr(v21, *(_QWORD *)v40.Data4) != 0;
      }
      Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v40);
      v30 = ++v18;
    }
    while ( v17 );
    if ( !v17 )
      goto LABEL_35;
    v24 = -1LL;
    do
      ++v24;
    while ( *((_WORD *)v28 + v24) );
    v9 = Common::Guid::Decode((const unsigned __int16 *)v28, v24, v38);
    if ( v9 < 0 )
    {
LABEL_39:
      Common::AutoHandleCloseHKEY<HKEY__ *>((HKEY)v31);
      break;
    }
    if ( ExecutionModel::Internal::VerifyParentIdentifier(
           (ExecutionModel::Internal *)&v33,
           (struct Common::RegistryKey *)v43,
           (const unsigned __int16 *)v28,
           v25) < 0 )
    {
      v26 = *v42;
      v40 = *v38;
      (*((void (__fastcall **)(const WCHAR **, struct _GUID *))v26 + 1))(v42, &v40);
      v17 = 0;
    }
LABEL_35:
    v28 = (ExecutionModel::Internal *)((char *)v28 + 2 * v32 + 2);
    v9 = StringCchLengthW((const unsigned __int16 *)v28, 0x7FFFFFFFuLL, &v32);
    if ( v9 < 0 )
      goto LABEL_39;
    Common::AutoHandleCloseHKEY<HKEY__ *>((HKEY)v31);
    if ( !v17 )
    {
      v15 = v28;
      continue;
    }
    break;
  }
LABEL_5:
  Common::AutoHandleCloseHKEY<HKEY__ *>(v33);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v35);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v39);
  operator delete(v7);
  operator delete(v6);
  operator delete(v5);
  operator delete(v4);
  operator delete(v3);
  return (unsigned int)v9;
}
