/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C004EF40
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00D33EC (zzzDecomposeDesktop.c)
 * Callees:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C004F4A0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C006AFE0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     _IsDescendant @ 0x1C007AA44 (_IsDescendant.c)
 *     IsWindowBeingDestroyed @ 0x1C007E090 (IsWindowBeingDestroyed.c)
 *     DwmAsyncShowSprite @ 0x1C00FCAE8 (DwmAsyncShowSprite.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  struct PDEVOBJ *v4; // rdx
  unsigned int v5; // r12d
  struct DwmState *v6; // rdx
  struct DwmState *v7; // rcx
  char *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r15
  __int64 *v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 *v14; // rdi
  __int64 v15; // rbp
  char v16; // al
  unsigned int v17; // edi
  __int64 v18; // rcx
  char v19; // al
  int v20; // edi
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r10
  __int16 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // rcx
  bool v28; // zf
  __int16 v29; // r8
  __int64 *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edx
  __int64 *v34; // rax
  __int64 v35; // rax
  __int64 StyleWindow; // rax
  void *v37; // rax
  __int64 v38; // rax
  _QWORD v39[2]; // [rsp+20h] [rbp-68h] BYREF
  int v40; // [rsp+30h] [rbp-58h]
  char v41; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v42; // [rsp+98h] [rbp+10h]
  __int64 v43; // [rsp+A0h] [rbp+18h] BYREF
  char v44; // [rsp+A8h] [rbp+20h] BYREF

  v42 = a2;
  v2 = a2;
  GreAcquireSemaphore(ghsemGreLock);
  v5 = 0;
  if ( !g_pDwmState )
    goto LABEL_27;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v41, v4, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v6 = g_pDwmState;
  v7 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
  if ( v7 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_26;
  do
  {
    if ( !v7 )
      break;
    v8 = (char *)v7 - 24;
    if ( v7 == (struct DwmState *)24 )
      break;
    v9 = *((_QWORD *)v8 + 5);
    if ( v9 )
    {
      v10 = *(_QWORD *)v6;
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v11 = (__int64 *)gpsi;
      v12 = (unsigned __int16)v9;
      if ( (unsigned __int64)(unsigned __int16)v9 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_18;
      v13 = v9 >> 16;
      v14 = (__int64 *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v12 * *((_DWORD *)&gSharedInfo + 4)));
      if ( (_WORD)v13 != *((_WORD *)v14 + 9) && (_WORD)v13 != 0xFFFF )
      {
        if ( !(_WORD)v13 && PsGetCurrentProcessWow64Process(gSharedInfo) )
        {
          v11 = (__int64 *)gpsi;
          goto LABEL_8;
        }
LABEL_18:
        v20 = 0;
LABEL_19:
        if ( !v20 )
          goto LABEL_20;
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v39, *((HRGN *)g_pDwmState + 23), 0);
        v23 = v39[0];
        if ( v39[0] )
          v20 = *(_DWORD *)(v39[0] + 84LL) != 1;
        if ( !v40 )
        {
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v39);
          v23 = v39[0];
        }
        if ( v23 )
          _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
        if ( v20 )
          v21 = 1;
        else
LABEL_20:
          v21 = 0;
        v22 = *((unsigned int *)v8 + 34);
        if ( v21 != (*((_DWORD *)v8 + 34) & 1) )
        {
          *((_DWORD *)v8 + 34) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)v21) & 1;
          v37 = (void *)UserReferenceDwmApiPort(v22);
          DwmAsyncShowSprite(v37);
        }
        v6 = g_pDwmState;
        goto LABEL_24;
      }
