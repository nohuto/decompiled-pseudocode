/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C00F2618
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0042210 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x1C00F2660 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = Win32FreePool();
  if ( a2 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v5 = a2++;
      result = *(_QWORD *)(*(_QWORD *)a1 + 8LL * a2);
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = result;
    }
    while ( a2 < *(_DWORD *)(a1 + 8) );
  }
  return result;
}
