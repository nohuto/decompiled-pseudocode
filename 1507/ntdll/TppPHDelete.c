/*
 * XREFs of TppPHDelete @ 0x18003D0E0
 * Callers:
 *     TppTimerQueueExpiration @ 0x18003CAA0 (TppTimerQueueExpiration.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHDelete(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // r9
  _QWORD *v5; // rax

  if ( a2 != *(_QWORD **)a1 )
  {
    v2 = *a2;
    v3 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v3 != a2 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a2[1] = a2;
    *a2 = a2;
    v4 = a2[2];
    v5 = *(_QWORD **)a1;
    *v5 = v4;
    v5[1] = a2 + 2;
    if ( *(_QWORD **)(v4 + 8) != a2 + 2 )
      __fastfail(3u);
    *(_QWORD *)(v4 + 8) = v5;
    a2[2] = v5;
    *(_QWORD *)a1 = a2;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 32LL) = 0LL;
  return TppPHExtractMin();
}
