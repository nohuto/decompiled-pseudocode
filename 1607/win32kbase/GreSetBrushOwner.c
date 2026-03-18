/*
 * XREFs of GreSetBrushOwner @ 0x1C00246C0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     SetSysColor @ 0x1C005B1F4 (SetSysColor.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002A4AC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreSetBitmapOwnerEx @ 0x1C00346C8 (GreSetBitmapOwnerEx.c)
 *     HmgDecProcessHandleCount @ 0x1C0036468 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C0036580 (HmgIncProcessHandleCount.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005B574 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C005B5A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C005BDE0 (HmgAllocateObjectAttr.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // r15d
  _QWORD *ObjectAttr; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r14
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v11; // rsi
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned int v18; // eax
  BOOL v19; // edi
  _DWORD *v20; // [rsp+30h] [rbp-78h] BYREF
  int v21; // [rsp+38h] [rbp-70h]
  _QWORD v22[12]; // [rsp+48h] [rbp-60h] BYREF

  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v22, a1);
  if ( v22[0] && (*(_DWORD *)(v22[0] + 48LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v22);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v22);
  v5 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore();
  v20 = 0LL;
  v21 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v20, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0);
  if ( (unsigned int)HANDLELOCK::bValid((HANDLELOCK *)&v20) )
  {
    v9 = v20;
    EntryObject = GdiHandleManager::GetEntryObject((GdiHandleManager *)WPP_MAIN_CB.Dpc.DeferredContext, *v20 & 0xFFFFFF);
    v11 = EntryObject;
    if ( *((_BYTE *)v9 + 14) != 16 || *((_WORD *)v9 + 6) != HIWORD(v3) )
      goto LABEL_18;
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
        goto LABEL_18;
      v9 = v20;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v12 = v9[2] & 0xFFFFFFFE;
      if ( v12 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v13 = (_QWORD *)*((_QWORD *)v11 + 7);
        if ( v13 != (_QWORD *)((char *)v11 + 80) )
        {
          *((_QWORD *)v11 + 10) = *v13;
          ObjectAttr = (_QWORD *)*((_QWORD *)v11 + 7);
          *((_QWORD *)v11 + 7) = (char *)v11 + 80;
          *((_QWORD *)v9 + 2) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v20, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
      }
      else
      {
        if ( (v9[2] & 0xFFFFFFFE) != 0x80000012 )
          goto LABEL_18;
        HANDLELOCK::Pid((HANDLELOCK *)&v20, a2);
      }
      v5 = 1;
      if ( a2 )
        goto LABEL_18;
      v15 = *((_QWORD *)v11 + 4);
      if ( !v15 )
        goto LABEL_18;
      v16 = 0LL;
      goto LABEL_25;
    }
    if ( a2 != -2147483646 )
      goto LABEL_18;
    v17 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v18 = v9[2] & 0xFFFFFFFE;
    if ( v18 != (_DWORD)v17 && v18 != -2147483630 && v18 )
      goto LABEL_18;
    v19 = 0;
    v5 = 1;
    if ( v18 != (_DWORD)v17 )
    {
      v5 = HmgIncProcessHandleCount((unsigned int)v17);
      v19 = v5 != 0;
    }
    if ( v5 )
    {
      if ( *((_QWORD *)v9 + 2) )
      {
LABEL_36:
        HANDLELOCK::Pid((HANDLELOCK *)&v20, v17);
        v15 = *((_QWORD *)v11 + 4);
        if ( !v15 )
          goto LABEL_18;
        v16 = 2147483650LL;
LABEL_25:
        GreSetBitmapOwnerEx(v15, v16);
LABEL_18:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
        goto LABEL_19;
      }
      if ( ObjectAttr )
      {
        *((_QWORD *)v11 + 7) = ObjectAttr;
        *((_QWORD *)v9 + 2) = ObjectAttr;
        *ObjectAttr = *((_QWORD *)v11 + 10);
        ObjectAttr = 0LL;
        goto LABEL_36;
      }
      v5 = 0;
    }
    if ( v19 )
      HmgDecProcessHandleCount((unsigned int)v17);
    goto LABEL_18;
  }
LABEL_19:
  if ( v21 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
  GreReleaseHmgrSemaphore(v8, v7);
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v5;
}
