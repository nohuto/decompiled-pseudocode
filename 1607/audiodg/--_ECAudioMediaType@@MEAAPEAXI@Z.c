/*
 * XREFs of ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140024BC0
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x14000C850 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140017F40 (--_V@YAXPEAX@Z.c)
 */

void **__fastcall CAudioMediaType::`vector deleting destructor'(void **this, char a2)
{
  *this = &CAudioMediaType::`vftable';
  operator delete[](this[2]);
  this[2] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
