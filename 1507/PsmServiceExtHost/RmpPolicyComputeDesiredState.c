/*
 * XREFs of RmpPolicyComputeDesiredState @ 0x18000D390
 * Callers:
 *     RmpEnforcementWorkCallback @ 0x180006D40 (RmpEnforcementWorkCallback.c)
 *     RmpActivityHostCheckQueueWork @ 0x18003B7DC (RmpActivityHostCheckQueueWork.c)
 * Callees:
 *     RmpActivityHostQueryIsAoW @ 0x180004BCC (RmpActivityHostQueryIsAoW.c)
 *     RmpPolicyGetDesiredEmptyOptimizationsForHost @ 0x1800055B4 (RmpPolicyGetDesiredEmptyOptimizationsForHost.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpActivityHostIsKillable @ 0x180009F48 (RmpActivityHostIsKillable.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RmpPolicyComputeDesiredState(__int64 a1)
{
  int v1; // r14d
  unsigned __int8 v3; // bl
  int v4; // eax
  int v5; // edi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 Next; // rax
  __int64 i; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r10d
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // r15d
  unsigned __int8 v21; // si
  char *v23; // rdx
  unsigned __int64 v24; // rax
  _DWORD *v25; // r14
  __int64 v26; // rcx
  char DesiredEmptyOptimizationsForHost; // di
  bool v28; // si
  unsigned int v29; // [rsp+30h] [rbp-68h] BYREF
  int v30; // [rsp+34h] [rbp-64h]
  int v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  __int64 v34; // [rsp+50h] [rbp-48h]
  int v35; // [rsp+58h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 40);
  v3 = (*(_BYTE *)(a1 + 772) | *(_BYTE *)(a1 + 773)) & 0x27;
  v30 = v1;
  if ( v1 || (v4 = *(_DWORD *)(a1 + 584), v4 == 2) )
  {
    v5 = 0;
    if ( v1 )
    {
      v5 = 2 * (*(_BYTE *)(a1 + 772) & 0x40);
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 24);
      v7 = *(_DWORD *)(a1 + 584);
      v8 = *((_QWORD *)RmSvcGlobals + 10);
      v29 = *(_DWORD *)(a1 + 580);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int *))(v8 + 192))(
             a1 + 512,
             v29,
             a1 + 48,
             v7,
             v6,
             &v31);
      v1 = v30;
      if ( v9 >= 0 && v31 == 7 )
        v5 = 128;
    }
    memset_0(&v32, 0, 0x20uLL);
    v32 = a1;
    v10 = *(_QWORD *)(a1 + 608);
    v35 = 0;
    if ( v10 == a1 + 608 )
      v33 = 0LL;
    else
      v33 = v10 - 1384;
    Next = RmpActivityHostEnumerateResourceSetGetNext(&v32);
    for ( i = 0x8800001000LL; Next; Next = RmpActivityHostEnumerateResourceSetGetNext(&v32) )
    {
      if ( *(_DWORD *)(Next + 1352) == 2 || (*(_BYTE *)(Next + 1912) & 0x10) != 0 )
      {
        if ( !ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(Next + 1408))
          || v23[26] < 0 )
        {
          v5 |= 0x40u;
        }
        if ( (v23[26] & 4) != 0 || (v24 = *(int *)v23, (unsigned int)v24 <= 0x27) && _bittest64(&i, v24) )
        {
          v5 |= 5u;
        }
        else if ( !ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)v23) )
        {
          v5 |= 3u;
        }
      }
    }
    memset_0(&v32, 0, 0x20uLL);
    v13 = *(_QWORD *)(a1 + 600);
    v32 = a1;
    v35 = 1;
    if ( *(_DWORD *)(a1 + 40) == 1 )
      v33 = v13;
    else
      v34 = *(_QWORD *)(v13 + 24);
    v14 = RmpActivityHostEnumerateResourceSetGetNext(&v32);
    if ( v14 )
    {
      v16 = 0x11000002000LL;
      do
      {
        if ( (*(_BYTE *)(v14 + 1432) & 2) == 0
          && ((v17 = *(int *)(v14 + 1408), (unsigned int)v17 > 0x28) || !_bittest64(&v16, v17))
          || *(char *)(v14 + 1434) < 0 )
        {
          v5 |= 0x40u;
        }
        if ( (*(_BYTE *)(v14 + 1432) & 2) != 0
          || (v18 = *(int *)(v14 + 1408), (unsigned int)v18 <= 0x28) && _bittest64(&v16, v18) )
        {
          v5 |= 0x20u;
        }
        else if ( (*(_BYTE *)(v14 + 1434) & 4) != 0
               || (v19 = *(int *)(v14 + 1408), (unsigned int)v19 <= 0x27) && _bittest64(&i, v19) )
        {
          v5 |= 0x18u;
        }
        else
        {
          v5 |= 8u;
        }
        v14 = RmpActivityHostEnumerateResourceSetGetNext(&v32);
      }
      while ( v14 );
    }
    if ( (v5 & 0x89) == 0x80 )
    {
      v20 = 0;
    }
    else
    {
      v20 = v15;
      v15 = 0;
    }
    v21 = 0;
    if ( v1 == 1 )
    {
      v28 = (v5 & 0x28) == 0x20 || (*(_BYTE *)(a1 + 768) & 8) != 0;
      v21 = v28 << 6;
    }
    if ( v15 || v1 == 1 && (v5 & 2) == 0 && ((v5 & 0x10) != 0 || (v5 & 0x20) != 0) )
    {
      v25 = RmSvcGlobals;
      v21 = v21 & 0xF4 | ((*((_DWORD *)RmSvcGlobals + 414) & 2) != 0) | (2
                                                                       * ((4 * (*((_DWORD *)RmSvcGlobals + 414) & 1)) | ((*((_DWORD *)RmSvcGlobals + 414) & 4) != 0)));
      if ( (_bittest16((const signed __int16 *)(a1 + 904), 8u) & (unsigned __int8)~(v3 >> 2) & 1) == 0 )
        v21 ^= (v21 ^ (4 * (*((_DWORD *)RmSvcGlobals + 414) >> 3))) & 4;
      if ( (int)RmpActivityHostQueryIsAoW(a1, &v29) < 0 )
        v29 = 0;
      if ( !v20 )
      {
        if ( RmpActivityHostIsKillable(a1) && (v5 & 0x40) == 0 && !v29 )
          v21 ^= (v21 ^ (16 * (v25[415] >> 3))) & 0x10;
        DesiredEmptyOptimizationsForHost = RmpPolicyGetDesiredEmptyOptimizationsForHost(v26, a1);
        if ( (v21 & 0x27) != 0 )
        {
          v21 ^= (v21 ^ DesiredEmptyOptimizationsForHost) & 0x20;
        }
        else if ( RmpPolicyActivityHostIsValidEmptyTarget(a1) )
        {
          v21 |= DesiredEmptyOptimizationsForHost & 0x27;
        }
        v21 |= v3 & 0x27;
      }
    }
  }
  else
  {
    v21 = 0;
    if ( v4 == 4 && (*(_BYTE *)(a1 + 768) & 8) != 0 )
      return 64;
  }
  return v21;
}
