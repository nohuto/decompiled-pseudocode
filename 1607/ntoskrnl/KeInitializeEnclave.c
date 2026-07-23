/*
 * XREFs of KeInitializeEnclave @ 0x1406E6034
 * Callers:
 *     MiInitializeEnclave @ 0x14065F64C (MiInitializeEnclave.c)
 * Callees:
 *     KiEncls @ 0x14015EA70 (KiEncls.c)
 */

__int64 __fastcall KeInitializeEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v6; // edi
  __int64 result; // rax

  if ( (KeFeatureBits & 0x10000000000LL) != 0 )
  {
    *a6 = 0;
    v6 = 16;
    while ( 1 )
    {
      result = KiEncls(2u);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result != 128 )
      {
        *a6 = result;
        return 3221226639LL;
      }
      if ( !--v6 )
      {
        *a6 = 128;
        return 3221226029LL;
      }
    }
  }
  else
  {
    *a6 = 0;
    return 3221225659LL;
  }
  return result;
}
