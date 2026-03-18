/*
 * XREFs of SepSetTokenSessionById @ 0x1406D5BD8
 * Callers:
 *     SepGetAnonymousToken @ 0x140007CC8 (SepGetAnonymousToken.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1402209E8 (MmGetSessionObjectById.c)
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
          *a5 = *(_QWORD *)(a1 + 1136);
        *(_QWORD *)(a1 + 1136) = a4;
      }
      else
      {
        v7 = *(void **)(a1 + 1136);
        if ( v7 )
          ObfDereferenceObject(v7);
        *(_QWORD *)(a1 + 1136) = MmGetSessionObjectById(a2);
      }
    }
  }
}
