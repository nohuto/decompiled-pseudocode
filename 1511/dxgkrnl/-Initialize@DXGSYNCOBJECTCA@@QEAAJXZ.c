/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C0151014
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00949B8 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this)
{
  PVOID PoolWithTag; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v9; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x30uLL, 0x4B677844u);
  *((_QWORD *)this + 32) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    v9 = (_QWORD *)(*((_QWORD *)this + 32) + 16LL);
    v9[1] = v9;
    *v9 = v9;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 32) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 32));
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v7 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
