/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260
 * Callers:
 *     EngCreatePalette @ 0x1C007AD00 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00C5460 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00CA440 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00CD460 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C0156360 (bInitPALOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(unsigned int **this)
{
  unsigned int *v1; // rax
  unsigned __int8 *v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *this;
  if ( *this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      HmgDecrementShareReferenceCount(*this);
    }
    else
    {
      if ( v1 != *((unsigned int **)v1 + 16) )
      {
        v4 = *((_QWORD *)v1 + 16);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
      }
      v3 = (unsigned __int8 *)*((_QWORD *)*this + 14);
      if ( v3 )
      {
        if ( v3 != gpRGBXlate )
          Win32FreePool();
        *((_QWORD *)*this + 14) = 0LL;
      }
      HmgRemoveObjectImpl(*(struct HOBJ__ **)*this, 0, 1, 1u, 8, 0LL);
      FreeObject((__int64)*this);
    }
    *this = 0LL;
  }
}
