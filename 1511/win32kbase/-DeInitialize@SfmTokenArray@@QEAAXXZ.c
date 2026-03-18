/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C004EA40
 * Callers:
 *     GreSfmDwmShutdown @ 0x1C007F6F0 (GreSfmDwmShutdown.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
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
