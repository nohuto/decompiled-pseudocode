/*
 * XREFs of ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x180041880
 * Callers:
 *     ?GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z @ 0x180050FF0 (-GetDataPointer@CBitmapLock@@W7EAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800429F4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmapLock::GetDataPointer(CBitmapLock *this, unsigned int *a2, unsigned __int8 **a3)
{
  unsigned int v3; // ebx
  char *v7; // rcx
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( this == (CBitmapLock *)72 )
    v7 = 0LL;
  else
    v7 = (char *)this - 56;
  v11 = v7;
  if ( v7[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
  if ( !a3 )
  {
    v9 = -2147024809;
    v10 = 157;
LABEL_14:
    v3 = v9;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, v10);
    goto LABEL_9;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    v10 = 158;
    goto LABEL_14;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v9 = -2003292412;
    v10 = 160;
    goto LABEL_14;
  }
  *a2 = *((_DWORD *)this + 20);
  *a3 = (unsigned __int8 *)*((_QWORD *)this + 9);
LABEL_9:
  CGuard<CMTALock>::~CGuard<CMTALock>(&v11);
  return v3;
}
