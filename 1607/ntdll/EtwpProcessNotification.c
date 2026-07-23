/*
 * XREFs of EtwpProcessNotification @ 0x180054288
 * Callers:
 *     EtwDeliverDataBlock @ 0x180054000 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180053810 (EtwProcessPrivateLoggerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall EtwpProcessNotification(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  char v5; // bl
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v5 = 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (unsigned __int16)((*(_WORD *)(a1 + 98) & 0x3FFF) - 2) <= 1u )
    {
      v7 = *(_QWORD *)(a1 + 88);
      *a3 = v7;
      *(_QWORD *)(a2 + 24) = v7;
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
      v9 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a2 + 24) = v9;
      v10 = *(_QWORD *)(a1 + 56);
      *a3 = v9;
      *a4 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(a2, v10);
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