LABEL_8:
      if ( (*((_BYTE *)v14 + 17) & 1) != 0 )
        goto LABEL_18;
      if ( *((_BYTE *)v14 + 16) != 1 )
        goto LABEL_18;
      v15 = *v14;
      if ( !*v14 )
        goto LABEL_18;
      if ( (*(_DWORD *)(v15 + 288) & 0x20) == 0 )
      {
LABEL_12:
        v16 = *(_BYTE *)(v15 + 55);
        if ( (*(_BYTE *)(v15 + 50) & 0x20) == 0 )
        {
          v17 = 17409;
          if ( (v16 & 4) != 0 )
            v17 = 17425;
          v18 = v15;
          do
          {
            v19 = *(_BYTE *)(v18 + 55);
            if ( (v19 & 0x10) == 0 || (v19 & 0x20) != 0 && v18 != v15 )
              goto LABEL_17;
            if ( (*(_WORD *)(v18 + 66) & 0x3FFF) == 0x29D )
              break;
            v18 = *(_QWORD *)(v18 + 88);
          }
          while ( v18 );
          StyleWindow = GetStyleWindow(v15, 2848LL);
          if ( StyleWindow && !GetRedirectionBitmap(StyleWindow) )
          {
LABEL_17:
            SetOrCreateRectRgnIndirectPublic(v10 + 184, gZero);
            goto LABEL_18;
          }
          UpdatesLockedForDwm();
          v20 = CalcVisRgnWorker((struct tagWND *const)v15, (HRGN *)(v10 + 184), v17);
          goto LABEL_19;
        }
        if ( (v16 & 0x10) == 0 )
          goto LABEL_18;
        goto LABEL_59;
      }
      v24 = *v11;
      v25 = *(_WORD *)(*v11 + 884);
      if ( *(_WORD *)(*(_QWORD *)(v15 + 152) + 8LL) == v25 )
        goto LABEL_52;
      v26 = *(_QWORD *)(v15 + 168);
      if ( v26 )
      {
        if ( v25 )
        {
          v12 = *(unsigned int *)(v26 + 4);
          v27 = (__int64 *)(v26 + 8);
          if ( (_DWORD)v12 )
          {
            while ( *((_WORD *)v27 + 4) != v25 || (*((_BYTE *)v27 + 10) & 1) == 0 )
            {
              v27 += 2;
              v28 = (_DWORD)v12 == 1;
              v12 = (unsigned int)(v12 - 1);
              if ( v28 )
                goto LABEL_46;
            }
            v31 = *v27;
            if ( v31 )
            {
              if ( v31 == -1 )
                goto LABEL_52;
LABEL_51:
              if ( v31 )
              {
                LOBYTE(v12) = 1;
                v38 = HMValidateHandleNoSecure(v31, v12);
                if ( v38 )
                {
                  if ( !(unsigned int)IsWindowBeingDestroyed(v38) )
                    goto LABEL_12;
                }
              }
LABEL_52:
              v32 = *(_QWORD *)(v15 + 168);
              if ( v32 && atomDispAffinity && (v33 = *(_DWORD *)(v32 + 4), v34 = (__int64 *)(v32 + 8), v33) )
              {
                while ( *((_WORD *)v34 + 4) != atomDispAffinity || (*((_BYTE *)v34 + 10) & 1) == 0 )
                {
                  v34 += 2;
                  if ( !--v33 )
                    goto LABEL_57;
                }
                v35 = *v34;
              }
              else
              {
LABEL_57:
                LOBYTE(v35) = 0;
              }
              if ( (v35 & 1) != 0 )
                goto LABEL_12;
LABEL_59:
              SetRectRgnIndirect(*(_QWORD *)(v10 + 184), v15 + 112);
              v20 = 1;
              goto LABEL_19;
            }
          }
        }
LABEL_46:
        v29 = *(_WORD *)(v24 + 1362);
        if ( v29 )
        {
          v12 = *(unsigned int *)(v26 + 4);
          v30 = (__int64 *)(v26 + 8);
          if ( (_DWORD)v12 )
          {
            while ( *((_WORD *)v30 + 4) != v29 || (*((_BYTE *)v30 + 10) & 1) == 0 )
            {
              v30 += 2;
              v28 = (_DWORD)v12 == 1;
              v12 = (unsigned int)(v12 - 1);
              if ( v28 )
                goto LABEL_50;
            }
            v31 = *v30;
            goto LABEL_51;
          }
        }
      }
LABEL_50:
      v31 = 0LL;
      goto LABEL_51;
    }
LABEL_24:
    v7 = (struct DwmState *)*((_QWORD *)v8 + 3);
  }
  while ( v7 != (struct DwmState *)(*(_QWORD *)v6 + 80LL) );
  v2 = v42;
LABEL_26:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v41);
LABEL_27:
  v43 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v44, (struct PDEVOBJ *)&v43);
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
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v44);
  if ( ghsemGreLock )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
}
