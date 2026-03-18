/*
 * XREFs of ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x1800A6394
 * Callers:
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8B74 (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A4A14 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A89A8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CDWMInputThread::Initialize(CDWMInputThread *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  HANDLE EventW; // rax
  HANDLE v5; // rax
  signed int v7; // eax
  signed int LastError; // eax
  unsigned int v9; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v10; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v11[126]; // [rsp+32h] [rbp-A6h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-28h]
  __int64 v13; // [rsp+B8h] [rbp-20h]

  v10 = 0;
  memset_0(v11, 0, sizeof(v11));
  v12 = 0LL;
  v13 = 0LL;
  StringCchCopyW(&v10, 0x40uLL, L"Capture");
  HIDWORD(v12) = 1;
  v2 = CMmcssTask::Set((CDWMInputThread *)((char *)this + 32), (const struct DWM_MMTASK *)&v10, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x51u);
    return v3;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 2) = EventW;
  if ( EventW )
  {
    SetLastError(0);
    v5 = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 15) = v5;
    if ( v5 )
      return v3;
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v9 = 93;
  }
  else
  {
    v7 = GetLastError();
    v3 = v7;
    if ( v7 > 0 )
      v3 = (unsigned __int16)v7 | 0x80070000;
    v9 = 87;
  }
  if ( (v3 & 0x80000000) == 0 )
    v3 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v9);
  return v3;
}
