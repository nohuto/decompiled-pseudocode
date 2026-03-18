/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C003B3F4
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C003B4F4 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C003AF80 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(void **this)
{
  _QWORD *v2; // rsi
  char *v3; // rdi
  char *v4; // rcx
  char **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 **v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax

  if ( this[15] )
  {
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)this);
    operator delete(this[15]);
    this[15] = 0LL;
  }
  v2 = this[17];
  v3 = (char *)(this + 6);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2 + 13, 0LL);
  v2[14] = KeGetCurrentThread();
  v4 = (char *)this[6];
  v5 = (char **)this[7];
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
    __fastfail(3u);
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  *(_QWORD *)v3 = 0LL;
  this[7] = 0LL;
  v2[14] = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 13, 0LL);
  KeLeaveCriticalRegion();
  if ( this[4] != this + 4 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8, v9);
    v13[3] = 270LL;
    v13[4] = 50LL;
    v13[5] = this;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( *this || this[1] )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8, v9);
    v14[3] = 270LL;
    v14[4] = 49LL;
    v14[5] = this;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  v10 = (__int64 **)(this + 2);
  while ( 1 )
  {
    v11 = *v10;
    v12 = **v10;
    if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
      __fastfail(3u);
    *v10 = (__int64 *)v12;
    *(_QWORD *)(v12 + 8) = v10;
    if ( v11 == (__int64 *)v10 )
      break;
    operator delete(v11);
  }
}
