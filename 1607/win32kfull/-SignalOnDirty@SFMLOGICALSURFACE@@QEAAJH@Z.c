/*
 * XREFs of ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1C005249C
 * Callers:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0122B44 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::SignalOnDirty(SFMLOGICALSURFACE *this, int a2)
{
  __int64 v2; // rbx
  int v4; // esi
  __int64 v5; // rcx

  v2 = 0LL;
  v4 = 0;
  *((_DWORD *)this + 62) ^= (*((_DWORD *)this + 62) ^ (2 * (a2 != 0))) & 2;
  if ( a2 )
  {
    if ( *((_DWORD *)this + 59) )
    {
      v4 = SfmTokenArray::TransferTokens(gpSfmState, (SFMLOGICALSURFACE *)((char *)this + 224));
      if ( v4 >= 0 )
        SfmSignalTokenEvent();
    }
  }
  v5 = *((_QWORD *)this + 24);
  if ( v5 )
    v2 = *(_QWORD *)(v5 + 8);
  EtwLogicalSurfEnableDirtyNotificationEvent(*(_QWORD *)this, v2);
  return (unsigned int)v4;
}
