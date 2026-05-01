/*
 * XREFs of ?RmpActivityHostRemoveResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800142B4
 * Callers:
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x180002510 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180010080 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostRemoveResourceSet(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // r9
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *); // rax
  __int64 (__fastcall *v10)(ExecutionModel::ResourceSet *); // rax

  v4 = 3LL * a3;
  v5 = a2 + 171;
  v6 = a2[171];
  v7 = (_QWORD *)a2[172];
  if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *v5 = 0LL;
  v5[1] = 0LL;
  --*(_DWORD *)(a1 + 8 * v4 + 632);
  v8 = *a2;
  *((_DWORD *)a2 + 350) = 2;
  v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(v8 + 16);
  if ( v9 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)a2);
  else
    v9((ExecutionModel::ResourceSet *)a2);
  v10 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*a2 + 16);
  if ( v10 == ExecutionModel::ResourceSet::Release )
    return ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)a2);
  else
    return v10((ExecutionModel::ResourceSet *)a2);
}
