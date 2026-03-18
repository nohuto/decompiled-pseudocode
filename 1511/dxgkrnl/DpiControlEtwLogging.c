/*
 * XREFs of DpiControlEtwLogging @ 0x1C016B008
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C000FE50 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiControlEtwLogging(char a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, _QWORD, __int64); // rax

  AcquireMiniportListMutex();
  v8 = qword_1C0046CF8;
  byte_1C0046CD4 = a1;
  v9 = qword_1C0046CF8;
  if ( *(_QWORD *)v9 != v9 )
  {
    do
    {
      if ( *(_DWORD *)(v9 + 28) >= 0x5008u )
        a2 &= 0xFFFFCFFF;
      v10 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v9 + 264);
      if ( v10 )
      {
        LOBYTE(v7) = a3;
        LOBYTE(v6) = a1;
        v10(v6, a2, v7);
        v8 = qword_1C0046CF8;
      }
      v9 = *(_QWORD *)v9;
    }
    while ( *(_QWORD *)v9 != v8 );
  }
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
