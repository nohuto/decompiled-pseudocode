/*
 * XREFs of ?RmpResourceSetPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180003F58
 * Callers:
 *     RmCoreRpcSrvAcquireResourceSet @ 0x180004030 (RmCoreRpcSrvAcquireResourceSet.c)
 * Callees:
 *     ?SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z @ 0x18000E2D4 (-SetAmount@_ResourceSetInfo@ExecutionModel@@QEAAJW4Enum@ResourceType@2@_K@Z.c)
 */

void __fastcall ExecutionModel::RmpResourceSetPropertiesToResourceSetInfo(
        ExecutionModel *this,
        struct _RM_RESOURCE_SET_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  _QWORD *v3; // r11
  __int64 v4; // rcx
  __int64 v5; // r11
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // edx
  _DWORD *v11; // rax
  int v12; // edx

  ExecutionModel::_ResourceSetInfo::SetAmount(a2, 0LL, *((unsigned int *)this + 20));
  ExecutionModel::_ResourceSetInfo::SetAmount(v4, 2LL, *v3);
  ExecutionModel::_ResourceSetInfo::SetAmount(v6, 1LL, *(_QWORD *)(v5 + 8));
  *(_QWORD *)(v7 + 72) = *(_QWORD *)(v8 + 72);
  v9 = 3LL;
  *(_QWORD *)(v7 + 24) = *(_QWORD *)(v8 + 64);
  *(_QWORD *)(v7 + 64) = *(_QWORD *)(v8 + 56);
  *(_QWORD *)(v7 + 360) = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v7 + 56) = *(_QWORD *)(v8 + 88);
  *(_DWORD *)(v7 + 44) = *(_DWORD *)(v8 + 96);
  *(_DWORD *)(v7 + 48) = v10 & (*(_DWORD *)(v8 + 96) >> 2);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(v8 + 32);
  v11 = (_DWORD *)(v7 + 104);
  v12 = *(unsigned __int8 *)(v8 + 35);
  *(_DWORD *)(v7 + 8) = v12;
  *(_DWORD *)(v7 + 32) = v12;
  do
  {
    *v11 = v12;
    v11 += 6;
    --v9;
  }
  while ( v9 );
  *(_DWORD *)(v7 + 32) = *(unsigned __int8 *)(v8 + 36);
  *(_BYTE *)(v7 + 42) = *(_BYTE *)(v8 + 106);
  *(_WORD *)(v7 + 40) = *(_WORD *)(v8 + 104);
  *(_DWORD *)v7 = *(_DWORD *)(v8 + 24);
  memset_0((void *)(v7 + 172), 0, 0xB4uLL);
}
