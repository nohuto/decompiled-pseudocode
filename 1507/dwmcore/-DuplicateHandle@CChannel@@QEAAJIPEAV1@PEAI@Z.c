/*
 * XREFs of ?DuplicateHandle@CChannel@@QEAAJIPEAV1@PEAI@Z @ 0x18004FFA8
 * Callers:
 *     ?MilResource_DuplicateHandle@@YAJPEAUMIL_CHANNEL__@@I0PEAI@Z @ 0x180051CA0 (-MilResource_DuplicateHandle@@YAJPEAUMIL_CHANNEL__@@I0PEAI@Z.c)
 * Callees:
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x1800509D4 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::DuplicateHandle(CChannel *this, unsigned int a2, struct CChannel *a3, unsigned int *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  char *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = (char *)this + 184;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( *((_BYTE *)this + 233) )
  {
    v9 = -2003303407;
    v12 = 212;
LABEL_7:
    v11 = v9;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
    goto LABEL_4;
  }
  if ( *((_QWORD *)a3 + 7) != *((_QWORD *)this + 7) )
  {
    v9 = -2147024809;
    v12 = 222;
    goto LABEL_7;
  }
  v8 = CHandleTable::DuplicateHandle((CChannel *)((char *)this + 24), this, a2, a3, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 234;
    v11 = v8;
    goto LABEL_9;
  }
LABEL_4:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v9;
}
