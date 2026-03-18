/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C02617A8
 * Callers:
 *     SimBitBlt @ 0x1C02618B8 (SimBitBlt.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0046614 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0046720 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004694C (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004698C (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 28) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      _InterlockedOr(v9, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      _InterlockedOr(v9, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v6);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v7 = *((_DWORD *)this + 28);
  if ( (v7 & 8) != 0 )
    *((_DWORD *)this + 28) = v7 & 0xFFFFFFF7;
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v8);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
