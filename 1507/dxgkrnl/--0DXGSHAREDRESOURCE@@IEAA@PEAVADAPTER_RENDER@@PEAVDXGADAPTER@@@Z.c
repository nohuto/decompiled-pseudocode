/*
 * XREFs of ??0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z @ 0x1C0090820
 * Callers:
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00904D0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 */

DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::DXGSHAREDRESOURCE(
        DXGSHAREDRESOURCE *this,
        DXGADAPTER **a2,
        struct DXGADAPTER *a3,
        __int64 a4)
{
  int CurrentProcessSessionId; // eax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 16) = CurrentProcessSessionId;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 10) = a3;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  if ( a2 )
    DXGADAPTER::AcquireReference(a2[2]);
  *((_QWORD *)this + 16) = (char *)this + 120;
  *((_QWORD *)this + 15) = (char *)this + 120;
  return this;
}
