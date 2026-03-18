/*
 * XREFs of ?Reset@?$CDynamicArray@I$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C007B748
 * Callers:
 *     ?ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004EE50 (-ReleaseAllReferences@CInteractionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C004EE88 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0050074 (--_GCInputManager@@IEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall CDynamicArray<unsigned int,2003858261>::Reset(__int64 a1)
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
