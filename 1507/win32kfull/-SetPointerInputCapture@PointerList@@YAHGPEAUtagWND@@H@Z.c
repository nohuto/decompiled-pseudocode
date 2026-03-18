/*
 * XREFs of ?SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z @ 0x1C01FC924
 * Callers:
 *     ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C0229434 (-_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerList::SetPointerInputCapture(PointerList *this, __int64 a2, struct tagWND *a3)
{
  __int64 result; // rax
  __int64 v5; // rbx

  result = (__int64)FindNodeById((unsigned __int16)this, 0, 0);
  v5 = result;
  if ( result )
  {
    HMAssignmentLock(result + 48, a2);
    *(_DWORD *)(v5 + 152) = *(_DWORD *)(v5 + 152) & 0xFFFFFF8F | 0x10;
    return 1LL;
  }
  return result;
}
