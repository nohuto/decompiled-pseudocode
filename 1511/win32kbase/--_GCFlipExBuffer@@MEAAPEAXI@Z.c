/*
 * XREFs of ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C003E5A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003E52C (--1CFlipExBuffer@@MEAA@XZ.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::`scalar deleting destructor'(CFlipExBuffer *this, char a2)
{
  CFlipExBuffer::~CFlipExBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
