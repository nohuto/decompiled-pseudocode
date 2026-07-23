/*
 * XREFs of TppPHDelete @ 0x18003CAFC
 * Callers:
 *     TppCancelTimer @ 0x18003C258 (TppCancelTimer.c)
 *     TppTimerQueueExpiration @ 0x18003C870 (TppTimerQueueExpiration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHDelete(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax

  if ( a2 != *(_QWORD **)a1 )
  {
    v3 = *a2;
    v4 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v4 != a2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = a2 + 2;
    a2[1] = a2;
    *a2 = a2;
    v6 = a2[2];
    v7 = *(_QWORD **)a1;
    if ( *(_QWORD **)(v6 + 8) != a2 + 2 )
      __fastfail(3u);
    *v7 = v6;
    v7[1] = v5;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = v7;
    *(_QWORD *)a1 = a2;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 32LL) = 0LL;
  return TppPHExtractMin();
}
