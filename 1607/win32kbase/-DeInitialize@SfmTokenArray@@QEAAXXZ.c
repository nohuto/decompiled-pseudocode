/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C004E510
 * Callers:
 *     GreSfmDwmShutdown @ 0x1C004EBB0 (GreSfmDwmShutdown.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall SfmTokenArray::DeInitialize(SfmTokenArray *this)
{
  if ( *(_QWORD *)this )
  {
    Win32FreePool();
    *(_QWORD *)this = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
}
