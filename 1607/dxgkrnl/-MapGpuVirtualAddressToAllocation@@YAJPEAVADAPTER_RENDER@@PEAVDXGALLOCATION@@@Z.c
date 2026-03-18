/*
 * XREFs of ?MapGpuVirtualAddressToAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGALLOCATION@@@Z @ 0x1C006EE14
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C006EB30 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C0155620 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall MapGpuVirtualAddressToAllocation(struct ADAPTER_RENDER *a1, struct DXGALLOCATION *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // r15d
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-79h]
  _BYTE v27[16]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v28[14]; // [rsp+50h] [rbp-49h] BYREF

  memset(v28, 0, 0x68uLL);
  v4 = *((_QWORD *)a1 + 2);
  v28[7] |= 1uLL;
  if ( *(_BYTE *)(v4 + 2058) )
  {
    v5 = *((_QWORD *)a2 + 5);
    v6 = 0;
    v7 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(v5 + 80));
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    v9 = *(_QWORD *)(v5 + 24);
    while ( v9 )
    {
      LOBYTE(v26) = 0;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, int))(*(_QWORD *)(*((_QWORD *)a1 + 50)
                                                                                              + 8LL)
                                                                                  + 792LL))(
              *((_QWORD *)a1 + 51),
              0LL,
              *(_QWORD *)(v9 + 24),
              v28,
              v26,
              (*(_DWORD *)(v9 + 72) >> 12) & 0x3F);
      v15 = v10;
      if ( v10 < 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
        *(_QWORD *)(v18 + 24) = v15;
        WdLogEvent5_WdWarning(v18);
        goto LABEL_14;
      }
      v28[1] = v28[11];
      v8 = (*(_DWORD *)(v9 + 72) >> 12) & 0x3F;
      v16 = 1 << ((*(_DWORD *)(v9 + 72) >> 12) & 0x3F);
      if ( (v16 & v6) != 0 )
      {
        v17 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v17 + 24) = 1603LL;
LABEL_12:
        WdLogEvent5_WdError(v17);
        LODWORD(v15) = -1073741811;
LABEL_14:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
        return (unsigned int)v15;
      }
      v9 = *(_QWORD *)(v9 + 64);
      v6 |= v16;
      ++v7;
    }
    if ( v7 != *(_DWORD *)(*((_QWORD *)a1 + 2) + 248LL) )
    {
      v17 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v17 + 24) = 1612LL;
      goto LABEL_12;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
    return 0LL;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, _BYTE, _DWORD))(*(_QWORD *)(*((_QWORD *)a1 + 50)
                                                                                               + 8LL)
                                                                                   + 792LL))(
          *((_QWORD *)a1 + 51),
          0LL,
          *((_QWORD *)a2 + 3),
          v28,
          0,
          *(_DWORD *)(v4 + 2156));
  v15 = v20;
  if ( v20 >= 0 )
    return 0LL;
  v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
  *(_QWORD *)(v25 + 24) = v15;
  WdLogEvent5_WdWarning(v25);
  return (unsigned int)v15;
}
