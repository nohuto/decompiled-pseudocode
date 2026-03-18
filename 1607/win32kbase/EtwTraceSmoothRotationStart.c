/*
 * XREFs of EtwTraceSmoothRotationStart @ 0x1C00B59F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qtq @ 0x1C00B8DA8 (Template_qtq.c)
 */

void __fastcall EtwTraceSmoothRotationStart(int a1, int a2, __int64 a3)
{
  int v3; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
  {
    LOBYTE(v3) = 0;
    if ( a3 )
      v3 = *(_DWORD *)(a3 + 56);
    Template_qtq(a1, a2, a3, a1, a2, v3);
  }
}
