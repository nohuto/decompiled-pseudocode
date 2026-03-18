/*
 * XREFs of ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x1C001FEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBufferRealization@@MEAA@XZ @ 0x1C001FE7C (--1CBufferRealization@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

CBufferRealization *__fastcall CBufferRealization::`vector deleting destructor'(CBufferRealization *this, char a2)
{
  CBufferRealization::~CBufferRealization(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
