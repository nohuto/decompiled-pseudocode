/*
 * XREFs of SepSetTokenSessionById @ 0x1406930B0
 * Callers:
 *     SepGetAnonymousToken @ 0x14007F884 (SepGetAnonymousToken.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     SeSubProcessToken @ 0x14046EA48 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x14047AA4C (SeSetSessionIdToken.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     SeExchangePrimaryToken @ 0x140692774 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1401EC9D8 (MmGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // edi
  void *v7; // rcx

  v5 = a2;
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( (_BYTE)a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1152);
        *(_QWORD *)(a1 + 1152) = a4;
      }
      else
      {
        v7 = *(void **)(a1 + 1152);
        if ( v7 )
          ObfDereferenceObject(v7);
        *(_QWORD *)(a1 + 1152) = MmGetSessionObjectById(v5, a2, a3);
      }
    }
  }
}
