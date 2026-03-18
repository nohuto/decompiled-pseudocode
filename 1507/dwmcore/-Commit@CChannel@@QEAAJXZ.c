/*
 * XREFs of ?Commit@CChannel@@QEAAJXZ @ 0x18004FECC
 * Callers:
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800632B0 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?FlushChannelHandles@CHandleTable@@QEAAXI@Z @ 0x180050CB4 (-FlushChannelHandles@CHandleTable@@QEAAXI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::Commit(CChannel *this)
{
  int v2; // ebx
  int v3; // eax
  char *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = (char *)this + 184;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( *((_BYTE *)this + 233) )
  {
    v2 = -2003303407;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x262u);
    goto LABEL_7;
  }
  v2 = 0;
  if ( *((_QWORD *)this + 22) )
  {
    v3 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 16), *((_QWORD *)this + 22));
    if ( v3 >= 0 || (v2 = v3 | 0x10000000, MilInstrumentationCheckHR(0x14u, 0LL, 0, v3 | 0x10000000, 0x72u), v2 >= 0) )
      *((_QWORD *)this + 22) = 0LL;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x19Du);
    if ( v2 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2BEu);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x265u);
    goto LABEL_7;
  }
LABEL_6:
  CHandleTable::FlushChannelHandles((CChannel *)((char *)this + 24), *((_DWORD *)this + 4));
  *((_DWORD *)this + 4) = 0;
LABEL_7:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  return (unsigned int)v2;
}
