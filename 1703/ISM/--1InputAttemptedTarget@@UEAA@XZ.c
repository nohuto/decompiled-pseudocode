/*
 * XREFs of ??1InputAttemptedTarget@@UEAA@XZ @ 0x18006BF34
 * Callers:
 *     ??_GInputAttemptedTarget@@UEAAPEAXI@Z @ 0x18006BF00 (--_GInputAttemptedTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x18006CDC0 (-erase@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputAttemptedTarget::~InputAttemptedTarget(InputAttemptedTarget *this)
{
  _QWORD *v2; // rsi
  int v3; // r8d
  __int64 v4; // rcx
  unsigned __int64 i; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 *v10; // r9
  __int64 *v11; // rax
  __int64 *v12; // rdi
  __int64 *v13; // rax
  char **v14; // rax
  char *v15; // rcx
  char *v16; // rbx
  __int64 *v17; // r8
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  _BYTE v20[48]; // [rsp+28h] [rbp-30h] BYREF
  int v21; // [rsp+60h] [rbp+8h]
  __int64 *v22; // [rsp+68h] [rbp+10h]
  __int64 *v23; // [rsp+70h] [rbp+18h]
  char **v24; // [rsp+78h] [rbp+20h]

  *(_QWORD *)this = &InputAttemptedTarget::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 8);
  v3 = *((_DWORD *)this + 20);
  v21 = v3;
  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)&v21 + i) ^ (unsigned __int64)v4);
  v6 = v4 & v2[6];
  v7 = v2[3];
  v8 = *(__int64 **)(v7 + 16 * v6);
  v9 = 2 * v6;
  v10 = v8;
  while ( 1 )
  {
    if ( v10 == (__int64 *)v2[1] )
      v11 = (__int64 *)v2[1];
    else
      v11 = **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( v8 == v11 )
      goto LABEL_18;
    if ( *((_DWORD *)v8 + 4) == v3 )
      break;
    v8 = (__int64 *)*v8;
  }
  v12 = v8;
  while ( 1 )
  {
    v13 = v10 == (__int64 *)v2[1] ? (__int64 *)v2[1] : **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( v8 == v13 || v3 != *((_DWORD *)v8 + 4) )
      break;
    v8 = (__int64 *)*v8;
  }
  if ( v12 == v8 )
  {
LABEL_18:
    v8 = (__int64 *)v2[1];
    v22 = v8;
    v12 = v8;
  }
  v23 = v12;
  v23 = *(__int64 **)v2[1];
  if ( v12 == v23 && (v14 = (char **)v2[1], v24 = v14, v8 == (__int64 *)v14) )
  {
    v15 = *v14;
    *v14 = (char *)v14;
    *(_QWORD *)(v2[1] + 8LL) = v2[1];
    v2[2] = 0LL;
    if ( v15 != (char *)v2[1] )
    {
      do
      {
        v16 = *(char **)v15;
        std::_Deallocate(v15, 1uLL, 0x48uLL);
        v15 = v16;
      }
      while ( v16 != (char *)v2[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      v2,
      8LL);
  }
  else
  {
    while ( v12 != v8 )
    {
      v17 = v12;
      v12 = (__int64 *)*v12;
      std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::erase(
        v2,
        v20,
        v17);
    }
  }
  v18 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  *(_QWORD *)this = &InputTarget::`vftable';
  v19 = *((_QWORD *)this + 1);
  if ( v19 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
}
