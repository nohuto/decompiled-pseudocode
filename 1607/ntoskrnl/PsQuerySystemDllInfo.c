/*
 * XREFs of PsQuerySystemDllInfo @ 0x1404596A4
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
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
