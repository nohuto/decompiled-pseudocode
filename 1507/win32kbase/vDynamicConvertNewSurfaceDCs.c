/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C005D870
 * Callers:
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005D910 (bDynamicRemoveAllDriverRealizations.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     HmgSafeNextObjt @ 0x1C005DA10 (HmgSafeNextObjt.c)
 *     HmgIncrementShareReferenceCount @ 0x1C005E740 (HmgIncrementShareReferenceCount.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, SURFACE *a2)
{
  SURFACE *v2; // rsi
  __int64 i; // rcx
  SURFACE *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rdi

  v2 = a2;
  for ( i = 0LL; ; i = *v7 )
  {
    LOBYTE(a2) = 1;
    result = HmgSafeNextObjt(i, a2);
    v7 = (__int64 *)result;
    if ( !result )
      break;
    v4 = *(SURFACE **)(result + 512);
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 61);
      if ( v5 )
      {
        *(_DWORD *)(result + 332) |= 0xFu;
        *(_QWORD *)(result + 512) = v5;
        HmgIncrementShareReferenceCount(v5);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement
                                   + 24LL * (unsigned __int16)*(_DWORD *)v4)
                       + 8LL) == 1 )
        {
          *((_QWORD *)v4 + 61) = 0LL;
          result = SURFACE::bDeleteSurface(v4, 0, 0);
          if ( v4 == v2 )
            return result;
        }
        else
        {
          HmgDecrementShareReferenceCount(v4);
        }
      }
    }
  }
  return result;
}
