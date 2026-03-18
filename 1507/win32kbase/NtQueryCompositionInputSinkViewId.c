/*
 * XREFs of NtQueryCompositionInputSinkViewId @ 0x1C00DEC40
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0013050 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSinkViewId(void *a1, _DWORD *a2, __int64 a3)
{
  int v4; // ebx
  int v6; // [rsp+40h] [rbp+18h]
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(a3) = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1LL, a3, (struct CompositionInputObject **)&Object);
  if ( v4 >= 0 )
  {
    v6 = *((_DWORD *)Object + 44);
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v6;
  }
  return (unsigned int)v4;
}
