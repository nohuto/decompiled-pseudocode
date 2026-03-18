/*
 * XREFs of ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14030F0E8
 * Callers:
 *     SimBitBlt @ 0x140264BFC (SimBitBlt.c)
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14007350C (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A9E9C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14018CD74 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x1401D02B8 (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnLock(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  int v11; // eax
  __int64 v12; // rdx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 18);
  if ( (v1 & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap(this);
    DEVLOCKBLTOBJ::vFlushSpriteUpdates(this);
    if ( (*((_DWORD *)this + 18) & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, v3, v4);
      _InterlockedOr(v13, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v5, v6);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco(this, v3, v4);
      _InterlockedOr(v13, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco(this, v7, v8);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    CurrentThread = GreGetCurrentThread(v9);
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
  }
  else if ( (v1 & 0x80000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x80000u;
  }
  if ( *(_QWORD *)this )
  {
    if ( (*((_DWORD *)this + 18) & 0x100000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>(this);
      *((_DWORD *)this + 18) &= ~0x100000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 3));
    }
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( (*((_DWORD *)this + 18) & 0x200000) != 0 )
    {
      GreReleaseSemaphoreExclusive<2>(this);
      *((_DWORD *)this + 18) &= ~0x200000u;
    }
    else
    {
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
    }
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  v11 = *((_DWORD *)this + 18);
  if ( (v11 & 8) != 0 )
    *((_DWORD *)this + 18) = v11 & 0xFFFFFFF7;
  v12 = *((_QWORD *)this + 2);
  if ( v12 )
  {
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v12);
    *((_QWORD *)this + 2) = 0LL;
  }
}
