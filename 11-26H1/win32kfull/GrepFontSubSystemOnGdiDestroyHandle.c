/*
 * XREFs of GrepFontSubSystemOnGdiDestroyHandle @ 0x1401B52D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrepFontSubSystemOnGdiDestroyHandle(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  if ( (_BYTE)a2 == 5 )
  {
    v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
    if ( *(_QWORD *)(v4 + 13416) == a1 )
    {
      *(_QWORD *)(v4 + 13416) = 0LL;
    }
    else if ( *(_QWORD *)(v4 + 5328) == a1 )
    {
      *(_QWORD *)(v4 + 5328) = 0LL;
    }
  }
}
