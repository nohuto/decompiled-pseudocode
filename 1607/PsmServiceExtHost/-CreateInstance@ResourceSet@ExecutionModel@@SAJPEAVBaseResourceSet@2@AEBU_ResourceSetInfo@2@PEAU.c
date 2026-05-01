/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@W4Enum@PendType@2@PEAU_RM_ACTIVATOR@@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x1800158E0
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180001C7C (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18000D940 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800151B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180015470 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVATOR@@PE.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct ExecutionModel::BaseResourceSet *a1,
        _DWORD *a2,
        struct IUnknown *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        struct _RM_ACTIVATOR *a13,
        bool *a14,
        _QWORD *a15)
{
  __int64 v19; // rax
  __int64 v20; // r13
  signed __int64 v21; // rdi
  int v22; // eax
  struct ExecutionModel::ResourceSet *v23; // rdi
  int v24; // esi
  unsigned __int64 v25; // r8
  int v26; // eax
  char *v27; // rdx
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int128 v30; // xmm0
  bool *v31; // r9
  __int64 v32; // rcx
  struct ExecutionModel::ResourceSet *v34; // [rsp+30h] [rbp-108h] BYREF
  bool *v35; // [rsp+38h] [rbp-100h]
  __int64 v36; // [rsp+40h] [rbp-F8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+50h] [rbp-E8h] BYREF

  v36 = a5;
  v35 = a14;
  v19 = *((_QWORD *)a1 + 3);
  v34 = 0LL;
  v20 = *(_QWORD *)(v19 + 224);
  v21 = _InterlockedIncrement64(&qword_18004C748);
  if ( (v21 & 0xF000000000000000uLL) != 0 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v22 = ExecutionModel::ResourceSet::ResourceSetFactory(v21 | 0x1400000000000000LL, a1, a13, &v34);
  v23 = v34;
  v24 = v22;
  if ( v22 >= 0 )
  {
    if ( a6 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *((_WORD *)a6 + v25) );
    }
    else
    {
      v25 = 0LL;
    }
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
           (__int64)v34 + 32,
           a6,
           v25) )
    {
      if ( a7 )
      {
        *((_OWORD *)v23 + 4) = *(_OWORD *)a7;
        *((_OWORD *)v23 + 5) = *(_OWORD *)(a7 + 16);
        *((_OWORD *)v23 + 6) = *(_OWORD *)(a7 + 32);
        *((_OWORD *)v23 + 7) = *(_OWORD *)(a7 + 48);
        v26 = *(_DWORD *)(a7 + 64);
      }
      else
      {
        *((_OWORD *)v23 + 4) = *(_OWORD *)(v20 + 3204);
        *((_OWORD *)v23 + 5) = *(_OWORD *)(v20 + 3220);
        *((_OWORD *)v23 + 6) = *(_OWORD *)(v20 + 3236);
        *((_OWORD *)v23 + 7) = *(_OWORD *)(v20 + 3252);
        v26 = *(_DWORD *)(v20 + 3268);
      }
      *((_DWORD *)v23 + 32) = v26;
      v27 = (char *)v23 + 1416;
      v28 = 2LL;
      *((_DWORD *)v23 + 33) = a8;
      *((_DWORD *)v23 + 34) = a9;
      *((_QWORD *)v23 + 18) = a10;
      v29 = a2;
      do
      {
        v27 += 128;
        v30 = *(_OWORD *)v29;
        v29 += 32;
        *((_OWORD *)v27 - 8) = v30;
        *((_OWORD *)v27 - 7) = *((_OWORD *)v29 - 7);
        *((_OWORD *)v27 - 6) = *((_OWORD *)v29 - 6);
        *((_OWORD *)v27 - 5) = *((_OWORD *)v29 - 5);
        *((_OWORD *)v27 - 4) = *((_OWORD *)v29 - 4);
        *((_OWORD *)v27 - 3) = *((_OWORD *)v29 - 3);
        *((_OWORD *)v27 - 2) = *((_OWORD *)v29 - 2);
        *((_OWORD *)v27 - 1) = *((_OWORD *)v29 - 1);
        --v28;
      }
      while ( v28 );
      v31 = v35;
      *(_OWORD *)v27 = *(_OWORD *)v29;
      *((_OWORD *)v27 + 1) = *((_OWORD *)v29 + 1);
      *((_OWORD *)v27 + 2) = *((_OWORD *)v29 + 2);
      *((_OWORD *)v27 + 3) = *((_OWORD *)v29 + 3);
      *((_OWORD *)v27 + 4) = *((_OWORD *)v29 + 4);
      *((_OWORD *)v27 + 5) = *((_OWORD *)v29 + 5);
      *((_OWORD *)v27 + 6) = *((_OWORD *)v29 + 6);
      *((_QWORD *)v27 + 14) = *((_QWORD *)v29 + 14);
      *((_DWORD *)v23 + 340) = a2[2];
      *((_DWORD *)v23 + 341) = a2[8];
      *((_DWORD *)v23 + 2) = 0;
      v32 = v36;
      *((_DWORD *)v23 + 38) = a11;
      *((_DWORD *)v23 + 338) = 1;
      v24 = ExecutionModel::ResourceSet::AcquireInternalResources(
              v32,
              (struct ExecutionModel::_ResourceInfo *)(a2 + 22),
              a12,
              v31,
              v23);
      if ( v24 >= 0 )
      {
        if ( *((struct IUnknown **)v23 + 224) != a3 )
          ATL::AtlComPtrAssign((struct IUnknown **)v23 + 224, a3);
        *((_QWORD *)v23 + 225) = a4;
        *a15 = (char *)v23 + 1368;
        return 0LL;
      }
    }
    else
    {
      v24 = -2147024882;
    }
  }
  if ( v23 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *, _QWORD))(*(_QWORD *)v23 + 32LL))(v23, 0LL);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v24;
}
