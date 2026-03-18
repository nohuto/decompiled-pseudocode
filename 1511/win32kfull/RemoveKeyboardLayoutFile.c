/*
 * XREFs of RemoveKeyboardLayoutFile @ 0x1C0112EE4
 * Callers:
 *     DestroyKF @ 0x1C0112EB0 (DestroyKF.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RemoveKeyboardLayoutFile(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _QWORD *i; // rax

  if ( gpKbdTbl == a1[4] )
    gpKbdTbl = KbdTablesFallback;
  if ( gpKbdNlsTbl == a1[6] )
    gpKbdNlsTbl = 0LL;
  v1 = gpkfList;
  if ( a1 == (_QWORD *)gpkfList )
  {
    result = a1[2];
    gpkfList = result;
  }
  else
  {
    for ( i = *(_QWORD **)(gpkfList + 16); a1 != i; i = (_QWORD *)i[2] )
      v1 = (__int64)i;
    result = i[2];
    *(_QWORD *)(v1 + 16) = result;
  }
  return result;
}
