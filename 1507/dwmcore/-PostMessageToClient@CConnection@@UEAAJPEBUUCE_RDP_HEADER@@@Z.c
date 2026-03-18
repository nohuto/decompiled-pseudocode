/*
 * XREFs of ?PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x180063180
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18004FDFC (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180050D34 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800633DC (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CConnection::PostMessageToClient(CConnection *this, const struct UCE_RDP_HEADER *a2)
{
  signed int v4; // ebx
  const struct MIL_MESSAGE *v5; // rdi
  unsigned int v6; // edx
  int MasterTableEntry; // eax
  int v8; // eax
  __int64 v10; // rcx
  unsigned int i; // r14d
  CChannel *v12; // rcx
  int v13; // eax
  int v14; // r15d
  signed int LastError; // eax
  unsigned int v16; // [rsp+20h] [rbp-10h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v17; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+70h] [rbp+40h] BYREF

  v4 = 0;
  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( !*((_BYTE *)this + 176) )
    goto LABEL_12;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(*(_DWORD *)a2 - 10) > 1 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x78u);
    v16 = 512;
    goto LABEL_35;
  }
  v5 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( *(_DWORD *)a2 != 11 )
  {
    v6 = *((_DWORD *)a2 + 4);
    v17 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 24), v6, &v17);
    v4 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, MasterTableEntry, 0x21Du);
      v4 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v5 != 1 )
    {
      if ( *(_DWORD *)v5 == 2 || *(_DWORD *)v5 == 17 || *(_DWORD *)v5 == 19 )
      {
        v10 = *((_QWORD *)v17 + 1);
        *(_OWORD *)(v10 + 144) = *(_OWORD *)v5;
        *(_QWORD *)(v10 + 160) = *((_QWORD *)a2 + 7);
        *(_DWORD *)(v10 + 168) = *((_DWORD *)a2 + 16);
      }
      else
      {
        v8 = CChannel::PostMessageToChannel(*((CChannel **)v17 + 1), (const struct UCE_RDP_HEADER *)((char *)a2 + 40));
        v4 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x254u);
      }
      goto LABEL_12;
    }
    SetLastError(0);
    if ( SetEvent(*((HANDLE *)v17 + 2)) )
      goto LABEL_12;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v16 = 551;
    if ( v4 >= 0 )
      v4 = -2003304445;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v16);
    goto LABEL_12;
  }
  for ( i = 1; i < *((_DWORD *)this + 9); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CConnection *)((char *)this + 24), i) )
    {
      v17 = 0LL;
      if ( (int)CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 24), i, &v17) >= 0 )
      {
        v12 = (CChannel *)*((_QWORD *)v17 + 1);
        if ( *((_BYTE *)v12 + 234) )
        {
          v13 = CChannel::PostMessageToChannel(v12, v5);
          v14 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x212u);
          if ( !v4 || v4 >= 0 && v14 < 0 )
            v4 = v14;
        }
      }
    }
  }
LABEL_12:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v18);
  return (unsigned int)v4;
}
