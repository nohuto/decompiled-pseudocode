/*
 * XREFs of ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x18004F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18004F52C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCGestureHandler *__fastcall MPCGestureHandler::`vector deleting destructor'(MPCGestureHandler *this, char a2)
{
  MPCGestureHandler::~MPCGestureHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
