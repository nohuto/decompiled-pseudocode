/*
 * XREFs of ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180019BB4
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x18000414C (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CStreamClassPolicyManager::CreateInstance(struct CStreamClassPolicyManager **a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 result; // rax
  UINT32 v7; // [rsp+20h] [rbp-29h]
  unsigned int v8; // [rsp+30h] [rbp-19h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  _QWORD *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  unsigned int *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v8 = 0;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v9 = v3;
  if ( v3 )
  {
    v3[1] = 0LL;
    *v3 = &CStreamClassPolicyManager::`vftable'{for `CRefCountedObject'};
    v3[2] = &CStreamClassPolicyManager::`vftable'{for `IStreamClassPolicyManager'};
    *((_DWORD *)v3 + 2) = 1;
    *a1 = (struct CStreamClassPolicyManager *)v3;
    result = v8;
    if ( (v8 & 0x80000000) == 0 )
      return result;
  }
  else
  {
    result = 2147942414LL;
    v8 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_ebe8a60df1f9346dc18a4000ebfedf98_Traceguids, result);
    result = v8;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v11 = "__FUNC__";
    v14 = &v9;
    v17 = &v8;
    v12 = 9;
    LODWORD(v9) = 57;
    v15 = 4;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v4, v5, v7, &pData);
    return v8;
  }
  return result;
}
