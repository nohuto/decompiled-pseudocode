/*
 * XREFs of ?Discard@CScatterToken@@UEAAXXZ @ 0x1C00E1350
 * Callers:
 *     <none>
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0048480 (-SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 */

void __fastcall CScatterToken::Discard(CScatterToken *this)
{
  bool v1; // zf
  __int64 v3; // r8

  v1 = *((_BYTE *)this + 48) == 0;
  *((_DWORD *)this + 6) = 6;
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 13);
    if ( v3 )
      CompositionSurfaceObject::SignalGpuFence(*((CompositionSurfaceObject **)this + 4), *((_QWORD *)this + 5), v3);
  }
  *((_QWORD *)this + 13) = 0LL;
}
