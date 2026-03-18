/*
 * XREFs of ?GetSize@CFormatConverter@@UEAAJPEAI0@Z @ 0x180184BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CFormatConverter::GetSize(CFormatConverter *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  char *v7; // rcx
  bool v8; // zf
  unsigned int v10; // [rsp+20h] [rbp-18h]
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = -2003292404;
  if ( this == (CFormatConverter *)72 )
    v7 = 0LL;
  else
    v7 = (char *)this - 56;
  v8 = v7[48] == 0;
  v11 = v7;
  if ( !v8 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
  if ( !a2 )
  {
    v10 = 561;
LABEL_8:
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v10);
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v10 = 562;
    goto LABEL_8;
  }
  if ( *((_QWORD *)this + 1) )
  {
    v6 = 0;
    *a2 = *((_DWORD *)this + 16);
    *a3 = *((_DWORD *)this + 17);
    goto LABEL_10;
  }
LABEL_9:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23Cu);
LABEL_10:
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v11);
  return v6;
}
