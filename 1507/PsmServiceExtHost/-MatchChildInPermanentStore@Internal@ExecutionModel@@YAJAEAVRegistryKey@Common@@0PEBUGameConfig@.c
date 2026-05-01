/*
 * XREFs of ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0
 * Callers:
 *     ?VerifyValidToAddToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@@Z @ 0x18001B554 (-VerifyValidToAddToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameC.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x18001B8E4 (-GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z.c)
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x18001C3E0 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z @ 0x18004D88C (-Decode@Guid@Common@@SAJPEBGKPEAU_GUID@@@Z.c)
 *     wcsistr @ 0x18004DF3C (wcsistr.c)
 */

__int64 __fastcall ExecutionModel::Internal::MatchChildInPermanentStore(
        HKEY *this,
        HKEY *a2,
        struct Common::RegistryKey *a3,
        const struct ExecutionModel::GameConfig *a4,
        bool *a5,
        struct _GUID *a6)
{
  char v7; // r15
  bool v9; // bl
  __int64 result; // rax
  LSTATUS v11; // eax
  signed int v12; // edi
  unsigned int v13; // ecx
  HKEY v14; // rbx
  unsigned int v15; // edx
  int ParentsChildrenStrings; // eax
  WCHAR *v17; // rsi
  LSTATUS v18; // eax
  void *v19; // r8
  bool v20; // di
  unsigned int i; // esi
  int StringValue; // eax
  unsigned __int16 *v23; // rsi
  bool v24; // sf
  __int64 v25; // r9
  __int64 v26; // r8
  unsigned int v27; // edx
  unsigned __int16 *v28; // rdx
  char *v29; // r9
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int *phkResult; // [rsp+20h] [rbp-E0h]
  bool v36; // [rsp+30h] [rbp-D0h]
  char v37; // [rsp+31h] [rbp-CFh]
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v39; // [rsp+40h] [rbp-C0h]
  unsigned int v40; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  void *Block; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+68h] [rbp-98h]
  struct _GUID *v45; // [rsp+70h] [rbp-90h]
  HKEY *v46; // [rsp+78h] [rbp-88h]
  const struct ExecutionModel::GameConfig *v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  int v49; // [rsp+90h] [rbp-70h]
  WCHAR SubKey[48]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = 0;
  v45 = (struct _GUID *)a5;
  v47 = a4;
  v46 = a2;
  v9 = a6 != 0LL;
  v36 = a6 != 0LL;
  *(_BYTE *)a4 = 0;
  if ( a5 )
    *(_OWORD *)a5 = xmmword_180050678;
  if ( a6 )
    LOBYTE(a6->Data1) = 0;
  result = ExecutionModel::Internal::GetGameParentIdentifier(
             a3,
             (const struct ExecutionModel::GameConfig *)SubKey,
             (unsigned __int16 *)a3);
  if ( (int)result >= 0 )
  {
    v11 = RegOpenKeyExW(*this, SubKey, 0, 0x20019u, &hKey);
    v12 = v11;
    if ( !v11 )
    {
      v7 = 1;
      RegCloseKey(hKey);
      v12 = 0;
      goto LABEL_8;
    }
    if ( (unsigned int)(v11 - 2) <= 1 )
    {
      v7 = 0;
      v12 = 0;
    }
    else
    {
      v24 = v11 < 0;
      if ( v11 <= 0 )
        goto LABEL_43;
      v12 = (unsigned __int16)v11 | 0x80070000;
    }
    v24 = v12 < 0;
LABEL_43:
    if ( v24 )
      return (unsigned int)v12;
LABEL_8:
    if ( !*((_QWORD *)a3 + 3) )
      return 2147942487LL;
    if ( v7 )
    {
      v13 = *((_DWORD *)a3 + 4);
      v7 = 0;
      v41 = 0LL;
      v14 = 0LL;
      hKey = 0LL;
      v15 = 0;
      v48 = -1LL;
      v49 = -1;
      if ( v13 )
      {
        v25 = *((_QWORD *)a3 + 1);
        do
        {
          v26 = *(int *)(v25 + 16LL * v15);
          if ( (int)v26 >= 3 || *((_DWORD *)&v48 + v26) != -1 )
          {
            v12 = -2147024809;
            goto LABEL_71;
          }
          *((_DWORD *)&v48 + v26) = v15++;
        }
        while ( v15 < v13 );
      }
      ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                                 this,
                                 SubKey,
                                 (unsigned __int16 *)&hKey,
                                 0LL);
      v14 = hKey;
      v12 = ParentsChildrenStrings;
      if ( ParentsChildrenStrings >= 0 )
      {
        v39 = (unsigned __int16 *)hKey;
        v17 = (WCHAR *)hKey;
        v12 = StringCchLengthW((const unsigned __int16 *)hKey, 0x7FFFFFFFuLL, &v41);
        if ( v12 >= 0 )
        {
LABEL_13:
          if ( !v41 )
            goto LABEL_33;
          v37 = 0;
          hKey = 0LL;
          v18 = RegOpenKeyExW(*v46, v17, 0, 0x20019u, &hKey);
          v12 = v18;
          if ( v18 > 0 )
            v12 = (unsigned __int16)v18 | 0x80070000;
          if ( v12 >= 0 )
          {
            v20 = 1;
            for ( i = 0; ; ++i )
            {
              if ( !v20 && !v36 )
              {
                v23 = v39;
                goto LABEL_31;
              }
              if ( i >= 3 )
              {
                if ( v36 && !v37 )
                  v36 = *((_DWORD *)a3 + 4) == 0;
                v23 = v39;
                if ( v20 )
                {
                  v7 = 1;
                  if ( v45 )
                  {
                    v34 = -1LL;
                    do
                      ++v34;
                    while ( v39[v34] );
                    v12 = Common::Guid::Decode(v39, v34, v45);
                    if ( v12 < 0 )
                      break;
                  }
                }
LABEL_31:
                v17 = &v23[v41 + 1];
                v39 = v17;
                v12 = StringCchLengthW(v17, 0x7FFFFFFFuLL, &v41);
                if ( v12 < 0 )
                  break;
                Common::AutoHandleCloseHKEY<HKEY__ *>(hKey);
                if ( v7 )
                {
LABEL_33:
                  operator delete(v14);
                  v9 = v36;
                  goto LABEL_34;
                }
                goto LABEL_13;
              }
              Block = 0LL;
              v42 = 0;
              v44 = 0;
              StringValue = Common::RegistryKey::GetStringValue(
                              (Common::RegistryKey *)&hKey,
                              (const unsigned __int16 *)(&ExecutionModel::Strings::DescriptorKeys)[i],
                              (unsigned __int64)v19,
                              (struct Common::StringBuffer *)&v42,
                              phkResult);
              v19 = Block;
              if ( StringValue >= 0 )
              {
                v37 = 1;
                v27 = *((_DWORD *)&v48 + i);
                v40 = v27;
                if ( v27 != -1 && v20 )
                {
                  v28 = *(unsigned __int16 **)(*((_QWORD *)a3 + 1) + 16LL * v27 + 8);
                  v29 = (char *)((_BYTE *)Block - (_BYTE *)v28);
                  do
                  {
                    v30 = *(unsigned __int16 *)&v29[(_QWORD)v28];
                    v31 = *v28 - v30;
                    if ( v31 )
                      break;
                    ++v28;
                  }
                  while ( v30 );
                  v27 = v40;
                  v20 = v31 == 0;
                }
                if ( v36 )
                {
                  if ( !*((_DWORD *)a3 + 4) )
                    goto LABEL_66;
                  v36 = 1;
                  if ( v27 == -1 )
                    goto LABEL_23;
                  v32 = wcsistr(Block, *(_QWORD *)(*((_QWORD *)a3 + 1) + 16LL * v27 + 8));
                  v19 = Block;
                  if ( v32 )
                  {
LABEL_66:
                    v36 = 0;
                  }
                  else
                  {
                    v36 = 1;
                    if ( v40 != -1 )
                    {
                      v33 = wcsistr(*(_QWORD *)(*((_QWORD *)a3 + 1) + 16LL * v40 + 8), Block);
                      v19 = Block;
                      v36 = v33 == 0;
                    }
                  }
                }
              }
              else if ( v20 )
              {
                v20 = *((_DWORD *)&v48 + i) == -1;
              }
LABEL_23:
              if ( v19 )
                operator delete(v19);
            }
          }
          Common::AutoHandleCloseHKEY<HKEY__ *>(hKey);
        }
      }
LABEL_71:
      operator delete(v14);
    }
    else
    {
LABEL_34:
      *(_BYTE *)v47 = v7;
      if ( a6 )
        LOBYTE(a6->Data1) = v9;
    }
    return (unsigned int)v12;
  }
  return result;
}
