/*
 * XREFs of IopGetSetStreamIdentifier @ 0x1401BB694
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x1401BAB9C (IoAllocateSfioStreamIdentifier.c)
 *     IoGetSfioStreamIdentifier @ 0x1401BAE18 (IoGetSfioStreamIdentifier.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v6; // r12
  __int64 result; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // al
  _QWORD *v14; // rdx
  _QWORD *PoolWithTag; // rsi
  KIRQL v16; // al
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = a2;
  result = IopGetSetSpecificExtension(a1, 4u, 0x10u, a5, &v18, v19);
  v10 = 0;
  if ( (int)result < 0 )
    return result;
  v11 = v18;
  if ( !v18 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v12 = (KSPIN_LOCK *)(a1 + 184);
  v13 = KeAcquireSpinLockRaiseToDpc(v12);
  v14 = (_QWORD *)*v11;
  if ( !*v11 )
  {
    v11[1] = v11;
    v14 = v11;
    *v11 = v11;
  }
  while ( 1 )
  {
    if ( v14 == v11 )
    {
      KeReleaseSpinLock(v12, v13);
      if ( a5 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 32, 0x74536F49u);
        if ( PoolWithTag )
        {
          v16 = KeAcquireSpinLockRaiseToDpc(v12);
          v17 = (_QWORD *)v11[1];
          *PoolWithTag = v11;
          PoolWithTag[1] = v17;
          if ( (_QWORD *)*v17 != v11 )
            __fastfail(3u);
          *v17 = PoolWithTag;
          v11[1] = PoolWithTag;
          PoolWithTag[2] = PoolWithTag + 4;
          PoolWithTag[3] = a3;
          *a4 = PoolWithTag + 4;
          KeReleaseSpinLock(v12, v16);
          return 0LL;
        }
        result = 3221225626LL;
      }
      else
      {
        result = 0LL;
      }
      *a4 = 0LL;
      return result;
    }
    if ( v14[3] == a3 )
      break;
    v14 = (_QWORD *)*v14;
  }
  if ( a5 )
  {
    *a4 = 0LL;
    v10 = -1073741791;
  }
  else
  {
    *a4 = v14[2];
  }
  KeReleaseSpinLock(v12, v13);
  return v10;
}
