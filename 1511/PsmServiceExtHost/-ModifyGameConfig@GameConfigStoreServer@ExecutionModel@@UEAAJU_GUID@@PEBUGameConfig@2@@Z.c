/*
 * XREFs of ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x18004A370
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180006D50 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z @ 0x18001C854 (-GetParentsChildrenStrings@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@PEBGPEAPEAGPEAK@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18002B588 (__report_rangecheckfailure.c)
 *     ?GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z @ 0x180049400 (-GetGameParentIdentifier@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAG@Z.c)
 *     ?MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@2@PEA_NPEAU_GUID@@2@Z @ 0x180049F50 (-MatchChildInPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBUGameConfig@.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 *     ?ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z @ 0x18004B91C (-ValidateGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@@Z.c)
 *     ?Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z @ 0x180054628 (-Encode@Guid@Common@@SAJPEBU_GUID@@PEAGKPEAK@Z.c)
 */

__int64 __fastcall ExecutionModel::GameConfigStoreServer::ModifyGameConfig(
        HKEY *this,
        struct _GUID *a2,
        const struct ExecutionModel::GameConfig *a3)
{
  __int64 v3; // rax
  bool v4; // zf
  bool v8; // r15
  int GameParentIdentifier; // edi
  unsigned __int16 *v10; // r8
  void *v11; // rcx
  int ParentsChildrenStrings; // ebx
  void *v14; // rbx
  char *v15; // r11
  unsigned __int16 *v16; // rax
  int v17; // edx
  int v18; // r8d
  int matched; // eax
  unsigned __int64 v20; // rax
  struct ExecutionModel::GameConfig *v21; // [rsp+20h] [rbp-E0h]
  bool v22; // [rsp+28h] [rbp-D8h]
  char v23; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-CCh] BYREF
  void *Block[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v26[40]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v27[48]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = *(_QWORD *)&a2->Data1;
  v4 = *(_QWORD *)&a2->Data1 == 0LL;
  v23 = 0;
  Block[0] = 0LL;
  v8 = 0;
  v24 = 36;
  if ( v4 )
    v3 = *(_QWORD *)a2->Data4;
  if ( !v3 )
  {
    GameParentIdentifier = -2147024809;
LABEL_9:
    v11 = 0LL;
LABEL_10:
    operator delete(v11);
    return (unsigned int)GameParentIdentifier;
  }
  GameParentIdentifier = ExecutionModel::Internal::ValidateGameConfig(a3, (const struct ExecutionModel::GameConfig *)a2);
  if ( GameParentIdentifier < 0 )
    goto LABEL_9;
  GameParentIdentifier = Common::Guid::Encode(a2, v26, 0x24u, &v24);
  if ( GameParentIdentifier < 0 )
    goto LABEL_9;
  if ( 2 * (unsigned __int64)v24 >= 0x4A )
    _report_rangecheckfailure();
  v26[v24] = 0;
  GameParentIdentifier = ExecutionModel::Internal::GetGameParentIdentifier((ExecutionModel::Internal **)a3, v27, v10);
  if ( GameParentIdentifier < 0 )
    goto LABEL_9;
  ParentsChildrenStrings = ExecutionModel::Internal::GetParentsChildrenStrings(
                             this + 2,
                             v27,
                             (unsigned __int16 *)Block,
                             0LL);
  if ( ParentsChildrenStrings >= 0 )
  {
    v14 = Block[0];
    GameParentIdentifier = StringCchLengthW((const unsigned __int16 *)Block[0], 0x7FFFFFFFLL, (unsigned __int64 *)Block);
    if ( GameParentIdentifier < 0 )
    {
LABEL_14:
      v11 = v14;
      goto LABEL_10;
    }
    do
    {
      if ( !Block[0] )
        break;
      v16 = (unsigned __int16 *)v15;
      do
      {
        v17 = *(unsigned __int16 *)((char *)v16 + (char *)v26 - v15);
        v18 = *v16 - v17;
        if ( v18 )
          break;
        ++v16;
      }
      while ( v17 );
      v8 = v18 == 0;
      GameParentIdentifier = StringCchLengthW(
                               (const unsigned __int16 *)&v15[2 * (__int64)Block[0] + 2],
                               0x7FFFFFFFLL,
                               (unsigned __int64 *)Block);
      if ( GameParentIdentifier < 0 )
        goto LABEL_14;
    }
    while ( !v8 );
    if ( !v8 )
    {
      GameParentIdentifier = -2147024809;
      goto LABEL_14;
    }
    if ( *((_QWORD *)a3 + 1) )
    {
      matched = ExecutionModel::Internal::MatchChildInPermanentStore(
                  this + 2,
                  (struct Common::RegistryKey *)(this + 1),
                  (ExecutionModel::Internal **)a3,
                  (const struct ExecutionModel::GameConfig *)&v23,
                  (bool *)Block,
                  0LL);
      if ( matched < 0 )
      {
LABEL_25:
        GameParentIdentifier = matched;
        goto LABEL_14;
      }
      if ( !v23 )
        goto LABEL_27;
      v20 = *(_QWORD *)&a2->Data1 - (unsigned __int64)Block[0];
      if ( *(void **)&a2->Data1 == Block[0] )
        v20 = *(_QWORD *)a2->Data4 - (unsigned __int64)Block[1];
      if ( v20 )
      {
LABEL_27:
        GameParentIdentifier = -2147024713;
        goto LABEL_14;
      }
    }
    LOBYTE(v21) = 0;
    matched = ExecutionModel::Internal::SerializeToPermanentStore(
                (ExecutionModel::Internal *)(this + 2),
                (struct Common::RegistryKey *)(this + 1),
                (struct Common::RegistryKey *)v26,
                (const unsigned __int16 *)a3,
                v21,
                v22);
    goto LABEL_25;
  }
  operator delete(Block[0]);
  return (unsigned int)ParentsChildrenStrings;
}
