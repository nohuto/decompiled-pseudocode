/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C00E37B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000E298 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00E3FA0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(int a1)
{
  unsigned int v2; // ebx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v4; // rdi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edx

  v2 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CProcessData::Current();
    DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)v4 + 1));
    v5 = *((_DWORD *)v4 + 10);
    if ( a1 )
    {
      if ( v5 != -1 )
      {
        *((_DWORD *)v4 + 10) = v5 + 1;
        if ( !v5 )
          goto LABEL_9;
        goto LABEL_11;
      }
    }
    else if ( v5 )
    {
      v6 = v5 - 1;
      *((_DWORD *)v4 + 10) = v6;
      if ( !v6 )
LABEL_9:
        v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, a1);
LABEL_11:
      ExReleaseResourceLite(*((PERESOURCE *)v4 + 1));
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release(DefaultConnection, v7);
      return v2;
    }
    v2 = -1073741823;
    goto LABEL_11;
  }
  return (unsigned int)-1073741790;
}
