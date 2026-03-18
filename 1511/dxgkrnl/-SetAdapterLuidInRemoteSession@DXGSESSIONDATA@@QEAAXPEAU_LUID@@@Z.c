/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000D6DC
 * Callers:
 *     DxgkGetAdapter @ 0x1C00CCB40 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C00CCC50 (DxgkReleaseAdapter.c)
 * Callees:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C009ED90 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C009EE04 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(DXGSESSIONDATA *this, struct _LUID *a2)
{
  __int64 v4; // rax

  if ( a2 )
  {
    if ( *((_DWORD *)this + 4629) == a2->LowPart && *((_DWORD *)this + 4630) == a2->HighPart )
    {
      ++*((_DWORD *)this + 4631);
    }
    else
    {
      *(struct _LUID *)((char *)this + 18516) = *a2;
      *((_DWORD *)this + 4631) = 1;
      DXGSESSIONDATA::AddAdapterToSession(this, (struct _LUID *)((char *)this + 18516), 0LL);
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 4631) )
    {
      v4 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v4 + 24) = 160LL;
      WdLogEvent5_WdAssertion(v4);
    }
    if ( (*((_DWORD *)this + 4631))-- == 1 )
    {
      DXGSESSIONDATA::RemoveAdapterFromSession(this, (struct _LUID *)((char *)this + 18516));
      *(_QWORD *)((char *)this + 18516) = 0LL;
    }
  }
}
