/*
 * XREFs of ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x1800B489C
 * Callers:
 *     ?Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z @ 0x1800A3DE8 (-Initialize@CConnection@@AEAAJHPEAUIDWMCoRenderEngine@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x1800FF5A8 (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CKernelTransport::Create(struct CKernelTransport **a1)
{
  struct CKernelTransport *v2; // rdi
  int v3; // ebx
  HANDLE EventW; // rax
  int Connection; // eax
  unsigned int v6; // edx
  signed int LastError; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v2 = (struct CKernelTransport *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                    WPF::g_pProcessHeap,
                                    16LL);
  if ( !v2 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Bu);
    return (unsigned int)v3;
  }
  v3 = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v2 + 1) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v9 = 79;
    if ( v3 >= 0 )
      v3 = -2003304445;
    goto LABEL_16;
  }
  Connection = NtDCompositionCreateConnection(EventW, v2);
  if ( Connection < 0 )
  {
    v9 = 84;
    v3 = Connection | 0x10000000;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v9);
  }
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3Cu);
  else
    *a1 = v2;
  if ( v3 < 0 )
    CKernelTransport::`scalar deleting destructor'(v2, v6);
  return (unsigned int)v3;
}
