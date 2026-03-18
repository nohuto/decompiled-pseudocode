/*
 * XREFs of HandleDisplayChangeForInactiveDesktops @ 0x1C0079630
 * Callers:
 *     xxxBroadcastModernAppRedraw @ 0x1C01EFB40 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 */

__int64 __fastcall HandleDisplayChangeForInactiveDesktops(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = *(_QWORD *)(a1 + 24);
  for ( i = *(_QWORD *)(result + 16); i; i = *(_QWORD *)(i + 16) )
  {
    if ( i != a1 )
    {
      if ( a2 )
        result = PostIAMShellHookMessageEx(i, 35LL, 0LL);
      *(_DWORD *)(i + 32) |= 0x20u;
    }
  }
  return result;
}
