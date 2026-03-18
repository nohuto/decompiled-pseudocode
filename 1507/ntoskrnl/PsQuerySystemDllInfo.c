/*
 * XREFs of PsQuerySystemDllInfo @ 0x14054B934
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     MmInitSystemDll @ 0x1407CFE98 (MmInitSystemDll.c)
 *     PspInitializeSystemDlls @ 0x1407E0EAC (PspInitializeSystemDlls.c)
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
