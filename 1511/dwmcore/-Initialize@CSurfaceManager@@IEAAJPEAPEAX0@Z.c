/*
 * XREFs of ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x18006CFE4
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x18006A340 (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x18006CF6C (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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

  qword_1801A3A08 = (__int64)this;
  qword_1801A3DC0 = (__int64)this;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 52) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 105;
    goto LABEL_14;
  }
  v7 = NtTokenManagerOpenSectionAndEvents(
         (char *)this + 640,
         (char *)this + 656,
         (char *)this + 664,
         (char *)this + 672);
  if ( v7 < 0 )
  {
    v10 = v7 | 0x10000000;
    dwNumberOfBytesToMap = 115;
LABEL_16:
    v14 = v10;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, dwNumberOfBytesToMap);
    return (unsigned int)v10;
  }
  SetLastError(0);
  v8 = MapViewOfFile(*((HANDLE *)this + 80), 4u, 0, 0, *((_QWORD *)this + 82));
  if ( !v8 )
  {
    v13 = GetLastError();
    v10 = v13;
    if ( v13 > 0 )
      v10 = (unsigned __int16)v13 | 0x80070000;
    dwNumberOfBytesToMap = 121;
LABEL_14:
    if ( v10 >= 0 )
      v10 = -2003304445;
    goto LABEL_16;
  }
  *((_QWORD *)this + 81) = v8;
  TokenThread = CSurfaceManager::CreateTokenThread(this);
  v10 = TokenThread;
  if ( TokenThread < 0 )
  {
    dwNumberOfBytesToMap = 128;
    v14 = TokenThread;
    goto LABEL_18;
  }
  *a2 = (void *)*((_QWORD *)this + 83);
  *a3 = (void *)*((_QWORD *)this + 84);
  return (unsigned int)v10;
}
