/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004BCE0
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0049F18 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     GreExtCreateRegion @ 0x1C0055450 (GreExtCreateRegion.c)
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
  __int64 v7; // rcx

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
            v7 = *(_QWORD *)(v5 + 88);
            *v4 = v7;
            v3[7] = v5 + 88;
            if ( *(_QWORD *)(v7 + 8) != v5 + 88 )
              __fastfail(3u);
            *(_QWORD *)(v7 + 8) = v4;
            *(_QWORD *)(v5 + 88) = v4;
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
