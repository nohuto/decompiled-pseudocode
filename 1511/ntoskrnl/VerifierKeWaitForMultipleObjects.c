/*
 * XREFs of VerifierKeWaitForMultipleObjects @ 0x1406C6824
 * Callers:
 *     <none>
 * Callees:
 *     ViKeObjectAcquired @ 0x1406C7030 (ViKeObjectAcquired.c)
 *     ViKeWaitForMultipleObjectsCommon @ 0x1406C7230 (ViKeWaitForMultipleObjectsCommon.c)
 */

__int64 __fastcall VerifierKeWaitForMultipleObjects(
        ULONG a1,
        PVOID *a2,
        WAIT_TYPE a3,
        KWAIT_REASON a4,
        KPROCESSOR_MODE a5,
        BOOLEAN a6,
        LARGE_INTEGER *a7,
        struct _KWAIT_BLOCK *a8)
{
  int v10; // eax
  unsigned int v11; // r14d
  signed int v12; // ecx
  PVOID *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v10 = ViKeWaitForMultipleObjectsCommon(a1, a2, a3, a4, a5, a6, a7, a8);
  v11 = v10;
  v12 = v10 & 0xFFFFFF7F;
  if ( a5 )
  {
    if ( v10 >= 0 && v12 < (int)a1 )
    {
      v15 = v12;
      v14 = 1LL;
      v13 = &a2[v15];
      goto LABEL_7;
    }
  }
  else if ( !v12 )
  {
    v13 = a2;
    v14 = a1;
LABEL_7:
    ViKeObjectAcquired(v14, v13, a7, retaddr);
  }
  return v11;
}
