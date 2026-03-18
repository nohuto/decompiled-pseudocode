/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C007D8E0 (NtDCompositionCreateConnection.c)
 * Callees:
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C0012FC4 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0013810 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0013B0C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0013BE8 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0046F10 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C007DA40 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  int v2; // ebx
  char v5; // bp
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edx
  DirectComposition::CConnection *v12; // rdi
  struct HDCOMPOSITIONCONNECTION__ *v13; // rax
  union _SLIST_HEADER *v15; // rax
  struct DirectComposition::CConnection *v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v16 = 0LL;
  v5 = 0;
  v6 = DirectComposition::CProcessData::Current((__int64)a1);
  v7 = v6;
  if ( !v6 )
    return (unsigned int)-1073741823;
  DirectComposition::CCriticalSection::AcquireExclusive(*((struct _ERESOURCE **)v6 + 4));
  if ( *((_QWORD *)v7 + 3) )
  {
    v2 = -1073741790;
    goto LABEL_8;
  }
  if ( UserIsCurrentProcessDwm(v9, v8) )
  {
    v10 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v16);
    v12 = v16;
    v2 = v10;
    if ( v16 )
      goto LABEL_5;
    if ( v10 < 0 )
      goto LABEL_8;
  }
  v5 = 1;
  v15 = (union _SLIST_HEADER *)Win32AllocPoolZInit(0x100uLL);
  if ( v15 )
    v12 = (DirectComposition::CConnection *)DirectComposition::CConnection::CConnection(v15);
  else
    v12 = 0LL;
  if ( !v12 )
    v2 = -1073741801;
  if ( v2 < 0 )
    goto LABEL_20;
  v2 = DirectComposition::CConnection::Initialize(v12);
LABEL_5:
  if ( v2 < 0 || (v2 = DirectComposition::CConnection::Connect(v12, a1), v2 < 0) )
  {
LABEL_20:
    if ( v12 )
    {
      if ( v5 )
        DirectComposition::CConnection::`scalar deleting destructor'(v12);
      else
        DirectComposition::CConnection::Release(v12, v11);
    }
    goto LABEL_8;
  }
  *((_QWORD *)v7 + 2) += 4LL;
  v13 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v7 + 2);
  *((_QWORD *)v7 + 3) = v12;
  *a2 = v13;
LABEL_8:
  ExReleaseResourceLite(*((PERESOURCE *)v7 + 4));
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
