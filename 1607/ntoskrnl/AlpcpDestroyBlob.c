/*
 * XREFs of AlpcpDestroyBlob @ 0x14050FCC4
 * Callers:
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockBlob @ 0x14050E530 (AlpcpUnlockBlob.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1)
{
  _BYTE *v1; // rdi
  __int64 v2; // rbx
  int (*v3)(void); // rax

  v1 = (_BYTE *)(a1 - 48);
  v2 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 48 + 17)];
  v3 = *(int (**)(void))(v2 + 32);
  if ( !v3 || v3() >= 0 )
  {
    if ( (v1[16] & 2) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v2 + 8), v1);
    }
    else if ( *(_QWORD *)(v2 + 40) )
    {
      (*((void (__fastcall **)(_BYTE *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v2 + 8) + 7))(v1);
    }
    else
    {
      ExFreePoolWithTag(v1, *(_DWORD *)(v2 + 4));
    }
  }
}
