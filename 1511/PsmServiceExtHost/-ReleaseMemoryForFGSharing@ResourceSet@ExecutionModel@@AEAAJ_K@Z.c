/*
 * XREFs of ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x18000DAE0
 * Callers:
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E4CC (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x18000E810 (-IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18000FAD4 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(
        ExecutionModel::ResourceSet *this,
        unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  bool (__fastcall *v5)(ExecutionModel::ResourceSet *__hidden); // rdi
  bool IsApplied; // al
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v11; // [rsp+30h] [rbp-29h] BYREF
  ExecutionModel::ResourceSet *v12; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  ExecutionModel::ResourceSet **v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  unsigned __int64 *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  unsigned __int64 v23; // [rsp+C8h] [rbp+6Fh] BYREF

  v23 = a2;
  v11 = 0;
  v3 = *((_QWORD *)this + 175);
  if ( !v3 )
    goto LABEL_14;
  if ( *(_DWORD *)(v3 + 40) == 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 88LL))((char *)this + 1368) )
    {
      v11 = -2147220216;
      goto LABEL_10;
    }
    a2 = v23;
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(v3 + 40) && !*(_QWORD *)(v3 + 600) )
  {
LABEL_14:
    v11 = -2147220218;
    goto LABEL_10;
  }
LABEL_5:
  v4 = *((_QWORD *)this + 231);
  if ( a2 > v4 )
  {
    v11 = -2147418113;
  }
  else
  {
    *((_QWORD *)this + 231) = v4 - a2;
    v5 = *(bool (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*((_QWORD *)this + 171) + 88LL);
    if ( v5 == ExecutionModel::ResourceSet::IsApplied )
      IsApplied = ExecutionModel::ResourceSet::IsApplied((ExecutionModel::ResourceSet *)((char *)this + 1368));
    else
      IsApplied = v5((ExecutionModel::ResourceSet *)((char *)this + 1368));
    if ( IsApplied )
      ExecutionModel::ResourceManager::ResourceSetMemoryLimitChangedNotification(
        *((ExecutionModel::ResourceManager **)this + 3),
        this);
  }
LABEL_10:
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(this, 1uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = &v11;
    v17 = &v12;
    v20 = &v23;
    v15 = 4;
    v12 = this;
    v18 = v7 + 7;
    v21 = v7 + 7;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v7 + 7), &unk_18006434B, v8, v9, 5u, &pData);
  }
  return v11;
}
