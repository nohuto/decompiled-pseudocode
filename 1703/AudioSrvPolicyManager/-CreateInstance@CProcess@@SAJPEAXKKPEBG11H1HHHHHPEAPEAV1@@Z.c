/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D36C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??0CProcess@@IEAA@XZ @ 0x18000D518 (--0CProcess@@IEAA@XZ.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z @ 0x18000D724 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CreateInstance(
        HANDLE hSourceHandle,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        int a7,
        unsigned __int16 *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        struct CProcess **a14)
{
  HANDLE ProcessHeap; // rax
  CProcess *v19; // rax
  volatile signed __int32 *v20; // rbx
  int v21; // edi

  ProcessHeap = GetProcessHeap();
  v19 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x230uLL);
  if ( v19 )
    v20 = (volatile signed __int32 *)CProcess::CProcess(v19);
  else
    v20 = 0LL;
  if ( !v20 )
  {
    v21 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v21);
    }
    AudPolicyLogError("CProcess::CreateInstance", 2433, v21);
    return (unsigned int)v21;
  }
  v21 = CProcess::Initialize((CProcess *)v20, hSourceHandle, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  if ( v21 >= 0 )
  {
    *a14 = (struct CProcess *)v20;
    v20 = 0LL;
  }
  if ( v20 && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 32LL))(v20);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
  }
  if ( v21 < 0 )
    goto LABEL_12;
  return (unsigned int)v21;
}
