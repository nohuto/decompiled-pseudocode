/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0154F18
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C0156CFC (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0157BF8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(struct DXGFASTMUTEX *const *this, struct _EPROCESS *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  __int128 v11; // rtt
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this[1]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v4 = 0;
  v5 = *((_DWORD *)this + 1);
  v6 = **((_QWORD **)this + 2);
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = 32LL * v4;
      if ( a2 == *(struct _EPROCESS **)(v7 + v6 + 8) )
      {
        v8 = *(_DWORD *)(v7 + v6);
        if ( v8 )
          break;
      }
      if ( ++v4 >= v5 )
        goto LABEL_9;
    }
    v9 = v8 - 1;
    v10 = 32LL * v4;
    *(_DWORD *)(v10 + v6) = v9;
    if ( !v9 )
    {
      v11 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v10 + v6 + 16));
      *(_DWORD *)(v10 + v6 + 24) += v11 / PerformanceFrequency.QuadPart;
      if ( a2 == this[6] )
        *((_QWORD *)this + 6) = 0LL;
    }
  }
LABEL_9:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
