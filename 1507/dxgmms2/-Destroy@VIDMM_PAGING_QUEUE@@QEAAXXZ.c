/*
 * XREFs of ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00320E0
 * Callers:
 *     ??1VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C00321E0 (--1VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0032074 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Destroy(void **this)
{
  _QWORD *v2; // rsi
  char *v3; // rdi
  char *v4; // rcx
  char **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 **v8; // rbx
  __int64 *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  if ( this[14] )
  {
    VIDMM_PAGING_QUEUE::Flush((VIDMM_PAGING_QUEUE *)this);
    operator delete(this[14]);
    this[14] = 0LL;
  }
  v2 = this[16];
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
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v11[3] = 270LL;
    v11[4] = 50LL;
    v11[5] = this;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( *this || this[1] )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v12[3] = 270LL;
    v12[4] = 49LL;
    v12[5] = this;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  v8 = (__int64 **)(this + 2);
  while ( 1 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    if ( v9 == (__int64 *)v8 )
      break;
    operator delete(v9);
  }
}
