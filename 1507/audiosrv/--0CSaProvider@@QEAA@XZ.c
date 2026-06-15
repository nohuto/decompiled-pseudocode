/*
 * XREFs of ??0CSaProvider@@QEAA@XZ @ 0x18002E2E8
 * Callers:
 *     ??0?$CComObject@VCSaProvider@@@ATL@@QEAA@PEAX@Z @ 0x18002E268 (--0-$CComObject@VCSaProvider@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
CSaProvider *__fastcall CSaProvider::CSaProvider(CSaProvider *this)
{
  *((_DWORD *)this + 2) = 0;
  memset_0((char *)this + 16, 0, 0x28uLL);
  *((_BYTE *)this + 56) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10LL,
      &WPP_c8737cf4801e83ad86a2ad73f84921b9_Traceguids,
      this);
  }
  return this;
}
