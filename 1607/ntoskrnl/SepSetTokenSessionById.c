/*
 * XREFs of SepSetTokenSessionById @ 0x140693194
 * Callers:
 *     SepGetAnonymousToken @ 0x14007F904 (SepGetAnonymousToken.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x14047991C (SeSetSessionIdToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1401EC804 (MmGetSessionObjectById.c)
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
