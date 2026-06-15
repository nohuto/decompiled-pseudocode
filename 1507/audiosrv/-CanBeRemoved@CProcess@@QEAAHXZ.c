/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180012250
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CCFC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180007B50 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CanBeRemoved(CProcess *this)
{
  unsigned int v2; // edi
  int v4; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 11)
    || (v4 = *((_DWORD *)this + 107), v2 = 1, (v4 & 1) != 0)
    || (v4 & 0x1000) != 0
    || *((_DWORD *)this + 108)
    || *((_DWORD *)this + 109)
    || (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 43), *((_DWORD *)this + 42), 0LL)
    || *((_DWORD *)this + 113)
    || *((_DWORD *)this + 117)
    || *((_DWORD *)this + 116) )
  {
    v2 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
