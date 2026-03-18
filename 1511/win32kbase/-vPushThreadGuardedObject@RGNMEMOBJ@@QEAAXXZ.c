/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002B2C0
 * Callers:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     GreExtCreateRegion @ 0x1C0074050 (GreExtCreateRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this, __int64 a2, __int64 a3)
{
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rcx

  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
  if ( ThreadWin32Thread )
  {
    if ( *ThreadWin32Thread )
    {
      v5 = *(_QWORD **)this;
      if ( v5 )
      {
        v6 = v5 + 6;
        if ( v5 != (_QWORD *)-48LL )
        {
          KeEnterCriticalRegion();
          v7 = 0LL;
          v10 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v8, v9);
          if ( v10 )
            v7 = *v10;
          v5[8] = v5;
          v5[9] = CleanUpRegion;
          if ( v7 )
          {
            v11 = *(_QWORD *)(v7 + 88);
            *v6 = v11;
            v5[7] = v7 + 88;
            if ( *(_QWORD *)(v11 + 8) != v7 + 88 )
              __fastfail(3u);
            *(_QWORD *)(v11 + 8) = v6;
            *(_QWORD *)(v7 + 88) = v6;
          }
          else
          {
            v5[7] = v5 + 6;
            *v6 = v6;
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
}
