/*
 * XREFs of ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0014528
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00109F4 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C00101FC (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 */

VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(VIDSCH_FLIP_QUEUE *this)
{
  `vector destructor iterator'(
    (char *)this + 56,
    1160LL,
    64,
    (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_ENTRY::~VIDSCH_FLIP_QUEUE_ENTRY);
  operator delete(this);
  return this;
}
