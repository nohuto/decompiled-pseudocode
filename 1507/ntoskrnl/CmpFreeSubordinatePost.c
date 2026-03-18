/*
 * XREFs of CmpFreeSubordinatePost @ 0x1404ED32C
 * Callers:
 *     CmNotifyRunDown @ 0x140420ED0 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1404ECE6C (CmpPostApc.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 *     CmpPostApcRunDown @ 0x14065E970 (CmpPostApcRunDown.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpFreeSubordinatePost(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 32);
  if ( (_QWORD *)*v1 != v1 )
  {
    v2 = (_QWORD *)(*v1 - 32LL);
    v3 = v2[4];
    v4 = (_QWORD *)v2[5];
    if ( *(_QWORD **)(v3 + 8) != v2 + 4 || (_QWORD *)*v4 != v2 + 4 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = v2[2];
    v6 = (_QWORD *)v2[3];
    if ( *(_QWORD **)(v5 + 8) != v2 + 2 || (_QWORD *)*v6 != v2 + 2 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    CmpFreePostBlock((__int64)v2);
  }
}
