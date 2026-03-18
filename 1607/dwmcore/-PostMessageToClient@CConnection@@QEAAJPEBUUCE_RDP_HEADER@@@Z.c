/*
 * XREFs of ?PostMessageToClient@CConnection@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A84F8
 * Callers:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800395C4 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180037E18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18004AE0C (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A894C (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

__int64 __fastcall CConnection::PostMessageToClient(
        struct _RTL_CRITICAL_SECTION *this,
        const struct UCE_RDP_HEADER *a2)
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
  v18 = this + 3;
  EnterCriticalSection(this + 3);
  if ( !LOBYTE(this[4].LockCount) )
    goto LABEL_12;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(*(_DWORD *)a2 - 10) > 1 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x78u);
    v16 = 481;
    goto LABEL_35;
  }
  v5 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( *(_DWORD *)a2 != 11 )
  {
    v6 = *((_DWORD *)a2 + 4);
    v17 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)&this->OwningThread, v6, &v17);
    v4 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, MasterTableEntry, 0x1FEu);
      v4 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v5 != 1 )
    {
      if ( *(_DWORD *)v5 == 2 || *(_DWORD *)v5 == 17 || *(_DWORD *)v5 == 19 )
      {
        v10 = *((_QWORD *)v17 + 1);
        *(_OWORD *)(v10 + 136) = *(_OWORD *)v5;
        *(_QWORD *)(v10 + 152) = *((_QWORD *)a2 + 7);
        *(_DWORD *)(v10 + 160) = *((_DWORD *)a2 + 16);
      }
      else
      {
        v8 = CChannel::PostMessageToChannel(*((CChannel **)v17 + 1), (const struct UCE_RDP_HEADER *)((char *)a2 + 40));
        v4 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x235u);
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
    v16 = 520;
    if ( v4 >= 0 )
      v4 = -2003304445;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v16);
    goto LABEL_12;
  }
  for ( i = 1; i < HIDWORD(this->LockSemaphore); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&this->OwningThread, i) )
    {
      v17 = 0LL;
      if ( (int)CChannelTable::GetMasterTableEntry((CChannelTable *)&this->OwningThread, i, &v17) >= 0 )
      {
        v12 = (CChannel *)*((_QWORD *)v17 + 1);
        if ( *((_BYTE *)v12 + 226) )
        {
          v13 = CChannel::PostMessageToChannel(v12, v5);
          v14 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1F3u);
          if ( !v4 || v4 >= 0 && v14 < 0 )
            v4 = v14;
        }
      }
    }
  }
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return (unsigned int)v4;
}
