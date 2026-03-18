/*
 * XREFs of AreDependenciesSatisfied @ 0x1C00266BC
 * Callers:
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C0026614 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 */

_BOOL8 __fastcall AreDependenciesSatisfied(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdi
  unsigned int v3; // ebx
  unsigned int v4; // esi
  _BYTE **v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbp
  volatile signed __int32 *v9; // [rsp+58h] [rbp+10h]

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v4 = *v2;
  if ( *v2 )
  {
    v6 = (_BYTE **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v6) < 0 )
        break;
      v8 = *(_QWORD *)(*(_QWORD *)v9 + 104LL);
      AMLIDereferenceHandleEx(v9, v7);
      if ( !v8 )
        break;
      if ( *(_DWORD *)(v8 + 320) != 3 )
        break;
      ++v3;
      v6 += 5;
    }
    while ( v3 < v4 );
  }
  return v3 == v4;
}
