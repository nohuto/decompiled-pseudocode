/*
 * XREFs of ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180008DF4
 * Callers:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034820 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x1800353D8 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(
        CSecondaryWindowRepresentation *this,
        unsigned int a2)
{
  unsigned int v3; // edi
  CBaseObject *v4; // rsi
  struct CVisual *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  __int64 v10; // rdx

  v3 = a2;
  v4 = *(CBaseObject **)(*((_QWORD *)this + 16) + 8LL * a2);
  v5 = (struct CVisual *)*((_QWORD *)v4 + 6);
  if ( v5 )
  {
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 6) + 32LL), v5);
    VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 6) + 32LL), *((struct CVisual **)this + 7));
  }
  v6 = *((_DWORD *)this + 38);
  if ( v3 >= v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  else
  {
    v7 = *((_QWORD *)this + 16);
    if ( v3 < v6 - 1 )
    {
      do
      {
        v10 = v3++;
        *(_QWORD *)(v7 + 8 * v10) = *(_QWORD *)(v7 + 8LL * v3);
      }
      while ( v3 < *((_DWORD *)this + 38) - 1 );
    }
    --*((_DWORD *)this + 38);
  }
  CBaseObject::Release(v4);
  if ( !*((_DWORD *)this + 38) )
  {
    v8 = (CBaseObject *)*((_QWORD *)this + 6);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)this + 6) = 0LL;
    }
    v9 = (CBaseObject *)*((_QWORD *)this + 7);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
