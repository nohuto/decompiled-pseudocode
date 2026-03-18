/*
 * XREFs of GreSetBrushOwner @ 0x1C00357B0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C0049E44 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     GreSetBitmapOwnerEx @ 0x1C00229D8 (GreSetBitmapOwnerEx.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C002A680 (HmgIncProcessHandleCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0032050 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00494B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00494F4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     HmgAllocateObjectAttr @ 0x1C005D650 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C0074420 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, int a2)
{
  int v3; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r15d
  _QWORD *ObjectAttr; // r12
  __int64 v8; // rcx
  struct _ENTRY *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // r13
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // ebx
  int v23; // r8d
  unsigned int v24; // eax
  BOOL v25; // edi
  _QWORD v26[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v27[11]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v26, a1);
  if ( v26[0] && (*(_DWORD *)(v26[0] + 48LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
  v6 = 0;
  ObjectAttr = 0LL;
  if ( (unsigned __int16)v3 < (unsigned int)gcMaxHmgr )
  {
    v8 = 3LL * (unsigned __int16)v3;
    v9 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v3);
    if ( a2 == -2147483646 )
      ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
    GreAcquireHmgrSemaphore(v8, v5);
    HANDLELOCK::vLockHandle((HANDLELOCK *)v27, v9, 0, (unsigned __int16)v3, 0);
    if ( !HANDLELOCK::bValid((HANDLELOCK *)v27) )
      goto LABEL_20;
    v10 = *(_QWORD *)v9;
    if ( *((_BYTE *)v9 + 14) != 16
      || *((_WORD *)v9 + 6) != HIWORD(v3)
      || *(_WORD *)(v10 + 12) && *(struct _KTHREAD **)(v10 + 16) != KeGetCurrentThread() )
    {
LABEL_19:
      HANDLELOCK::vUnlock((HANDLELOCK *)v27);
LABEL_20:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v27);
      GreReleaseHmgrSemaphore(v19, v18);
      goto LABEL_21;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v11 = v27[0];
      v12 = *(_DWORD *)(v27[0] + 8LL) & 0xFFFFFFFE;
      if ( v12 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v13 = *(_QWORD **)(v10 + 56);
        if ( v13 != (_QWORD *)(v10 + 80) )
        {
          *(_QWORD *)(v10 + 80) = *v13;
          ObjectAttr = *(_QWORD **)(v10 + 56);
          *(_QWORD *)(v10 + 56) = v10 + 80;
          *((_QWORD *)v9 + 2) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)v27, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC, v15, v16);
      }
      else
      {
        if ( (*(_DWORD *)(v11 + 8) & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_19;
        HANDLELOCK::Pid((HANDLELOCK *)v27, a2);
      }
      v6 = 1;
      if ( a2 )
        goto LABEL_19;
      v17 = *(_QWORD *)(v10 + 32);
      if ( !v17 )
        goto LABEL_19;
      v20 = 0LL;
LABEL_25:
      GreSetBitmapOwnerEx(v17, v20);
      goto LABEL_19;
    }
    if ( a2 != -2147483646 )
      goto LABEL_19;
    v22 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v24 = *(_DWORD *)(v27[0] + 8LL) & 0xFFFFFFFE;
    if ( v24 != v22 && v24 != -2147483630 && v24 )
      goto LABEL_19;
    v25 = 0;
    v6 = 1;
    if ( v24 != v22 )
    {
      v6 = HmgIncProcessHandleCount(v22, v21, v23);
      v25 = v6 != 0;
    }
    if ( v6 )
    {
      if ( *((_QWORD *)v9 + 2) )
      {
LABEL_36:
        HANDLELOCK::Pid((HANDLELOCK *)v27, v22);
        v17 = *(_QWORD *)(v10 + 32);
        if ( !v17 )
          goto LABEL_19;
        v20 = 2147483650LL;
        goto LABEL_25;
      }
      if ( ObjectAttr )
      {
        *(_QWORD *)(v10 + 56) = ObjectAttr;
        *((_QWORD *)v9 + 2) = ObjectAttr;
        *ObjectAttr = *(_QWORD *)(v10 + 80);
        ObjectAttr = 0LL;
        goto LABEL_36;
      }
      v6 = 0;
    }
    if ( v25 )
      HmgDecProcessHandleCount(v22, v21, v23);
    goto LABEL_19;
  }
LABEL_21:
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v6;
}
