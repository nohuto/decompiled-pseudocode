/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C004DD3C
 * Callers:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004BBB0 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C004BC10 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ?Reset@?$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@@QEAAX_N@Z @ 0x1C004DD10 (-Reset@-$CStructDynamicArray@UManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@@.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C004E894 (--_GCInputManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    result = Win32FreePool();
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
