/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000AA24
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C000A5E8 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     EngpMovePointer @ 0x1C0260A24 (EngpMovePointer.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C000AF38 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     GreUpdateSprite @ 0x1C0032AF0 (GreUpdateSprite.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C003BE5C (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C007C034 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C007C164 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8474 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  HDEV hdev; // r14
  int v6; // ebx
  int v7; // esi
  struct DwmState *v9; // rdx
  unsigned __int64 v10; // r15
  HSPRITE v11; // rdx
  HSPRITE NeighborSprite; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  HSPRITE v15; // rsi
  struct DWMSPRITE *v16; // rbx
  HSPRITE v17; // r12
  struct DWMSPRITE *v18; // rsi
  __int64 *v19; // r14
  __int64 v20; // rcx
  __int64 **v21; // rax
  __int64 v22; // rax
  __int64 **v23; // rcx
  HSPRITE v24; // rdi
  struct DWMSPRITE *v25; // rbx
  HSPRITE v26; // rax
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 **v29; // rcx
  __int64 v30; // rcx
  __int64 **v31; // r8
  __int64 v32; // rdx
  HSPRITE v33; // rdi
  struct DWMSPRITE *v34; // rbx
  HDEV v35; // rcx
  __int64 v36; // [rsp+88h] [rbp-31h] BYREF
  struct DWMSPRITE *v37; // [rsp+90h] [rbp-29h] BYREF
  struct DWMSPRITE *v38; // [rsp+98h] [rbp-21h] BYREF
  struct DWMSPRITE *v39; // [rsp+A0h] [rbp-19h] BYREF
  struct tagPOINT v40; // [rsp+A8h] [rbp-11h] BYREF
  struct DWMSPRITE *v41; // [rsp+B0h] [rbp-9h] BYREF
  _BYTE v42[80]; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v43; // [rsp+118h] [rbp+5Fh] BYREF
  int v44; // [rsp+120h] [rbp+67h]
  int v45; // [rsp+128h] [rbp+6Fh]
  struct _RECTL *v46; // [rsp+130h] [rbp+77h] BYREF

  v46 = a4;
  v45 = a3;
  v44 = a2;
  hdev = a1->hdev;
  v6 = a3;
  v7 = a2;
  if ( !*((_DWORD *)g_pDwmState + 25) || !*((_QWORD *)g_pDwmState + 17) )
    return;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v9 = g_pDwmState;
  if ( *((_QWORD *)g_pDwmState + 18) != *((_QWORD *)g_pDwmState + 17) )
  {
    v9 = g_pDwmState;
    v10 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)(v10 - *((_DWORD *)g_pDwmState + 41)) >= *((_DWORD *)g_pDwmState + 42) )
    {
      v11 = (HSPRITE)*((_QWORD *)g_pDwmState + 17);
      v36 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v36, v11);
      NeighborSprite = hspGetNeighborSprite(*((HSPRITE *)g_pDwmState + 17), 0, 0);
      v43 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v43, NeighborSprite);
      v13 = v36;
      v14 = v43;
      if ( !v36 )
        goto LABEL_23;
      if ( !v43 )
      {
LABEL_25:
        v6 = v45;
        if ( v13 )
          _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
        v9 = g_pDwmState;
        goto LABEL_28;
      }
      if ( *(_DWORD *)(v43 + 56) == *(_DWORD *)(v36 + 56) && *(_DWORD *)(v43 + 60) == *(_DWORD *)(v36 + 60) )
      {
        v15 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        if ( v15 == *((HSPRITE *)g_pDwmState + 17) )
        {
LABEL_22:
          v7 = v44;
          *((_DWORD *)g_pDwmState + 41) = v10;
LABEL_23:
          if ( v14 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
            v13 = v36;
          }
          goto LABEL_25;
        }
        while ( 1 )
        {
          v37 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v37, v15);
          v16 = v37;
          if ( v37 )
          {
            if ( (*((_DWORD *)v37 + 34) & 1) != 0 )
              break;
          }
          v15 = hspGetNeighborSprite(v15, 1, 0);
          if ( v16 )
            _InterlockedDecrement((volatile signed __int32 *)v16 + 3);
          if ( v15 == *((HSPRITE *)g_pDwmState + 17) )
            goto LABEL_21;
        }
        vSpDwmUpdateSpriteVisibility(v37, 0);
        _InterlockedDecrement((volatile signed __int32 *)v16 + 3);
      }
      else
      {
        v38 = 0LL;
        v17 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v38, v17);
        v18 = v38;
        if ( v38 )
          vSpDwmUpdateSpriteVisibility(v38, 0);
        *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v17, 1, 0);
        vSpDwmZorderSprite(v17, *((HSPRITE *)g_pDwmState + 17));
        *((_QWORD *)g_pDwmState + 17) = v17;
        if ( !v18 )
          goto LABEL_22;
        _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
      }
