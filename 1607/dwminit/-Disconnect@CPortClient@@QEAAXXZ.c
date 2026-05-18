/*
 * XREFs of ?Disconnect@CPortClient@@QEAAXXZ @ 0x1800055EC
 * Callers:
 *     ??1CPortClient@@UEAA@XZ @ 0x180005558 (--1CPortClient@@UEAA@XZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180005644 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall CPortClient::Disconnect(CPortClient *this)
{
  void *v2; // rcx

  if ( EvaluateCurrentState(this) && *((_QWORD *)this + 8) )
    NtAlpcDeletePortSection(*((_QWORD *)this + 6), 0LL);
  if ( *((_BYTE *)this + 56) )
  {
    v2 = (void *)*((_QWORD *)this + 6);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_BYTE *)this + 56) = 0;
    }
  }
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
}
