/*
 * XREFs of ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x18005C734
 * Callers:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x18005C824 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x18005C97C (-RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1800E892C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18005CA38 (--_GCWindowAssociationMapEntry@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowManager::RemoveEntry(CWindowManager *this, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // r11
  CWindowAssociationMapEntry *v5; // r10
  unsigned int v6; // r8d
  __int64 i; // rdx
  __int64 v8; // r8

  v2 = 0LL;
  v3 = -2147467259;
  if ( *((_DWORD *)this + 10) )
  {
    v4 = *((_QWORD *)this + 2);
    while ( 1 )
    {
      v5 = *(CWindowAssociationMapEntry **)(v4 + 8 * v2);
      if ( *(_QWORD *)v5 == a2 )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 10) )
        return v3;
    }
    v6 = *((_DWORD *)this + 10);
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
    {
      if ( v5 == *(CWindowAssociationMapEntry **)(v4 + 8 * i) )
        break;
    }
    if ( (unsigned int)i < v6 )
    {
      if ( (unsigned int)i < v6 - 1 )
      {
        do
        {
          v8 = (unsigned int)(i + 1);
          *(_QWORD *)(v4 + 8 * i) = *(_QWORD *)(v4 + 8 * v8);
          i = v8;
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 10) - 1 );
      }
      --*((_DWORD *)this + 10);
    }
    CWindowAssociationMapEntry::`scalar deleting destructor'(v5, i);
    return 0;
  }
  return v3;
}
