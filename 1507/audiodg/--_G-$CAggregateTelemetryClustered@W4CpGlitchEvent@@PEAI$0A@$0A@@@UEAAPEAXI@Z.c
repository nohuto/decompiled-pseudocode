/*
 * XREFs of ??_G?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x14003ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140015AF0 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

void *__fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
