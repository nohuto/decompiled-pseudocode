/*
 * XREFs of ?GetApplicationCommitMemoryLimit@ResourceManager@ExecutionModel@@UEAAJKPEA_K@Z @ 0x180035B50
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostFindProcessResourceSet @ 0x180002CA8 (RmpActivityHostFindProcessResourceSet.c)
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009600 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18003BBE4 (RmpActivityHostFindPsmResourceSets.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetApplicationCommitMemoryLimit(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  unsigned int v4; // esi
  _BYTE *v7; // rax
  bool v8; // r8
  unsigned __int64 v9; // rcx
  _BYTE *v10; // rax
  ExecutionModel::ModernActivationResourceInfo *PsmResourceSets; // rax
  __int64 ProcessResourceSet; // rax
  _WORD *v14; // [rsp+40h] [rbp-69h] BYREF
  char *v15; // [rsp+48h] [rbp-61h]
  _BYTE *v16; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v17[2]; // [rsp+5Eh] [rbp-4Bh] BYREF
  unsigned int v18; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-45h] BYREF
  int v20; // [rsp+68h] [rbp-41h] BYREF
  __int64 v21; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v22[80]; // [rsp+80h] [rbp-29h] BYREF

  v14 = &v16;
  v4 = 0;
  v15 = (char *)&v16;
  LOWORD(v16) = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(&v14) )
    {
      v7 = v17;
      if ( v14 != (_WORD *)&v16 )
        v7 = v16;
      v20 = 2 * ((v7 - (_BYTE *)v14) >> 1);
      v8 = (*(int (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _WORD *, int *, _BYTE *, unsigned int *, unsigned int *, __int64 *))(*(_QWORD *)this + 384LL))(
             this,
             a2,
             v14,
             &v20,
             v22,
             &v18,
             &v19,
             &v21) >= 0;
      v9 = -1LL;
      do
        ++v9;
      while ( v14[v9] );
      v10 = v17;
      if ( v14 != (_WORD *)&v16 )
        v10 = v16;
      if ( v9 > (v10 - (_BYTE *)v14) >> 1 )
        __int2c();
      v15 = (char *)&v14[v9];
      if ( v8 )
      {
        PsmResourceSets = (ExecutionModel::ModernActivationResourceInfo *)RmpActivityHostFindPsmResourceSets(
                                                                            &v14,
                                                                            v22,
                                                                            v18,
                                                                            v19,
                                                                            v21);
        if ( PsmResourceSets )
        {
          ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
            PsmResourceSets,
            0LL,
            0LL,
            a3,
            0LL,
            0LL);
          goto LABEL_18;
        }
      }
      else
      {
        ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
        if ( ProcessResourceSet )
        {
          *a3 = *(_QWORD *)(ProcessResourceSet + 1456);
          goto LABEL_18;
        }
      }
    }
    v4 = -2147024882;
  }
  else
  {
    v4 = -2147024809;
  }
LABEL_18:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)&v14);
  return v4;
}
