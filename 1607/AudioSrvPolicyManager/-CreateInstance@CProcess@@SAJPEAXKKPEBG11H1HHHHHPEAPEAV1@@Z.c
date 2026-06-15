/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D9C0
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??0CProcess@@IEAA@XZ @ 0x18000DBE4 (--0CProcess@@IEAA@XZ.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z @ 0x18000DDF4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
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
  const GUID *v20; // r8
  const GUID *v21; // r9
  volatile signed __int32 *v22; // rbx
  __int64 result; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  unsigned int v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v26; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  CProcess *v29; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  const char *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  unsigned __int16 **v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  unsigned int *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]

  v28 = -2LL;
  v27 = a6;
  v26 = a8;
  v25 = 0;
  ProcessHeap = GetProcessHeap();
  v19 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x1F8uLL);
  v29 = v19;
  if ( v19 )
    v22 = (volatile signed __int32 *)CProcess::CProcess(v19);
  else
    v22 = 0LL;
  if ( !v22 )
  {
    result = 2147942414LL;
    v25 = -2147024882;
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, result);
      result = v25;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v31 = "__FUNC__";
      v32 = 9;
      v33 = 0;
      LODWORD(v26) = 2361;
      v34 = &v26;
      v35 = 4;
      v36 = 0;
      v37 = &v25;
      v38 = 4;
      v39 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v20, v21, cData, &pData);
      return v25;
    }
    return result;
  }
  result = CProcess::Initialize((CProcess *)v22, hSourceHandle, a2, a3, a4, a5, v27, a7, v26, a9, a10, a11, a12, a13);
  v25 = result;
  if ( (int)result >= 0 )
  {
    *a14 = (struct CProcess *)v22;
    v22 = 0LL;
  }
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 32LL))(v22);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
    }
    result = v25;
  }
  if ( (int)result < 0 )
    goto LABEL_13;
  return result;
}
