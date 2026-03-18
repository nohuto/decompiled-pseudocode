/*
 * XREFs of DrvChangeD3RequestsState @ 0x1C00887D8
 * Callers:
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvChangeD3RequestsState(char a1, __int64 a2)
{
  wchar_t *i; // rbx

  if ( !gProtocolType )
  {
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
      {
        LOBYTE(a2) = a1;
        ((void (__fastcall *)(_QWORD, __int64))qword_1C011B930)(*((_QWORD *)i + 32), a2);
      }
    }
  }
  return 0LL;
}
