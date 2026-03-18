/*
 * XREFs of BmfdEnableDriver @ 0x1C0113FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HSEMAPHORE __fastcall BmfdEnableDriver(__int64 a1, __int64 a2, __int64 a3)
{
  HSEMAPHORE result; // rax

  result = EngCreateSemaphore();
  ghsemBMFD = result;
  if ( result )
  {
    *(_DWORD *)(a3 + 4) = 12;
    *(_QWORD *)(a3 + 8) = &gadrvfnBMFD;
    result = (HSEMAPHORE)1;
    *(_DWORD *)a3 = 196608;
  }
  return result;
}
