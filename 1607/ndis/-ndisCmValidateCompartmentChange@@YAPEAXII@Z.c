/*
 * XREFs of ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0065198
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0010E38 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00653A0 (NdisSetSessionCompartmentId.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00D77D4 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0043878 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisIfGetCompartmentNamespaceGuid @ 0x1C004392C (ndisIfGetCompartmentNamespaceGuid.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0043988 (ndisIfReferenceCompartmentForUser.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C0065360 (NdisGetProcessObjectCompartmentId.c)
 */

unsigned int *__fastcall ndisCmValidateCompartmentChange(unsigned int a1, unsigned int a2)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessObjectCompartmentId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int *v9; // rdi
  __int64 v10; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  ProcessObjectCompartmentId = NdisGetProcessObjectCompartmentId(CurrentProcess);
  v6 = ProcessObjectCompartmentId;
  if ( ProcessObjectCompartmentId != a1 && ProcessObjectCompartmentId != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(ProcessObjectCompartmentId, &v12) < 0
      || (int)ndisIfGetCompartmentNamespaceGuid(a1, &v13) < 0 )
    {
      return 0LL;
    }
    v7 = v12 - v13;
    if ( (_QWORD)v12 == (_QWORD)v13 )
      v7 = *((_QWORD *)&v12 + 1) - *((_QWORD *)&v13 + 1);
    if ( v7 )
      return 0LL;
  }
  v11 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, a2, &v11);
  v9 = (unsigned int *)v11;
  if ( v11 && v6 != a2 && v6 != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(v6, &v12) < 0 || (int)ndisIfGetCompartmentNamespaceGuid(a2, &v13) < 0 )
      goto LABEL_17;
    v10 = v12 - v13;
    if ( (_QWORD)v12 == (_QWORD)v13 )
      v10 = *((_QWORD *)&v12 + 1) - *((_QWORD *)&v13 + 1);
    if ( v10 )
    {
LABEL_17:
      ndisIfDereferenceCompartmentForUser(v9);
      return 0LL;
    }
  }
  return v9;
}
