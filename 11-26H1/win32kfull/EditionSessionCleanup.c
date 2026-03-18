/*
 * XREFs of EditionSessionCleanup @ 0x14030F280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EditionSessionCleanup(int a1, __int64 a2)
{
  __int64 v2; // rdi
  SURFOBJ **v3; // rbx

  v2 = 64LL;
  v3 = (SURFOBJ **)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 152LL);
  do
  {
    if ( *v3 )
    {
      EngUnlockSurface(*v3);
      *v3 = 0LL;
    }
    ++v3;
    --v2;
  }
  while ( v2 );
}
