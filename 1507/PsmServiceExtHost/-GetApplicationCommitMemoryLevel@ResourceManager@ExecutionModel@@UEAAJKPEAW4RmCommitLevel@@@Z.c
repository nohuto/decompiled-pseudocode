/*
 * XREFs of ?GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z @ 0x1800359C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x18003BBE4 (RmpActivityHostFindPsmResourceSets.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetApplicationCommitMemoryLevel(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        enum RmCommitLevel *a3)
{
  int v6; // ebx
  _BYTE *v7; // rax
  unsigned __int64 v8; // rcx
  _BYTE *v9; // rax
  __int64 PsmResourceSets; // rax
  _WORD *v12; // [rsp+40h] [rbp-69h] BYREF
  char *v13; // [rsp+48h] [rbp-61h]
  _BYTE *v14; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v15[2]; // [rsp+5Eh] [rbp-4Bh] BYREF
  unsigned int v16; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+64h] [rbp-45h] BYREF
  int v18; // [rsp+68h] [rbp-41h] BYREF
  __int64 v19; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v20[80]; // [rsp+80h] [rbp-29h] BYREF

  v12 = &v14;
  v13 = (char *)&v14;
  LOWORD(v14) = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  if ( !a3 )
  {
LABEL_2:
    v6 = -2147024809;
    goto LABEL_16;
  }
  *(_DWORD *)a3 = 0;
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(&v12) )
  {
    v6 = -2147024882;
    goto LABEL_16;
  }
  v7 = v15;
  if ( v12 != (_WORD *)&v14 )
    v7 = v14;
  v18 = 2 * ((v7 - (_BYTE *)v12) >> 1);
  v6 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _WORD *, int *, _BYTE *, unsigned int *, unsigned int *, __int64 *))(*(_QWORD *)this + 384LL))(
         this,
         a2,
         v12,
         &v18,
         v20,
         &v16,
         &v17,
         &v19);
  v8 = -1LL;
  do
    ++v8;
  while ( v12[v8] );
  v9 = v15;
  if ( v12 != (_WORD *)&v14 )
    v9 = v14;
  if ( v8 > (v9 - (_BYTE *)v12) >> 1 )
    __int2c();
  v13 = (char *)&v12[v8];
  if ( v6 >= 0 )
  {
    PsmResourceSets = RmpActivityHostFindPsmResourceSets(&v12, v20, v16, v17, v19);
    if ( PsmResourceSets )
    {
      *(_DWORD *)a3 = *(_DWORD *)(PsmResourceSets + 72);
      goto LABEL_16;
    }
    goto LABEL_2;
  }
LABEL_16:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)&v12);
  return (unsigned int)v6;
}
