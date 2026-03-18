/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C0061170
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzDecomposeDesktop @ 0x1C012B95C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0149CB8 (zzzComposeDesktop.c)
 * Callees:
 *     _IsDescendant @ 0x1C0012B34 (_IsDescendant.c)
 *     IsWindowBeingDestroyed @ 0x1C0056CC4 (IsWindowBeingDestroyed.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C005D8D0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0061784 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0061C78 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     DwmAsyncShowSprite @ 0x1C00F62A4 (DwmAsyncShowSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  struct DwmState *v8; // rdx
  struct DwmState *v9; // rcx
  char *v10; // r12
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  __int64 *v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 *v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // r10
  __int16 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rcx
  bool v22; // zf
  __int16 v23; // r8
  __int64 *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  __int64 *v29; // rcx
  __int64 v30; // rax
  int v31; // edi
  char v32; // al
  int v33; // esi
  __int64 v34; // rcx
  char v35; // al
  __int64 StyleWindow; // rax
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rcx
  void *v40; // rax
  _BYTE v41[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v42; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v43[40]; // [rsp+30h] [rbp-78h] BYREF
  int v44; // [rsp+58h] [rbp-50h]
  int v45; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+10h]
  __int64 v47; // [rsp+C0h] [rbp+18h]
  __int64 v48; // [rsp+C8h] [rbp+20h] BYREF

  v46 = a2;
  v2 = a2;
  v4 = ghsemGreLock;
  v47 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v5 = 0;
  if ( g_pDwmState )
  {
    v45 = 0;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (v7 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v7 + 104) && !*(_DWORD *)(v7 + 108) )
    {
      GreAcquireSemaphore(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
      v45 = 1;
    }
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    v8 = g_pDwmState;
    if ( g_pDwmState )
    {
      v9 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
      if ( v9 != (struct DwmState *)((char *)g_pDwmState + 80) )
      {
        while ( 1 )
        {
          if ( !v9 || (v10 = (char *)v9 - 24, v9 == (struct DwmState *)24) )
          {
LABEL_81:
            v4 = v47;
            v2 = v46;
            goto LABEL_82;
          }
          v11 = *((_QWORD *)v10 + 5);
          if ( v11 )
            break;
LABEL_80:
          v9 = (struct DwmState *)*((_QWORD *)v10 + 3);
          if ( v9 == (struct DwmState *)(*(_QWORD *)v8 + 80LL) )
            goto LABEL_81;
        }
        v12 = *(_QWORD *)v8;
        PsGetThreadWin32Thread(KeGetCurrentThread());
        v13 = (__int64 *)gpsi;
        v14 = (unsigned __int16)v11;
        if ( (unsigned __int64)(unsigned __int16)v11 >= *(_QWORD *)(gpsi + 8LL) )
          goto LABEL_66;
        v15 = v11 >> 16;
        v16 = (__int64 *)(gSharedInfo[1] + (unsigned int)(v14 * LODWORD(gSharedInfo[2])));
        if ( (_WORD)v15 != *((_WORD *)v16 + 9) && (_WORD)v15 != 0xFFFF )
        {
          if ( (_WORD)v15 || !PsGetCurrentProcessWow64Process(gSharedInfo[0]) )
            goto LABEL_66;
          v13 = (__int64 *)gpsi;
        }
        if ( (*((_BYTE *)v16 + 17) & 1) != 0 || *((_BYTE *)v16 + 16) != 1 || (v17 = *v16) == 0 )
        {
LABEL_66:
          v31 = 0;
LABEL_67:
          if ( !v31 )
            goto LABEL_76;
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v42, *((HRGN *)g_pDwmState + 23), 0, 0);
          v37 = v42;
          if ( v42 )
            v31 = *(_DWORD *)(v42 + 84) != 1;
          if ( !v44 )
          {
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v42);
            v37 = v42;
          }
          if ( v37 )
            _InterlockedDecrement((volatile signed __int32 *)(v37 + 12));
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v43);
          if ( v31 )
            v38 = 1;
          else
LABEL_76:
            v38 = 0;
          v39 = *((unsigned int *)v10 + 34);
          if ( v38 != (*((_DWORD *)v10 + 34) & 1) )
          {
            *((_DWORD *)v10 + 34) = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)v38) & 1;
            v40 = (void *)UserReferenceDwmApiPort(v39);
            DwmAsyncShowSprite(v40);
          }
          v8 = g_pDwmState;
          goto LABEL_80;
        }
        if ( (*(_DWORD *)(v17 + 288) & 0x20) == 0 )
        {
LABEL_52:
          v32 = *(_BYTE *)(v17 + 55);
          if ( (*(_BYTE *)(v17 + 50) & 0x20) != 0 )
          {
            if ( (v32 & 0x10) != 0 )
            {
LABEL_46:
              SetRectRgnIndirect(*(_QWORD *)(v12 + 184), v17 + 112);
              v31 = 1;
              goto LABEL_67;
            }
          }
          else
          {
            v33 = 17409;
            v34 = v17;
            if ( (v32 & 4) != 0 )
              v33 = 17425;
            while ( 1 )
            {
              v35 = *(_BYTE *)(v34 + 55);
              if ( (v35 & 0x10) == 0 || (v35 & 0x20) != 0 && v34 != v17 )
                break;
              if ( (*(_WORD *)(v34 + 66) & 0x3FFF) != 0x29D )
              {
                v34 = *(_QWORD *)(v34 + 88);
                if ( v34 )
                  continue;
              }
              StyleWindow = GetStyleWindow(v17, 2848LL);
              if ( !StyleWindow || GetRedirectionBitmap(StyleWindow) )
              {
                UpdatesLockedForDwm();
                v31 = CalcVisRgnWorker((struct tagWND *const)v17, (HRGN *)(v12 + 184), v33);
                goto LABEL_67;
              }
              break;
            }
            SetOrCreateRectRgnIndirectPublic(v12 + 184, gZero);
          }
          goto LABEL_66;
        }
        v18 = *v13;
        v19 = *(_WORD *)(*v13 + 884);
        if ( *(_WORD *)(*(_QWORD *)(v17 + 152) + 8LL) == v19 )
          goto LABEL_38;
        v20 = *(_QWORD *)(v17 + 168);
        if ( !v20 )
          goto LABEL_34;
        if ( v19 )
        {
          v14 = *(unsigned int *)(v20 + 4);
          v21 = (__int64 *)(v20 + 8);
          if ( (_DWORD)v14 )
          {
            while ( *((_WORD *)v21 + 4) != v19 || (*((_BYTE *)v21 + 10) & 1) == 0 )
            {
              v21 += 2;
              v22 = (_DWORD)v14 == 1;
              v14 = (unsigned int)(v14 - 1);
              if ( v22 )
                goto LABEL_29;
            }
            v25 = *v21;
            if ( v25 )
            {
              if ( v25 != -1 )
                goto LABEL_35;
LABEL_38:
              v27 = *(_QWORD *)(v17 + 168);
              if ( v27 && atomDispAffinity && (v28 = *(_DWORD *)(v27 + 4), v29 = (__int64 *)(v27 + 8), v28) )
              {
                while ( *((_WORD *)v29 + 4) != atomDispAffinity || (*((_BYTE *)v29 + 10) & 1) == 0 )
                {
                  v29 += 2;
                  if ( !--v28 )
                    goto LABEL_44;
                }
                v30 = *v29;
              }
              else
              {
LABEL_44:
                LOBYTE(v30) = 0;
              }
              if ( (v30 & 1) == 0 )
                goto LABEL_46;
              goto LABEL_52;
            }
          }
        }
