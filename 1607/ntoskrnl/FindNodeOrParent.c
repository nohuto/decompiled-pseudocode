/*
 * XREFs of FindNodeOrParent @ 0x1400C4200
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1400C3D4C (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C3FD4 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400C4544 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1401352B0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindNodeOrParent(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rbx
  int v7; // eax
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(i + 8) )
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, i + 32);
      if ( !v7 )
        break;
      if ( v7 != 1 )
      {
        result = 1LL;
        goto LABEL_10;
      }
      if ( !*(_QWORD *)(i + 16) )
      {
        result = 3LL;
        goto LABEL_10;
      }
      i = *(_QWORD *)(i + 16);
    }
    if ( !*(_QWORD *)(i + 8) )
      break;
  }
  result = 2LL;
LABEL_10:
  *a3 = i;
  return result;
}
