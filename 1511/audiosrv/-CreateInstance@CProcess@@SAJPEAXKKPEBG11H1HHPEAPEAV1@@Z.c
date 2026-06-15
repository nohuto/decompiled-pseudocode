/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x180038E70
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z @ 0x180029CA8 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180029F78 (--0CProcess@@IEAA@XZ.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CreateInstance(
        HANDLE hSourceHandle,
        int a2,
        int a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a7,
        unsigned __int16 *a8,
        int a9,
        int a10,
        struct CProcess **a11)
{
  HANDLE ProcessHeap; // rax
  CProcess *v16; // rax
  CProcess *v17; // rbx
  int v18; // edi

  ProcessHeap = GetProcessHeap();
  v16 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x1E0uLL);
  if ( v16 )
    v17 = CProcess::CProcess(v16);
  else
    v17 = 0LL;
  if ( !v17 )
  {
    v18 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        (unsigned int)v18);
    }
    return (unsigned int)v18;
  }
  v18 = CProcess::Initialize(v17, hSourceHandle, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v18 >= 0 )
  {
    *a11 = v17;
    v17 = 0LL;
  }
  if ( v17 )
    CUnknown::Release(v17);
  if ( v18 < 0 )
    goto LABEL_12;
  return (unsigned int)v18;
}
