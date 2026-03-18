/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x140481C28
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14047F6F8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x1400BBFFC (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B80D8 (AlpcpReleaseViewAttribute.c)
 */

__int64 __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4, 1);
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
    result = AlpcpDereferenceBlobEx(v6, 1);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 160) )
  {
    result = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 160));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return result;
}
