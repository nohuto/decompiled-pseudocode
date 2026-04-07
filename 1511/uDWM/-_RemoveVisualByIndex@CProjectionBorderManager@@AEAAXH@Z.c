/*
 * XREFs of ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x18007C684
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJI@Z @ 0x18007BAC0 (-RemoveAt@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveVisualByIndex(CProjectionBorderManager *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdi
  struct CVisual *v4; // rdx
  __int64 v5; // rcx
  CBaseObject *v6; // rcx

  if ( a2 != -1 )
  {
    v2 = a2;
    if ( (signed int)a2 < *((_DWORD *)this + 8) )
    {
      v3 = (__int64 *)((char *)this + 8);
      v4 = *(struct CVisual **)(*((_QWORD *)this + 1) + 48LL * a2);
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 3);
        if ( v5 )
          VisualCollection::Remove((VisualCollection *)(v5 + 32), v4);
        v6 = *(CBaseObject **)(*v3 + 48 * v2);
        if ( v6 )
        {
          CBaseObject::Release(v6);
          *(_QWORD *)(*v3 + 48 * v2) = 0LL;
        }
      }
      DynArray<CProjectionBorderManager::VisualInfo,0>::RemoveAt(v3, v2);
    }
  }
}
