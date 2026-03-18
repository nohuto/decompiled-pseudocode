/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x140409294
 * Callers:
 *     AlpcpCancelMessage @ 0x140408B94 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040A38C (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x1400A97D0 (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B5BFC (AlpcpReleaseViewAttribute.c)
 */

LONG_PTR __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  LONG_PTR result; // rax

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 && (!a2 || (*(_DWORD *)(a1 + 40) & 0x8000) == 0) )
  {
    result = AlpcpReleaseViewAttribute(v5);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
  {
    result = AlpcpDereferenceBlobEx(v6);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 160) )
  {
    result = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 160));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return result;
}
