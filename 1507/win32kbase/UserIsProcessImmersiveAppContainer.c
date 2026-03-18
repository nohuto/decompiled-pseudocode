/*
 * XREFs of UserIsProcessImmersiveAppContainer @ 0x1C0055A70
 * Callers:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0039980 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     IsImmersiveAppRestricted @ 0x1C0051DB0 (IsImmersiveAppRestricted.c)
 */

__int64 __fastcall UserIsProcessImmersiveAppContainer(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  int v4; // eax

  result = PsGetProcessWin32Process(a1);
  v2 = 0;
  v3 = result;
  if ( result )
  {
    if ( *(_DWORD *)(result + 836) )
    {
      LOBYTE(v4) = IsImmersiveAppRestricted(result);
      if ( v4 )
        return (*(_DWORD *)(v3 + 776) & 0x200) == 0;
    }
    return v2;
  }
  return result;
}
