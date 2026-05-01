/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180005310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_dc01672e06462544fa819f216f90b0f3_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
