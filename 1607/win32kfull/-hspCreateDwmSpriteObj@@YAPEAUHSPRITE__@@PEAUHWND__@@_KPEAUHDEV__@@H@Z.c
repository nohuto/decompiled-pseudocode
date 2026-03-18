/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0065268
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C0065674 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00517F0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0051874 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C00630FC (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0064E94 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00654D8 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00D83D0 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258250 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258288 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025829C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z @ 0x1C025E1C0 (-vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z.c)
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
  struct _RTL_GENERIC_TABLE **v14; // rcx
  HSPRITE NeighborSprite; // rax
  struct DwmState **v16; // rax
  struct DwmState *v17; // rcx
  struct DwmState **v18; // rax
  __int64 v19; // rdx
  struct DwmState **v20; // rdx
  __int64 v21; // rax
  struct _RTL_GENERIC_TABLE *v22; // rcx
  HLSURF LogicalSurfaceObject; // rax
  HDEV v24; // rdx
  unsigned __int8 NewElement[8]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v27[3]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD Buffer[2]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v29[32]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v30; // [rsp+88h] [rbp-29h]
  _BYTE v31[40]; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v32[32]; // [rsp+B8h] [rbp+7h] BYREF
  struct SFMLOGICALSURFACE *v33; // [rsp+D8h] [rbp+27h]

  v4 = 0LL;
  memset(v27, 0, sizeof(v27));
  v8 = 4;
  Object = AllocateObject(144LL, 15LL);
  v10 = (volatile signed __int32 *)Object;
  if ( Object )
  {
    v11 = (struct DwmState *)(Object + 24);
    NewElement[0] = 0;
    *(_QWORD *)(Object + 32) = Object + 24;
    *(_QWORD *)(Object + 24) = Object + 24;
    ++*((_DWORD *)g_pDwmState + 24);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v31);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v31, (struct OBJECT *)v10, 0, 1, 15) )
    {
      v13 = *(_QWORD *)v10;
      LOBYTE(v12) = 15;
      NewElement[0] = 1;
      HmgMarkUndeletable(v13, v12);
      v14 = (struct _RTL_GENERIC_TABLE **)g_pDwmState;
      if ( *((_QWORD *)g_pDwmState + 18) )
      {
        NeighborSprite = hspGetNeighborSprite(*((HSPRITE *)g_pDwmState + 18), 0, 0);
        if ( NeighborSprite )
        {
          DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v29, NeighborSprite);
          if ( v30 )
            v16 = (struct DwmState **)(v30 + 24);
          else
            v16 = 0LL;
          v17 = *v16;
          if ( *((struct DwmState ***)*v16 + 1) != v16 )
            __fastfail(3u);
          *((_QWORD *)v11 + 1) = v16;
          *(_QWORD *)v11 = v17;
          *((_QWORD *)v17 + 1) = v11;
          *v16 = v11;
          if ( v30 )
            _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
          v30 = 0LL;
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v29);
          v14 = (struct _RTL_GENERIC_TABLE **)g_pDwmState;
        }
        else
        {
          v14 = (struct _RTL_GENERIC_TABLE **)g_pDwmState;
          v18 = (struct DwmState **)((char *)g_pDwmState + 80);
          v19 = *((_QWORD *)g_pDwmState + 10);
          if ( *(struct DwmState **)(v19 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
            __fastfail(3u);
          *(_QWORD *)v11 = v19;
          *((_QWORD *)v11 + 1) = v18;
          *(_QWORD *)(v19 + 8) = v11;
          *v18 = v11;
        }
      }
      else
      {
        v20 = (struct DwmState **)*((_QWORD *)g_pDwmState + 11);
        if ( *v20 != (struct DwmState *)((char *)g_pDwmState + 80) )
          __fastfail(3u);
        *(_QWORD *)v11 = (char *)g_pDwmState + 80;
        *((_QWORD *)v11 + 1) = v20;
        *v20 = v11;
        *((_QWORD *)g_pDwmState + 11) = v11;
      }
      if ( a1 )
      {
        v21 = *(_QWORD *)v10;
        *((_QWORD *)v10 + 5) = a1;
        v22 = *v14;
        Buffer[1] = v21;
        Buffer[0] = a1;
        RtlInsertElementGenericTable(v22, Buffer, 0x10u, NewElement);
      }
      if ( !NewElement[0] )
      {
LABEL_28:
        _InterlockedIncrement(v10 + 3);
LABEL_29:
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v31);
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
      v27[0] = a1;
      if ( a4 )
        v8 = 5;
      LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(a3, v8, (struct _CD_HLSURF_CREATIONCONTEXT *)v27);
      if ( LogicalSurfaceObject )
      {
        SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v32, LogicalSurfaceObject);
        DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v24, v33);
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v32);
      }
      else
      {
        NewElement[0] = 0;
      }
    }
    if ( NewElement[0] )
      goto LABEL_29;
    goto LABEL_28;
  }
  return v4;
}
