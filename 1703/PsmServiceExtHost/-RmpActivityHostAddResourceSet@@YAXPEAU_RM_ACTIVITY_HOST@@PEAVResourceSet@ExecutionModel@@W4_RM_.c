/*
 * XREFs of ?RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180011CF4
 * Callers:
 *     ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800140A0 (-RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180005754 (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000EFB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RmpActivityHostAddResourceSet(struct _RM_OBJECT_HEADER *a1, _QWORD *a2, int a3)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v6)(ExecutionModel::BaseResourceSet *); // rax
  _DWORD *v7; // rdi
  __int64 (__fastcall *v8)(ExecutionModel::BaseResourceSet *); // rax
  __int64 v9; // rcx
  _QWORD *result; // rax

  v4 = a3;
  if ( !a2[174] )
  {
    RmpObjectAddRef(a1);
    a2[174] = a1;
  }
  v6 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*a2 + 8LL);
  if ( v6 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)a2);
  else
    v6((ExecutionModel::BaseResourceSet *)a2);
  v7 = (_DWORD *)((char *)a1 + 24 * v4 + 616);
  v8 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*a2 + 8LL);
  if ( v8 == ExecutionModel::BaseResourceSet::AddRef )
    ExecutionModel::BaseResourceSet::AddRef((ExecutionModel::BaseResourceSet *)a2);
  else
    v8((ExecutionModel::BaseResourceSet *)a2);
  v9 = *(_QWORD *)v7;
  result = a2 + 171;
  if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 )
    __fastfail(3u);
  *result = v9;
  a2[172] = v7;
  *(_QWORD *)(v9 + 8) = result;
  *(_QWORD *)v7 = result;
  ++v7[4];
  *((_DWORD *)a2 + 350) = v4;
  return result;
}
