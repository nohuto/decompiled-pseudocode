/*
 * XREFs of ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0011B64
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00051FC (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0002C7C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 */

VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(VIDSCH_FLIP_QUEUE *this)
{
  `vector destructor iterator'(
    (char *)this + 56,
    1224LL,
    64LL,
    (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_ENTRY::~VIDSCH_FLIP_QUEUE_ENTRY);
  operator delete(this);
  return this;
}
