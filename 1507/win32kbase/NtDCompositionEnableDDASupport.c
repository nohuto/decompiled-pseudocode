/*
 * XREFs of NtDCompositionEnableDDASupport @ 0x1C00D3F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N000@Z @ 0x1C00D4C50 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N000@Z.c)
 */

__int64 NtDCompositionEnableDDASupport()
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v1 = DefaultConnection;
  if ( DefaultConnection )
  {
    v2 = DirectComposition::CConnection::ForceRender(DefaultConnection, 0, 1, 0, 0);
    DirectComposition::CConnection::Release(v1, v3);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
