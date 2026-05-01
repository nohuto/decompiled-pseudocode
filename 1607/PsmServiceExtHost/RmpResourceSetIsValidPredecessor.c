/*
 * XREFs of RmpResourceSetIsValidPredecessor @ 0x1800030B8
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008220 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ @ 0x180012740 (-IsApplied@ResourceSet@ExecutionModel@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall RmpResourceSetIsValidPredecessor(__int64 a1)
{
  ExecutionModel::ResourceSet *v1; // rcx
  bool (__fastcall *v2)(ExecutionModel::ResourceSet *__hidden); // rax
  char v3; // al
  _BOOL8 result; // rax

  result = 0;
  if ( *(_DWORD *)(a1 + 1352) == 2 )
  {
    v1 = (ExecutionModel::ResourceSet *)(a1 + 1368);
    v2 = *(bool (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v1 + 88LL);
    v3 = v2 == ExecutionModel::ResourceSet::IsApplied
       ? ExecutionModel::ResourceSet::IsApplied(v1)
       : ((__int64 (*)(void))v2)();
    if ( v3 )
      return 1;
  }
  return result;
}
