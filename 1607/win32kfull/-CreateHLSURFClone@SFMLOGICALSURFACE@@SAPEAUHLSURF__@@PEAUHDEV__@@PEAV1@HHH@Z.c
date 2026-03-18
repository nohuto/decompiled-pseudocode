/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00662EC
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00534D8 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C0062450 (GreHintSpriteShape.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C01313E0 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00517E0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C0051FE8 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C00526D0 (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00655D4 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0065F8C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258250 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258288 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025829C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(
        _QWORD *a1,
        struct SFMLOGICALSURFACE *a2,
        int a3,
        int a4,
        int a5)
{
  int v5; // r15d
  HLSURF v9; // rsi
  int v10; // ebx
  int v11; // r12d
  __int64 Object; // rdi
  unsigned int v13; // r15d
  __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-51h] BYREF
  struct REGION *v18[2]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v20; // [rsp+78h] [rbp-21h] BYREF
  int v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+84h] [rbp-15h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  _BYTE v24[88]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v26; // [rsp+100h] [rbp+67h] BYREF
  int v27; // [rsp+110h] [rbp+77h]

  v27 = a4;
  v5 = 0;
  v9 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ(v19, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(v18, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(v17, 1LL);
  v10 = *((_DWORD *)a2 + 64);
  v20 = *((_QWORD *)a2 + 34);
  v21 = *((_DWORD *)a2 + 70);
  v22 = *((_DWORD *)a2 + 71);
  v23 = *((_QWORD *)a2 + 26);
  v26 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( v19[0] && v18[0] && v17[0] )
  {
    if ( a3 )
    {
      if ( *((_QWORD *)a2 + 17) )
      {
        v26 = *((_QWORD *)a2 + 17);
        if ( !RGNOBJ::bCopy((RGNOBJ *)v19, (struct RGNOBJ *)&v26) )
          goto LABEL_36;
      }
      else
      {
        a3 = 0;
      }
    }
    else
    {
      v10 &= ~2u;
    }
    if ( a4 && *((_QWORD *)a2 + 11) )
    {
      v15 = *((_QWORD *)a2 + 11);
      if ( !RGNOBJ::bCopy((RGNOBJ *)v18, (struct RGNOBJ *)&v15) )
        goto LABEL_36;
    }
    else
    {
      v27 = 0;
    }
    v11 = a5;
    if ( a5 && *((_QWORD *)a2 + 12) )
    {
      v16 = *((_QWORD *)a2 + 12);
      if ( !RGNOBJ::bCopy((RGNOBJ *)v17, (struct RGNOBJ *)&v16) )
        goto LABEL_36;
    }
    else
    {
      v11 = 0;
    }
    Object = AllocateObject(312LL, 18LL);
    if ( Object )
    {
      if ( (v10 & 0x40) != 0 )
        v5 = 1;
      if ( (unsigned int)SFMLOGICALSURFACE::Initialize(
                           Object,
                           *((_QWORD *)a2 + 34),
                           *((_DWORD *)a2 + 70),
                           *((_DWORD *)a2 + 71),
                           *((_QWORD *)a2 + 26),
                           *((_DWORD *)a2 + 74)) )
      {
        *(_DWORD *)(Object + 256) = v10;
        *(_DWORD *)(Object + 220) = *((_DWORD *)a2 + 55);
        *(_DWORD *)(Object + 64) = *((_DWORD *)a2 + 16);
        HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v24);
        if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v24, (struct OBJECT *)Object, 0, 1, 18) )
        {
          v9 = *(HLSURF *)Object;
          v13 = v5 | 4;
          if ( (int)SpNotifyLSurface(a1, *(HLSURF *)Object, 1, v13, (struct _CD_HLSURF_CREATIONCONTEXT *)&v20) >= 0 )
            *(_QWORD *)(Object + 24) = a1;
          if ( a3 )
          {
            *(_QWORD *)(Object + 136) = v19[0];
            v19[0] = 0LL;
          }
          if ( v27 )
          {
            SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)Object, v18[0]);
            v18[0] = 0LL;
          }
          if ( v11 )
          {
            *(_QWORD *)(Object + 96) = v17[0];
            v17[0] = 0LL;
          }
          EtwLogicalSurfCreateEvent(v9, v13);
        }
        else
        {
          bhLSurfDestroyLogicalSurfaceObject((HLSURF *)Object, 0, 0);
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v24);
      }
    }
  }
LABEL_36:
  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v17);
  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v18);
  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v19);
  return v9;
}
