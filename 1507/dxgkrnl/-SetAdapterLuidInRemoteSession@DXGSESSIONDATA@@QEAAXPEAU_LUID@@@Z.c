/*
 * XREFs of ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000CAD8
 * Callers:
 *     DxgkGetAdapter @ 0x1C00BDD00 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1C00BDE10 (DxgkReleaseAdapter.c)
 * Callees:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C008F13C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C008F1B0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetAdapterLuidInRemoteSession(DXGSESSIONDATA *this, struct _LUID *a2)
{
  __int64 v4; // rax

  if ( a2 )
  {
    if ( *((_DWORD *)this + 4623) == a2->LowPart && *((_DWORD *)this + 4624) == a2->HighPart )
    {
      ++*((_DWORD *)this + 4625);
    }
    else
    {
      *(struct _LUID *)((char *)this + 18492) = *a2;
      *((_DWORD *)this + 4625) = 1;
      DXGSESSIONDATA::AddAdapterToSession(this, (struct _LUID *)((char *)this + 18492), 0LL);
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 4625) )
    {
      v4 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v4 + 24) = 160LL;
      WdLogEvent5_WdAssertion(v4);
    }
    if ( (*((_DWORD *)this + 4625))-- == 1 )
    {
      DXGSESSIONDATA::RemoveAdapterFromSession(this, (struct _LUID *)((char *)this + 18492));
      *(_QWORD *)((char *)this + 18492) = 0LL;
    }
  }
}
