/*
 * XREFs of ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800A7EC0
 * Callers:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A804C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18011AAE4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

__int64 __fastcall CMmcssTask::LoadRuntime(CMmcssTask *this)
{
  unsigned int v1; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  FARPROC v5; // rax
  FARPROC v6; // rax
  signed int v8; // eax
  signed int v9; // eax
  signed int v10; // eax
  signed int LastError; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( !*((_QWORD *)this + 7) )
  {
    SetLastError(0);
    LibraryW = LoadLibraryW(L"avrt.dll");
    *((_QWORD *)this + 7) = LibraryW;
    if ( LibraryW )
    {
      SetLastError(0);
      ProcAddress = GetProcAddress(*((HMODULE *)this + 7), "AvRevertMmThreadCharacteristics");
      *((_QWORD *)this + 9) = ProcAddress;
      if ( ProcAddress )
      {
        SetLastError(0);
        v5 = GetProcAddress(*((HMODULE *)this + 7), "AvSetMmThreadCharacteristicsW");
        *((_QWORD *)this + 8) = v5;
        if ( v5 )
        {
          SetLastError(0);
          v6 = GetProcAddress(*((HMODULE *)this + 7), "AvSetMmThreadPriority");
          *((_QWORD *)this + 10) = v6;
          if ( v6 )
            return v1;
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          v12 = 345;
        }
        else
        {
          v10 = GetLastError();
          v1 = v10;
          if ( v10 > 0 )
            v1 = (unsigned __int16)v10 | 0x80070000;
          v12 = 343;
        }
      }
      else
      {
        v9 = GetLastError();
        v1 = v9;
        if ( v9 > 0 )
          v1 = (unsigned __int16)v9 | 0x80070000;
        v12 = 341;
      }
    }
    else
    {
      v8 = GetLastError();
      v1 = v8;
      if ( v8 > 0 )
        v1 = (unsigned __int16)v8 | 0x80070000;
      v12 = 338;
    }
    if ( (v1 & 0x80000000) == 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, v12);
    CMmcssTask::UnloadRuntime(this);
  }
  return v1;
}
