/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00812A0
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C0081210 (NtDCompositionCreateConnection.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000E298 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0018FA0 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C008135C (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edx
  DirectComposition::CConnection *v9; // rsi
  int v10; // edi
  struct HDCOMPOSITIONCONNECTION__ *v11; // rax
  struct DirectComposition::CConnection *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = DirectComposition::CProcessData::Current();
  v5 = v4;
  if ( v4 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)v4 + 4));
    if ( *((_QWORD *)v5 + 3) || !UserIsCurrentProcessDwm(v6) )
    {
      v10 = -1073741790;
    }
    else
    {
      v7 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v13);
      v9 = v13;
      v10 = v7;
      if ( v7 < 0 || (v10 = DirectComposition::CConnection::Connect(v13, a1), v10 < 0) )
      {
        if ( v9 )
          DirectComposition::CConnection::Release(v9, v8);
      }
      else
      {
        *((_QWORD *)v5 + 2) += 4LL;
        v11 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 3) = v9;
        *a2 = v11;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
