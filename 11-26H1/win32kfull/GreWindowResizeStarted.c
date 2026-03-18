/*
 * XREFs of GreWindowResizeStarted @ 0x14022FFF0
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x14001E104 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z @ 0x140073358 (--0ENTER_DWM_CRIT_COMMON@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDEV__@@W4Options@0@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x14009C7A0 (DwmAsyncUpdateSprite.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1400A4304 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1400A4644 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1ENTER_DWM_CRIT_COMMON@@QEAA@XZ @ 0x1400A6E04 (--1ENTER_DWM_CRIT_COMMON@@QEAA@XZ.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1402CFD14 (UserDCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, Gre::Base *a2, int a3, int *a4, _DWORD *a5)
{
  unsigned int v7; // r15d
  _DWORD *v8; // rsi
  int v9; // r12d
  Gre::Base *v10; // rcx
  __int64 *v11; // rbx
  HSEMAPHORE v12; // r13
  Gre::Base *v13; // rcx
  Gre::Base *v14; // rcx
  __int64 v15; // rbx
  Gre::Base *v16; // rcx
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 *v20; // r14
  __int64 v21; // rax
  bool v22; // bl
  int v23; // ecx
  int v24; // eax
  PVOID v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdi
  void *v30; // rax
  PVOID Object; // [rsp+68h] [rbp-41h] BYREF
  void *v32; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v33[32]; // [rsp+78h] [rbp-31h] BYREF
  _OWORD v34[2]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+Fh]

  v7 = 0;
  v8 = *(_DWORD **)(W32GetSessionState(a1, a2) + 96);
  v9 = v8[27] & 2;
  LODWORD(Object) = v8[27] & 1;
  v11 = (__int64 *)Gre::Base::Globals(v10);
  v12 = (HSEMAPHORE)(*v11 + 1144);
  GreAcquireSemaphoreInternal(v12);
  GrepAcquireLockValidate<2>();
  if ( IsDwmActive(v13) )
  {
    ENTER_DWM_CRIT_COMMON::ENTER_DWM_CRIT_COMMON((__int64)v33, v11, a1, 0);
    if ( IsDwmActive(v14) )
    {
      memset(v34, 0, sizeof(v34));
      PushThreadGuardedObject(
        v34,
        v34,
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
      v35 = 0LL;
      v15 = DWMSPRITEREF::hspLookupWindow(a2);
      v17 = Gre::Base::Globals(v16);
      if ( v15 )
      {
        LOBYTE(v18) = 15;
        v19 = HmgLock(v17, v15, v18, 0LL);
        v35 = v19;
      }
      else
      {
        v19 = v35;
      }
      if ( v19 )
      {
        v20 = *(__int64 **)(v19 + 144);
        v22 = 0;
        if ( v20 )
        {
          v21 = v20[23];
          if ( v21 )
          {
            if ( v21 != 24 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v21 - 24)) )
              v22 = 1;
          }
        }
        if ( (_DWORD)Object && v22 || a3 && v9 )
        {
          if ( *(int *)(v19 + 116) >= 1 )
            CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v19, 1, 0LL);
          *(_QWORD *)(v19 + 116) = (unsigned int)v22 + 1;
          if ( a3 && v9 )
          {
            Object = 0LL;
            if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
            {
              v26 = Object;
              v32 = 0LL;
              if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v32) < 0 )
              {
                ObfDereferenceObject(v26);
              }
              else
              {
                *(_QWORD *)(v19 + 104) = v32;
                *(_QWORD *)(v19 + 96) = v26;
                *(_DWORD *)(v19 + 120) = 1;
                *(_BYTE *)(v19 + 124) = 1;
                v28 = *v20;
                v29 = *(_QWORD *)v19;
                v30 = (void *)UserReferenceDwmApiPort(v27);
                DwmAsyncUpdateSprite(v30, v29, v28, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
              }
            }
            v23 = v8[29];
            v24 = v8[27] & 8;
          }
          else
          {
            v23 = v8[28];
            v24 = v8[27] & 4;
          }
          v7 = 1;
          v19 = v35;
          *a4 = v24;
          *a5 = v23;
        }
        if ( v19 )
          _InterlockedDecrement16((volatile signed __int16 *)(v19 + 12));
      }
      v35 = 0LL;
      PopThreadGuardedObject(v34);
    }
    ENTER_DWM_CRIT_COMMON::~ENTER_DWM_CRIT_COMMON((ENTER_DWM_CRIT_COMMON *)v33);
  }
  if ( v12 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      (__int64)v12);
  return v7;
}
