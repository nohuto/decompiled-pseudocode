/*
 * XREFs of ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180050AD4
 * Callers:
 *     ?MilResource_DuplicateHandleOnTarget@@YAJIIW4MIL_RESOURCE_TYPE@@PEAUMIL_CHANNEL__@@PEAI@Z @ 0x180060D90 (-MilResource_DuplicateHandleOnTarget@@YAJIIW4MIL_RESOURCE_TYPE@@PEAUMIL_CHANNEL__@@PEAI@Z.c)
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800508A8 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180050D5C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CHandleTable::DuplicateHandleOnTarget(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        CChannel *a5,
        _DWORD *a6)
{
  CChannel *v9; // r14
  int NewEntry; // eax
  unsigned int v11; // ebx
  int v12; // edi
  struct CHandleTable::HANDLE_ENTRY *Entry; // rsi
  int v14; // eax
  _DWORD *v15; // rax
  _RTL_CRITICAL_SECTION *v17; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v18[6]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  v19 = a1;
  v17 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  v9 = a5;
  LODWORD(v19) = 0;
  NewEntry = HANDLE_TABLE::GetNewEntry((CChannel *)((char *)a5 + 24), a4, (unsigned int *)&v19);
  v11 = NewEntry;
  if ( NewEntry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, NewEntry, 0x10Au);
  }
  else
  {
    v12 = v19;
    Entry = CHandleTable::GetEntry((CChannel *)((char *)v9 + 24), v19);
    if ( Entry )
    {
      v18[0] = 21;
      v18[1] = a2;
      v18[2] = a3;
      v18[3] = v12;
      v14 = CChannel::SendCommand(v9, v18, 0x10u);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x128u);
        memset_0(
          (void *)(*((_QWORD *)v9 + 6) + (unsigned int)(v12 * *((_DWORD *)v9 + 8))),
          0,
          *((unsigned int *)v9 + 8));
      }
      else
      {
        v15 = a6;
        *((_DWORD *)Entry + 1) = 1;
        *v15 = v12;
      }
    }
    else
    {
      v11 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x113u);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v17);
  return v11;
}
