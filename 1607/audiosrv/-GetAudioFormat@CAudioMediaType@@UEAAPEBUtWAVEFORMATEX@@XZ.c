/*
 * XREFs of ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x18001E790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tWAVEFORMATEX *__fastcall CAudioMediaType::GetAudioFormat(CAudioMediaType *this)
{
  return (const struct tWAVEFORMATEX *)*((_QWORD *)this + 2);
}
