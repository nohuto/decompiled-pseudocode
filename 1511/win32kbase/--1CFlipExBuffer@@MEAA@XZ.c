/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003E52C
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C003E5A0 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C003DAF0 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C003DB2C (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?UpdateDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJ_NIIPEAH@Z @ 0x1C00E1920 (-UpdateDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJ_NIIPEAH@Z.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 97) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::UpdateDxgkrnlIndependentFlipMode(this, 0, *((_DWORD *)this + 98), 0, &v5);
  CFlipExBuffer::SignalMaxGpuFence(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  v3 = (void *)*((_QWORD *)this + 43);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = (void *)*((_QWORD *)this + 45);
  if ( v4 )
    ObfDereferenceObject(v4);
  CCompositionBuffer::~CCompositionBuffer(this);
}
