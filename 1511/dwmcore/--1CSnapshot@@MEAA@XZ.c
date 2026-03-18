/*
 * XREFs of ??1CSnapshot@@MEAA@XZ @ 0x1801269CC
 * Callers:
 *     ??_ECSnapshot@@MEAAPEAXI@Z @ 0x180126A70 (--_ECSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CSnapshot::~CSnapshot(CSnapshot *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rcx

  *(_QWORD *)this = &CSnapshot::`vftable';
  v2 = 0;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v3 + 16));
  v4 = *((_QWORD *)this + 2);
  v5 = *(_DWORD *)(v4 + 640);
  v6 = *(_QWORD *)(v4 + 616);
  if ( v5 )
  {
    do
    {
      if ( this == *(CSnapshot **)(v6 + 8LL * v2) )
        break;
      ++v2;
    }
    while ( v2 < v5 );
  }
  if ( v2 < v5 )
  {
    if ( v2 < v5 - 1 )
    {
      do
      {
        v7 = v2++;
        *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v2);
      }
      while ( v2 < *(_DWORD *)(v4 + 640) - 1 );
    }
    --*(_DWORD *)(v4 + 640);
  }
  CResource::~CResource(this);
}
