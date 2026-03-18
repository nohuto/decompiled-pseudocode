/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800A10D8
 * Callers:
 *     ?MilResource_CreateOrAddRefOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800A0F70 (-MilResource_CreateOrAddRefOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180092D18 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180092D40 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18009FD64 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800A10AC (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  int NewEntry; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  int *v11; // rdi
  int v12; // eax
  int v13; // eax
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v16; // [rsp+20h] [rbp-38h]
  _DWORD v17[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+78h] [rbp+20h] BYREF

  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      goto LABEL_9;
    }
    v16 = 140;
LABEL_15:
    v9 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, v16);
    goto LABEL_10;
  }
  v18 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v18);
  v9 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewEntry, 0x57u);
    goto LABEL_10;
  }
  v10 = v18;
  if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)a1, v18) )
    v11 = (int *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8));
  else
    v11 = 0LL;
  if ( !v11 )
  {
    v16 = 99;
    goto LABEL_15;
  }
  v12 = *v11;
  v17[0] = 21;
  v17[1] = v10;
  v17[2] = v12;
  v13 = CChannel::BeginCommand((CChannel *)a2, v17, 0xCu, 0);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x14Fu);
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x71u);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v10 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
    goto LABEL_10;
  }
  if ( !*(_BYTE *)(a2 + 233) )
  {
    v9 = -2003303406;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x1E3u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303406, 0x150u);
    goto LABEL_20;
  }
  CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a2 + 176));
  *(_BYTE *)(a2 + 233) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 184));
  v11[1] = 1;
  *a4 = v10;
LABEL_9:
  v9 = 0;
LABEL_10:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v9;
}
