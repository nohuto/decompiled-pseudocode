/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C005AF20
 * Callers:
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005AFC0 (bDynamicRemoveAllDriverRealizations.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00320A0 (HmgIncrementShareReferenceCount.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgSafeNextObjt @ 0x1C005B0C0 (HmgSafeNextObjt.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, struct SURFACE *a2)
{
  struct SURFACE *v2; // rsi
  __int64 i; // rcx
  struct SURFACE *v4; // rbx
  _DWORD *v5; // rcx
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
    v4 = *(struct SURFACE **)(result + 512);
    if ( v4 )
    {
      v5 = (_DWORD *)*((_QWORD *)v4 + 61);
      if ( v5 )
      {
        *(_DWORD *)(result + 332) |= 0xFu;
        *(_QWORD *)(result + 512) = v5;
        HmgIncrementShareReferenceCount(v5);
        if ( *(_DWORD *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*(_DWORD *)v4) + 8LL) == 1 )
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
