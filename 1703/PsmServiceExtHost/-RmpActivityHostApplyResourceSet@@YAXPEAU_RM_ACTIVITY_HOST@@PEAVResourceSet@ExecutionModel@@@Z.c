/*
 * XREFs of ?RmpActivityHostApplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800140A0
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000F280 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180011CF4 (-RmpActivityHostAddResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@W4_RM_.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180013364 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostApplyResourceSet(struct _RM_ACTIVITY_HOST *a1, struct ExecutionModel::ResourceSet *a2)
{
  int v4; // esi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *); // rax
  __int64 (__fastcall *v10)(ExecutionModel::ResourceSet *); // rax

  if ( *((_DWORD *)a1 + 14) == 1 )
    v4 = *((_DWORD *)a1 + 16);
  else
    v4 = 0;
  if ( *((_QWORD *)a2 + 174) )
  {
    v5 = (_QWORD *)((char *)a2 + 1368);
    v6 = *((_QWORD *)a2 + 171);
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    v5[1] = 0LL;
    --*((_DWORD *)a1 + 158);
    v8 = *(_QWORD *)a2;
    *((_DWORD *)a2 + 350) = 2;
    v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(v8 + 16);
    if ( v9 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(a2);
    else
      v9(a2);
    v10 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)a2 + 16LL);
    if ( v10 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(a2);
    else
      v10(a2);
  }
  RmpActivityHostAddResourceSet(a1, a2, 1);
  *((_QWORD *)a2 + 18) = *((_QWORD *)a1 + 3);
  if ( *((_QWORD *)a2 + 228) )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 228, 0LL);
  *((_DWORD *)a2 + 2) = v4;
  *((_BYTE *)a2 + 12) = 1;
}
