/*
 * XREFs of ?MovePrevious@VisualCollectionIterator@@QEAA_NXZ @ 0x180037930
 * Callers:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VisualCollectionIterator::MovePrevious(VisualCollectionIterator *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 12) )
  {
    if ( !*((_BYTE *)this + 13) )
      --*((_DWORD *)this + 2);
  }
  else
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 12) = 1;
    *((_DWORD *)this + 2) = *(_DWORD *)(v1 + 40) - 1;
  }
  if ( *((_DWORD *)this + 2) == -1 )
    *((_BYTE *)this + 13) = 1;
  return *((_BYTE *)this + 13) == 0;
}
