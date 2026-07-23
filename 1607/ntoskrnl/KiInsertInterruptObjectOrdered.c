/*
 * XREFs of KiInsertInterruptObjectOrdered @ 0x1401D8410
 * Callers:
 *     KiConnectInterrupt @ 0x14012D61C (KiConnectInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1401D58B4 (KiConnectSecondaryInterrupt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KiInsertInterruptObjectOrdered(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // r8

  if ( *(_BYTE *)(a2 + 93) && *(_BYTE *)(a1 + 93) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = (_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v2 + 85) )
    {
      result = (_QWORD *)(a2 + 8);
      v5 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v5 != v3 )
        __fastfail(3u);
    }
    else
    {
      v6 = v3;
      do
      {
        v7 = v6 - 1;
        if ( !*((_BYTE *)v6 + 85) )
          break;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 != v3 );
      v3 = v7 + 1;
      result = (_QWORD *)(a2 + 8);
      v5 = (_QWORD *)v7[2];
      if ( (_QWORD *)*v5 != v7 + 1 )
        __fastfail(3u);
    }
  }
  else
  {
    v3 = (_QWORD *)(a1 + 8);
    result = (_QWORD *)(a2 + 8);
    v5 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v5 != v3 )
      __fastfail(3u);
  }
  *result = v3;
  result[1] = v5;
  *v5 = result;
  v3[1] = result;
  return result;
}
