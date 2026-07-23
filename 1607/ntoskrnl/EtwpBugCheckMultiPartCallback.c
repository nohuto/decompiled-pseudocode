/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x140227A0C
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 *v4; // rbx
  LARGE_INTEGER *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  bool v13; // zf
  __int64 v14; // r8
  _DWORD *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx

  v4 = *(__int64 **)&ReasonSpecificData[3].Data1;
  v13 = *(_DWORD *)&ReasonSpecificData[3].Data4[4] == 4;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  if ( !v13 )
    return;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    qword_1402FD0F8 = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( !*((_BYTE *)v4 + 2) )
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = -268421063;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
    goto LABEL_34;
  }
  v7 = v4[1];
  if ( v7 )
  {
    v14 = *(_QWORD *)(EtwpHostSiloState + 8LL * *(unsigned __int16 *)v4 + 912);
    v15 = *(_DWORD **)(v7 + 16);
    if ( v15[2] <= *v15 )
      v16 = v15[2];
    else
      v16 = v15[1];
    v15[12] = v16;
    *(_DWORD *)ReasonSpecificData[2].Data4 = v16;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
      *(_QWORD *)&ReasonSpecificData[2].Data1 = v15;
    v17 = 0LL;
    if ( *(_QWORD *)v4[1] != v14 + 96 )
      v17 = *(_QWORD *)v4[1];
    v4[1] = v17;
    v13 = v17 == 0;
    goto LABEL_32;
  }
  if ( *(_WORD *)v4 >= 0x40u )
    goto LABEL_36;
  while ( 1 )
  {
    v8 = *(_QWORD *)(EtwpHostSiloState + 8LL * *(unsigned __int16 *)v4 + 912);
    if ( (v8 & 1) != 0 || *(int *)(v8 + 12) >= 0 || (*(_DWORD *)(v8 + 300) & 1) != 0 )
      goto LABEL_17;
    if ( *(_QWORD *)(v8 + 696) )
    {
      _mm_pause();
      goto LABEL_17;
    }
    v9 = 2 * *(unsigned __int16 *)(v8 + 136) + 48;
    *(_DWORD *)ReasonSpecificData[2].Data4 = v9;
    if ( !*(_DWORD *)ReasonSpecificData->Data4 )
      goto LABEL_20;
    if ( v9 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
      break;
LABEL_17:
    if ( ++*(_WORD *)v4 >= 0x40u )
      goto LABEL_34;
  }
  v10 = *(_QWORD *)&ReasonSpecificData->Data1;
  *(_DWORD *)v10 = 32223201;
  *(_DWORD *)(v10 + 4) = *(_DWORD *)v8;
  *(_DWORD *)(v10 + 16) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v10 + 12) = *(_DWORD *)(v8 + 200);
  *(_QWORD *)(v10 + 24) = *(_QWORD *)(v8 + 792);
  *(_DWORD *)(v10 + 8) = *(_DWORD *)(v8 + 12);
  *(_DWORD *)(v10 + 20) = *(unsigned __int16 *)(v8 + 136);
  *(_OWORD *)(v10 + 32) = *(_OWORD *)(v8 + 304);
  memmove((void *)(v10 + 48), *(const void **)(v8 + 144), 2LL * *(unsigned __int16 *)(v8 + 136));
  *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = v9;
  *(_DWORD *)ReasonSpecificData->Data4 = v9;
LABEL_20:
  v11 = (_QWORD *)(v8 + 96);
  if ( (_QWORD *)*v11 == v11 )
    v12 = 0LL;
  else
    v12 = (_QWORD *)*v11;
  v4[1] = (__int64)v12;
  v13 = v12 == 0LL;
LABEL_32:
  if ( v13 )
    ++*(_WORD *)v4;
LABEL_34:
  if ( *(_WORD *)v4 < 0x40u )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 |= 1u;
    return;
  }
LABEL_36:
  *(_DWORD *)ReasonSpecificData[3].Data4 &= ~1u;
  v4[1] = 0LL;
  *((_BYTE *)v4 + 2) = 0;
  *(_WORD *)v4 = 0;
}
