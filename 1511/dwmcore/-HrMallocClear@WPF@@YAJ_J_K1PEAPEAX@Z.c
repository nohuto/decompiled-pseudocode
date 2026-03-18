/*
 * XREFs of ?HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18001DCC8
 * Callers:
 *     ?ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180066B30 (-ProcessAppend@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1800688CC (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18012FC2C (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall WPF::HrMallocClear(WPF *this, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rax

  v4 = 0;
  if ( a4 && a3 && 0xFFFFFFFFFFFFFFFFuLL / a3 > 8 )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           8 * a3);
    *a4 = v6;
    if ( !v6 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
