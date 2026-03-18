/*
 * XREFs of ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A87D8
 * Callers:
 *     ?Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x1800A9FBC (-Create@CConnection@@SAJHPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x18009EA18 (-Init@CCriticalSection@@QEAAJXZ.c)
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoRenderEngine@@PEAPEAV1@PEAPEAU_DWM_TIMING_INFO_EX@@@Z @ 0x1800A9E74 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@HPEAUIDWMCoR.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800A9F1C (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1801139A8 (-Disconnect@CConnection@@QEAAXXZ.c)
 */

__int64 __fastcall CConnection::Initialize(CConnection *this, int a2, struct IDWMCoRenderEngine *a3)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  struct CKernelTransport *v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v6 = CCriticalSection::Init((LPCRITICAL_SECTION)this + 3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 94;
  }
  else
  {
    v8 = CCriticalSection::Init((LPCRITICAL_SECTION)((char *)this + 56));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1Eu);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x5Fu);
      goto LABEL_8;
    }
    v6 = CKernelTransport::Create((struct CKernelTransport **)this + 13);
    v7 = v6;
    if ( v6 < 0 )
    {
      v11 = 100;
    }
    else
    {
      v9 = (struct CKernelTransport *)*((_QWORD *)this + 13);
      *((_BYTE *)this + 168) = 1;
      v6 = CPartitionVerticalBlankScheduler::Create(
             v9,
             this,
             a2,
             a3,
             (struct CPartitionVerticalBlankScheduler **)this + 14,
             (struct _DWM_TIMING_INFO_EX **)this + 22);
      v7 = v6;
      if ( v6 >= 0 )
      {
        _InterlockedIncrement(&dword_1801EFD48);
        goto LABEL_8;
      }
      v11 = 115;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v11);
LABEL_8:
  if ( v7 < 0 )
    CConnection::Disconnect(this);
  return (unsigned int)v7;
}
