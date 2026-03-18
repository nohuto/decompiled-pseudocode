/*
 * XREFs of SmKmStoreHelperStart @ 0x140004D88
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400049B4 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     PsCreateSystemThread @ 0x1403E4710 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 */

__int64 __fastcall SmKmStoreHelperStart(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = PsCreateSystemThread(&Handle, 0x1FFFFFu, 0LL, a2, 0LL, (PKSTART_ROUTINE)SmKmStoreHelperWorker, a1);
  if ( v3 >= 0 )
  {
    v4 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v5 = Handle;
    v3 = v4;
    *a1 = Object;
    ObCloseHandle(v5, 0);
  }
  return (unsigned int)v3;
}
