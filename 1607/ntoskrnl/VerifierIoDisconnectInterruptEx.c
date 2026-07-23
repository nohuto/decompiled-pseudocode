/*
 * XREFs of VerifierIoDisconnectInterruptEx @ 0x1407055F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VerifierIoDisconnectInterruptEx(int *a1)
{
  void *v1; // rbx
  int v3; // ecx
  __int64 v4; // rcx

  v1 = 0LL;
  v3 = *a1;
  if ( !ViCtxInitializedIsrStateBlocks )
    goto LABEL_8;
  if ( (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( v3 != 3 )
      goto LABEL_8;
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL);
  }
  if ( v4 )
    v1 = *(void **)(v4 + 48);
LABEL_8:
  pXdvIoDisconnectInterruptEx(a1);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
