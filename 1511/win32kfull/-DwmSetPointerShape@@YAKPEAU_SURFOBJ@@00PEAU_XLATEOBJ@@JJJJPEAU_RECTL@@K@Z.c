/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A5E8
 * Callers:
 *     EngSetPointerShape @ 0x1C000A490 (EngSetPointerShape.c)
 * Callees:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000AA24 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AF38 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C000AF68 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C000B150 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C003BE5C (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C0079A6C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8474 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

__int64 __fastcall DwmSetPointerShape(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _XLATEOBJ *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct tagRECT *a9,
        unsigned int a10)
{
  char v10; // di
  HDEV hdev; // rbx
  unsigned int v13; // r15d
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // bp
  unsigned int v18; // esi
  unsigned int v19; // r14d
  struct DwmState *v20; // rcx
  struct tagRECT *v21; // rbx
  int v22; // eax
  void *SpriteInternal; // rax
  HSPRITE v24; // rbx
  __int64 v25; // rax
  struct DwmState *v26; // r8
  HSPRITE v27; // rcx
  HSPRITE v28; // rsi
  struct _BLENDFUNCTION *v29; // r12
  HSPRITE NeighborSprite; // rax
  HSPRITE v31; // r14
  struct DWMSPRITE *v32; // rbx
  HSPRITE v33; // rbx
  struct _SURFOBJ *v34; // r14
  HSPRITE v35; // rsi
  struct _XLATEOBJ *v36; // r9
  struct _RECTL *v37; // r9
  int v38; // edx
  struct _RECTL *v39; // r9
  _BYTE v41[88]; // [rsp+50h] [rbp-58h] BYREF
  struct DWMSPRITE *v42; // [rsp+B0h] [rbp+8h] BYREF
  struct _SURFOBJ *v43; // [rsp+B8h] [rbp+10h]
  struct _SURFOBJ *v44; // [rsp+C0h] [rbp+18h]
  struct _XLATEOBJ *v45; // [rsp+C8h] [rbp+20h] BYREF

  v45 = a4;
  v44 = a3;
  v43 = a2;
  v10 = 0;
  hdev = a1->hdev;
  v13 = 2;
  if ( *((_DWORD *)g_pDwmState + 25) )
  {
    if ( a2 || a3 )
    {
      v17 = a10;
      v18 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        v19 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v19 = 0;
      LODWORD(v45) = 0x1000000;
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v20 = g_pDwmState;
      if ( *((_DWORD *)g_pDwmState + 40) < v18 )
      {
        v21 = a9;
        do
        {
          if ( a7 == -1 && a8 == -1 || (v22 = 1, (v17 & 0x40) != 0) )
            v22 = 0;
          SpriteInternal = GreCreateSpriteInternal(a1->hdev, 0LL, v21, 0LL, 1, v22, 0, 0, 0);
          v20 = g_pDwmState;
          if ( !SpriteInternal )
            break;
          if ( !*((_QWORD *)g_pDwmState + 17) )
          {
            *((_QWORD *)g_pDwmState + 17) = SpriteInternal;
            v20 = g_pDwmState;
          }
          *(_QWORD *)(*(_QWORD *)v20 + 144LL) = SpriteInternal;
          ++*((_DWORD *)g_pDwmState + 40);
          v20 = g_pDwmState;
        }
        while ( *((_DWORD *)g_pDwmState + 40) < v18 );
      }
      while ( 1 )
      {
        v25 = *(_QWORD *)v20;
        if ( *(_DWORD *)(*(_QWORD *)v20 + 160LL) <= v18 )
          break;
        v24 = *(HSPRITE *)(v25 + 144);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v24, 1, 0);
        GreDeleteSpriteInternal(a1->hdev, 0LL, v24, 1);
        --*((_DWORD *)g_pDwmState + 40);
        v20 = g_pDwmState;
      }
      *(_DWORD *)(v25 + 168) = v19;
      v26 = g_pDwmState;
      v27 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
      if ( v27 )
      {
        v28 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        v29 = (struct _BLENDFUNCTION *)&v45;
        if ( (v17 & 0x40) == 0 )
          v29 = 0LL;
        if ( v28 != v27 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v28, 1, 0);
            v42 = 0LL;
            v31 = NeighborSprite;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v42, v28);
            v32 = v42;
            if ( v42 )
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v41, (struct DWMSPRITE *)((char *)v42 + 120));
              vSpDwmUpdateSpriteVisibility(v32, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v41);
              v28 = v31;
              DEC_SHARE_REF_CNT(v32);
            }
            else
            {
              v28 = v31;
            }
            v26 = g_pDwmState;
          }
          while ( v31 != *((HSPRITE *)g_pDwmState + 17) );
        }
        v33 = *(HSPRITE *)(*(_QWORD *)v26 + 144LL);
        if ( v33 )
        {
          v34 = v44;
          while ( 1 )
          {
            v35 = hspGetNeighborSprite(v33, 1, 0);
            if ( !(unsigned int)bSpDwmUpdateCursor(v33, v43, v34, v36, (struct _RECTL *)a9, v29) )
              break;
            v33 = v35;
            if ( !v35 )
              goto LABEL_41;
          }
          v13 = 0;
LABEL_41:
          v26 = g_pDwmState;
        }
        v37 = (struct _RECTL *)a9;
        v38 = a6;
        *(_DWORD *)(*(_QWORD *)v26 + 152LL) = a5 - a9->left;
        *((_DWORD *)g_pDwmState + 39) = v38 - v37->top;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      if ( (v17 & 0x60) != 0 )
        v10 = 4;
      DwmMovePointer(a1, a7, a8, v39, v10);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v14 = hdev + 890;
      v15 = *v14;
      v16 = (_QWORD *)v14[1];
      if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      v14[1] = v14;
      *v14 = v14;
      if ( *((struct DwmState **)g_pDwmState + 13) == (struct DwmState *)((char *)g_pDwmState + 104)
        && *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
      {
        vSpDwmDestroyCursorSprites(a1->hdev);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
    }
  }
  return v13;
}
