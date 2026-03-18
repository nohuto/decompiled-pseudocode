/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1C00F4340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(unsigned __int64 a1)
{
  int v1; // ebx
  SURFOBJ *v2; // rax
  SURFOBJ *v3; // r14
  __int64 v4; // rax
  HSURF hsurf[3]; // [rsp+20h] [rbp-18h]

  if ( a1 >= W32UserProbeAddress )
    a1 = W32UserProbeAddress;
  *(_OWORD *)hsurf = *(_OWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) || !hsurf[0] )
    return 3221225485LL;
  v1 = -1073741811;
  v2 = EngLockSurface(hsurf[1]);
  v3 = v2;
  if ( v2 )
  {
    v4 = SURFOBJ_TO_SURFACE(v2);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 216) )
      {
        EngUnlockSurface(v3);
        v1 = 0;
      }
    }
  }
  if ( v1 >= 0 )
  {
    if ( !(unsigned int)bDeleteDCInternal(hsurf[0], 1LL, 0LL) )
      v1 = -1073741811;
    if ( v1 >= 0 && !(unsigned int)bDeleteSurface(hsurf[1]) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
