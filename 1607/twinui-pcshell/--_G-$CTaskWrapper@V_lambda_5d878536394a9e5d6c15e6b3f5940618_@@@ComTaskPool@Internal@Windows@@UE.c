/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18002A720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5d878536394a9e5d6c15e6b3f5940618_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
