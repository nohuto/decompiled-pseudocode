/*
 * XREFs of ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000A95C
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18000AAF0 (--0CApplication@@IEAA@K@Z.c)
 *     ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18000AD80 (-Initialize@CApplication@@IEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CreateInstance(const unsigned __int16 *a1, unsigned int a2, struct CApplication **a3)
{
  HANDLE ProcessHeap; // rax
  CApplication *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  volatile signed __int32 *v10; // rbx
  __int64 result; // rax
  UINT32 v12; // [rsp+28h] [rbp-49h]
  unsigned int v13; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  const char *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  _QWORD *v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  unsigned int *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]

  v14[1] = -2LL;
  v13 = 0;
  ProcessHeap = GetProcessHeap();
  v7 = (CApplication *)HeapAlloc(ProcessHeap, 0, 0x208uLL);
  v14[0] = v7;
  if ( v7 )
    v10 = (volatile signed __int32 *)CApplication::CApplication(v7, a2);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    result = 2147942414LL;
    v13 = -2147024882;
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, result);
      result = v13;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v16 = "__FUNC__";
      v17 = 9;
      v18 = 0;
      LODWORD(v14[0]) = 184;
      v19 = v14;
      v20 = 4;
      v21 = 0;
      v22 = &v13;
      v23 = 4;
      v24 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v8, v9, v12, &pData);
      return v13;
    }
    return result;
  }
  result = CApplication::Initialize((CApplication *)v10, a1);
  v13 = result;
  if ( (int)result >= 0 )
  {
    *a3 = (struct CApplication *)v10;
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL);
    }
    result = v13;
  }
  if ( (int)result < 0 )
    goto LABEL_13;
  return result;
}
