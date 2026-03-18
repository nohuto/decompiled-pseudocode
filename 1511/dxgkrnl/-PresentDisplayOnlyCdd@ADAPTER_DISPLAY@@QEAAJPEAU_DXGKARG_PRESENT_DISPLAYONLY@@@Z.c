/*
 * XREFs of ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C012D5A8
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00AEAF0 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C00CCDE4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0146BF8 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentDisplayOnlyCdd(
        ADAPTER_DISPLAY *this,
        struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  __int64 v2; // rax
  __int64 VidPnSourceId; // rcx
  __int64 v4; // r8

  v2 = *((_QWORD *)this + 40);
  if ( v2
    && (VidPnSourceId = a2->VidPnSourceId, (unsigned int)VidPnSourceId < *(_DWORD *)v2)
    && (v4 = *(_QWORD *)(v2 + 8)) != 0 )
  {
    return BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v4 + 2408 * VidPnSourceId), a2);
  }
  else
  {
    return 3221225485LL;
  }
}
