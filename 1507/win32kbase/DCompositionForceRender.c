/*
 * XREFs of DCompositionForceRender @ 0x1C00D3C30
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N000@Z @ 0x1C00D4C50 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N000@Z.c)
 */

__int64 __fastcall DCompositionForceRender(int a1, int a2, int a3)
{
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v7; // rdi
  unsigned int v8; // ebx
  unsigned int v9; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  v7 = DefaultConnection;
  if ( DefaultConnection )
  {
    v8 = DirectComposition::CConnection::ForceRender(DefaultConnection, a1 != 0, 0, a2 != 0, a3 != 0);
    DirectComposition::CConnection::Release(v7, v9);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v8;
}
