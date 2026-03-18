/*
 * XREFs of ?Stop@CDWMInputThread@@QEAAXXZ @ 0x180143480
 * Callers:
 *     ??1CInputManager@@MEAA@XZ @ 0x18013F07C (--1CInputManager@@MEAA@XZ.c)
 *     ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x18013F134 (--_GCDWMInputThread@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMInputThread::Stop(CDWMInputThread *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 1) == 0LL;
  *((_BYTE *)this + 24) = 1;
  if ( !v1 )
  {
    SetEvent(*((HANDLE *)this + 2));
    WaitForSingleObject(*((HANDLE *)this + 1), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
