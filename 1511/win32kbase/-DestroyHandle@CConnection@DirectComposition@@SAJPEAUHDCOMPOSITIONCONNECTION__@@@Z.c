/*
 * XREFs of ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007EFD0
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00125CC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionCreateConnection @ 0x1C007D8E0 (NtDCompositionCreateConnection.c)
 *     NtDCompositionDestroyConnection @ 0x1C00D5C10 (NtDCompositionDestroyConnection.c)
 * Callees:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0013638 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0046F10 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::DestroyHandle(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  DirectComposition::CConnection *v2; // rdi
  struct DirectComposition::CProcessData *v3; // rax
  struct DirectComposition::CProcessData *v4; // rbx
  DirectComposition::CConnection *v5; // rax
  unsigned int v6; // esi
  unsigned int v7; // edx

  v2 = 0LL;
  v3 = DirectComposition::CProcessData::Current((__int64)a1);
  v4 = v3;
  if ( v3 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)v3 + 4));
    v5 = (DirectComposition::CConnection *)*((_QWORD *)v4 + 3);
    if ( v5 && a1 == *((struct HDCOMPOSITIONCONNECTION__ **)v4 + 2) )
    {
      *((_QWORD *)v4 + 3) = 0LL;
      v2 = v5;
      v6 = 0;
    }
    else
    {
      v6 = -1073741790;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = -1073741823;
  }
  if ( v2 )
  {
    DirectComposition::CConnection::Disconnect(v2);
    DirectComposition::CConnection::Release(v2, v7);
  }
  return v6;
}
