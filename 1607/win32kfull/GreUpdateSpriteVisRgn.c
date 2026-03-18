/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C0075160
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00EF304 (zzzDecomposeDesktop.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     _IsDescendant @ 0x1C0063558 (_IsDescendant.c)
 *     IsWindowBeingDestroyed @ 0x1C0065CC0 (IsWindowBeingDestroyed.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0075788 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C00D5C54 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     DwmAsyncShowSprite @ 0x1C011E1A4 (DwmAsyncShowSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r15d
  int v9; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct DwmState *v14; // rdx
  struct DwmState *v15; // rcx
  char *v16; // r13
  unsigned __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 *v21; // r14
  __int64 v22; // r14
  __int64 v23; // r10
  __int64 *v24; // rcx
  bool v25; // zf
  __int64 *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  __int64 *v31; // rcx
  __int64 v32; // rax
  int v33; // esi
  char v34; // al
  unsigned int v35; // ebp
  __int64 v36; // rcx
  char v37; // al
  __int64 StyleWindow; // rax
  __int64 v39; // rax
  char v40; // al
  __int64 v41; // rcx
  void *v42; // rax
  _BYTE v43[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v44; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v45[40]; // [rsp+30h] [rbp-78h] BYREF
  int v46; // [rsp+58h] [rbp-50h]
  __int64 v49; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v3 = a2;
  v4 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v8 = 0;
  if ( g_pDwmState )
  {
    v9 = 0;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v5, v6, v7);
    if ( !ThreadWin32Thread || (v11 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v11 + 104) && !*(_DWORD *)(v11 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v9 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v14 = g_pDwmState;
    if ( g_pDwmState )
    {
      v15 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v15 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          if ( !v15 || (v16 = (char *)v15 - 24, v15 == (struct DwmState *)24) )
          {
LABEL_81:
            v4 = ghsemGreLock;
            v2 = a1;
            goto LABEL_82;
          }
          v17 = *((_QWORD *)v16 + 5);
          if ( v17 )
            break;
LABEL_80:
          v15 = (struct DwmState *)*((_QWORD *)v16 + 3);
          if ( v15 == (struct DwmState *)(*(_QWORD *)v14 + 80LL) )
            goto LABEL_81;
        }
        v18 = *(_QWORD *)v14;
        PsGetThreadWin32Thread(KeGetCurrentThread(), v14, v12, v13);
        v12 = gpsi;
        v19 = (unsigned __int16)v17;
        if ( (unsigned __int64)(unsigned __int16)v17 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_66;
        v20 = v17 >> 16;
        v21 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v19 * *((_DWORD *)&gSharedInfo + 4)));
        if ( (_WORD)v20 != *((_WORD *)v21 + 9) && (_WORD)v20 != 0xFFFF )
        {
          if ( (_WORD)v20 || !PsGetCurrentProcessWow64Process(gSharedInfo) )
            goto LABEL_66;
          v12 = gpsi;
        }
        if ( (*((_BYTE *)v21 + 17) & 1) != 0 || *((_BYTE *)v21 + 16) != 1 || (v22 = *v21) == 0 )
        {
LABEL_66:
          v33 = 0;
LABEL_67:
          if ( !v33 )
            goto LABEL_76;
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v44, *((HRGN *)g_pDwmState + 23), 0, 0);
          v39 = v44;
          if ( v44 )
            v33 = *(_DWORD *)(v44 + 84) != 1;
          if ( !v46 )
          {
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v44);
            v39 = v44;
          }
          if ( v39 )
            _InterlockedDecrement((volatile signed __int32 *)(v39 + 12));
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v45);
          if ( v33 )
            v40 = 1;
          else
LABEL_76:
            v40 = 0;
          v41 = *((unsigned int *)v16 + 34);
          if ( v40 != (*((_DWORD *)v16 + 34) & 1) )
          {
            *((_DWORD *)v16 + 34) = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)v40) & 1;
            v42 = (void *)UserReferenceDwmApiPort(v41);
            DwmAsyncShowSprite(v42);
          }
          v14 = g_pDwmState;
          goto LABEL_80;
        }
        if ( (*(_DWORD *)(v22 + 288) & 0x20) == 0 )
        {
LABEL_52:
          v34 = *(_BYTE *)(v22 + 55);
          if ( (*(_BYTE *)(v22 + 50) & 0x20) != 0 )
          {
            if ( (v34 & 0x10) != 0 )
            {
LABEL_46:
              SetRectRgnIndirect(*(_QWORD *)(v18 + 184), v22 + 112);
              v33 = 1;
              goto LABEL_67;
            }
          }
          else
          {
            v35 = 17409;
            v36 = v22;
            if ( (v34 & 4) != 0 )
              v35 = 17425;
            while ( 1 )
            {
              v37 = *(_BYTE *)(v36 + 55);
              if ( (v37 & 0x10) == 0 || (v37 & 0x20) != 0 && v36 != v22 )
                break;
              if ( (*(_WORD *)(v36 + 66) & 0x3FFF) != 0x29D )
              {
                v36 = *(_QWORD *)(v36 + 88);
                if ( v36 )
                  continue;
              }
              StyleWindow = GetStyleWindow(v22, 2848LL);
              if ( !StyleWindow || GetRedirectionBitmap(StyleWindow) )
              {
                UpdatesLockedForDwm();
                v33 = CalcVisRgnWorker((struct tagWND *const)v22, (HRGN *)(v18 + 184), v35);
                goto LABEL_67;
              }
              break;
            }
            SetOrCreateRectRgnIndirectPublic(v18 + 184, gZero);
          }
          goto LABEL_66;
        }
        v23 = *(_QWORD *)v12;
        v12 = *(unsigned __int16 *)(*(_QWORD *)v12 + 884LL);
        if ( *(_WORD *)(*(_QWORD *)(v22 + 152) + 8LL) == (_WORD)v12 )
          goto LABEL_38;
        v13 = *(_QWORD *)(v22 + 168);
        if ( !v13 )
          goto LABEL_34;
        if ( (_WORD)v12 )
        {
          v19 = *(unsigned int *)(v13 + 4);
          v24 = (__int64 *)(v13 + 8);
          if ( (_DWORD)v19 )
          {
            while ( *((_WORD *)v24 + 4) != (_WORD)v12 || (*((_BYTE *)v24 + 10) & 1) == 0 )
            {
              v24 += 2;
              v25 = (_DWORD)v19 == 1;
              v19 = (unsigned int)(v19 - 1);
              if ( v25 )
                goto LABEL_29;
            }
            v27 = *v24;
            if ( v27 )
            {
              if ( v27 != -1 )
                goto LABEL_35;
LABEL_38:
              v29 = *(_QWORD *)(v22 + 168);
              if ( v29
                && (v12 = (unsigned __int16)atomDispAffinity, atomDispAffinity)
                && (v30 = *(_DWORD *)(v29 + 4), v31 = (__int64 *)(v29 + 8), v30) )
              {
                while ( *((_WORD *)v31 + 4) != atomDispAffinity || (*((_BYTE *)v31 + 10) & 1) == 0 )
                {
                  v31 += 2;
                  if ( !--v30 )
                    goto LABEL_44;
                }
                v32 = *v31;
              }
              else
              {
LABEL_44:
                LOBYTE(v32) = 0;
              }
              if ( (v32 & 1) == 0 )
                goto LABEL_46;
              goto LABEL_52;
            }
          }
        }
