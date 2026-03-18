/*
 * XREFs of ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x1C004D6A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C004D65C (--1CBufferRealization@@MEAA@XZ.c)
 */

CBufferRealization *__fastcall CBufferRealization::`vector deleting destructor'(CBufferRealization *this, char a2)
{
  CBufferRealization::~CBufferRealization(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
