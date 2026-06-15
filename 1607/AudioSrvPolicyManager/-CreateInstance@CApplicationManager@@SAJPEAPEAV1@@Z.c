/*
 * XREFs of ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180011910
 * Callers:
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x18000414C (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A68C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::CreateInstance(
        struct CApplicationManager **a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 result; // rax
  HANDLE ProcessHeap; // rax
  char *v7; // rax
  char *v8; // rbx
  const struct _TlgProvider_t *v9; // rcx
  UINT32 v10; // [rsp+28h] [rbp-39h]
  unsigned int v11; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  const char *v14; // [rsp+78h] [rbp+17h]
  __int64 v15; // [rsp+80h] [rbp+1Fh]
  _QWORD *v16; // [rsp+88h] [rbp+27h]
  __int64 v17; // [rsp+90h] [rbp+2Fh]
  unsigned int *v18; // [rsp+98h] [rbp+37h]
  __int64 v19; // [rsp+A0h] [rbp+3Fh]

  v12[1] = -2LL;
  result = 0LL;
  v11 = 0;
  if ( a1 )
  {
    if ( g_ApplicationManager )
      return result;
    ProcessHeap = GetProcessHeap();
    v7 = (char *)HeapAlloc(ProcessHeap, 0, 0xA0uLL);
    v8 = v7;
    v12[0] = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 2) = 1;
      *(_QWORD *)v7 = &CApplicationManager::`vftable';
      *((_QWORD *)v7 + 2) = 0LL;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v7 + 24));
      *((_QWORD *)v8 + 8) = 0LL;
      *((_QWORD *)v8 + 9) = 0LL;
      *((_QWORD *)v8 + 10) = 0LL;
      *((_QWORD *)v8 + 11) = 0LL;
      *((_QWORD *)v8 + 12) = 0LL;
      *((_DWORD *)v8 + 26) = 10;
      *((_QWORD *)v8 + 14) = 0LL;
      *((_QWORD *)v8 + 15) = 0LL;
      *((_QWORD *)v8 + 16) = 0LL;
      *((_QWORD *)v8 + 17) = 0LL;
      *((_QWORD *)v8 + 18) = 0LL;
      *((_DWORD *)v8 + 38) = 10;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      result = 0LL;
      *a1 = (struct CApplicationManager *)v8;
      return result;
    }
    result = 2147942414LL;
  }
  else
  {
    result = 2147500035LL;
  }
  v11 = result;
  v9 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, result);
    result = v11;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v14 = "__FUNC__";
    v15 = 9LL;
    LODWORD(v12[0]) = 393;
    v16 = v12;
    v17 = 4LL;
    v18 = &v11;
    v19 = 4LL;
    TlgWrite(v9, &unk_18002D869, a3, a4, v10, &pData);
    return v11;
  }
  return result;
}