LABEL_29:
        v12 = *(unsigned __int16 *)(v23 + 1362);
        if ( (_WORD)v12 && (v19 = *(unsigned int *)(v13 + 4), v26 = (__int64 *)(v13 + 8), (_DWORD)v19) )
        {
          while ( *((_WORD *)v26 + 4) != (_WORD)v12 || (*((_BYTE *)v26 + 10) & 1) == 0 )
          {
            v26 += 2;
            v25 = (_DWORD)v19 == 1;
            v19 = (unsigned int)(v19 - 1);
            if ( v25 )
              goto LABEL_34;
          }
          v27 = *v26;
        }
        else
        {
LABEL_34:
          v27 = 0LL;
        }
LABEL_35:
        if ( v27 )
        {
          LOBYTE(v19) = 1;
          v28 = HMValidateHandleNoSecure(v27, v19);
          if ( v28 )
          {
            if ( !(unsigned int)IsWindowBeingDestroyed(v28) )
              goto LABEL_52;
          }
        }
        goto LABEL_38;
      }
    }
LABEL_82:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( v9 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
    v3 = a2;
  }
  v49 = v2;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v43, (struct PDEVOBJ *)&v49);
  if ( *(_DWORD *)(v2 + 164) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(v2 + 168) + 8LL * v8++), v3);
    while ( v8 < *(_DWORD *)(v2 + 164) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(v2 + 96), v3);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v43);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
