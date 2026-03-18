/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C006B240
 * Callers:
 *     bDynamicRemoveAllDriverRealizations @ 0x1C006B2F0 (bDynamicRemoveAllDriverRealizations.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 */

__int64 __fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, SURFACE *a2)
{
  SURFACE *v2; // rsi
  __int64 i; // rcx
  SURFACE *v4; // rbx
  struct _BASEOBJECT *v5; // rcx
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
      v5 = (struct _BASEOBJECT *)*((_QWORD *)v4 + 62);
      if ( v5 )
      {
        *(_DWORD *)(result + 332) |= 0xFu;
        *(_QWORD *)(result + 512) = v5;
        HmgIncrementShareReferenceCount(v5);
        if ( *((_DWORD *)GdiHandleManager::GetEntryObject(
                           (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                           (unsigned __int16)*(_QWORD *)v4 | ((unsigned int)*(_QWORD *)v4 >> 8) & 0xFF0000)
             + 2) == 1 )
        {
          *((_QWORD *)v4 + 62) = 0LL;
          result = SURFACE::bDeleteSurface(v4, 0, 0);
          if ( v4 == v2 )
            return result;
        }
        else
        {
          HmgDecrementShareReferenceCount((unsigned int *)v4);
        }
      }
    }
  }
  return result;
}
