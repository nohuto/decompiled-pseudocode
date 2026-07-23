/*
 * XREFs of PnpFreeVetoInformation @ 0x140642B2C
 * Callers:
 *     PiEventQueryRemoveDevices @ 0x14064D0B4 (PiEventQueryRemoveDevices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall PnpFreeVetoInformation(__int64 **a1)
{
  __int64 *result; // rax
  __int64 v3; // rcx
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == (__int64 *)a1 )
      break;
    v3 = *result;
    if ( (__int64 **)result[1] != a1 || *(__int64 **)(v3 + 8) != result )
      __fastfail(3u);
    *a1 = (__int64 *)v3;
    v4 = (__int64 **)(result - 3);
    *(_QWORD *)(v3 + 8) = a1;
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == (__int64 *)v4 )
        break;
      v6 = *v5;
      if ( (__int64 **)v5[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
        __fastfail(3u);
      *v4 = (__int64 *)v6;
      *(_QWORD *)(v6 + 8) = v4;
      ObfDereferenceObject((PVOID)*(v5 - 1));
      ExFreePoolWithTag(v5 - 1, 0x50706E50u);
    }
    ExFreePoolWithTag(v4, 0x4F706E50u);
  }
  return result;
}