LABEL_29:
        v23 = *(_WORD *)(v18 + 1362);
        if ( v23 && (v14 = *(unsigned int *)(v20 + 4), v24 = (__int64 *)(v20 + 8), (_DWORD)v14) )
        {
          while ( *((_WORD *)v24 + 4) != v23 || (*((_BYTE *)v24 + 10) & 1) == 0 )
          {
            v24 += 2;
            v22 = (_DWORD)v14 == 1;
            v14 = (unsigned int)(v14 - 1);
            if ( v22 )
              goto LABEL_34;
          }
          v25 = *v24;
        }
        else
        {
LABEL_34:
          v25 = 0LL;
        }
LABEL_35:
        if ( v25 )
        {
          LOBYTE(v14) = 1;
          v26 = HMValidateHandleNoSecure(v25, v14);
          if ( v26 )
          {
            if ( !(unsigned int)IsWindowBeingDestroyed(v26) )
              goto LABEL_52;
          }
        }
        goto LABEL_38;
      }
    }
LABEL_82:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v45);
  }
  v48 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v41, (struct PDEVOBJ *)&v48);
  if ( *(_DWORD *)(a1 + 164) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(a1 + 168) + 8LL * v5++), v2);
    while ( v5 < *(_DWORD *)(a1 + 164) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(a1 + 96), v2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v41);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
}
