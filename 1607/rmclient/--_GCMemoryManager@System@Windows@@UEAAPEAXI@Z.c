/*
 * XREFs of ??_GCMemoryManager@System@Windows@@UEAAPEAXI@Z @ 0x180008030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180005B08 (--3@YAXPEAX@Z.c)
 */

Windows::System::CMemoryManager *__fastcall Windows::System::CMemoryManager::`scalar deleting destructor'(
        Windows::System::CMemoryManager *this,
        char a2)
{
  *((_DWORD *)this + 9) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
