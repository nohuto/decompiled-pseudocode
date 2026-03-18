/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0018920
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00187BC (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C001882C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0018878 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0155C88 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2)
{
  DC *v4; // rdx
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v4 = *a2;
  if ( v4 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 21);
      if ( !v5 || (v10 = (_QWORD *)*((_QWORD *)this + 15)) == 0LL || *v5 != *v10 )
      {
        v6 = *((_DWORD *)v4 + 9);
        if ( (v6 & 0x200) != 0 )
        {
          if ( (v6 & 0x4000) == 0 )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( ThreadWin32Thread )
            {
              v8 = *ThreadWin32Thread;
              if ( v8 )
                *(_BYTE *)(v8 + 328) = 0;
            }
          }
          v9 = (_QWORD *)*((_QWORD *)this + 15);
          if ( v9 && *(_QWORD *)*a2 == *v9 && !*((_QWORD *)this + 28)
            || (v11 = (_QWORD *)*((_QWORD *)this + 21)) != 0LL && *(_QWORD *)*a2 == *v11 && !*((_QWORD *)this + 32) )
          {
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
            DC::vClearRendering(*a2);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
        }
      }
    }
  }
}
