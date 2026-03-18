/*
 * XREFs of SepSetTokenSessionById @ 0x140653D2C
 * Callers:
 *     SepGetAnonymousToken @ 0x140003988 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SeExchangePrimaryToken @ 0x140653498 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1401DBD14 (MmGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, int a2, char a3, __int64 a4, _QWORD *a5)
{
  void *v7; // rcx

  if ( *(_DWORD *)(a1 + 120) != a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1144);
        *(_QWORD *)(a1 + 1144) = a4;
      }
      else
      {
        v7 = *(void **)(a1 + 1144);
        if ( v7 )
          ObfDereferenceObject(v7);
        *(_QWORD *)(a1 + 1144) = MmGetSessionObjectById(a2);
      }
    }
  }
}
