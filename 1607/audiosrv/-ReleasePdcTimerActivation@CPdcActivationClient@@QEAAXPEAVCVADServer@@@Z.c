/*
 * XREFs of ?ReleasePdcTimerActivation@CPdcActivationClient@@QEAAXPEAVCVADServer@@@Z @ 0x180004EFC
 * Callers:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x180005C28 (--1CPdcTimerActivation@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPdcActivationClient::ReleasePdcTimerActivation(CPdcActivationClient *this, struct CVADServer *a2)
{
  int v4; // eax
  struct CVADServer **i; // rcx
  int v6; // eax

  v4 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  for ( i = (struct CVADServer **)*((_QWORD *)this + 1); i != *((struct CVADServer ***)this + 2) && *i != a2; ++i )
    ;
  if ( i != *((struct CVADServer ***)this + 2) )
  {
    memmove(i, i + 1, (*((_QWORD *)this + 2) - (_QWORD)(i + 1)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 2) -= 8LL;
  }
  v6 = _Mtx_unlock((CPdcActivationClient *)((char *)this + 32));
  if ( v6 )
    std::_Throw_C_error(v6);
}
