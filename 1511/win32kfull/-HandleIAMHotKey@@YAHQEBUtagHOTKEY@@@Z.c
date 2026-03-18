/*
 * XREFs of ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EA160
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsIAMThread @ 0x1C00D5B48 (IsIAMThread.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EA1D0 (-RequestModernAppClose@@YAHXZ.c)
 */

__int64 __fastcall HandleIAMHotKey(const struct tagHOTKEY *const a1)
{
  __int64 v1; // rcx
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // edx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)(v1 + 408) != grpdeskRitInput )
    return 0LL;
  LOBYTE(v3) = IsIAMThread(v1);
  v5 = 0;
  if ( !v3
    || !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 320LL)
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 24LL) + 320LL) != *(_QWORD *)(v4 + 16) )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(v4 + 32) == 61536 )
    return (unsigned int)RequestModernAppClose();
  return v5;
}
