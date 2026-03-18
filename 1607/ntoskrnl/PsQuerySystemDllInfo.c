/*
 * XREFs of PsQuerySystemDllInfo @ 0x14045A7D4
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     DbgkCreateThread @ 0x140459228 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140617E98 (DbgkSendSystemDllMessages.c)
 *     PspInitializeSystemDlls @ 0x1407B6180 (PspInitializeSystemDlls.c)
 *     MmInitSystemDll @ 0x1407BCFB8 (MmInitSystemDll.c)
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
