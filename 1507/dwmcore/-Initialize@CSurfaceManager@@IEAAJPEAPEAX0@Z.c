/*
 * XREFs of ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x180092568
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180092228 (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x1800924F0 (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CSurfaceManager::Initialize(CSurfaceManager *this, void **a2, void **a3)
{
  HANDLE EventW; // rax
  int v7; // ebx
  LPVOID v8; // rax
  int TokenThread; // eax
  int v10; // ebx
  signed int LastError; // eax
  signed int v13; // eax
  int v14; // r9d
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-38h]

  qword_180193108 = (__int64)this;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 52) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 64;
    goto LABEL_14;
  }
  v7 = NtTokenManagerOpenSectionAndEvents(
         (char *)this + 592,
         (char *)this + 608,
         (char *)this + 616,
         (char *)this + 624);
  if ( v7 < 0 )
  {
    v10 = v7 | 0x10000000;
    dwNumberOfBytesToMap = 74;
LABEL_16:
    v14 = v10;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, dwNumberOfBytesToMap);
    return (unsigned int)v10;
  }
  SetLastError(0);
  v8 = MapViewOfFile(*((HANDLE *)this + 74), 4u, 0, 0, *((_QWORD *)this + 76));
  if ( !v8 )
  {
    v13 = GetLastError();
    v10 = v13;
    if ( v13 > 0 )
      v10 = (unsigned __int16)v13 | 0x80070000;
    dwNumberOfBytesToMap = 80;
LABEL_14:
    if ( v10 >= 0 )
      v10 = -2003304445;
    goto LABEL_16;
  }
  *((_QWORD *)this + 75) = v8;
  TokenThread = CSurfaceManager::CreateTokenThread(this);
  v10 = TokenThread;
  if ( TokenThread < 0 )
  {
    dwNumberOfBytesToMap = 87;
    v14 = TokenThread;
    goto LABEL_18;
  }
  *a2 = (void *)*((_QWORD *)this + 77);
  *a3 = (void *)*((_QWORD *)this + 78);
  return (unsigned int)v10;
}
