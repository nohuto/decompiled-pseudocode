/*
 * XREFs of KiMoveApcState @ 0x1400CC940
 * Callers:
 *     KiAttachProcess @ 0x1400CB390 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiMoveApcState(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // r8

  *(_QWORD *)(a2 + 32) = a1[4];
  *(_BYTE *)(a2 + 40) = *((_BYTE *)a1 + 40);
  *(_BYTE *)(a2 + 41) = *((_BYTE *)a1 + 41);
  *(_BYTE *)(a2 + 42) = *((_BYTE *)a1 + 42);
  v3 = (__int64 *)*a1;
  if ( v3 == a1 )
  {
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    *(_BYTE *)(a2 + 41) = 0;
  }
  else
  {
    v6 = (_QWORD *)a1[1];
    *(_QWORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = v6;
    v3[1] = a2;
    *v6 = a2;
  }
  v4 = a1 + 2;
  result = (_QWORD *)(a2 + 16);
  if ( (_QWORD *)*v4 == v4 )
  {
    *(_QWORD *)(a2 + 24) = a2 + 16;
    *result = result;
    *(_BYTE *)(a2 + 42) = 0;
  }
  else
  {
    v7 = (_QWORD *)*v4;
    v8 = (_QWORD *)a1[3];
    *result = v7;
    *(_QWORD *)(a2 + 24) = v8;
    v7[1] = result;
    *v8 = result;
  }
  return result;
}
