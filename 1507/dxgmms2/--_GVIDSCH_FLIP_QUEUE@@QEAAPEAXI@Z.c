/*
 * XREFs of ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0011FB0
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C00036B8 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0003D78 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(VIDSCH_FLIP_QUEUE *this)
{
  `vector destructor iterator'(
    (char *)this + 56,
    1144LL,
    64,
    (void (__fastcall *)(char *))VIDSCH_FLIP_QUEUE_ENTRY::~VIDSCH_FLIP_QUEUE_ENTRY);
  operator delete(this);
  return this;
}
