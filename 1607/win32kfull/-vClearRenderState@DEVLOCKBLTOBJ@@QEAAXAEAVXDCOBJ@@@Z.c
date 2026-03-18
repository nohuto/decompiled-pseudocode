/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0046814
 * Callers:
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0046614 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0046684 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0046720 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0046768 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2, __int64 a3, __int64 a4)
{
  DC *v6; // rdx
  _QWORD *v7; // rcx
  int v8; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  v6 = *a2;
  if ( v6 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 21);
      if ( !v7 || (v12 = (_QWORD *)*((_QWORD *)this + 15)) == 0LL || *v7 != *v12 )
      {
        v8 = *((_DWORD *)v6 + 9);
        if ( (v8 & 0x200) != 0 )
        {
          if ( (v8 & 0x4000) == 0 )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v6, a3, a4);
            if ( ThreadWin32Thread )
            {
              v10 = *ThreadWin32Thread;
              if ( v10 )
                *(_BYTE *)(v10 + 328) = 0;
            }
          }
          v11 = (_QWORD *)*((_QWORD *)this + 15);
          if ( v11 && *(_QWORD *)*a2 == *v11 && !*((_QWORD *)this + 28)
            || (v13 = (_QWORD *)*((_QWORD *)this + 21)) != 0LL && *(_QWORD *)*a2 == *v13 && !*((_QWORD *)this + 32) )
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
