/*
 * XREFs of EtwpProcessNotification @ 0x18005274C
 * Callers:
 *     EtwDeliverDataBlock @ 0x180052940 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwProcessPrivateLoggerRequest @ 0x180044A70 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180054738 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

char __fastcall EtwpProcessNotification(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  char v5; // bp
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD); // rbx

  v5 = 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (unsigned __int16)((*(_WORD *)(a1 + 98) & 0x3FFF) - 2) <= 1u )
    {
      v6 = *(_QWORD *)(a1 + 88);
      *a3 = v6;
      *(_QWORD *)(a2 + 24) = v6;
      EtwpUpdateEnableInfoAndCallback(a1, a2);
LABEL_4:
      *a5 = 1;
    }
  }
  else if ( *(_DWORD *)a2 == 4 )
  {
    if ( (unsigned __int16)((*(_WORD *)(a1 + 98) & 0x3FFF) - 2) <= 1u )
    {
      *a3 = *(_QWORD *)(a1 + 88);
      *a4 = EtwProcessPrivateLoggerRequest((char *)a2);
      v5 = 1;
      *a5 = 1;
    }
  }
  else
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == *(_DWORD *)a2 )
    {
      v8 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a2 + 24) = v8;
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48);
      *a3 = v8;
      *a4 = v9(a2, *(_QWORD *)(a1 + 56));
      goto LABEL_4;
    }
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 0xA
      && *(_DWORD *)a2 == 7
      && *(_DWORD *)(a2 + 36) == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    {
      *a4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
      *a5 = 1;
    }
  }
  return v5;
}
