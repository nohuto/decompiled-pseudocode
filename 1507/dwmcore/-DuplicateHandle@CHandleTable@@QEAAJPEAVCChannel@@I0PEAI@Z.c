/*
 * XREFs of ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x1800509D4
 * Callers:
 *     ?DuplicateHandle@CChannel@@QEAAJIPEAV1@PEAI@Z @ 0x18004FFA8 (-DuplicateHandle@CChannel@@QEAAJIPEAV1@PEAI@Z.c)
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18005003C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800508A8 (-GetEntry@CHandleTable@@AEBAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180050D5C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 */

__int64 __fastcall CHandleTable::DuplicateHandle(
        CHandleTable *this,
        struct CChannel *a2,
        unsigned int a3,
        struct CChannel *a4,
        unsigned int *a5)
{
  unsigned int *Entry; // rax
  int NewEntry; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edi
  struct CHandleTable::HANDLE_ENTRY *v13; // rbp
  int v14; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+30h] [rbp-38h] BYREF
  _RTL_CRITICAL_SECTION *v19; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v20[4]; // [rsp+40h] [rbp-28h] BYREF

  v19 = &g_csCompositionEngine;
  EnterCriticalSection(&g_csCompositionEngine);
  v18 = 0;
  Entry = (unsigned int *)CHandleTable::GetEntry(this, a3);
  if ( !Entry )
  {
    v17 = 184;
LABEL_9:
    v16 = -2147024890;
    v11 = -2147024890;
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
    goto LABEL_6;
  }
  NewEntry = HANDLE_TABLE::GetNewEntry((struct CChannel *)((char *)a4 + 24), *Entry, &v18);
  v11 = NewEntry;
  if ( NewEntry < 0 )
  {
    v17 = 193;
    v16 = NewEntry;
    goto LABEL_11;
  }
  v12 = v18;
  v13 = CHandleTable::GetEntry((struct CChannel *)((char *)a4 + 24), v18);
  if ( !v13 )
  {
    v17 = 202;
    goto LABEL_9;
  }
  v20[2] = *((_DWORD *)a4 + 16);
  v20[0] = 20;
  v20[1] = a3;
  v20[3] = v12;
  v14 = CChannel::SendCommand(a2, v20, 0x10u);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xDFu);
    memset_0((void *)(*((_QWORD *)a4 + 6) + v12 * *((_DWORD *)a4 + 8)), 0, *((unsigned int *)a4 + 8));
  }
  else
  {
    *((_DWORD *)v13 + 1) = 1;
    *a5 = v12;
  }
LABEL_6:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v19);
  return v11;
}
