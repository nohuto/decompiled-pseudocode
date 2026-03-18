/*
 * XREFs of ExQueueWorkItemToPrivatePool @ 0x14014B99C
 * Callers:
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14014B864 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14000CDF0 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall ExQueueWorkItemToPrivatePool(_QWORD *BugCheckParameter2, unsigned int a2, __int64 a3, __int64 a4)
{
  int v5; // r10d
  int v7; // ecx
  ULONG64 v8; // r9
  char result; // al

  v5 = a4;
  if ( (unsigned __int64)(a4 - 1) > 6 )
    goto LABEL_11;
  v7 = a2 + 32;
  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, v7, 0LL);
  if ( a2 + 25 <= 0x18 || v7 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, v7, 0LL);
  v8 = BugCheckParameter2[2];
  if ( v8 <= MmUserProbeAddress )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v8, 0LL);
  result = ExpQueueWorkItem((__int64)BugCheckParameter2, a2, 0xFFFFFFFF, v5);
  if ( !result )
LABEL_11:
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, (int)(a2 + 32), 0xFFFFFFFFuLL);
  return result;
}
