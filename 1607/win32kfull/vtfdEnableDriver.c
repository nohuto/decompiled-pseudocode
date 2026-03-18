/*
 * XREFs of vtfdEnableDriver @ 0x1C0135310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HSEMAPHORE __fastcall vtfdEnableDriver(__int64 a1, __int64 a2, __int64 a3)
{
  HSEMAPHORE result; // rax

  result = EngCreateSemaphore();
  ghsemVTFD = result;
  if ( result )
  {
    *(_DWORD *)(a3 + 4) = 12;
    *(_QWORD *)(a3 + 8) = &gadrvfnVTFD;
    result = (HSEMAPHORE)1;
    *(_DWORD *)a3 = 196608;
  }
  return result;
}
