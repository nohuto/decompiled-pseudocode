/*
 * XREFs of ?GetApplicationMemoryUsage@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x18003E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005394 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?HasAppliedResources@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18003630C (-HasAppliedResources@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18003BBE4 (RmpActivityHostFindPsmResourceSets.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetApplicationMemoryUsage(
        ExecutionModel::ResourceManager *this,
        DWORD a2,
        unsigned __int64 *a3)
{
  int v6; // r14d
  unsigned __int64 v7; // r12
  _BYTE *v8; // rax
  bool v9; // r8
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rax
  ExecutionModel::ModernActivationResourceInfo **PsmResourceSets; // rcx
  ExecutionModel::ModernActivationResourceInfo *v13; // rcx
  HANDLE v14; // rbx
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  _WORD *v19; // [rsp+50h] [rbp-B0h] BYREF
  char *v20; // [rsp+58h] [rbp-A8h]
  _BYTE *v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[2]; // [rsp+6Eh] [rbp-92h] BYREF
  int v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  ExecutionModel::ResourceManager *v25; // [rsp+80h] [rbp-80h]
  _BYTE v26[80]; // [rsp+90h] [rbp-70h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+E0h] [rbp-20h] BYREF

  v25 = this;
  LOWORD(v21) = 0;
  v19 = &v21;
  v20 = (char *)&v21;
  v16 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(&v19) )
    {
      v8 = v22;
      if ( v19 != (_WORD *)&v21 )
        v8 = v21;
      v23 = 2 * ((v8 - (_BYTE *)v19) >> 1);
      v9 = (*(int (__fastcall **)(char *, _QWORD, _WORD *, int *, _BYTE *, unsigned int *, int *, __int64 *))(*((_QWORD *)this - 1) + 384LL))(
             (char *)this - 8,
             a2,
             v19,
             &v23,
             v26,
             &v17,
             &v18,
             &v24) >= 0;
      v10 = -1LL;
      do
        ++v10;
      while ( v19[v10] );
      v11 = v22;
      if ( v19 != (_WORD *)&v21 )
        v11 = v21;
      if ( v10 > (v11 - (_BYTE *)v19) >> 1 )
        __int2c();
      v20 = (char *)&v19[v10];
      if ( v9 )
      {
        RtlEnterCriticalSection(&RmpGlobalLock);
        PsmResourceSets = (ExecutionModel::ModernActivationResourceInfo **)RmpActivityHostFindPsmResourceSets(
                                                                             &v19,
                                                                             v26,
                                                                             v17,
                                                                             v18,
                                                                             v24);
        if ( PsmResourceSets && ExecutionModel::ModernActivationResourceInfo::HasAppliedResources(PsmResourceSets) )
        {
          ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(v13, &v16, 0LL, 0LL, 0LL, 0LL);
          v7 = v16;
        }
        RtlLeaveCriticalSection(&RmpGlobalLock);
        v6 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _BYTE *, _QWORD, int, __int64, unsigned __int64 *))(**((_QWORD **)v25 + 14) + 48LL))(
               *((_QWORD *)v25 + 14),
               v19,
               v26,
               v17,
               v18,
               v24,
               a3);
        if ( v6 >= 0 )
          *a3 += v7;
      }
      else
      {
        v16 = 0LL;
        v14 = OpenProcess(0x400u, 0, a2);
        if ( v14
          && (tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)&v16),
              v16 = (unsigned __int64)v14,
              K32GetProcessMemoryInfo(v14, &ppsmemCounters, 0x48u)) )
        {
          *a3 = ppsmemCounters.PagefileUsage;
        }
        else
        {
          v6 = -2147467259;
        }
        tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete((void **)&v16);
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)&v19);
  return (unsigned int)v6;
}
