/*
 * XREFs of PsQuerySystemDllInfo @ 0x14044704C
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     PspInitializeSystemDlls @ 0x1407620E0 (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x1407628DC (MmInitSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQuerySystemDllInfo(int a1)
{
  __int64 v1; // rax

  v1 = (__int64)*(&PspSystemDlls + a1);
  if ( v1 && *(_QWORD *)(v1 + 40) )
    return v1 + 16;
  else
    return 0LL;
}
