/*
 * XREFs of VerifierKeWaitForSingleObject @ 0x1406C690C
 * Callers:
 *     <none>
 * Callees:
 *     ViKeObjectAcquired @ 0x1406C7030 (ViKeObjectAcquired.c)
 *     ViKeWaitForSingleObjectCommon @ 0x1406C730C (ViKeWaitForSingleObjectCommon.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  unsigned int v6; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  v5 = a5;
  v6 = ViKeWaitForSingleObjectCommon(a1);
  if ( (v6 & 0xFFFFFF7F) == 0 )
    ViKeObjectAcquired(1LL, &v9, v5, retaddr);
  return v6;
}
