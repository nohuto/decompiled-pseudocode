/*
 * XREFs of ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAJXZ @ 0x18000E4D0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 *     ?ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ @ 0x18003F090 (-ReleaseResourcesInternal@BaseResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEAX4_NKW46PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18003F4D8 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAJXZ @ 0x18003FEAC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(
        ExecutionModel::BaseResourceSet *this)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  ExecutionModel::BaseResourceSet ***v7; // rsi
  ExecutionModel::BaseResourceSet **v8; // rbx
  ExecutionModel::BaseResourceSet **v9; // rdi
  ExecutionModel::BaseResourceSet **v10; // rcx
  ExecutionModel::BaseResourceSet *v11; // rax
  ExecutionModel::BaseResourceSet *v12; // r14
  unsigned int (__fastcall *v13)(ExecutionModel::ResourceSet *__hidden); // rbp
  unsigned int (__fastcall *v14)(ExecutionModel::ResourceSet *__hidden); // rbx
  __int64 v15; // rcx
  int v16; // eax
  struct _TP_WORK *v17; // rcx

  v1 = *((_DWORD *)this + 338);
  if ( v1 )
  {
    if ( v1 == 2 )
    {
      v3 = 1LL;
      v4 = 0LL;
      v5 = 48LL;
      do
      {
        v6 = *(_QWORD *)((char *)this + v4 + 200);
        if ( v6 )
        {
          if ( (v3 & *((_QWORD *)this + 168)) == 0 )
            *(_QWORD *)(*((_QWORD *)this + 23) + v4 + 200) += v6;
          *(_QWORD *)((char *)this + v4 + 200) = 0LL;
        }
        v3 = __ROL8__(v3, 1);
        v4 += 24LL;
        --v5;
      }
      while ( v5 );
    }
    *((_DWORD *)this + 338) = 0;
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)this + 8LL))(this);
    v7 = (ExecutionModel::BaseResourceSet ***)(*((_QWORD *)this + 23) + 160LL);
    v8 = *v7;
    while ( v8 != (ExecutionModel::BaseResourceSet **)v7 )
    {
      if ( v8[2] == this )
      {
        v9 = v8;
        v8 = (ExecutionModel::BaseResourceSet **)*v8;
        v10 = (ExecutionModel::BaseResourceSet **)v9[1];
        v11 = *v9;
        *v10 = *v9;
        *((_QWORD *)v11 + 1) = v10;
        v12 = v9[2];
        if ( v12 )
        {
          v13 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)v12 + 16LL);
          if ( v13 == ExecutionModel::ResourceSet::Release )
            ExecutionModel::ResourceSet::Release(v9[2]);
          else
            v13(v9[2]);
        }
        operator delete(v9);
        v7[2] = (ExecutionModel::BaseResourceSet **)((char *)v7[2] - 1);
      }
      else
      {
        v8 = (ExecutionModel::BaseResourceSet **)*v8;
      }
    }
    v14 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 16LL);
    if ( v14 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v14(this);
    v15 = *((_QWORD *)this + 3);
    if ( *((_DWORD *)this + 4) != 1 )
    {
      v17 = *(struct _TP_WORK **)(v15 + 256);
      goto LABEL_19;
    }
    v16 = *(_DWORD *)(v15 + 264);
    if ( (v16 & 1) == 0 )
    {
      *(_DWORD *)(v15 + 264) = v16 | 1;
      v17 = *(struct _TP_WORK **)(v15 + 248);
LABEL_19:
      SubmitThreadpoolWork(v17);
    }
  }
  return 0LL;
}
