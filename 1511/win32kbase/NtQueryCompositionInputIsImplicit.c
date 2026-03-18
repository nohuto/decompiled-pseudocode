/*
 * XREFs of NtQueryCompositionInputIsImplicit @ 0x1C00E0800
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00763A0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputIsImplicit(void *a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // esi
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  v3 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v3 >= 0 )
  {
    v4 = *((_DWORD *)Object + 48);
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v4;
  }
  return (unsigned int)v3;
}
