/*
 * XREFs of ??_E?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x180008AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x1800012F4 (--1-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180005B08 (--3@YAXPEAX@Z.c)
 */

void *__fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::~GitPtrImpl<Windows::Internal::GitPtr>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
