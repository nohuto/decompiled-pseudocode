/*
 * XREFs of ?Get@D3DCompilerHelper@@SAJPEAPEAU1@@Z @ 0x180189894
 * Callers:
 *     ?AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z @ 0x180188EC0 (-AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z.c)
 *     ?Initialize@D3DShaderLinker@@QEAAJPEBX_K_N@Z @ 0x1801893B4 (-Initialize@D3DShaderLinker@@QEAAJPEBX_K_N@Z.c)
 *     ?Link@D3DShaderLinker@@QEAAJPEAPEAUID3D10Blob@@@Z @ 0x1801895F4 (-Link@D3DShaderLinker@@QEAAJPEAPEAUID3D10Blob@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@D3DCompilerHelper@@AEAAJXZ @ 0x180189918 (-Initialize@D3DCompilerHelper@@AEAAJXZ.c)
 */

__int64 __fastcall D3DCompilerHelper::Get(struct D3DCompilerHelper **a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v5 = &D3DCompilerHelper::s_csInitLock;
  EnterCriticalSection(&D3DCompilerHelper::s_csInitLock);
  if ( D3DCompilerHelper::s_d3DCompilerHelperInstance[0]
    || (v3 = D3DCompilerHelper::Initialize((D3DCompilerHelper *)D3DCompilerHelper::s_d3DCompilerHelperInstance),
        v2 = v3,
        v3 >= 0) )
  {
    *a1 = (struct D3DCompilerHelper *)D3DCompilerHelper::s_d3DCompilerHelperInstance;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4Bu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  return v2;
}
