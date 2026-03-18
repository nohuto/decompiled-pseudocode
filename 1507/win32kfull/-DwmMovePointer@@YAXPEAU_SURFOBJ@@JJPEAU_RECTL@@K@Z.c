/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0260028
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     EngpMovePointer @ 0x1C02621C4 (EngpMovePointer.c)
 * Callees:
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C000D98C (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00101F8 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C0010410 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00105A0 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0261EC0 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  HDEV hdev; // rbx
  struct DwmState *v9; // rdx
  unsigned __int64 v10; // rsi
  HSPRITE NeighborSprite; // rax
  struct DwmState *v12; // rcx
  HSPRITE v13; // rdi
  _BYTE *v14; // rcx
  HSPRITE v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rax
  __int64 **v20; // rcx
  HSPRITE v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 **v24; // rcx
  __int64 v25; // rcx
  __int64 **v26; // r8
  __int64 v27; // rdx
  HSPRITE v28; // rdi
  struct DWMSPRITE *v29; // rbx
  HDEV v30; // rcx
  struct DWMSPRITE *v31; // [rsp+80h] [rbp-80h] BYREF
  char v32[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[32]; // [rsp+90h] [rbp-70h] BYREF
  struct DWMSPRITE *v34; // [rsp+B0h] [rbp-50h]
  _BYTE v35[32]; // [rsp+B8h] [rbp-48h] BYREF
  struct DWMSPRITE *v36; // [rsp+D8h] [rbp-28h]
  _BYTE v37[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v38; // [rsp+100h] [rbp+0h]
  _BYTE v39[32]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v40; // [rsp+128h] [rbp+28h]
  _BYTE v41[32]; // [rsp+130h] [rbp+30h] BYREF
  struct DWMSPRITE *v42; // [rsp+150h] [rbp+50h]
  struct tagPOINT v43; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL *v44; // [rsp+1B8h] [rbp+B8h] BYREF

  v44 = a4;
  hdev = a1->hdev;
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
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v37, *((HSPRITE *)g_pDwmState + 17));
      NeighborSprite = (HSPRITE)hspGetNeighborSprite(*((HSPRITE *)g_pDwmState + 17), 0, 0);
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v39, NeighborSprite);
      if ( v38 )
      {
        if ( !v40 )
        {
LABEL_28:
          v40 = 0LL;
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v39);
          if ( v38 )
            _InterlockedDecrement((volatile signed __int32 *)(v38 + 12));
          v38 = 0LL;
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v37);
          v9 = g_pDwmState;
          goto LABEL_31;
        }
        if ( *(_DWORD *)(v40 + 56) == *(_DWORD *)(v38 + 56) && *(_DWORD *)(v40 + 60) == *(_DWORD *)(v38 + 60) )
        {
          v12 = g_pDwmState;
          v13 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
          while ( v13 != *((HSPRITE *)v12 + 17) )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v33, v13);
            if ( v34 && (*((_DWORD *)v34 + 34) & 1) != 0 )
            {
              vSpDwmUpdateSpriteVisibility(v34, 0);
              if ( v34 )
                _InterlockedDecrement((volatile signed __int32 *)v34 + 3);
              v34 = 0LL;
              v14 = v33;
              goto LABEL_24;
            }
            v13 = (HSPRITE)hspGetNeighborSprite(v13, 1, 0);
            if ( v34 )
              _InterlockedDecrement((volatile signed __int32 *)v34 + 3);
            v34 = 0LL;
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v33);
            v12 = g_pDwmState;
          }
        }
        else
        {
          v15 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
          DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v35, v15);
          if ( v36 )
            vSpDwmUpdateSpriteVisibility(v36, 0);
          *((_QWORD *)g_pDwmState + 18) = hspGetNeighborSprite(v15, 1, 0);
          vSpDwmZorderSprite(v15, *((HSPRITE *)g_pDwmState + 17));
          *((_QWORD *)g_pDwmState + 17) = v15;
          if ( v36 )
            _InterlockedDecrement((volatile signed __int32 *)v36 + 3);
          v36 = 0LL;
          v14 = v35;
LABEL_24:
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v14);
        }
        *((_DWORD *)g_pDwmState + 41) = v10;
      }
      if ( v40 )
        _InterlockedDecrement((volatile signed __int32 *)(v40 + 12));
      goto LABEL_28;
    }
  }
LABEL_31:
  if ( a2 == -1 )
  {
    v16 = (__int64 *)(hdev + 890);
    v17 = *v16;
    v18 = (__int64 **)v16[1];
    if ( *(__int64 **)(*v16 + 8) != v16 || *v18 != v16 )
      __fastfail(3u);
    *v18 = (__int64 *)v17;
    *(_QWORD *)(v17 + 8) = v18;
    v19 = *(_QWORD *)v9 + 104LL;
    v20 = *(__int64 ***)(*(_QWORD *)v9 + 112LL);
    *v16 = v19;
    v16[1] = (__int64)v20;
    if ( *v20 != (__int64 *)v19 )
      __fastfail(3u);
    *v20 = v16;
    *(_QWORD *)(v19 + 8) = v16;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 120LL) == *(_QWORD *)v9 + 120LL )
    {
      v21 = *(HSPRITE *)(*(_QWORD *)v9 + 144LL);
      while ( v21 )
      {
        DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v41, v21);
        if ( v42 )
          vSpDwmUpdateSpriteVisibility(v42, 0);
        v21 = (HSPRITE)hspGetNeighborSprite(v21, 1, 0);
        if ( v42 )
          _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
        v42 = 0LL;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v41);
      }
    }
  }
  else
  {
    v22 = (__int64 *)(hdev + 890);
    v23 = *((_QWORD *)hdev + 445);
    v24 = (__int64 **)*((_QWORD *)hdev + 446);
    if ( *(HDEV *)(v23 + 8) != hdev + 890 || *v24 != v22 )
      __fastfail(3u);
    *v24 = (__int64 *)v23;
    *(_QWORD *)(v23 + 8) = v24;
    v25 = *(_QWORD *)v9 + 120LL;
    v26 = *(__int64 ***)(*(_QWORD *)v9 + 128LL);
    *v22 = v25;
    *((_QWORD *)hdev + 446) = v26;
    if ( *v26 != (__int64 *)v25 )
      __fastfail(3u);
    *v26 = v22;
    *(_QWORD *)(v25 + 8) = v22;
    v27 = *(_QWORD *)v9;
    v28 = *(HSPRITE *)(v27 + 136);
    v43.x = a2 + *((_DWORD *)hdev + 652) - *(_DWORD *)(v27 + 152);
    v43.y = a3 + *((_DWORD *)hdev + 653) - *(_DWORD *)(v27 + 156);
    GreUpdateSprite(a1->hdev, 0LL, v28, 0LL, &v43, 0LL, 0LL, 0LL, 0, 0LL, 0x40200000u, 0LL, 0LL, 1, 0);
    v31 = 0LL;
    DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v31, v28);
    v29 = v31;
    if ( v31 )
    {
      if ( (a5 & 4) != 0 )
      {
        v30 = a1->hdev;
        LODWORD(v44) = 0x1000000;
        GreUpdateSprite(
          v30,
          0LL,
          v28,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          (struct _BLENDFUNCTION *)&v44,
          0x21200002u,
          0LL,
          0LL,
          1,
          0);
      }
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v32, (struct DWMSPRITE *)((char *)v29 + 120));
      vSpDwmUpdateSpriteVisibility(v29, 1);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v32);
      DEC_SHARE_REF_CNT(v29);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
}
