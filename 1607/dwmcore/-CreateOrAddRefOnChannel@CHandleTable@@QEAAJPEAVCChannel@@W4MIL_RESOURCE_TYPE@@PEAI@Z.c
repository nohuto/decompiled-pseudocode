/*
 * XREFs of ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800477B4
 * Callers:
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x18004A680 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 *     ?AddRefResource@CChannel@@UEAAJI@Z @ 0x18004A720 (-AddRefResource@CChannel@@UEAAJI@Z.c)
 * Callees:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180037E40 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800474E0 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x180047788 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18004BFC8 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C0D0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall CHandleTable::CreateOrAddRefOnChannel(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  int NewEntry; // eax
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // esi
  int *v12; // r14
  int v13; // eax
  struct CCommandBatch **v14; // r15
  int v15; // eax
  struct CHandleTable::HANDLE_ENTRY *Entry; // rax
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  _DWORD v20[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+20h] BYREF

  EnterCriticalSection(&g_csCompositionEngine);
  if ( *a4 )
  {
    Entry = CHandleTable::GetEntry((CHandleTable *)a1, *a4);
    if ( Entry )
    {
      ++*((_DWORD *)Entry + 1);
      v10 = 0;
      goto LABEL_15;
    }
    v19 = 140;
LABEL_22:
    v10 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, v19);
    goto LABEL_15;
  }
  v21 = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((HANDLE_TABLE *)a1, a3, &v21);
  v10 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewEntry, 0x57u);
    goto LABEL_15;
  }
  v11 = v21;
  if ( !v21 || v21 >= *(_DWORD *)(a1 + 12) || (v12 = (int *)(*(_QWORD *)(a1 + 24) + v21 * *(_DWORD *)(a1 + 8)), !*v12) )
    v12 = 0LL;
  if ( !v12 )
  {
    v19 = 99;
    goto LABEL_22;
  }
  v13 = *v12;
  v14 = (struct CCommandBatch **)(a2 + 168);
  v10 = 0;
  v20[0] = 22;
  v20[1] = v21;
  v20[2] = v13;
  if ( !*v14 )
  {
    v18 = CCommandBatch::Create(v9, v14);
    v10 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x11Du);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x102u);
    goto LABEL_27;
  }
  v15 = CDataStreamWriter::EnsureItem(*v14, 0xCu);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x107u);
LABEL_27:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x9Cu);
    goto LABEL_11;
  }
  CDataStreamWriter::BeginItem(*v14);
  CDataStreamWriter::AddItemData(*v14, v20, 0xCu);
LABEL_11:
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Au);
  else
    CDataStreamWriter::EndItem(*v14);
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x71u);
    memset_0((void *)(*(_QWORD *)(a1 + 24) + v11 * *(_DWORD *)(a1 + 8)), 0, *(unsigned int *)(a1 + 8));
  }
  else
  {
    v12[1] = 1;
    *a4 = v11;
  }
LABEL_15:
  LeaveCriticalSection(&g_csCompositionEngine);
  return (unsigned int)v10;
}
