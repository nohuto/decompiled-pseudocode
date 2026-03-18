/*
 * XREFs of SmKmStoreHelperStart @ 0x1400D940C
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D9054 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

__int64 __fastcall SmKmStoreHelperStart(PVOID *a1)
{
  NTSTATUS v2; // ebx
  NTSTATUS v3; // eax
  HANDLE v4; // rcx
  HANDLE Handle; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = PsCreateSystemThread(&Handle, 0x1FFFFFu, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)SmKmStoreHelperWorker, a1);
  if ( v2 >= 0 )
  {
    v3 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v4 = Handle;
    v2 = v3;
    *a1 = Object;
    ObCloseHandle(v4, 0);
  }
  return (unsigned int)v2;
}
