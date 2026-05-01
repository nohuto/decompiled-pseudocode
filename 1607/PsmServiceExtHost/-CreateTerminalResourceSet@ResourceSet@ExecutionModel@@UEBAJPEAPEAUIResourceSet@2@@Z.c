/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180001AE0
 * Callers:
 *     ?RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z @ 0x180001864 (-RmSrvResourceSetCreateTerminalSet@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEA_K@Z.c)
 * Callees:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180001C7C (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ??$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@tlx@@YAPEAPEAU_ResourceSetInfo@ExecutionModel@@AEAV?$auto_xxx@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1??$_delete@U_ResourceSetInfo@ExecutionModel@@@tlx@@YAX0@Z$0A@@0@@Z @ 0x180001E70 (--$replace@PEAU_ResourceSetInfo@ExecutionModel@@P6AXPEAU12@@Z$1--$_delete@U_ResourceSetInfo@Exec.c)
 *     ?GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x180012800 (-GetResourceSetInfo@ResourceSet@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateTerminalResourceSet(
        ExecutionModel::ResourceSet *this,
        struct ExecutionModel::IResourceSet **a2)
{
  struct ExecutionModel::_ResourceSetInfo **v4; // rax
  int ResourceSetInfo; // eax
  unsigned int TerminalResourceSetFromResourceSetInfo; // edi
  int v7; // edx
  int v8; // r9d
  char *v9; // r8
  __int64 v10; // r10
  _OWORD *v11; // rax
  _BYTE *v12; // rcx
  __int64 v13; // r11
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // r9
  int v18; // [rsp+28h] [rbp-1B0h]
  int v19; // [rsp+30h] [rbp-1A8h]
  _BYTE v20[384]; // [rsp+50h] [rbp-188h] BYREF
  void *Block; // [rsp+1E0h] [rbp+8h] BYREF

  Block = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v4 = (struct ExecutionModel::_ResourceSetInfo **)tlx::replace<ExecutionModel::_ResourceSetInfo *,void (*)(ExecutionModel::_ResourceSetInfo *),&void tlx::_delete<ExecutionModel::_ResourceSetInfo>(ExecutionModel::_ResourceSetInfo *),0>(&Block);
  if ( *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *__hidden, struct ExecutionModel::_ResourceSetInfo **))(*(_QWORD *)this + 48LL) == ExecutionModel::ResourceSet::GetResourceSetInfo )
    ResourceSetInfo = ExecutionModel::ResourceSet::GetResourceSetInfo(this, v4);
  else
    ResourceSetInfo = (*(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, struct ExecutionModel::_ResourceSetInfo **))(*(_QWORD *)this + 48LL))(
                        this,
                        v4);
  TerminalResourceSetFromResourceSetInfo = ResourceSetInfo;
  if ( ResourceSetInfo >= 0 )
  {
    v7 = *((_DWORD *)this - 308);
    if ( v7 )
    {
      v8 = *((_DWORD *)this - 309);
      v9 = (char *)this - 1304;
      v10 = *((_QWORD *)this - 153);
    }
    else
    {
      v9 = 0LL;
      v8 = 0;
      v10 = -1LL;
    }
    v11 = Block;
    v12 = v20;
    v13 = 2LL;
    do
    {
      *(_OWORD *)v12 = *v11;
      *((_OWORD *)v12 + 1) = v11[1];
      *((_OWORD *)v12 + 2) = v11[2];
      *((_OWORD *)v12 + 3) = v11[3];
      *((_OWORD *)v12 + 4) = v11[4];
      *((_OWORD *)v12 + 5) = v11[5];
      *((_OWORD *)v12 + 6) = v11[6];
      v12 += 128;
      v14 = v11[7];
      v11 += 8;
      *((_OWORD *)v12 - 1) = v14;
      --v13;
    }
    while ( v13 );
    *(_OWORD *)v12 = *v11;
    v19 = v7;
    v15 = *((_QWORD *)this + 4);
    v18 = v8;
    v16 = *((_QWORD *)this - 167);
    *((_OWORD *)v12 + 1) = v11[1];
    *((_OWORD *)v12 + 2) = v11[2];
    *((_OWORD *)v12 + 3) = v11[3];
    *((_OWORD *)v12 + 4) = v11[4];
    *((_OWORD *)v12 + 5) = v11[5];
    *((_OWORD *)v12 + 6) = v11[6];
    *((_QWORD *)v12 + 14) = *((_QWORD *)v11 + 14);
    TerminalResourceSetFromResourceSetInfo = ExecutionModel::ResourceManager::CreateTerminalResourceSetFromResourceSetInfo(
                                               *((_QWORD *)this - 168),
                                               v15,
                                               v20,
                                               v16,
                                               v9,
                                               v18,
                                               v19,
                                               v10,
                                               a2);
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( Block )
    operator delete(Block);
  return TerminalResourceSetFromResourceSetInfo;
}
