/*
 * XREFs of PspReferenceTokenForNewProcess @ 0x14050B78C
 * Callers:
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

NTSTATUS __fastcall PspReferenceTokenForNewProcess(struct _KPROCESS *a1, void *a2, KPROCESSOR_MODE a3, _QWORD *a4)
{
  PACCESS_TOKEN v5; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( a1 )
    {
      v5 = PsReferencePrimaryToken(a1);
    }
    else
    {
      v5 = PspBootAccessToken;
      ObfReferenceObject(PspBootAccessToken);
    }
    goto LABEL_4;
  }
  result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)SeTokenObjectType, a3, &Object, 0LL);
  v5 = Object;
  if ( result >= 0 )
  {
LABEL_4:
    *a4 = v5;
    return 0;
  }
  return result;
}
