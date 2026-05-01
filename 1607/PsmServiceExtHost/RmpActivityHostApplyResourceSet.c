/*
 * XREFs of RmpActivityHostApplyResourceSet @ 0x180013ED0
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     RmpObjectAddRef @ 0x180006058 (RmpObjectAddRef.c)
 *     ?AddRef@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011680 (-AddRef@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180011EA0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpActivityHostApplyResourceSet(__int64 a1, __int64 *a2)
{
  int v4; // ebp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 (__fastcall *v9)(ExecutionModel::ResourceSet *); // rax
  __int64 (__fastcall *v10)(ExecutionModel::ResourceSet *); // rax
  __int64 (__fastcall *v11)(ExecutionModel::ResourceSet *); // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 48) == 1 )
    v4 = *(_DWORD *)(a1 + 56);
  else
    v4 = 0;
  if ( a2[175] )
  {
    v5 = a2 + 172;
    v6 = a2[172];
    v7 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(v6 + 8) != v5 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    v5[1] = 0LL;
    --*(_DWORD *)(a1 + 632);
    v8 = *a2;
    *((_DWORD *)a2 + 352) = 2;
    v9 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(v8 + 16);
    if ( v9 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)a2);
    else
      v9((ExecutionModel::ResourceSet *)a2);
    v10 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*a2 + 16);
    if ( v10 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release((ExecutionModel::ResourceSet *)a2);
    else
      v10((ExecutionModel::ResourceSet *)a2);
  }
  if ( !a2[175] )
  {
    RmpObjectAddRef(a1);
    a2[175] = a1;
  }
  v11 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*a2 + 8);
  if ( v11 == ExecutionModel::ResourceSet::AddRef )
    ExecutionModel::ResourceSet::AddRef((ExecutionModel::ResourceSet *)a2);
  else
    v11((ExecutionModel::ResourceSet *)a2);
  v12 = a1 + 640;
  v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*a2 + 8);
  if ( v13 == ExecutionModel::ResourceSet::AddRef )
    ExecutionModel::ResourceSet::AddRef((ExecutionModel::ResourceSet *)a2);
  else
    v13((ExecutionModel::ResourceSet *)a2);
  v14 = *(_QWORD *)v12;
  v15 = a2 + 172;
  if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
    __fastfail(3u);
  *v15 = v14;
  a2[173] = v12;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)v12 = v15;
  ++*(_DWORD *)(a1 + 656);
  *((_DWORD *)a2 + 352) = 1;
  a2[18] = *(_QWORD *)(a1 + 24);
  if ( a2[229] )
    ATL::AtlComPtrAssign((struct IUnknown **)a2 + 229, 0LL);
  result = 0LL;
  *((_DWORD *)a2 + 2) = v4;
  *((_BYTE *)a2 + 12) = 1;
  a2[226] = 0LL;
  a2[227] = 0LL;
  a2[228] = 0LL;
  return result;
}
