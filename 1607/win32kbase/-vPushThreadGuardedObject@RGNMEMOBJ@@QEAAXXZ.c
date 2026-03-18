/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0031510
 * Callers:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0034664 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  __int64 *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx

  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( *ThreadWin32Thread )
    {
      v3 = *(_QWORD **)this;
      if ( v3 )
      {
        v4 = v3 + 6;
        if ( v3 != (_QWORD *)-48LL )
        {
          KeEnterCriticalRegion();
          v5 = 0LL;
          v6 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v6 )
            v5 = *v6;
          v3[8] = v3;
          v3[9] = CleanUpRegion;
          if ( v5 )
          {
            v7 = (_QWORD *)(v5 + 88);
            v8 = *(_QWORD *)(v5 + 88);
            if ( *(_QWORD *)(v8 + 8) != v5 + 88 )
              __fastfail(3u);
            *v4 = v8;
            v3[7] = v7;
            *(_QWORD *)(v8 + 8) = v4;
            *v7 = v4;
          }
          else
          {
            v3[7] = v3 + 6;
            *v4 = v4;
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
}