LABEL_21:
      v13 = v36;
      v14 = v43;
      goto LABEL_22;
    }
  }
LABEL_28:
  if ( v7 == -1 )
  {
    v19 = (__int64 *)(hdev + 890);
    v20 = *v19;
    v21 = (__int64 **)v19[1];
    if ( *(__int64 **)(*v19 + 8) != v19 || *v21 != v19 )
      __fastfail(3u);
    *v21 = (__int64 *)v20;
    *(_QWORD *)(v20 + 8) = v21;
    v22 = *(_QWORD *)v9 + 104LL;
    v23 = *(__int64 ***)(*(_QWORD *)v9 + 112LL);
    *v19 = v22;
    v19[1] = (__int64)v23;
    if ( *v23 != (__int64 *)v22 )
      __fastfail(3u);
    *v23 = v19;
    *(_QWORD *)(v22 + 8) = v19;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 120LL) == *(_QWORD *)v9 + 120LL )
    {
      v24 = *(HSPRITE *)(*(_QWORD *)v9 + 144LL);
      if ( v24 )
      {
        do
        {
          v39 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v39, v24);
          v25 = v39;
          if ( v39 )
            vSpDwmUpdateSpriteVisibility(v39, 0);
          v26 = hspGetNeighborSprite(v24, 1, 0);
          v24 = v26;
          if ( v25 )
            _InterlockedDecrement((volatile signed __int32 *)v25 + 3);
        }
        while ( v26 );
      }
    }
  }
  else
  {
    v27 = (__int64 *)(hdev + 890);
    v28 = *((_QWORD *)hdev + 445);
    v29 = (__int64 **)*((_QWORD *)hdev + 446);
    if ( *(HDEV *)(v28 + 8) != hdev + 890 || *v29 != v27 )
      __fastfail(3u);
    *v29 = (__int64 *)v28;
    *(_QWORD *)(v28 + 8) = v29;
    v30 = *(_QWORD *)v9 + 120LL;
    v31 = *(__int64 ***)(*(_QWORD *)v9 + 128LL);
    *v27 = v30;
    *((_QWORD *)hdev + 446) = v31;
    if ( *v31 != (__int64 *)v30 )
      __fastfail(3u);
    *v31 = v27;
    *(_QWORD *)(v30 + 8) = v27;
    v32 = *(_QWORD *)v9;
    v33 = *(HSPRITE *)(v32 + 136);
    v40.x = v7 + *((_DWORD *)hdev + 652) - *(_DWORD *)(v32 + 152);
    v40.y = v6 + *((_DWORD *)hdev + 653) - *(_DWORD *)(v32 + 156);
    GreUpdateSprite(a1->hdev, 0LL, v33, 0LL, &v40, 0LL, 0LL, 0LL, 0, 0LL, 1075838976, 0LL, 0LL, 1, 0);
    v41 = 0LL;
    DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v41, v33);
    v34 = v41;
    if ( v41 )
    {
      if ( (a5 & 4) != 0 )
      {
        v35 = a1->hdev;
        LODWORD(v46) = 0x1000000;
        GreUpdateSprite(
          v35,
          0LL,
          v33,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          (struct _BLENDFUNCTION *)&v46,
          555745282,
          0LL,
          0LL,
          1,
          0);
      }
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v42, (struct DWMSPRITE *)((char *)v34 + 120));
      vSpDwmUpdateSpriteVisibility(v34, 1);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v42);
      DEC_SHARE_REF_CNT(v34);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
}
