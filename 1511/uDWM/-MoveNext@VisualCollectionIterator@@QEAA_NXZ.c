/*
 * XREFs of ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18001611C
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002C5E0 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MoveNext(VisualCollectionIterator *this)
{
  if ( *((_BYTE *)this + 12) )
  {
    if ( !*((_BYTE *)this + 13) )
      ++*((_DWORD *)this + 2);
  }
  else
  {
    *((_BYTE *)this + 12) = 1;
    *((_DWORD *)this + 2) = 0;
  }
  if ( *((_DWORD *)this + 2) >= *(_DWORD *)(*(_QWORD *)this + 40LL) )
    *((_BYTE *)this + 13) = 1;
  return *((_BYTE *)this + 13) == 0;
}
