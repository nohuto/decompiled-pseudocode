/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0080790
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C0080700 (NtDCompositionCreateConnection.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0024960 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00808C8 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C0080B38 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rbx
  int v6; // eax
  unsigned int v7; // edx
  DirectComposition::CConnection *v8; // rsi
  int v9; // edi
  struct HDCOMPOSITIONCONNECTION__ *v10; // rax
  struct DirectComposition::CConnection *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = DirectComposition::CProcessData::Current();
  v5 = v4;
  if ( v4 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)v4 + 4));
    if ( *((_QWORD *)v5 + 3) || !UserIsCurrentProcessDwm() )
    {
      v9 = -1073741790;
    }
    else
    {
      v6 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v12);
      v8 = v12;
      v9 = v6;
      if ( v6 < 0 || (v9 = DirectComposition::CConnection::Connect(v12, a1), v9 < 0) )
      {
        if ( v8 )
          DirectComposition::CConnection::Release(v8, v7);
      }
      else
      {
        *((_QWORD *)v5 + 2) += 4LL;
        v10 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 3) = v8;
        *a2 = v10;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
