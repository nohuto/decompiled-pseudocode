/*
 * XREFs of AlpcpCreateRegion @ 0x14047446C
 * Callers:
 *     AlpcpCreateSectionView @ 0x140474264 (AlpcpCreateSectionView.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 */

__int64 __fastcall AlpcpCreateRegion(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  _QWORD *Blob; // rax
  _QWORD *v22; // rbx
  __int64 BugCheckParameter4; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax

  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  if ( *(_KPROCESS **)(BugCheckParameter2 + 32) != CurrentThread->ApcState.Process )
    return 3221225506LL;
  v9 = ~((unsigned int)AlpcpViewGranularity - 1LL) & (a3 + (unsigned int)(AlpcpViewGranularity - 1));
  v10 = (unsigned int)(AlpcpRegionGranularity - 1);
  v11 = ~((unsigned int)AlpcpRegionGranularity - 1LL);
  v12 = v11 & (v10 + a3);
  if ( v9 < a3 || v12 < a3 )
    return 3221225485LL;
  if ( a2 )
  {
    v13 = (_QWORD *)(BugCheckParameter2 + 56);
    a2 = v11 & (v10 + a2);
  }
  else
  {
    v14 = (_QWORD *)(BugCheckParameter2 + 56);
    v13 = 0LL;
    v15 = *(_QWORD **)(BugCheckParameter2 + 56);
    v16 = 0LL;
    v17 = 0LL;
    if ( v15 == (_QWORD *)(BugCheckParameter2 + 56) )
    {
LABEL_17:
      if ( *(_QWORD *)(BugCheckParameter2 + 8) - a2 < v12 )
        return 3221225626LL;
      v13 = (_QWORD *)(BugCheckParameter2 + 56);
    }
    else
    {
      do
      {
        v18 = v15[3];
        v19 = v18 - a2;
        if ( v18 - a2 == v12 )
        {
          v13 = v15;
          goto LABEL_19;
        }
        if ( v19 > v12 && (!v13 || v16 > v19) )
        {
          v13 = v15;
          v17 = a2;
          v16 = v15[3] - a2;
        }
        v20 = v15[4];
        v15 = (_QWORD *)*v15;
        a2 = v18 + v20;
      }
      while ( v15 != v14 );
      if ( !v13 )
        goto LABEL_17;
      a2 = v17;
    }
  }
LABEL_19:
  Blob = (_QWORD *)AlpcpAllocateBlob(&AlpcRegionType, 88LL, 0LL);
  v22 = Blob;
  if ( !Blob )
    return 3221225626LL;
  memset(Blob, 0, 0x58uLL);
  v22[8] = v22 + 7;
  v22[7] = v22 + 7;
  *((_DWORD *)v22 + 12) &= ~1u;
  v22[3] = a2;
  v22[4] = v12;
  v22[5] = v9;
  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( BugCheckParameter4 > 0 )
  {
    v24 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(BugCheckParameter2 - 24),
                           BugCheckParameter4 + 1,
                           BugCheckParameter4);
    if ( BugCheckParameter4 == v24 )
      goto LABEL_24;
  }
  if ( BugCheckParameter4 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, BugCheckParameter4);
LABEL_24:
  v22[2] = BugCheckParameter2;
  v22[1] = v13[1];
  *v22 = v13;
  v25 = (_QWORD *)v13[1];
  *a4 = v22;
  *v25 = v22;
  v13[1] = v22;
  ++*(_DWORD *)(BugCheckParameter2 + 52);
  return 0LL;
}
