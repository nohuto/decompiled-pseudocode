/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0074870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  char *v3; // rcx
  __int64 result; // rax

  v3 = (char *)a1 + 24;
  if ( v3 )
  {
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *(_QWORD *)v3 = &CCompositionSurface::`vftable'{for `ICompositionObject'};
    *((_QWORD *)v3 + 1) = &CCompositionSurface::`vftable'{for `CPushLock'};
  }
  *a3 = (struct ICompositionObject *)v3;
  *((_DWORD *)v3 + 9) = 0;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 0LL;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = v3 + 64;
  *((_QWORD *)v3 + 8) = v3 + 64;
  result = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  v3[88] = 0;
  v3[32] = 1;
  return result;
}
