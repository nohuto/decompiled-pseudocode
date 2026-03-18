/*
 * XREFs of ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18004A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800474E0 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x18004BFC8 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C0D0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CChannel::ReleaseResource(CChannel *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  int v5; // ebx
  __int64 v6; // rcx
  int *v7; // rdi
  int v8; // eax
  CDataStreamWriter **v9; // r14
  int v10; // eax
  int v12; // eax
  _DWORD v13[10]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2 || a2 >= *((_DWORD *)this + 7) || (v7 = (int *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), !*v7) )
    v7 = 0LL;
  if ( !v7 || !v7[1] )
  {
    v5 = -2147418113;
    MilUnexpectedErrorWithAsimovEvent(
      -2147418113,
      L"ReleaseOnChannel was called on a resource that is not anymore on this channel");
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x163u);
    goto LABEL_17;
  }
  v8 = *v7;
  if ( !*v7 )
    goto LABEL_17;
  if ( v7[1] != 1 )
    goto LABEL_16;
  v9 = (CDataStreamWriter **)((char *)this + 168);
  v13[0] = 23;
  v13[1] = a2;
  v13[2] = v8;
  if ( !*((_QWORD *)this + 21) )
  {
    v12 = CCommandBatch::Create(v6, (struct CCommandBatch **)this + 21);
    v5 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x11Du);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x102u);
    goto LABEL_27;
  }
  v10 = CDataStreamWriter::EnsureItem(*v9, 0xCu);
  v5 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x107u);
LABEL_27:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x9Cu);
    goto LABEL_12;
  }
  CDataStreamWriter::BeginItem(*v9);
  CDataStreamWriter::AddItemData(*v9, v13, 0xCu);
LABEL_12:
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x7Au);
  else
    CDataStreamWriter::EndItem(*v9);
  if ( v5 >= 0 )
  {
    v7[2] = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = a2;
LABEL_16:
    --v7[1];
    goto LABEL_17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x175u);
LABEL_17:
  LeaveCriticalSection(&g_csCompositionEngine);
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x320u);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v5;
}
