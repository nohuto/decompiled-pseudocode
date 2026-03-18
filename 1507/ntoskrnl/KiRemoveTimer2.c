/*
 * XREFs of KiRemoveTimer2 @ 0x1400F5CA0
 * Callers:
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400F451C (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiAdjustTimer2DueTimes @ 0x140154F18 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  unsigned __int64 v3; // rbp
  __int64 result; // rax
  _BOOL8 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _BOOL8 v9; // rax
  __int64 v10; // rdx

  v1 = 0;
  v2 = &KiTimer2Collections;
  v3 = -1LL;
  do
  {
    if ( ((unsigned __int8)(1 << v1) & *(_BYTE *)(a1 + 129)) != 0 )
    {
      v6 = v1 != 3 && (unsigned int)v1 >= 2;
      RtlRbRemoveNode(v2, a1 + 24 * (v6 + 1));
      v7 = v1 == 4 ? *(_QWORD *)(a1 + 80) : *(_QWORD *)(a1 + 72);
      if ( v7 == v2[2] )
      {
        v8 = v2[1];
        if ( v8 )
        {
          v9 = v1 != 3 && (unsigned int)v1 >= 2;
          v10 = v8 - 24 * (v9 + 1);
          if ( v1 == 4 )
            *((_QWORD *)&KiTimer2Collections + 14) = *(_QWORD *)(v10 + 80);
          else
            *((_QWORD *)&KiTimer2Collections + 3 * v1 + 2) = *(_QWORD *)(v10 + 72);
        }
        else
        {
          *((_QWORD *)&KiTimer2Collections + 3 * v1 + 2) = -1LL;
        }
      }
    }
    ++v1;
    v2 += 3;
  }
  while ( v1 < 5 );
  result = *(_QWORD *)(a1 + 72);
  if ( KiNextTimer2DueTime == result )
  {
    if ( qword_140338D90 != -1 )
      v3 = qword_140338D90;
    if ( qword_140338DA8 < v3 )
      v3 = qword_140338DA8;
    if ( qword_140338DC0 < v3 )
      v3 = qword_140338DC0;
    if ( qword_140338DD8 < v3 )
      v3 = qword_140338DD8;
    KiNextTimer2DueTime = v3;
  }
  return result;
}
