/*
 * XREFs of ?AcquireResourceSet@RmpRpExtResourceSetThunk@@SAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@4@PEAXPEBG3KK_KKPEAUIResourceSet@4@PEA_NPEAPEAU64@@Z @ 0x180016010
 * Callers:
 *     ?AcquireResourceSetFromSponsorProcess@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180016AF0 (-AcquireResourceSetFromSponsorProcess@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@Ex.c)
 *     ?AcquireResourceSet@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x180016B90 (-AcquireResourceSet@RmpRpExtResourceManagerThunk@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAU.c)
 * Callees:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x1800136B0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x180015B90 (-Release@RmpRpsResourceSetCallback@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001FB10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpExtResourceSetThunk::AcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        unsigned __int16 *a5,
        _BYTE *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        struct ExecutionModel::IResourceSet *a11,
        bool *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  struct ExecutionModel::IResourceSetCallback *v13; // rbx
  unsigned __int64 v14; // rsi
  struct ExecutionModel::IResourceSetCallback *v19; // rax
  struct ExecutionModel::IResourceSet *v20; // rax
  struct ExecutionModel::IResourceSet *v21; // rdi
  struct ExecutionModel::IResourceSet *v22; // rax
  int v23; // esi
  __int64 (__fastcall *v24)(RmpRpsResourceSetCallback *); // rax
  unsigned __int64 v26; // [rsp+A0h] [rbp+18h] BYREF

  v13 = 0LL;
  v14 = -1LL;
  if ( a3 )
  {
    v19 = (struct ExecutionModel::IResourceSetCallback *)operator new(0x18uLL);
    v13 = v19;
    if ( !v19 )
      return 2147942414LL;
    *((_QWORD *)v19 + 1) = a3;
    *(_QWORD *)v19 = &RmpRpsResourceSetCallback::`vftable';
    *((_DWORD *)v19 + 4) = 1;
    (*(void (__fastcall **)(struct ExecutionModel::IResourceSetCallback *))(*(_QWORD *)a3 + 8LL))(a3);
  }
  v20 = (struct ExecutionModel::IResourceSet *)operator new(0x20uLL);
  v21 = v20;
  if ( v20 )
  {
    *((_QWORD *)v20 + 1) = a1;
    *(_QWORD *)v20 = &RmpRpExtResourceSetThunk::`vftable';
    v22 = a11;
    *((_QWORD *)v21 + 2) = -1LL;
    *((_DWORD *)v21 + 6) = 1;
    if ( v22 )
      v14 = *((_QWORD *)v22 + 2);
    v23 = RmSrvAcquireResourceSet(a1, a2, v13, a4, a5, a6, a7, a8, a9, a10, v14, 0LL, a12, &v26);
    if ( v23 < 0 )
    {
      (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v21 + 120LL))(v21);
      (*(void (__fastcall **)(struct ExecutionModel::IResourceSet *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    else
    {
      v23 = 0;
      *((_QWORD *)v21 + 2) = v26;
      *a13 = v21;
    }
  }
  else
  {
    v23 = -2147024882;
  }
  if ( v13 )
  {
    v24 = *(__int64 (__fastcall **)(RmpRpsResourceSetCallback *))(*(_QWORD *)v13 + 16LL);
    if ( v24 == RmpRpsResourceSetCallback::Release )
      RmpRpsResourceSetCallback::Release(v13);
    else
      v24(v13);
  }
  return (unsigned int)v23;
}
