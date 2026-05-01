/*
 * XREFs of ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180044D60
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z @ 0x1800078A0 (-OpenGameConfigStoreRegKeys@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@11@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x180007ADC (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x18001B4F4 (-ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x18001B5B0 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18001B890 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x18001B8E4 (-GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800247E8 (__report_rangecheckfailure.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x1800455E4 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x18004D900 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::ModifyGameConfig(
        ExecutionModel::GameConfigStoreServer *this,
        struct _GUID *a2,
        const struct ExecutionModel::GameConfig *a3)
{
  const WCHAR *v3; // rcx
  bool v6; // r15
  const struct ExecutionModel::GameConfig *v7; // rdx
  int ParentsChildrenStrings; // ebx
  __int64 v9; // rax
  int GameParentIdentifier; // eax
  unsigned __int16 *v11; // r8
  void *v12; // rcx
  void *v14; // rbx
  int v15; // edi
  char *v16; // r11
  unsigned __int16 *v17; // rax
  int v18; // edx
  int v19; // r8d
  int matched; // eax
  unsigned __int64 v21; // rax
  struct ExecutionModel::GameConfig *v22; // [rsp+20h] [rbp-E0h]
  bool v23; // [rsp+28h] [rbp-D8h]
  bool *v24; // [rsp+30h] [rbp-D0h] BYREF
  HKEY v25; // [rsp+38h] [rbp-C8h] BYREF
  HKEY v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v27[4]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  void *Block[3]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v30[40]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t v31[48]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = (const WCHAR *)*((_QWORD *)this + 1);
  LOBYTE(v24) = 0;
  Block[0] = 0LL;
  *(_QWORD *)v27 = 0LL;
  v25 = 0LL;
  v28 = 36;
  v6 = 0;
  v26 = 0LL;
  ParentsChildrenStrings = ExecutionModel::Internal::OpenGameConfigStoreRegKeys(v3, (HKEY *)v27, &v25, &v26);
  if ( ParentsChildrenStrings < 0 )
    goto LABEL_11;
  v9 = *(_QWORD *)&a2->Data1;
  if ( !*(_QWORD *)&a2->Data1 )
    v9 = *(_QWORD *)a2->Data4;
  if ( !v9 )
  {
    ParentsChildrenStrings = -2147024809;
LABEL_11:
    Common::AutoHandleCloseHKEY<HKEY__ *>(v26);
    Common::AutoHandleCloseHKEY<HKEY__ *>(v25);
    Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v27);
    v12 = 0LL;
LABEL_12:
    operator delete(v12);
    return (unsigned int)ParentsChildrenStrings;
  }
  GameParentIdentifier = ExecutionModel::Internal::ValidateGameConfig(a3, v7);
  if ( GameParentIdentifier < 0 )
    goto LABEL_10;
  GameParentIdentifier = Common::Guid::Encode(a2, v30, 0x24u, &v28);
  if ( GameParentIdentifier < 0 )
    goto LABEL_10;
  if ( 2 * (unsigned __int64)v28 >= 0x4A )
    _report_rangecheckfailure();
  v30[v28] = 0;
  GameParentIdentifier = ExecutionModel::Internal::GetGameParentIdentifier((ExecutionModel::Internal **)a3, v31, v11);
  if ( GameParentIdentifier < 0 )
  {
LABEL_10:
    ParentsChildrenStrings = GameParentIdentifier;
    goto LABEL_11;
  }
  ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                             &v25,
                             v31,
                             (unsigned __int16 *)Block,
                             0LL);
  if ( ParentsChildrenStrings < 0 )
  {
    Common::AutoHandleCloseHKEY<HKEY__ *>(v26);
    Common::AutoHandleCloseHKEY<HKEY__ *>(v25);
    Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v27);
    v12 = Block[0];
    goto LABEL_12;
  }
  v14 = Block[0];
  v15 = StringCchLengthW((const unsigned __int16 *)Block[0], 0x7FFFFFFFLL, (unsigned __int64 *)Block);
  if ( v15 >= 0 )
  {
    do
    {
      if ( !Block[0] )
        break;
      v17 = (unsigned __int16 *)v16;
      do
      {
        v18 = *(unsigned __int16 *)((char *)v17 + (char *)v30 - v16);
        v19 = *v17 - v18;
        if ( v19 )
          break;
        ++v17;
      }
      while ( v18 );
      v6 = v19 == 0;
      v15 = StringCchLengthW(
              (const unsigned __int16 *)&v16[2 * (__int64)Block[0] + 2],
              0x7FFFFFFFLL,
              (unsigned __int64 *)Block);
      if ( v15 < 0 )
        goto LABEL_16;
    }
    while ( !v6 );
    if ( !v6 )
    {
      v15 = -2147024809;
      goto LABEL_16;
    }
    if ( *((_QWORD *)a3 + 1) )
    {
      matched = ExecutionModel::Internal::MatchChildInPermanentStore(
                  &v25,
                  &v26,
                  a3,
                  (const struct ExecutionModel::GameConfig *)&v24,
                  (bool *)Block,
                  0LL);
      if ( matched < 0 )
      {
LABEL_27:
        v15 = matched;
        goto LABEL_16;
      }
      if ( !(_BYTE)v24 )
        goto LABEL_29;
      v21 = *(_QWORD *)&a2->Data1 - (unsigned __int64)Block[0];
      if ( *(void **)&a2->Data1 == Block[0] )
        v21 = *(_QWORD *)a2->Data4 - (unsigned __int64)Block[1];
      if ( v21 )
      {
LABEL_29:
        v15 = -2147024713;
        goto LABEL_16;
      }
    }
    LOBYTE(v22) = 0;
    matched = ExecutionModel::Internal::SerializeToPermanentStore(
                (ExecutionModel::Internal *)&v25,
                (struct Common::RegistryKey *)&v26,
                (struct Common::RegistryKey *)v30,
                (const unsigned __int16 *)a3,
                v22,
                v23);
    goto LABEL_27;
  }
LABEL_16:
  Common::AutoHandleCloseHKEY<HKEY__ *>(v26);
  Common::AutoHandleCloseHKEY<HKEY__ *>(v25);
  Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)v27);
  operator delete(v14);
  return (unsigned int)v15;
}
