/*
 * XREFs of SepReferenceLowBoxObjects @ 0x1400AFE78
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x14007F600 (SepSetTokenLowboxHandles.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x14015A970 (ZwDuplicateObject.c)
 */

__int64 __fastcall SepReferenceLowBoxObjects(unsigned int a1, HANDLE *a2, __int64 a3)
{
  NTSTATUS v3; // esi
  __int64 v4; // rbx
  HANDLE *v9; // rdi

  v3 = 0;
  v4 = 0LL;
  if ( a1 )
  {
    while ( 1 )
    {
      v3 = ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *a2,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PHANDLE)(a3 + 8 * v4),
             0,
             0x200u,
             2u);
      if ( v3 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      ++a2;
      if ( (unsigned int)v4 >= a1 )
        return (unsigned int)v3;
    }
    if ( (_DWORD)v4 )
    {
      v9 = (HANDLE *)(a3 + 8 * v4);
      do
      {
        ZwClose(*v9--);
        LODWORD(v4) = v4 - 1;
      }
      while ( (_DWORD)v4 );
    }
  }
  return (unsigned int)v3;
}
