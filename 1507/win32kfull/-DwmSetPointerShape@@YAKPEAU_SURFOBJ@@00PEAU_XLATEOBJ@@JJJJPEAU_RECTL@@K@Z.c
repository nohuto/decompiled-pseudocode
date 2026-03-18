/*
 * XREFs of ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C
 * Callers:
 *     EngSetPointerShape @ 0x1C0262070 (EngSetPointerShape.c)
 * Callees:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C000D98C (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C000E520 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00105A0 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@XZ @ 0x1C025FFEC (--0DWMSPRITEREF@@QEAA@XZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0260028 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C026143C (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0261C54 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0261EC0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
  HDEV hdev; // rbx
  unsigned int v12; // r15d
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char v16; // si
  unsigned int v17; // edi
  unsigned int v18; // r14d
  struct DwmState *v19; // rcx
  struct tagRECT *v20; // rbx
  int v21; // eax
  HSPRITE SpriteInternal; // rax
  HSPRITE v23; // rbx
  __int64 v24; // rax
  struct DwmState *v25; // r8
  HSPRITE v26; // rcx
  HSPRITE v27; // rdi
  struct _BLENDFUNCTION *v28; // r12
  _QWORD *NeighborSprite; // rax
  HSPRITE v30; // r14
  struct DWMSPRITE *v31; // rbx
  HSPRITE v32; // rbx
  struct _SURFOBJ *v33; // r14
  _QWORD *v34; // rdi
  struct _XLATEOBJ *v35; // r9
  struct tagRECT *v36; // r9
  int v37; // edx
  struct _RECTL *v38; // r9
  char v39; // al
  _BYTE v41[8]; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v42[32]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v43; // [rsp+80h] [rbp-9h]
  struct DWMSPRITE *v44; // [rsp+D8h] [rbp+4Fh] BYREF
  struct _SURFOBJ *v45; // [rsp+E0h] [rbp+57h]
  struct _SURFOBJ *v46; // [rsp+E8h] [rbp+5Fh]
  struct _XLATEOBJ *v47; // [rsp+F0h] [rbp+67h] BYREF

  v47 = a4;
  v46 = a3;
  v45 = a2;
  hdev = a1->hdev;
  v12 = 2;
  if ( *((_DWORD *)g_pDwmState + 25) )
  {
    if ( a2 || a3 )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v42);
      v16 = a10;
      v17 = ((a10 >> 8) & 0xF) + 1;
      if ( (unsigned __int8)(a10 >> 12) )
        v18 = 0x3E8u / (unsigned __int8)(a10 >> 12);
      else
        v18 = 0;
      LODWORD(v47) = 0x1000000;
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v19 = g_pDwmState;
      if ( *((_DWORD *)g_pDwmState + 40) < v17 )
      {
        v20 = a9;
        do
        {
          if ( a7 == -1 && a8 == -1 || (v21 = 1, (v16 & 0x40) != 0) )
            v21 = 0;
          SpriteInternal = GreCreateSpriteInternal(a1->hdev, 0LL, v20, 0LL, 1, v21, 0, 0, 0);
          v19 = g_pDwmState;
          if ( !SpriteInternal )
            break;
          if ( !*((_QWORD *)g_pDwmState + 17) )
          {
            *((_QWORD *)g_pDwmState + 17) = SpriteInternal;
            v19 = g_pDwmState;
          }
          *(_QWORD *)(*(_QWORD *)v19 + 144LL) = SpriteInternal;
          ++*((_DWORD *)g_pDwmState + 40);
          v19 = g_pDwmState;
        }
        while ( *((_DWORD *)g_pDwmState + 40) < v17 );
      }
      while ( 1 )
      {
        v24 = *(_QWORD *)v19;
        if ( *(_DWORD *)(*(_QWORD *)v19 + 160LL) <= v17 )
          break;
        v23 = *(HSPRITE *)(v24 + 144);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v23, 1, 0);
        GreDeleteSpriteInternal(a1->hdev, 0LL, v23, 1);
        --*((_DWORD *)g_pDwmState + 40);
        v19 = g_pDwmState;
      }
      *(_DWORD *)(v24 + 168) = v18;
      v25 = g_pDwmState;
      v26 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
      if ( v26 )
      {
        v27 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        v28 = (struct _BLENDFUNCTION *)&v47;
        if ( (v16 & 0x40) == 0 )
          v28 = 0LL;
        if ( v27 != v26 )
        {
          do
          {
            NeighborSprite = hspGetNeighborSprite(v27, 1, 0);
            v44 = 0LL;
            v30 = (HSPRITE)NeighborSprite;
            DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v44, v27);
            v31 = v44;
            if ( v44 )
            {
              CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v41, (struct DWMSPRITE *)((char *)v44 + 120));
              vSpDwmUpdateSpriteVisibility(v31, 0);
              PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v41);
              v27 = v30;
              DEC_SHARE_REF_CNT(v31);
            }
            else
            {
              v27 = v30;
            }
            v25 = g_pDwmState;
          }
          while ( v30 != *((HSPRITE *)g_pDwmState + 17) );
          v16 = a10;
        }
        v32 = *(HSPRITE *)(*(_QWORD *)v25 + 144LL);
        if ( v32 )
        {
          v33 = v46;
          while ( 1 )
          {
            v34 = hspGetNeighborSprite(v32, 1, 0);
            if ( !(unsigned int)bSpDwmUpdateCursor(v32, v45, v33, v35, (struct _RECTL *)a9, v28) )
              break;
            v32 = (HSPRITE)v34;
            if ( !v34 )
            {
              v25 = g_pDwmState;
              goto LABEL_41;
            }
          }
          v25 = g_pDwmState;
          v12 = 0;
        }
LABEL_41:
        v36 = a9;
        v37 = a6;
        *(_DWORD *)(*(_QWORD *)v25 + 152LL) = a5 - a9->left;
        *((_DWORD *)g_pDwmState + 39) = v37 - v36->top;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
      v39 = 0;
      if ( (v16 & 0x60) != 0 )
        v39 = 4;
      DwmMovePointer(a1, a7, a8, v38, v39);
      if ( v43 )
        _InterlockedDecrement((volatile signed __int32 *)(v43 + 12));
      v43 = 0LL;
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v42);
    }
    else
    {
      GreAcquireSemaphore(ghsemDwmState);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
      v13 = hdev + 890;
      v14 = *v13;
      v15 = (_QWORD *)v13[1];
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v15 != v13 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v13[1] = v13;
      *v13 = v13;
      if ( *((struct DwmState **)g_pDwmState + 13) == (struct DwmState *)((char *)g_pDwmState + 104)
        && *((struct DwmState **)g_pDwmState + 15) == (struct DwmState *)((char *)g_pDwmState + 120) )
      {
        vSpDwmDestroyCursorSprites(a1->hdev);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
      GreReleaseSemaphoreInternal(ghsemDwmState);
    }
  }
  return v12;
}
