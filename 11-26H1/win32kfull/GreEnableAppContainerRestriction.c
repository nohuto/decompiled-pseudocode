/*
 * XREFs of GreEnableAppContainerRestriction @ 0x14021A9AC
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall GreEnableAppContainerRestriction(__int64 a1)
{
  int v1; // ebx
  struct _GRETHREAD *result; // rax

  v1 = a1;
  result = GreGetCurrentThread(a1);
  if ( result )
    *((_DWORD *)result + 84) = *((_DWORD *)result + 84) & 0xFFFFFFFB | (v1 == 0 ? 4 : 0);
  return result;
}
