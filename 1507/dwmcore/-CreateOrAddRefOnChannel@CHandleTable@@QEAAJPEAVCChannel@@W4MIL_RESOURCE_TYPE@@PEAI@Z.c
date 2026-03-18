/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800508D4
 * Callers:
 *     ?MilResource_CreateOrAddRefOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800510E0 (-MilResource_CreateOrAddRefOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800508A8 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180050D34 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180050D5C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(__int64 a1, CChannel *a2, unsigned int a3, unsigned int *a4)
{
  int NewEntry; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  _DWORD *v11; // rdi
  int v12; // eax
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v15; // [rsp+20h] [rbp-38h]
  _DWORD v16[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h] BYREF

  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      v9 = 0;
      goto LABEL_8;
    }
    v15 = 140;
LABEL_13:
    v9 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, v15);
    goto LABEL_8;
  }
  v17 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v17);
  v9 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewEntry, 0x57u);
    goto LABEL_8;
  }
  v10 = v17;
  if ( (unsigned int)HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)a1, v17) )
    v11 = (_DWORD *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8));
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v15 = 99;
    goto LABEL_13;
  }
  v16[2] = *v11;
  v16[0] = 18;
  v16[1] = v10;
  v12 = CChannel::SendCommand(a2, v16, 0xCu);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x71u);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    v11[1] = 1;
    *a4 = v10;
  }
LABEL_8:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v9;
}
