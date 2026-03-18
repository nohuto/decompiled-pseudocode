/*
 * XREFs of ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C001B75C
 * Callers:
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N3@Z @ 0x1C001B8DC (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z @ 0x1C001B968 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C001BA08 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C001BA80 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C001BAE8 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C001C234 (-HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C001FEF0 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 * Callees:
 *     <none>
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetActiveBuffer(CCompositionSurface *this)
{
  struct CCompositionBuffer *result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    v2 = *((_QWORD *)this + 8) - 24LL;
    if ( *(_BYTE *)(v2 + 40) )
      return (struct CCompositionBuffer *)v2;
  }
  return result;
}
