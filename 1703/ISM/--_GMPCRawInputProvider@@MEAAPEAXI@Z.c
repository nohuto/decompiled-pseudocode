/*
 * XREFs of ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x180053E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180053B5C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCRawInputProvider *__fastcall MPCRawInputProvider::`scalar deleting destructor'(MPCRawInputProvider *this, char a2)
{
  MPCRawInputProvider::~MPCRawInputProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
