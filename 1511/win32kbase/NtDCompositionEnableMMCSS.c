/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C00D5F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0046F10 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D68C0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v5; // rdi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edx

  v2 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v5 = DirectComposition::CProcessData::Current(v3);
    DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)v5 + 1));
    v6 = *((_DWORD *)v5 + 10);
    if ( a1 )
    {
      if ( v6 != -1 )
      {
        *((_DWORD *)v5 + 10) = v6 + 1;
        if ( !v6 )
          goto LABEL_9;
        goto LABEL_11;
      }
    }
    else if ( v6 )
    {
      v7 = v6 - 1;
      *((_DWORD *)v5 + 10) = v7;
      if ( !v7 )
LABEL_9:
        v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, a1);
LABEL_11:
      ExReleaseResourceLite(*((PERESOURCE *)v5 + 1));
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release(DefaultConnection, v8);
      return v2;
    }
    v2 = -1073741823;
    goto LABEL_11;
  }
  return (unsigned int)-1073741790;
}
