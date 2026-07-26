/*
 * XREFs of ndisOidPostIovCreateVPort @ 0x1C0069110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisIovAddVPortToPFList @ 0x1C0068100 (ndisIovAddVPortToPFList.c)
 *     ndisIovAddVPortToVFList @ 0x1C006814C (ndisIovAddVPortToVFList.c)
 */

void __fastcall ndisOidPostIovCreateVPort(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 *v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *i; // rax
  __int64 *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *j; // rax
  __int64 *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  KIRQL v22; // r10

  v1 = a1[4];
  v3 = *a1;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qq(0x2Fu, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v1);
  if ( *a1 )
  {
    v4 = *(_QWORD *)(v1 + 152);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v4 )
      {
        v5 = *(void **)(v1 + 152);
        *(_BYTE *)((*(_DWORD *)(v4 + 124) >> 3) + *(_QWORD *)(v3 + 4824)) &= ~(1 << (*(_BYTE *)(v4 + 124) & 7));
        ExFreePoolWithTag(v5, 0);
      }
    }
    else if ( v4 )
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      v6 = *(__int64 **)(v3 + 4808);
      *(_DWORD *)(v3 + 1856) = 2887715;
      if ( v6 == (__int64 *)(v3 + 4808) )
      {
LABEL_13:
        v9 = (__int64 *)v6[1];
        v10 = *v9;
        if ( *(__int64 **)(*v9 + 8) != v9 )
          __fastfail(3u);
        *(_QWORD *)v4 = v10;
        *(_QWORD *)(v4 + 8) = v9;
        *(_QWORD *)(v10 + 8) = v4;
        *v9 = v4;
        ++*(_DWORD *)(v3 + 4800);
      }
      else
      {
        v7 = *(_DWORD *)(v4 + 124);
        while ( 1 )
        {
          v8 = *((_DWORD *)v6 + 31);
          if ( v8 == v7 )
            break;
          if ( v8 <= v7 )
          {
            v6 = (__int64 *)*v6;
            if ( v6 != (__int64 *)(v3 + 4808) )
              continue;
          }
          goto LABEL_13;
        }
      }
      v11 = *(_QWORD *)(v4 + 80);
      for ( i = *(__int64 **)(v11 + 928); i != (__int64 *)(v11 + 928); i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 27) > *(_DWORD *)(v4 + 124) )
          break;
      }
      v13 = (__int64 *)i[1];
      v14 = (_QWORD *)(v4 + 16);
      v15 = *v13;
      if ( *(__int64 **)(*v13 + 8) != v13 )
        __fastfail(3u);
      *(_QWORD *)(v4 + 24) = v13;
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      *v13 = (__int64)v14;
      ++*(_DWORD *)(v11 + 920);
      v16 = *(_QWORD *)(v4 + 88);
      for ( j = *(__int64 **)(v16 + 56); j != (__int64 *)(v16 + 56); j = (__int64 *)*j )
      {
        if ( *((_DWORD *)j + 23) > *(_DWORD *)(v4 + 124) )
          break;
      }
      v18 = (__int64 *)j[1];
      v19 = (_QWORD *)(v4 + 32);
      v20 = *v18;
      if ( *(__int64 **)(*v18 + 8) != v18 )
        __fastfail(3u);
      *v19 = v20;
      *(_QWORD *)(v4 + 40) = v18;
      *(_QWORD *)(v20 + 8) = v19;
      *v18 = (__int64)v19;
      ++*(_DWORD *)(v16 + 48);
      *(_DWORD *)(v16 + 96) += *(_DWORD *)(v4 + 648);
      v21 = *(_QWORD *)(v4 + 96);
      if ( (*(_DWORD *)(v4 + 64) & 2) != 0 )
        ndisIovAddVPortToVFList(v21, v4);
      else
        ndisIovAddVPortToPFList(v21, v4);
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v22);
    }
  }
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qq(0x30u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, v3, v1);
}
