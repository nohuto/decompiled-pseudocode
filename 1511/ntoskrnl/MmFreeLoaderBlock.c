/*
 * XREFs of MmFreeLoaderBlock @ 0x14074E52C
 * Callers:
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x140521B08 (MmFreeBootRegistry.c)
 */

void MmFreeLoaderBlock()
{
  unsigned __int64 v0; // rbp
  __int64 *v1; // r14
  unsigned int v2; // r13d
  __int64 v3; // rbx
  int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  signed __int64 v8; // r15
  KIRQL v9; // al
  _KPROCESS *v10; // rdx
  __int64 *v11; // rdi
  __int64 *v12; // r15
  _QWORD *v13; // rsi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *i; // rsi
  unsigned __int64 v19; // r12
  _BYTE *v20; // rbp
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  __int64 *v25; // rcx
  _QWORD *v26; // rbx
  unsigned int v27; // eax
  _QWORD *j; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rdi
  ULONG_PTR v33; // rcx
  unsigned __int64 v34; // rdi
  KIRQL v35; // [rsp+20h] [rbp-118h]
  __int64 *PoolWithTag; // [rsp+28h] [rbp-110h]
  __int64 v37; // [rsp+38h] [rbp-100h]
  int v38; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v39; // [rsp+44h] [rbp-F4h]
  __int64 v40; // [rsp+48h] [rbp-F0h]
  __int64 v41; // [rsp+50h] [rbp-E8h]
  __int64 v42; // [rsp+58h] [rbp-E0h]

  v0 = 0LL;
  v1 = (__int64 *)(KeLoaderBlock_0 + 32);
  v2 = 0;
  v3 = 0LL;
  v37 = KeLoaderBlock_0 + 32;
  v4 = 2113664;
  v5 = *(__int64 **)(KeLoaderBlock_0 + 32);
  if ( v5 != (__int64 *)(KeLoaderBlock_0 + 32) )
  {
    do
    {
      v6 = v5[4];
      if ( v6 )
      {
        v7 = *((_DWORD *)v5 + 4);
        if ( v7 == 19 )
          v3 += v6;
        if ( v7 <= 0x15 && _bittest(&v4, v7) )
          ++v2;
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v1 );
    if ( v3 )
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v3 + 8, 0x6C4D6D4Du);
      v8 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (unsigned int)MiChargeWsles((ULONG_PTR)&dword_1402FFA80, v3, 0LL) )
        {
          *PoolWithTag = v3;
          v40 = 20LL;
          v38 = 0;
          v39 = 0;
          v41 = 0LL;
          v42 = 0LL;
          v9 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
          v11 = (__int64 *)*v1;
          v35 = v9;
          if ( (__int64 *)*v1 != v1 )
          {
            v12 = PoolWithTag + 1;
            do
            {
              if ( *((_DWORD *)v11 + 4) == 19 && v11[4] )
              {
                v13 = (_QWORD *)(48 * v11[3] - 0x57FFFFFFFF8LL);
                do
                {
                  v14 = *v13 | 0x8000000000000000uLL;
                  *v12++ = (__int64)(v14 << 25) >> 16;
                  v15 = MI_READ_PTE_LOCK_FREE((__int64 *)v14) & 0xFFFFFFFFFFFFF01EuLL | 0x880;
                  *(_QWORD *)v14 = v15;
                  if ( MiPteInShadowRange(v14) )
                    MiWritePteShadow(v14, v15);
                  MiInsertTbFlushEntry((__int64)&v38, (__int64)(v14 << 25) >> 16, 1LL, 0);
                  ++v0;
                  v13 += 6;
                }
                while ( v0 < v11[4] );
                v1 = (__int64 *)v37;
                v0 = 0LL;
              }
              v11 = (__int64 *)*v11;
            }
            while ( v11 != v1 );
            v8 = (signed __int64)PoolWithTag;
          }
          MiFlushTbList((__int64)&v38, v10);
          for ( i = (__int64 *)*v1; i != v1; i = (__int64 *)*i )
          {
            if ( *((_DWORD *)i + 4) == 19 && i[4] )
            {
              v19 = 0LL;
              v20 = (_BYTE *)(48 * i[3] - 0x57FFFFFFFDELL);
              do
              {
                v21 = MiLockPageInline((__int64)(v20 - 34));
                *v20 |= 0x10u;
                v22 = v21;
                *(_QWORD *)(v20 - 18) = 128LL;
                MiDecrementShareCount((__int64)(v20 - 34));
                _InterlockedAnd64((volatile signed __int64 *)(v20 - 10), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v22);
                ++v19;
                v20 += 48;
              }
              while ( v19 < i[4] );
            }
          }
          LOBYTE(v16) = v35;
          MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v16, v17);
          if ( _InterlockedCompareExchange64(&qword_1402FF6D0, v8, 0LL) )
          {
            qword_1402FF6D0 = v8;
            MmFreeBootRegistry();
          }
          v4 = 2113664;
        }
        else
        {
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
    }
  }
  v23 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v2, 0x6C4D6D4Du);
  v24 = v23;
  if ( v23 )
  {
    v25 = (__int64 *)*v1;
    v26 = v23;
    if ( (__int64 *)*v1 != v1 )
    {
      do
      {
        v27 = *((_DWORD *)v25 + 4);
        if ( v27 <= 0x15 && _bittest(&v4, v27) && v25[4] )
        {
          *v26 = v25[3];
          v26[1] = v25[4];
          v26 += 2;
        }
        v25 = (__int64 *)*v25;
      }
      while ( v25 != v1 );
      if ( v26 != v24 )
      {
        for ( j = v26 - 2; j >= v24; j -= 2 )
        {
          v29 = j[1];
          v30 = 48LL * *j;
          v31 = (_QWORD *)(v30 - 0x57FFFFFFFF8LL);
          v32 = *(_QWORD *)(v30 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v29 )
          {
            v31 += 6;
            v32 += 8LL;
            if ( (*v31 | 0x8000000000000000uLL) != v32 )
            {
              v33 = *(_QWORD *)(v30 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              v34 = (__int64)(v32 - v33) >> 3;
              MiDeleteBootRange(v33, v34);
              j[1] -= v34;
              *j += v34;
              j += 2;
              if ( v34 )
                goto LABEL_49;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *j - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, j[1]);
LABEL_49:
          ;
        }
      }
    }
    ExFreePoolWithTag(v24, 0);
  }
}
