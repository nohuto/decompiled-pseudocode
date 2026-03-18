/*
 * XREFs of W32pThreadCallout @ 0x1C00D7FE0
 * Callers:
 *     <none>
 * Callees:
 *     AllocateW32Thread @ 0x1C00D8078 (AllocateW32Thread.c)
 *     FreeW32Thread @ 0x1C00D812C (FreeW32Thread.c)
 */

__int64 __fastcall W32pThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // ebx

  if ( a2 || (result = AllocateW32Thread(), (int)result >= 0) )
  {
    v5 = DCompositionThreadCallout(a1, a2);
    if ( v5 >= 0 )
    {
      v5 = GdiThreadCallout(a1, a2);
      if ( v5 >= 0 )
      {
        v5 = UserThreadCallout(a1, a2);
        if ( v5 >= 0 )
        {
          v5 = 0;
          if ( !a2 )
            return (unsigned int)v5;
        }
        if ( !a2 )
        {
          if ( v5 >= 0 )
            return (unsigned int)v5;
          GdiThreadCalloutCleanup(a1);
        }
      }
    }
    if ( a2 == 1 || v5 < 0 )
      FreeW32Thread(a1);
    return (unsigned int)v5;
  }
  LODWORD(KeGetPcr()->NtTib.Self[1].Self) = 8;
  return result;
}
