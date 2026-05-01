/*
 * XREFs of ?ReleaseMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_K@Z @ 0x180040DB8
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180040F24 (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x180037EC8 (-ResourceSetMemoryLimitChangedNotification@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ReleaseMemoryForFGSharing(
        ExecutionModel::ResourceSet *this,
        unsigned __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  int v5; // edx
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v9; // [rsp+30h] [rbp-29h] BYREF
  ExecutionModel::ResourceSet *v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  ExecutionModel::ResourceSet **v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  unsigned __int64 *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  unsigned __int64 v21; // [rsp+C8h] [rbp+6Fh] BYREF

  v21 = a2;
  v9 = 0;
  v3 = *((_QWORD *)this + 175);
  if ( !v3 )
    goto LABEL_2;
  if ( *(_DWORD *)(v3 + 40) == 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 88LL))((char *)this + 1368) )
    {
      v9 = -2147220216;
      goto LABEL_13;
    }
    a2 = v21;
  }
  else if ( !*(_DWORD *)(v3 + 40) && !*(_QWORD *)(v3 + 600) )
  {
LABEL_2:
    v9 = -2147220218;
    goto LABEL_13;
  }
  v4 = *((_QWORD *)this + 230);
  if ( a2 <= v4 )
  {
    *((_QWORD *)this + 230) = v4 - a2;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 171) + 88LL))((char *)this + 1368) )
      ExecutionModel::ResourceManager::ResourceSetMemoryLimitChangedNotification(
        *((ExecutionModel::ResourceManager **)this + 3),
        (struct _RM_ACTIVITY_HOST **)this);
  }
  else
  {
    v9 = -2147418113;
  }
LABEL_13:
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(this, 1uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = &v9;
    v15 = &v10;
    v18 = &v21;
    v13 = 4;
    v10 = this;
    v16 = v5 + 7;
    v19 = v5 + 7;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v5 + 7), &unk_18005C6B6, v6, v7, 5u, &pData);
  }
  return v9;
}
