/*
 * XREFs of ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000DC00
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C000DAB0 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     DCompositionProcessCallout @ 0x1C000DB30 (DCompositionProcessCallout.c)
 * Callees:
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C000DC60 (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0082810 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00E3FA0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::`scalar deleting destructor'(
        DirectComposition::CProcessData *this)
{
  struct HDCOMPOSITIONCONNECTION__ *v2; // rcx
  struct _ERESOURCE *v3; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi

  if ( *((_DWORD *)this + 10) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v6 = DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      DirectComposition::CConnection::Release(v6);
    }
  }
  DirectComposition::CChannel::OnProcessDestruction(this);
  v2 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)this + 2);
  if ( v2 )
    DirectComposition::CConnection::DestroyHandle(v2);
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    Win32FreePool(*((_QWORD *)this + 4));
  }
  Win32FreePool(this);
  return this;
}
