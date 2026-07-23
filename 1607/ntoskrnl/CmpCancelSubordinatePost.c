/*
 * XREFs of CmpCancelSubordinatePost @ 0x1403E3B68
 * Callers:
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1404F86A8 (CmNotifyRunDown.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpCancelSubordinatePost(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rax

  v2 = (_QWORD *)(a1 + 32);
  if ( (_QWORD *)*v2 != v2 )
  {
    v3 = (_QWORD *)(*v2 - 32LL);
    v4 = *v3;
    v5 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( a2 )
      CmpAddToDelayedDeref((__int64)v3, a2);
  }
}
