/*
 * XREFs of ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18003CE94
 * Callers:
 *     ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x180044A50 (-HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z.c)
 * Callees:
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180002858 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     RmpActivityHostFindProcessResourceSet @ 0x180002904 (RmpActivityHostFindProcessResourceSet.c)
 *     RmpActivityHostFindPsmResourceSets @ 0x180002984 (RmpActivityHostFindPsmResourceSets.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::IsForegroundProcess(
        ExecutionModel::ResourceManager *this,
        unsigned int a2)
{
  unsigned int v4; // esi
  __int64 ProcessResourceSet; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE *v8; // rax
  bool v9; // r8
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rax
  __int64 PsmResourceSets; // rax
  _QWORD *v13; // r8
  __int64 v14; // rdx
  _QWORD *i; // rax
  __int64 v16; // rcx
  _WORD *v18; // [rsp+40h] [rbp-59h] BYREF
  char *v19; // [rsp+48h] [rbp-51h]
  _BYTE *v20; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v21[2]; // [rsp+5Eh] [rbp-3Bh] BYREF
  unsigned int v22; // [rsp+60h] [rbp-39h] BYREF
  int v23; // [rsp+64h] [rbp-35h] BYREF
  int v24; // [rsp+68h] [rbp-31h] BYREF
  __int64 v25; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v26[80]; // [rsp+80h] [rbp-19h] BYREF

  v4 = 0;
  ProcessResourceSet = RmpActivityHostFindProcessResourceSet(a2);
  if ( ProcessResourceSet )
  {
    if ( (*(_BYTE *)(ProcessResourceSet + 1434) & 0x40) != 0 )
      return 1;
    v6 = *(int *)(ProcessResourceSet + 1408);
    if ( (unsigned int)v6 <= 0x29 )
    {
      v7 = 0x24704100001LL;
      if ( _bittest64(&v7, v6) )
        return 1;
    }
  }
  else
  {
    LOWORD(v20) = 0;
    v18 = &v20;
    v19 = (char *)&v20;
    if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::resize(&v18) )
    {
      v8 = v21;
      if ( v18 != (_WORD *)&v20 )
        v8 = v20;
      v24 = 2 * ((v8 - (_BYTE *)v18) >> 1);
      v9 = (*(int (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _WORD *, int *, _BYTE *, unsigned int *, int *, __int64 *))(*(_QWORD *)this + 384LL))(
             this,
             a2,
             v18,
             &v24,
             v26,
             &v22,
             &v23,
             &v25) >= 0;
      v10 = -1LL;
      do
        ++v10;
      while ( v18[v10] );
      v11 = v21;
      if ( v18 != (_WORD *)&v20 )
        v11 = v20;
      if ( v10 > (v11 - (_BYTE *)v18) >> 1 )
        __int2c();
      v19 = (char *)&v18[v10];
      if ( v9 )
      {
        PsmResourceSets = RmpActivityHostFindPsmResourceSets(&v18, v26, v22, v23, v25);
        if ( PsmResourceSets )
        {
          v13 = (_QWORD *)(PsmResourceSets + 24);
          v14 = 0x24704100001LL;
          for ( i = *(_QWORD **)(PsmResourceSets + 24); i != v13; i = (_QWORD *)*i )
          {
            v16 = i[2];
            if ( (*(_BYTE *)(v16 + 1434) & 0x40) != 0
              || *(_DWORD *)(v16 + 1408) <= 0x29u && _bittest64(&v14, *(int *)(v16 + 1408)) )
            {
              v4 = 1;
              break;
            }
          }
        }
      }
    }
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)&v18);
  }
  return v4;
}
