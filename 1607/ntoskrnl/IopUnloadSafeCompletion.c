/*
 * XREFs of IopUnloadSafeCompletion @ 0x1400AC7E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadSafeCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  PVOID v7; // rbx

  v3 = 0;
  if ( *(int *)(a2 + 48) < 0 )
  {
    if ( *(_BYTE *)(a3 + 24) )
      goto LABEL_3;
  }
  else if ( *(_BYTE *)(a3 + 25) )
  {
LABEL_3:
    v7 = *(PVOID *)a3;
    ObfReferenceObjectWithTag(*(PVOID *)a3, 0x746C6644u);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a3 + 16))(a1, a2, *(_QWORD *)(a3 + 8));
    ExFreePoolWithTag((PVOID)a3, 0);
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    return v3;
  }
  if ( *(_BYTE *)(a2 + 68) && *(_BYTE *)(a3 + 26) )
    goto LABEL_3;
  if ( *(_BYTE *)(a2 + 65) )
  {
    v3 = 259;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
  ExFreePoolWithTag((PVOID)a3, 0);
  return v3;
}
