/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C015AB8C
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C009E4A0 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseNumSessions(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // edi
  _QWORD *v9; // rax
  SIZE_T v10; // rax
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rax
  __int64 result; // rax
  char *v19; // rcx

  v5 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)this != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3225LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((struct _KTHREAD **)this + 13) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 3226LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)this + 24);
  do
    v8 *= 2;
  while ( (unsigned int)v5 >= v8 );
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  v9[3] = *((unsigned int *)this + 24);
  v9[4] = v8;
  v9[5] = v5;
  WdLogEvent5_WdEvent(v9);
  v10 = 8LL * v8;
  if ( !is_mul_ok(v8, 8uLL) )
    v10 = -1LL;
  v11 = (char *)operator new[](v10, 0x4B677844u, PagedPool);
  v16 = v11;
  if ( v11 )
  {
    memmove(v11, *((const void **)this + 8), 8LL * *((unsigned int *)this + 24));
    memset(&v16[8 * *((unsigned int *)this + 24)], 0, 8LL * (v8 - *((_DWORD *)this + 24)));
    v19 = (char *)*((_QWORD *)this + 8);
    if ( v19 != (char *)this + 72 )
      operator delete(v19);
    *((_QWORD *)this + 8) = v16;
    result = 0LL;
    *((_DWORD *)this + 24) = v8;
  }
  else
  {
    *((_DWORD *)this + 42) |= 1u;
    v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v8;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
  return result;
}
