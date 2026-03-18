/*
 * XREFs of ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C000D620
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C000D890 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C000D98C (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C000F65C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z @ 0x1C0010410 (--0DWMSPRITEREF@@QEAA@PEAUHSPRITE__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0012894 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1C0012968 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B110 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B148 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z @ 0x1C0261F14 (-vspDestroyDwmSpriteObjExclusiveLocked@@YAXPEAUHDEV__@@PEAVDWMSPRITE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
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
  __int64 v18; // rdx
  struct DwmState **v19; // rdx
  __int64 v20; // rax
  struct _RTL_GENERIC_TABLE *v21; // rcx
  HLSURF LogicalSurfaceObject; // rax
  HDEV v23; // rdx
  unsigned __int8 NewElement[8]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v26[3]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD Buffer[2]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v28[32]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v29; // [rsp+88h] [rbp-29h]
  _BYTE v30[40]; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v31[32]; // [rsp+B8h] [rbp+7h] BYREF
  struct SFMLOGICALSURFACE *v32; // [rsp+D8h] [rbp+27h]

  v4 = 0LL;
  memset(v26, 0, sizeof(v26));
  v8 = 4;
  Object = AllocateObject(144LL, 15LL, 1LL);
  v10 = (volatile signed __int32 *)Object;
  if ( Object )
  {
    v11 = (struct DwmState *)(Object + 24);
    NewElement[0] = 0;
    *(_QWORD *)(Object + 32) = Object + 24;
    *(_QWORD *)(Object + 24) = Object + 24;
    ++*((_DWORD *)g_pDwmState + 24);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v30);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v30, (struct OBJECT *)v10, 0, 1, 15) )
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
          DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v28, NeighborSprite);
          if ( v29 )
            v16 = (struct DwmState **)(v29 + 24);
          else
            v16 = 0LL;
          v17 = *v16;
          *(_QWORD *)v11 = *v16;
          *((_QWORD *)v11 + 1) = v16;
          if ( *((struct DwmState ***)v17 + 1) != v16 )
            __fastfail(3u);
          *((_QWORD *)v17 + 1) = v11;
          *v16 = v11;
          if ( v29 )
            _InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
          v29 = 0LL;
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
          v14 = (struct _RTL_GENERIC_TABLE **)g_pDwmState;
        }
        else
        {
          v14 = (struct _RTL_GENERIC_TABLE **)g_pDwmState;
          v18 = *((_QWORD *)g_pDwmState + 10);
          *(_QWORD *)v11 = v18;
          *((_QWORD *)v11 + 1) = (char *)g_pDwmState + 80;
          if ( *(struct DwmState **)(v18 + 8) != (struct DwmState *)((char *)g_pDwmState + 80) )
            __fastfail(3u);
          *(_QWORD *)(v18 + 8) = v11;
          *((_QWORD *)g_pDwmState + 10) = v11;
        }
      }
      else
      {
        v19 = (struct DwmState **)*((_QWORD *)g_pDwmState + 11);
        *(_QWORD *)v11 = (char *)g_pDwmState + 80;
        *((_QWORD *)v11 + 1) = v19;
        if ( *v19 != (struct DwmState *)((char *)g_pDwmState + 80) )
          __fastfail(3u);
        *v19 = v11;
        *((_QWORD *)g_pDwmState + 11) = v11;
      }
      if ( a1 )
      {
        v20 = *(_QWORD *)v10;
        *((_QWORD *)v10 + 5) = a1;
        v21 = *v14;
        Buffer[1] = v20;
        Buffer[0] = a1;
        RtlInsertElementGenericTable(v21, Buffer, 0x10u, NewElement);
      }
      if ( !NewElement[0] )
      {
LABEL_28:
        _InterlockedIncrement(v10 + 3);
LABEL_29:
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v30);
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
      v26[0] = a1;
      if ( a4 )
        v8 = 5;
      LogicalSurfaceObject = hlsurfCreateLogicalSurfaceObject(a3, v8, (struct _CD_HLSURF_CREATIONCONTEXT *)v26);
      if ( LogicalSurfaceObject )
      {
        SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(v31, LogicalSurfaceObject);
        DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v10, v23, v32);
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v31);
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
