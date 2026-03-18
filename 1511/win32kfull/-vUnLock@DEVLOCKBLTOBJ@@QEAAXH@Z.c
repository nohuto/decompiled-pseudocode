/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0263C28
 * Callers:
 *     SimBitBlt @ 0x1C0263D38 (SimBitBlt.c)
 * Callees:
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0030564 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C01C2FF0 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C01C307C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C01C30D8 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 18) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      _InterlockedOr(v12, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v5, v6, v7);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v2, v3, v4);
      _InterlockedOr(v12, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
  v9 = *((_QWORD *)this + 1);
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v9);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v10 = *((_DWORD *)this + 18);
  if ( (v10 & 8) != 0 )
    *((_DWORD *)this + 18) = v10 & 0xFFFFFFF7;
  v11 = *((_QWORD *)this + 2);
  if ( v11 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v11);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
}
