/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0093374
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00D81F0 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C000C2D4 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1C00CAF84 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C00CAFD8 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        void **this,
        DXGPUSHLOCK **a2,
        int a3)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v8; // rdi
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  int v10; // ebp
  SIZE_T v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rsi
  const void *v15; // rdx
  __int64 v16; // rsi
  DXGPRESENTHISTORYTOKENQUEUE *v17; // rax
  __int64 v18; // rcx
  DXGPRESENTHISTORYTOKENQUEUE *v19; // rdi
  __int64 v20; // rax

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 154)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[78] + ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)a2);
    DXGPUSHLOCK::AcquireExclusive(a2[1]);
    *((_DWORD *)a2 + 4) = 2;
    if ( (unsigned int)v8 >= *((_DWORD *)this + 154) )
    {
      v10 = v8 + 4;
      v11 = 8LL * (unsigned int)(v8 + 4);
      if ( !is_mul_ok((unsigned int)(v8 + 4), 8uLL) )
        v11 = -1LL;
      v12 = (char *)operator new(v11, 0x4B677844u, PagedPool);
      v14 = v12;
      if ( !v12 )
      {
        v20 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v20 + 32) = v8;
LABEL_23:
        *(_QWORD *)(v20 + 24) = this;
        WdLogEvent5_WdError(v20);
        return 0LL;
      }
      v15 = this[78];
      if ( v15 )
        memmove(v12, v15, 8LL * *((unsigned int *)this + 154));
      memset(&v14[8 * *((unsigned int *)this + 154)], 0, 8LL * (unsigned int)(v10 - *((_DWORD *)this + 154)));
      operator delete(this[78]);
      this[78] = v14;
      *((_DWORD *)this + 154) = v10;
    }
    v16 = v8;
    if ( *((_QWORD *)this[78] + v8) )
      return (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[78] + v16);
    v17 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new(0x4850uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v17 )
      v19 = DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v17);
    else
      v19 = 0LL;
    if ( v19 )
    {
      if ( (int)DXGPRESENTHISTORYTOKENQUEUE::Initialize(v19) >= 0 )
      {
        *((_QWORD *)this[78] + v16) = v19;
        return (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[78] + v16);
      }
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v19);
      return 0LL;
    }
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 32) = v16;
    goto LABEL_23;
  }
  return result;
}
