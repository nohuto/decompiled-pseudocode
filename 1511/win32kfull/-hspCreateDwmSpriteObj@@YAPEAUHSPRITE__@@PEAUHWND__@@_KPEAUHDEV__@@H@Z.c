/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007D810
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00D2428 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C003C420 (SFMLOGICALSURFACEREF_vDestructorWrap.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C003C710 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007AF78 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C007C164 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D684 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00F8474 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025AE90 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025AEA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z @ 0x1C02608C4 (-vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z.c)
 */

__int64 __fastcall hspCreateDwmSpriteObj(HWND a1, __int64 a2, HDEV a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v8; // r12d
  __int64 Object; // rax
  volatile signed __int32 *v10; // rdi
  struct DwmState *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  HSPRITE v14; // rcx
  HSPRITE NeighborSprite; // rax
  __int64 v16; // rax
  struct DwmState **v17; // rcx
  struct DwmState *v18; // rdx
  __int64 v19; // rax
  struct DwmState **v20; // rcx
  __int64 v21; // rax
  HLSURF LogicalSurfaceObject; // rax
  HDEV v23; // rdx
  unsigned __int8 NewElement[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  struct SFMLOGICALSURFACE *v28; // [rsp+48h] [rbp-38h] BYREF
  int v29; // [rsp+50h] [rbp-30h]
  _QWORD Buffer[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v31[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = 0LL;
  memset(v31, 0, sizeof(v31));
  v8 = 4;
  Object = AllocateObject(144LL, 15LL, 1LL);
  v10 = (volatile signed __int32 *)Object;
  if ( Object )
  {
    v11 = (struct DwmState *)(Object + 24);
    NewElement[0] = 0;
    *(_QWORD *)(Object + 32) = Object + 24;
    *(_QWORD *)(Object + 24) = Object + 24;
    v27 = 0LL;
    ++*((_DWORD *)g_pDwmState + 24);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v27, (struct OBJECT *)Object, 0, 1, 15) )
    {
      v13 = *(_QWORD *)v10;
      LOBYTE(v12) = 15;
      NewElement[0] = 1;
      HmgMarkUndeletable(v13, v12);
      v14 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
      if ( v14 )
      {
        NeighborSprite = hspGetNeighborSprite(v14, 0, 0);
        if ( NeighborSprite )
        {
          v26 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v26, NeighborSprite);
          v16 = v26;
          v17 = (struct DwmState **)(v26 + 24);
          if ( !v26 )
            v17 = 0LL;
          v18 = *v17;
          *(_QWORD *)v11 = *v17;
          *((_QWORD *)v11 + 1) = v17;
          if ( *((struct DwmState ***)v18 + 1) != v17 )
            __fastfail(3u);
          *((_QWORD *)v18 + 1) = v11;
          *v17 = v11;
          if ( v16 )
            _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
        }
        else
        {
          v19 = *((_QWORD *)g_pDwmState + 10);
          *(_QWORD *)v11 = v19;
          *((_QWORD *)v11 + 1) = (char *)g_pDwmState + 80;
          if ( *(struct DwmState **)(v19 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
            __fastfail(3u);
          *(_QWORD *)(v19 + 8) = v11;
          *((_QWORD *)g_pDwmState + 10) = v11;
        }
      }
      else
      {
        v20 = (struct DwmState **)*((_QWORD *)g_pDwmState + 11);
        *(_QWORD *)v11 = (char *)g_pDwmState + 80;
        *((_QWORD *)v11 + 1) = v20;
        if ( *v20 != (struct DwmState *)((char *)g_pDwmState + 80) )
          __fastfail(3u);
        *v20 = v11;
        *((_QWORD *)g_pDwmState + 11) = v11;
      }
      if ( a1 )
      {
        v21 = *(_QWORD *)v10;
        *((_QWORD *)v10 + 5) = a1;
        Buffer[0] = a1;
        Buffer[1] = v21;
        RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer, 0x10u, NewElement);
      }
      if ( !NewElement[0] )
      {
LABEL_26:
        _InterlockedIncrement(v10 + 3);
LABEL_27:
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v27);
        if ( NewElement[0] )
        {
          GreInitializePushLock(v10 + 30);
          v4 = *(_QWORD *)v10;
          *((_QWORD *)v10 + 6) = a2;
        }
        else
        {
          vspDestroyDwmSpriteObjExclusiveLocked(a3, (struct DWMSPRITE *)v10);
        }
        return v4;
      }
      EtwDwmSpriteCreateEvent(a1, *(_QWORD *)v10);
      v31[0] = a1;
      if ( a4 )
        v8 = 5;
      LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(a3, v8, (struct _CD_HLSURF_CREATIONCONTEXT *)v31);
      if ( LogicalSurfaceObject )
      {
        v28 = 0LL;
        v29 = 0;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v28, LogicalSurfaceObject);
        DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v23, v28);
        SFMLOGICALSURFACEREF_vDestructorWrap(&v28);
      }
      else
      {
        NewElement[0] = 0;
      }
    }
    if ( NewElement[0] )
      goto LABEL_27;
    goto LABEL_26;
  }
  return v4;
}
