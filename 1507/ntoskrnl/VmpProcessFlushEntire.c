/*
 * XREFs of VmpProcessFlushEntire @ 0x14025BB10
 * Callers:
 *     VmpFlushTb @ 0x14025B680 (VmpFlushTb.c)
 * Callees:
 *     VmpProcessInvalidateSlat @ 0x14025BB7C (VmpProcessInvalidateSlat.c)
 */

void __fastcall VmpProcessFlushEntire(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD **v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v1 = *(_QWORD **)(a1 + 16);
  while ( v1 )
  {
    VmpProcessInvalidateSlat(a1, v1[3], v1[4] - v1[3] + 1LL);
    v3 = (_QWORD **)v1[1];
    v4 = v1;
    if ( v3 )
    {
      v5 = *v3;
      v1 = (_QWORD *)v1[1];
      while ( v5 )
      {
        v1 = v5;
        v5 = (_QWORD *)*v5;
      }
    }
    else
    {
      while ( 1 )
      {
        v1 = (_QWORD *)(v1[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v1 || (_QWORD *)*v1 == v4 )
          break;
        v4 = v1;
      }
    }
  }
}
