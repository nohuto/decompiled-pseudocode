/*
 * XREFs of ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0001CB8
 * Callers:
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0068A90 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C00D5DB0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsClockCalibrationSupported(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( *(_QWORD *)(v1 + 768) )
    return *(_DWORD *)(v1 + 1656) >= 4864;
  return result;
}
