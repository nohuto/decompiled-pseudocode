/*
 * XREFs of ?PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A3B00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180092D18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800A02F8 (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A40B4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 */

__int64 __fastcall CConnection::PostMessageToClient(CConnection *this, const struct UCE_RDP_HEADER *a2)
{
  signed int v4; // ebx
  const struct MIL_MESSAGE *v5; // rdi
  unsigned int v6; // edx
  int MasterTableEntry; // eax
  __int64 v8; // r8
  void **v9; // r9
  int v10; // eax
  __int64 v12; // rcx
  unsigned int i; // r14d
  __int64 v14; // r8
  void **v15; // r9
  CChannel *v16; // rcx
  int v17; // eax
  int v18; // r15d
  signed int LastError; // eax
  unsigned int v20; // [rsp+20h] [rbp-10h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v21; // [rsp+60h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+70h] [rbp+40h] BYREF

  v4 = 0;
  v22 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( !*((_BYTE *)this + 176) )
    goto LABEL_12;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(*(_DWORD *)a2 - 10) > 1 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x78u);
    v20 = 512;
    goto LABEL_35;
  }
  v5 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( *(_DWORD *)a2 != 11 )
  {
    v6 = *((_DWORD *)a2 + 4);
    v21 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 24), v6, &v21);
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
        v12 = *((_QWORD *)v21 + 1);
        *(_OWORD *)(v12 + 144) = *(_OWORD *)v5;
        *(_QWORD *)(v12 + 160) = *((_QWORD *)a2 + 7);
        *(_DWORD *)(v12 + 168) = *((_DWORD *)a2 + 16);
      }
      else
      {
        v10 = CChannel::PostMessageToChannel(
                *((CChannel **)v21 + 1),
                (const struct UCE_RDP_HEADER *)((char *)a2 + 40),
                v8,
                v9);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x254u);
      }
      goto LABEL_12;
    }
    SetLastError(0);
    if ( SetEvent(*((HANDLE *)v21 + 2)) )
      goto LABEL_12;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v20 = 551;
    if ( v4 >= 0 )
      v4 = -2003304445;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v20);
    goto LABEL_12;
  }
  for ( i = 1; i < *((_DWORD *)this + 9); ++i )
  {
    if ( HANDLE_TABLE::ValidEntry((CConnection *)((char *)this + 24), i) )
    {
      v21 = 0LL;
      if ( (int)CChannelTable::GetMasterTableEntry((CConnection *)((char *)this + 24), i, &v21) >= 0 )
      {
        v16 = (CChannel *)*((_QWORD *)v21 + 1);
        if ( *((_BYTE *)v16 + 234) )
        {
          v17 = CChannel::PostMessageToChannel(v16, v5, v14, v15);
          v18 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x212u);
          if ( !v4 || v4 >= 0 && v18 < 0 )
            v4 = v18;
        }
      }
    }
  }
LABEL_12:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v22);
  return (unsigned int)v4;
}
