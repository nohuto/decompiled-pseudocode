/*
 * XREFs of ndisOidPostIovAllocateVF @ 0x1C0064860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostIovAllocateVF(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  KIRQL v6; // r9
  __int64 *v7; // rax
  unsigned __int16 v8; // r8
  unsigned __int16 v9; // dx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 *i; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 *j; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rbx
  __int64 v21; // rax

  v1 = a1[4];
  v3 = *a1;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qq(0x21u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
  if ( *a1 )
  {
    v4 = *(_QWORD *)(v1 + 144);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v4 )
        ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
    }
    else
    {
      v5 = *(_QWORD *)(v1 + 40);
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2886417;
      if ( v4 )
      {
        *(_WORD *)(v4 + 1722) = *(_WORD *)(v5 + 1626);
        *(_DWORD *)(v4 + 1724) = *(_DWORD *)(v5 + 1628);
      }
      v7 = *(__int64 **)(v3 + 4784);
      if ( v7 == (__int64 *)(v3 + 4784) )
      {
LABEL_14:
        v10 = (__int64 *)v7[1];
        v11 = *v10;
        *(_QWORD *)v4 = *v10;
        *(_QWORD *)(v4 + 8) = v10;
        if ( *(__int64 **)(v11 + 8) != v10 )
          __fastfail(3u);
        *(_QWORD *)(v11 + 8) = v4;
        *v10 = v4;
        ++*(_DWORD *)(v3 + 4776);
      }
      else
      {
        v8 = *(_WORD *)(v4 + 1722);
        while ( 1 )
        {
          v9 = *((_WORD *)v7 + 861);
          if ( v9 == v8 )
            break;
          if ( v9 <= v8 )
          {
            v7 = (__int64 *)*v7;
            if ( v7 != (__int64 *)(v3 + 4784) )
              continue;
          }
          goto LABEL_14;
        }
      }
      v12 = *(_QWORD *)(v4 + 56);
      for ( i = *(__int64 **)(v12 + 904); i != (__int64 *)(v12 + 904); i = (__int64 *)*i )
      {
        if ( *((_WORD *)i + 853) > *(_WORD *)(v4 + 1722) )
          break;
      }
      v14 = (__int64 *)i[1];
      v15 = v4 + 16;
      v16 = *v14;
      *(_QWORD *)(v4 + 16) = *v14;
      *(_QWORD *)(v4 + 24) = v14;
      if ( *(__int64 **)(v16 + 8) != v14 )
        __fastfail(3u);
      *(_QWORD *)(v16 + 8) = v15;
      *v14 = v15;
      ++*(_DWORD *)(v12 + 896);
      v17 = *(_QWORD *)(v4 + 64);
      for ( j = *(__int64 **)(v17 + 80); j != (__int64 *)(v17 + 80); j = (__int64 *)*j )
      {
        if ( *((_WORD *)j + 845) > *(_WORD *)(v4 + 1722) )
          break;
      }
      v19 = (__int64 *)j[1];
      v20 = (__int64 *)(v4 + 32);
      v21 = *v19;
      *v20 = *v19;
      v20[1] = (__int64)v19;
      if ( *(__int64 **)(v21 + 8) != v19 )
        __fastfail(3u);
      *(_QWORD *)(v21 + 8) = v20;
      *v19 = (__int64)v20;
      ++*(_DWORD *)(v17 + 72);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v6);
    }
  }
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_qq(0x22u, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, v3, v1);
}
