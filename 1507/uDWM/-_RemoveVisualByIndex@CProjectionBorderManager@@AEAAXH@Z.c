/*
 * XREFs of ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800744B4
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x180073E50 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJI@Z @ 0x1800738F0 (-RemoveAt@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveVisualByIndex(CProjectionBorderManager *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  CBaseObject *v4; // rcx

  if ( a2 != -1 )
  {
    v2 = a2;
    if ( (signed int)a2 < *((_DWORD *)this + 8) )
    {
      v3 = (__int64 *)((char *)this + 8);
      if ( *(_QWORD *)(*((_QWORD *)this + 1) + 48LL * a2) )
      {
        _mm_lfence();
        if ( *(_QWORD *)(*(_QWORD *)(*v3 + 48LL * a2) + 24LL) )
        {
          _mm_lfence();
          VisualCollection::Remove(
            (VisualCollection *)(*(_QWORD *)(*(_QWORD *)(*v3 + 48LL * a2) + 24LL) + 32LL),
            *(struct CVisual **)(*v3 + 48LL * a2));
        }
        v4 = *(CBaseObject **)(*v3 + 48 * v2);
        if ( v4 )
        {
          CBaseObject::Release(v4);
          *(_QWORD *)(*v3 + 48 * v2) = 0LL;
        }
      }
      DynArray<CProjectionBorderManager::VisualInfo,0>::RemoveAt(v3, v2);
    }
  }
}
