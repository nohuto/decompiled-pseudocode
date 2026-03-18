/*
 * XREFs of ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C0080090
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 * Callees:
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 */

__int64 __fastcall RemoveEventMessage(struct tagQ *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v8; // r9d
  __int64 v9; // rdi

  result = 0LL;
  v5 = *((_QWORD *)a1 + 1);
  if ( v5 )
  {
    do
    {
      v8 = *(_DWORD *)(v5 + 88);
      if ( v8 == a3 )
        break;
      v9 = *(_QWORD *)(v5 + 8);
      if ( v8 == a2 && v5 != *((_QWORD *)a1 + 5) )
      {
        DelQEntry(a1, v5, 1LL);
        result = 1LL;
      }
      v5 = v9;
    }
    while ( v9 );
  }
  return result;
}
