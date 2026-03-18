/*
 * XREFs of GreSetBrushOwner @ 0x1C00367D0
 * Callers:
 *     SetSysColor @ 0x1C0025420 (SetSysColor.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     bInitBRUSHOBJ @ 0x1C0138530 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgAllocateObjectAttr @ 0x1C000C97C (HmgAllocateObjectAttr.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00251C0 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00251EC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003C470 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C00447D8 (GreSetBitmapOwnerEx.c)
 *     HmgIncProcessHandleCount @ 0x1C004AE80 (HmgIncProcessHandleCount.c)
 *     HmgFreeObjectAttr @ 0x1C005C5F0 (HmgFreeObjectAttr.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  int v3; // ebx
  unsigned int v5; // r15d
  _QWORD *ObjectAttr; // r12
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r13
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned int v16; // eax
  BOOL v17; // edi
  _QWORD v18[3]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v19[14]; // [rsp+58h] [rbp-70h] BYREF

  v3 = (int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v19, a1);
  if ( v19[0] && (*(_DWORD *)(v19[0] + 48LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v19);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v19);
  v5 = 0;
  ObjectAttr = 0LL;
  if ( (unsigned __int16)v3 < (unsigned int)gcMaxHmgr )
  {
    v7 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v3;
    if ( a2 == -2147483646 )
      ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
    GreAcquireHmgrSemaphore();
    HANDLELOCK::vLockHandle((HANDLELOCK *)v18, (struct _ENTRY *)v7, 0, (unsigned __int16)v3, 0);
    if ( !(unsigned int)HANDLELOCK::bValid((HANDLELOCK *)v18) )
      goto LABEL_20;
    v8 = *(_QWORD *)v7;
    if ( *(_BYTE *)(v7 + 14) != 16
      || *(_WORD *)(v7 + 12) != HIWORD(v3)
      || *(_WORD *)(v8 + 12) && *(struct _KTHREAD **)(v8 + 16) != KeGetCurrentThread() )
    {
LABEL_19:
      HANDLELOCK::vUnlock((HANDLELOCK *)v18);
LABEL_20:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v18);
      GreReleaseHmgrSemaphore();
      goto LABEL_21;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v9 = v18[0];
      v10 = *(_DWORD *)(v18[0] + 8LL) & 0xFFFFFFFE;
      if ( v10 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v11 = *(_QWORD **)(v8 + 56);
        if ( v11 != (_QWORD *)(v8 + 80) )
        {
          *(_QWORD *)(v8 + 80) = *v11;
          ObjectAttr = *(_QWORD **)(v8 + 56);
          *(_QWORD *)(v8 + 56) = v8 + 80;
          *(_QWORD *)(v7 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)v18, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      else
      {
        if ( (*(_DWORD *)(v9 + 8) & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_19;
        HANDLELOCK::Pid((HANDLELOCK *)v18, a2);
      }
      v5 = 1;
      if ( a2 )
        goto LABEL_19;
      v13 = *(_QWORD *)(v8 + 32);
      if ( !v13 )
        goto LABEL_19;
      v14 = 0LL;
LABEL_25:
      GreSetBitmapOwnerEx(v13, v14);
      goto LABEL_19;
    }
    if ( a2 != -2147483646 )
      goto LABEL_19;
    v15 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v16 = *(_DWORD *)(v18[0] + 8LL) & 0xFFFFFFFE;
    if ( v16 != (_DWORD)v15 && v16 != -2147483630 && v16 )
      goto LABEL_19;
    v17 = 0;
    v5 = 1;
    if ( v16 != (_DWORD)v15 )
    {
      v5 = HmgIncProcessHandleCount((unsigned int)v15);
      v17 = v5 != 0;
    }
    if ( v5 )
    {
      if ( *(_QWORD *)(v7 + 16) )
      {
LABEL_36:
        HANDLELOCK::Pid((HANDLELOCK *)v18, v15);
        v13 = *(_QWORD *)(v8 + 32);
        if ( !v13 )
          goto LABEL_19;
        v14 = 2147483650LL;
        goto LABEL_25;
      }
      if ( ObjectAttr )
      {
        *(_QWORD *)(v8 + 56) = ObjectAttr;
        *(_QWORD *)(v7 + 16) = ObjectAttr;
        *ObjectAttr = *(_QWORD *)(v8 + 80);
        ObjectAttr = 0LL;
        goto LABEL_36;
      }
      v5 = 0;
    }
    if ( v17 )
      HmgDecProcessHandleCount((unsigned int)v15);
    goto LABEL_19;
  }
LABEL_21:
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v5;
}
