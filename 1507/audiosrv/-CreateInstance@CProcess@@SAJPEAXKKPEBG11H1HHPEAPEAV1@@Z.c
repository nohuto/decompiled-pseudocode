/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x1800316C4
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z @ 0x180011D80 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180011F58 (--0CProcess@@IEAA@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CreateInstance(
        HANDLE hSourceHandle,
        int a2,
        int a3,
        const unsigned __int16 *a4,
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
  v16 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x1D8uLL);
  if ( v16 )
    v17 = CProcess::CProcess(v16);
  else
    v17 = 0LL;
  if ( !v17 )
  {
    v18 = -2147024882;
LABEL_12:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        34LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
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
