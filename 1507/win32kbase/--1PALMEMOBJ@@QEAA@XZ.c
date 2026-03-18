/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000C0A0
 * Callers:
 *     EngCreatePalette @ 0x1C000BFB0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B78B0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C00BD090 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00BFCCC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C01381D0 (bInitPALOBJ.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v1; // rax
  unsigned __int8 *v3; // rcx
  struct HOBJ__ *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *this;
  if ( *this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      HmgDecrementShareReferenceCount(*this);
    }
    else
    {
      if ( v1 != (struct HOBJ__ **)v1[17] )
      {
        v4 = v1[17];
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
      }
      v3 = (unsigned __int8 *)(*this)[15];
      if ( v3 )
      {
        if ( v3 != gpRGBXlate )
          Win32FreePool(v3);
        (*this)[15] = 0LL;
      }
      HmgRemoveObjectImpl(**this, 0, 1, 1u, 8, 0LL);
      if ( *((__int16 *)*this + 7) >= 0 )
      {
        Win32FreePool(*this);
      }
      else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
      {
        Win32FreeToPagedLookasideListImpl_0();
      }
    }
    *this = 0LL;
  }
}
