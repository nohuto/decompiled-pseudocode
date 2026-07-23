/*
 * XREFs of EtwpAddProviderTrackingInfo @ 0x180054EB8
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530B0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     EtwpAddDebugInfoEvents @ 0x180002994 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1800FDCBC (EtwpAddBinaryInfoEvents.c)
 */

int __fastcall EtwpAddProviderTrackingInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rsi
  _QWORD *v7; // rax

  v3 = (_QWORD *)(a1 + 480);
  if ( (_QWORD *)*v3 != v3 || (v7 = (_QWORD *)(a1 + 464), (_QWORD *)*v7 != v7) )
  {
    LODWORD(v7) = *(_DWORD *)(a2 + 4);
    if ( (unsigned int)v7 < a3 && (unsigned int)v7 >= 0x180 )
    {
      *(_DWORD *)(a2 + 48) = (_DWORD)v7;
      v7 = (_QWORD *)(a1 + 464);
      if ( (_QWORD *)*v7 != v7 )
        LODWORD(v7) = EtwpAddDebugInfoEvents(a1, a2, a3);
      if ( (_QWORD *)*v3 != v3 )
        LODWORD(v7) = EtwpAddBinaryInfoEvents(a1, a2, a3);
    }
  }
  return (int)v7;
}
