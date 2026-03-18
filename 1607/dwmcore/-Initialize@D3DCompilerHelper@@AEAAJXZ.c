/*
 * XREFs of ?Initialize@D3DCompilerHelper@@AEAAJXZ @ 0x180189918
 * Callers:
 *     ?Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z @ 0x180189894 (-Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall D3DCompilerHelper::Initialize(D3DCompilerHelper *this)
{
  unsigned int v2; // esi
  HMODULE LibraryW; // rax
  HMODULE v4; // rdi
  FARPROC ProcAddress; // rax
  FARPROC v6; // rax
  FARPROC v7; // rax
  FARPROC v8; // rax
  FARPROC v9; // rax
  FARPROC v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v2 = 0;
  LibraryW = LoadLibraryW(L"d3dcompiler_47.dll");
  v4 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "D3DReflect");
    *((_QWORD *)this + 1) = ProcAddress;
    if ( ProcAddress )
    {
      v6 = GetProcAddress(v4, "D3DReflectLibrary");
      *((_QWORD *)this + 2) = v6;
      if ( v6 )
      {
        v7 = GetProcAddress(v4, "D3DCompile");
        *(_QWORD *)this = v7;
        if ( v7 )
        {
          v8 = GetProcAddress(v4, "D3DCreateFunctionLinkingGraph");
          *((_QWORD *)this + 3) = v8;
          if ( v8 )
          {
            v9 = GetProcAddress(v4, "D3DCreateLinker");
            *((_QWORD *)this + 4) = v9;
            if ( v9 )
            {
              v10 = GetProcAddress(v4, "D3DLoadModule");
              *((_QWORD *)this + 5) = v10;
              if ( v10 )
                return v2;
              v12 = 41;
            }
            else
            {
              v12 = 38;
            }
          }
          else
          {
            v12 = 35;
          }
        }
        else
        {
          v12 = 31;
        }
      }
      else
      {
        v12 = 28;
      }
    }
    else
    {
      v12 = 25;
    }
  }
  else
  {
    v12 = 22;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v12);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( v4 )
    FreeLibrary(v4);
  return v2;
}
