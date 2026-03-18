/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C0156878
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00D8498 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
  __int64 v12; // rcx
  char *v13; // rsi
  __int64 v14; // rax
  __int64 result; // rax
  char *v16; // rcx

  v5 = (unsigned int)a2;
  if ( *((struct _KTHREAD **)this + 1) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 3153LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((struct _KTHREAD **)this + 11) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 3154LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)this + 18);
  do
    v8 *= 2;
  while ( (unsigned int)v5 >= v8 );
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  v9[3] = *((unsigned int *)this + 18);
  v9[4] = v8;
  v9[5] = v5;
  WdLogEvent5_WdEvent(v9);
  v10 = 8LL * v8;
  if ( !is_mul_ok(v8, 8uLL) )
    v10 = -1LL;
  v11 = (char *)operator new[](v10, 0x4B677844u, PagedPool);
  v13 = v11;
  if ( v11 )
  {
    memmove(v11, *((const void **)this + 5), 8LL * *((unsigned int *)this + 18));
    memset(&v13[8 * *((unsigned int *)this + 18)], 0, 8LL * (v8 - *((_DWORD *)this + 18)));
    v16 = (char *)*((_QWORD *)this + 5);
    if ( v16 != (char *)this + 48 )
      operator delete(v16);
    *((_QWORD *)this + 5) = v13;
    result = 0LL;
    *((_DWORD *)this + 18) = v8;
  }
  else
  {
    *((_DWORD *)this + 30) |= 1u;
    v14 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v14 + 24) = v8;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
  return result;
}
