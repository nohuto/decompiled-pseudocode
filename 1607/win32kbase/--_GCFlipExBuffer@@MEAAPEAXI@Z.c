/*
 * XREFs of ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C001E740
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C001E6C8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::`scalar deleting destructor'(CFlipExBuffer *this, char a2)
{
  CFlipExBuffer::~CFlipExBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
