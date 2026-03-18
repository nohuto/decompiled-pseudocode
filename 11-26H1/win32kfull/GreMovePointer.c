/*
 * XREFs of GreMovePointer @ 0x14006B170
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     GreHidePointer @ 0x1400A4E00 (GreHidePointer.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ?vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z @ 0x14001C0F4 (-vMovePointer@@YAXAEAVPDEVOBJ@@HHJ@Z.c)
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C868 (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x14001C97C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??$GrepReleaseLockValidate@$03@@YAXXZ @ 0x14006AC50 (--$GrepReleaseLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$00@@YAXXZ @ 0x14006B7F4 (--$GrepAcquireLockValidate@$00@@YAXXZ.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14006B880 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x14028DA20 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall GreMovePointer(__int64 a1, int a2, int a3, int a4)
{
  int v5; // r13d
  __int64 *CurrentThreadWin32Thread; // rax
  Gre::Base *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  unsigned __int8 v12; // al
  HSEMAPHORE v13; // rdi
  int v14; // esi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r14d
  __int64 v27; // rax
  int v28; // edx
  unsigned int v29; // r14d
  unsigned int v30; // r12d
  unsigned int v31; // ebx
  int v32; // edx
  __int64 v33; // r13
  __int64 v34; // rcx
  Gre::Base *v35; // rcx
  __int64 v36; // rbx
  Gre::Base *v37; // rcx
  struct _RECTL *v38; // r9
  struct Gre::Base::SESSION_GLOBALS *v39; // rax
  HSEMAPHORE v40; // rbx
  struct Gre::Base::SESSION_GLOBALS *v41; // rsi
  __int64 v42; // rsi
  Gre::Base *v43; // rcx
  struct _RECTL *v44; // r9
  __int64 v45; // rsi
  signed int v46; // ecx
  __int64 **v47; // rcx
  char v48; // r15
  __int64 *v49; // rsi
  int v50; // edi
  __int64 v51; // rax
  HSEMAPHORE v52; // rbx
  char v53; // r9
  __int64 v54; // r8
  unsigned int v55; // edx
  int v56; // edx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // [rsp+30h] [rbp-38h] BYREF
  __int64 v60; // [rsp+38h] [rbp-30h] BYREF
  HSEMAPHORE v61; // [rsp+40h] [rbp-28h]
  __int64 v62; // [rsp+48h] [rbp-20h]
  _BYTE v63[8]; // [rsp+50h] [rbp-18h] BYREF
  HSEMAPHORE v64; // [rsp+58h] [rbp-10h]
  unsigned __int8 v65; // [rsp+B0h] [rbp+48h]
  int v66; // [rsp+B8h] [rbp+50h] BYREF
  int v67; // [rsp+C0h] [rbp+58h] BYREF
  int v68; // [rsp+C8h] [rbp+60h]

  v68 = a4;
  v67 = a3;
  v66 = a2;
  v59 = a1;
  v5 = 0;
  if ( !a1 )
  {
    GrepCaptureLiveMemoryDump(400LL, 76LL, 0LL);
    return;
  }
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v8 = *CurrentThreadWin32Thread;
  else
    v8 = 0LL;
  v9 = v8 + 8;
  v65 = 0;
  v10 = -v8;
  v11 = v9 & -(__int64)(v10 != 0);
  v62 = v11;
  if ( v11 )
  {
    v12 = *(_BYTE *)((v9 & -(__int64)(v10 != 0)) + 0x150);
    *(_DWORD *)(v11 + 336) &= ~1u;
    v65 = v12;
  }
  v64 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v7) + 624LL);
  GreAcquireSemaphoreSharedInternal(v64);
  GrepAcquireLockValidate<1>();
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v63, (struct PDEVOBJ *)&v59);
  v13 = *(HSEMAPHORE *)(v59 + 56);
  v61 = v13;
  GreAcquireSemaphoreInternal(v13);
  GrepAcquireLockValidate<4>();
  DrvUniformSpaceToPixelSpacePoint(&v66, &v67);
  v14 = v67;
  v15 = v66;
  v19 = *(_QWORD *)(W32GetSessionState(v17, v16, v18) + 96);
  *(_DWORD *)(v19 + 56) = v15;
  v20 = v68;
  *(_DWORD *)(v19 + 64) = v68;
  *(_QWORD *)(v19 + 48) = a1;
  *(_DWORD *)(v19 + 60) = v14;
  v24 = *(_QWORD *)(W32GetSessionState(v19, v21, v22) + 96);
  if ( *(_DWORD *)(v24 + 72) )
  {
    v26 = 1;
    v57 = *(_QWORD *)(W32GetSessionState(v24, v23, v25) + 96);
    *(_DWORD *)(v57 + 80) = 1;
    if ( *(_DWORD *)(W32GetUserSessionState(v57, v58) + 36324) )
      v5 = 1;
  }
  else
  {
    v26 = 0;
  }
  v27 = v59;
  v28 = *(_DWORD *)(v59 + 40);
  if ( (v28 & 0x20000) == 0 )
  {
    if ( v26 && !_bittest((const signed __int32 *)(v59 + 2112), 0xDu) && !v5 )
      goto LABEL_45;
    v29 = v67;
    v30 = v20 | 4;
    if ( !v5 )
      v30 = v20;
    v31 = v66;
    v68 = v66;
    if ( *(_DWORD *)(v59 + 64) == v66 && *(_DWORD *)(v59 + 68) == v67 && (v28 & 0x100000) == 0 )
      goto LABEL_45;
    *(_DWORD *)(v59 + 64) = v66;
    *(_DWORD *)(v59 + 68) = v29;
    v27 = v59;
    v32 = *(_DWORD *)(v59 + 40);
    if ( (v32 & 0x400) != 0 )
      goto LABEL_45;
    v33 = *(_QWORD *)(v59 + 2544);
    if ( !v33 )
      goto LABEL_45;
    v34 = v33 + 24;
    if ( (v32 & 2) != 0 )
    {
      if ( *(_QWORD *)(v59 + 3416) )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v59 + 3416))(v34, v31, v29, v30);
LABEL_18:
        v27 = v59;
        goto LABEL_19;
      }
      if ( *(_QWORD *)(v59 + 2920) )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v59 + 2920))(v34, v31, v29, 0LL);
        goto LABEL_18;
      }
    }
LABEL_19:
    v35 = (Gre::Base *)*(unsigned int *)(v27 + 40);
    if ( ((unsigned __int8)v35 & 4) != 0 )
    {
      v36 = *(_QWORD *)(v33 + 48);
      if ( IsDwmActive(v35) )
      {
        v39 = Gre::Base::Globals(v37);
        v40 = *(HSEMAPHORE *)(v36 + 56);
        v41 = v39;
        GreAcquireSemaphoreInternal(v40);
        GrepAcquireLockValidate<4>();
        v42 = *(_QWORD *)v41 + 1040LL;
        v60 = v42;
        EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v42);
        GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (void (__fastcall *)(__int64))GreAcquireSemaphoreSharedStarveExclusiveInternal,
          v42);
        if ( IsDwmActive(v43) )
        {
          v45 = v33 + 24;
          DwmMovePointer((struct _SURFOBJ *)(v33 + 24), v68, v29, v44, v30 & 0xF4);
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            v60);
          if ( v40 )
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
              (__int64)v40);
          v27 = v59;
          v31 = v68;
LABEL_25:
          if ( (*(_DWORD *)(v27 + 1808) & 0x10000) != 0 && v29 != -1 && (signed int)v31 < *(_DWORD *)(v33 + 56) )
          {
            v46 = *(_DWORD *)(v33 + 60);
            if ( (int)v29 < v46 )
            {
              if ( *(_QWORD *)(v27 + 2920) )
              {
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v27 + 2920))(v45, v31, v29 - v46, 0LL);
                goto LABEL_44;
              }
            }
          }
          goto LABEL_45;
        }
        GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v42);
        if ( v40 )
          GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
            (__int64)v40);
      }
      v31 = v68;
      v45 = v33 + 24;
      GdiMovePointer((struct _SURFOBJ *)(v33 + 24), v68, v29, v38, 0);
      v27 = v59;
      goto LABEL_25;
    }
    v45 = v33 + 24;
    goto LABEL_25;
  }
  v47 = *(__int64 ***)(v59 + 1784);
  v48 = v68;
  v49 = *v47;
  v50 = *((_DWORD *)v47 + 4);
  do
  {
    v51 = v49[6];
    v60 = v51;
    if ( v66 < *((_DWORD *)v49 + 7)
      || v66 >= *((_DWORD *)v49 + 9)
      || v67 < *((_DWORD *)v49 + 8)
      || v67 >= *((_DWORD *)v49 + 10) )
    {
      if ( v26 && !_bittest((const signed __int32 *)(v51 + 2112), 0xDu) )
        goto LABEL_42;
      v52 = *(HSEMAPHORE *)(v51 + 56);
      GreAcquireSemaphoreInternal(v52);
      GrepAcquireLockValidate<4>();
      v54 = 0xFFFFFFFFLL;
      v53 = v48;
      v55 = -1;
    }
    else
    {
      if ( v26 && !_bittest((const signed __int32 *)(v51 + 2112), 0xDu) && !v5 )
        goto LABEL_42;
      v52 = *(HSEMAPHORE *)(v51 + 56);
      GreAcquireSemaphoreInternal(v52);
      GrepAcquireLockValidate<4>();
      v53 = v48 | 4;
      if ( !v5 )
        v53 = v48;
      v54 = (unsigned int)(v67 - *((_DWORD *)v49 + 8));
      v55 = v66 - *((_DWORD *)v49 + 7);
    }
    vMovePointer((struct PDEVOBJ *)&v60, v55, v54, v53);
    if ( v52 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        (__int64)v52);
LABEL_42:
    v49 = (__int64 *)*v49;
    --v50;
  }
  while ( v50 );
  v13 = v61;
  v11 = v62;
LABEL_44:
  v27 = v59;
LABEL_45:
  v56 = v67;
  *(_DWORD *)(v27 + 64) = v66;
  *(_DWORD *)(v59 + 68) = v56;
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Pointer", v13);
    GrepReleaseLockValidate<4>();
    GreReleaseSemaphoreExclusiveInternal(v13);
  }
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v63);
  if ( v11 )
    *(_DWORD *)(v11 + 336) ^= ((unsigned __int8)*(_DWORD *)(v11 + 336) ^ v65) & 1;
  EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v64);
  GrepReleaseLockValidate<1>();
  GreReleaseSemaphoreSharedInternal(v64);
}
