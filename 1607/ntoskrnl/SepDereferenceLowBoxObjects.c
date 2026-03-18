/*
 * XREFs of SepDereferenceLowBoxObjects @ 0x1400B2F38
 * Callers:
 *     SepSetTokenLowboxHandles @ 0x14007F580 (SepSetTokenLowboxHandles.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x1404A2998 (SepDereferenceLowBoxHandlesEntry.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 */

__int64 __fastcall SepDereferenceLowBoxObjects(unsigned int a1, HANDLE *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  NTSTATUS v5; // eax

  v2 = 0;
  if ( a1 )
  {
    v4 = a1;
    do
    {
      v5 = ZwClose(*a2++);
      if ( v5 < 0 )
        v2 = v5;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
