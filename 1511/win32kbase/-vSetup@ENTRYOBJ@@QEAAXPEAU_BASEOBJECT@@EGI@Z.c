/*
 * XREFs of ?vSetup@ENTRYOBJ@@QEAAXPEAU_BASEOBJECT@@EGI@Z @ 0x1C0034240
 * Callers:
 *     HmgAlloc @ 0x1C0080B30 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B5A60 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

void __fastcall ENTRYOBJ::vSetup(ENTRYOBJ *this, struct _BASEOBJECT *a2, char a3, unsigned __int16 a4, unsigned int a5)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r15
  bool v11; // zf
  int v12; // ebx
  char v13; // al
  unsigned int v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE v16[32]; // [rsp+30h] [rbp-38h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (a4 & 0x10) != 0 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(ThreadWin32Thread + 72);
  HANDLELOCK::vLockHandle((HANDLELOCK *)v16, this, 0, a5, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)v16) )
  {
    v11 = (*((_BYTE *)this + 15) & 0x40) == 0;
    v12 = *((_DWORD *)this + 2);
    *(_QWORD *)this = a2;
    *((_BYTE *)this + 14) = a3;
    if ( v11 )
      v13 = 0;
    else
      v13 = 64;
    *((_BYTE *)this + 15) = v13;
    *((_QWORD *)this + 2) = 0LL;
    if ( (a4 & 8) != 0 )
    {
      v14 = v12 & 1;
    }
    else if ( v10 )
    {
      v14 = *(_DWORD *)(v10 + 8) ^ (*(_DWORD *)(v10 + 8) ^ v12) & 1;
    }
    else
    {
      v14 = v12 & 1 | (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( (a4 & 1) != 0 )
    {
      if ( v10 )
        CurrentThread = *(struct _KTHREAD **)v10;
      else
        CurrentThread = KeGetCurrentThread();
      *((_QWORD *)a2 + 2) = CurrentThread;
    }
    ++gcCurHmgr;
    *((_WORD *)a2 + 6) = a4 & 1;
    *((_DWORD *)a2 + 2) = (a4 >> 1) & 1;
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 2) = v14;
    HANDLELOCK::vUnlock((HANDLELOCK *)v16);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v16);
}
