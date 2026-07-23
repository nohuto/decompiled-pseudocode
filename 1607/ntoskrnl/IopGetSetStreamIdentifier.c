/*
 * XREFs of IopGetSetStreamIdentifier @ 0x1401C932C
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x1401C8880 (IoAllocateSfioStreamIdentifier.c)
 *     IoGetSfioStreamIdentifier @ 0x1401C8B00 (IoGetSfioStreamIdentifier.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v5; // r14
  __int64 v6; // r12
  __int64 result; // rax
  unsigned int v10; // ebx
  _QWORD *v11; // rdi
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // al
  _QWORD *v14; // rdx
  _QWORD *PoolWithTag; // rsi
  KIRQL v16; // al
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = (_QWORD *)a4;
  v6 = a2;
  LOBYTE(a4) = a5;
  result = IopGetSetSpecificExtension(a1, 4u, 16LL, a4, &v18, v19);
  v10 = 0;
  if ( (int)result < 0 )
    return result;
  v11 = v18;
  if ( !v18 )
  {
    *v5 = 0LL;
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
          if ( (_QWORD *)*v17 != v11 )
            __fastfail(3u);
          PoolWithTag[1] = v17;
          *PoolWithTag = v11;
          *v17 = PoolWithTag;
          v11[1] = PoolWithTag;
          PoolWithTag[2] = PoolWithTag + 4;
          PoolWithTag[3] = a3;
          *v5 = PoolWithTag + 4;
          KeReleaseSpinLock(v12, v16);
          return 0LL;
        }
        result = 3221225626LL;
      }
      else
      {
        result = 0LL;
      }
      *v5 = 0LL;
      return result;
    }
    if ( v14[3] == a3 )
      break;
    v14 = (_QWORD *)*v14;
  }
  if ( a5 )
  {
    *v5 = 0LL;
    v10 = -1073741791;
  }
  else
  {
    *v5 = v14[2];
  }
  KeReleaseSpinLock(v12, v13);
  return v10;
}
