/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18002A270
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F770 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18003974C (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
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
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 11)
    || (v4 = *((_DWORD *)this + 107), v2 = 1, (v4 & 1) != 0)
    || (v4 & 0x1000) != 0
    || *((_DWORD *)this + 108)
    || *((_DWORD *)this + 109)
    || (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 43), *((_DWORD *)this + 42), 0LL)
    || *((_DWORD *)this + 113)
    || *((_DWORD *)this + 118)
    || *((_DWORD *)this + 116) )
  {
    v2 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
