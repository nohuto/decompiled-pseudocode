/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0016A14
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C003C1DC (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C007B994 (GreHintSpriteShape.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C0110480 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0016D10 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C007992C (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z @ 0x1C007B15C (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QEAAXPEAVREGION@@@Z.c)
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C007B758 (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007D76C (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025AE90 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025AEA0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(HDEV a1, struct SFMLOGICALSURFACE *a2, int a3, int a4, int a5)
{
  int v5; // r15d
  HLSURF v9; // rsi
  int v10; // ebx
  int v11; // r12d
  __int64 Object; // rdi
  unsigned int v13; // r15d
  __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  __int64 v16; // [rsp+40h] [rbp-39h] BYREF
  __int64 v17; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-29h] BYREF
  struct REGION *v19[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v21; // [rsp+80h] [rbp+7h] BYREF
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  __int64 v24; // [rsp+90h] [rbp+17h]
  __int64 v26; // [rsp+E0h] [rbp+67h] BYREF
  int v27; // [rsp+F0h] [rbp+77h]

  v27 = a4;
  v5 = 0;
  v9 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ(v20, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(v19, 1LL);
  RGNMEMOBJ::RGNMEMOBJ(v18, 1LL);
  v10 = *((_DWORD *)a2 + 64);
  v21 = *((_QWORD *)a2 + 34);
  v22 = *((_DWORD *)a2 + 70);
  v23 = *((_DWORD *)a2 + 71);
  v24 = *((_QWORD *)a2 + 26);
  if ( v20[0] && v19[0] && v18[0] )
  {
    if ( a3 )
    {
      if ( *((_QWORD *)a2 + 17) )
      {
        v15 = *((_QWORD *)a2 + 17);
        if ( !RGNOBJ::bCopy((RGNOBJ *)v20, (struct RGNOBJ *)&v15) )
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
      v16 = *((_QWORD *)a2 + 11);
      if ( !RGNOBJ::bCopy((RGNOBJ *)v19, (struct RGNOBJ *)&v16) )
        goto LABEL_36;
    }
    else
    {
      v27 = 0;
    }
    v11 = a5;
    if ( a5 && *((_QWORD *)a2 + 12) )
    {
      v17 = *((_QWORD *)a2 + 12);
      if ( !RGNOBJ::bCopy((RGNOBJ *)v18, (struct RGNOBJ *)&v17) )
        goto LABEL_36;
    }
    else
    {
      v11 = 0;
    }
    Object = AllocateObject(312LL, 18LL, 1LL);
    if ( Object )
    {
      if ( (v10 & 0x40) != 0 )
        v5 = 1;
      if ( (unsigned int)SFMLOGICALSURFACE::Initialize(
                           Object,
                           *((_QWORD *)a2 + 34),
                           *((unsigned int *)a2 + 70),
                           *((unsigned int *)a2 + 71),
                           *((_QWORD *)a2 + 26),
                           *((_DWORD *)a2 + 74)) )
      {
        *(_DWORD *)(Object + 256) = v10;
        *(_DWORD *)(Object + 220) = *((_DWORD *)a2 + 55);
        *(_DWORD *)(Object + 64) = *((_DWORD *)a2 + 16);
        v26 = 0LL;
        if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v26, (struct OBJECT *)Object, 0, 1, 18) )
        {
          v9 = *(HLSURF *)Object;
          v13 = v5 | 4;
          if ( (int)SpNotifyLSurface(a1, *(HLSURF *)Object, 1, v13, (struct _CD_HLSURF_CREATIONCONTEXT *)&v21) >= 0 )
            *(_QWORD *)(Object + 24) = a1;
          if ( a3 )
          {
            *(_QWORD *)(Object + 136) = v20[0];
            v20[0] = 0LL;
          }
          if ( v27 )
          {
            SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)Object, v19[0]);
            v19[0] = 0LL;
          }
          if ( v11 )
          {
            *(_QWORD *)(Object + 96) = v18[0];
            v18[0] = 0LL;
          }
          EtwLogicalSurfCreateEvent(v9, v13);
        }
        else
        {
          bhLSurfDestroyLogicalSurfaceObject(Object, 0LL, 0LL);
        }
        HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)&v26);
      }
    }
  }
LABEL_36:
  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v18);
  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v19);
  RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v20);
  return v9;
}
