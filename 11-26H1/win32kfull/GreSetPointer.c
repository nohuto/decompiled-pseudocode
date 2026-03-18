/*
 * XREFs of GreSetPointer @ 0x14001AE9C
 * Callers:
 *     GreOnCURSINFODestroy @ 0x140029974 (GreOnCURSINFODestroy.c)
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     GreHidePointer @ 0x1400A4E00 (GreHidePointer.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?bDontShowPointer@@YAHXZ @ 0x140019944 (-bDontShowPointer@@YAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007854C (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x14009FFA4 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v7; // r13d
  struct _GRETHREAD *CurrentThread; // rsi
  Gre::Base *v9; // rcx
  __int64 v10; // r15
  __int64 HDEV; // rax
  HDEV v12; // rbx
  unsigned __int8 v13; // al
  HSEMAPHORE v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  BOOL v18; // r8d
  int v19; // edx
  __int64 ***v21; // rcx
  __int64 **v22; // r14
  int v23; // r12d
  __int64 *v24; // rax
  HSEMAPHORE v25; // rbx
  __int64 SessionState; // rax
  unsigned __int8 v27; // [rsp+30h] [rbp-68h]
  BOOL v28; // [rsp+34h] [rbp-64h]
  __int64 v29; // [rsp+38h] [rbp-60h] BYREF
  HSEMAPHORE v30; // [rsp+40h] [rbp-58h]
  struct _GRETHREAD *v31; // [rsp+48h] [rbp-50h]
  __int64 v32; // [rsp+50h] [rbp-48h]
  _BYTE v33[64]; // [rsp+58h] [rbp-40h] BYREF

  v7 = 0;
  CurrentThread = GreGetCurrentThread();
  v31 = CurrentThread;
  v27 = 0;
  v10 = *(_QWORD *)Gre::Base::Globals(v9) + 624LL;
  v32 = v10;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedInternal, v10);
  HDEV = UserGetHDEV();
  v12 = (HDEV)HDEV;
  if ( HDEV )
  {
    v29 = HDEV;
    if ( CurrentThread )
    {
      v13 = *((_BYTE *)CurrentThread + 336);
      *((_DWORD *)CurrentThread + 84) &= ~1u;
      v27 = v13;
    }
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v33, (struct PDEVOBJ *)&v29);
    v14 = *(HSEMAPHORE *)(v29 + 56);
    v30 = v14;
    GreAcquireSemaphoreInternal(v14);
    GrepAcquireLockValidate<4>();
    v15 = *(_QWORD *)(((__int64 (*)(void))W32GetSessionState)() + 96);
    *(_QWORD *)(v15 + 24) = a1;
    *(_BYTE *)(v15 + 44) = a1 != 0LL;
    *(_DWORD *)(v15 + 36) = a3;
    *(_DWORD *)(v15 + 32) = a2;
    *(_DWORD *)(v15 + 40) = a4;
    v28 = bDontShowPointer();
    v18 = v28;
    if ( v28 )
    {
      SessionState = W32GetSessionState(v17, v16, v28);
      v18 = v28;
      *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 76LL) = 1;
      if ( (a2 & 0x20) != 0 )
      {
        v7 = 1;
        a2 |= 0x40u;
      }
    }
    v19 = *(_DWORD *)(v29 + 40);
    if ( (v19 & 0x20000) != 0 )
    {
      v21 = *(__int64 ****)(v29 + 1784);
      v22 = *v21;
      v23 = *((_DWORD *)v21 + 4);
      do
      {
        v24 = v22[6];
        if ( !v18 || (v24[264] & 0x2000) != 0 || (v24[5] & 4) != 0 || v7 )
        {
          v25 = (HSEMAPHORE)v24[7];
          GreAcquireSemaphoreInternal(v25);
          GrepAcquireLockValidate<4>();
          vSetPointer((HDEV)v22[6], a1, a2, a3, a4);
          if ( v25 )
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v25);
          v18 = v28;
        }
        v22 = (__int64 **)*v22;
        --v23;
      }
      while ( v23 );
      v14 = v30;
      CurrentThread = v31;
      v10 = v32;
    }
    else if ( !v18 || (*(_DWORD *)(v29 + 2112) & 0x2000) != 0 || (v19 & 4) != 0 || v7 )
    {
      vSetPointer(v12, a1, a2, a3, a4);
    }
    if ( v14 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v14);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v33);
    if ( CurrentThread )
      *((_DWORD *)CurrentThread + 84) ^= ((unsigned __int8)*((_DWORD *)CurrentThread + 84) ^ v27) & 1;
  }
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v10);
}
