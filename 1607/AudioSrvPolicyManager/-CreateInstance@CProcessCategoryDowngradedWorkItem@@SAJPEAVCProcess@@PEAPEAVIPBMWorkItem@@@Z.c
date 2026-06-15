/*
 * XREFs of ?CreateInstance@CProcessCategoryDowngradedWorkItem@@SAJPEAVCProcess@@PEAPEAVIPBMWorkItem@@@Z @ 0x180020DA4
 * Callers:
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000F310 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CProcessCategoryDowngradedWorkItem::CreateInstance(struct CProcess *a1, struct IPBMWorkItem **a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  const GUID *v6; // r8
  const GUID *v7; // r9
  __int64 result; // rax
  UINT32 v9; // [rsp+20h] [rbp-29h]
  unsigned int v10; // [rsp+30h] [rbp-19h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  _QWORD *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  unsigned int *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  v10 = 0;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v11 = v5;
  if ( v5 )
  {
    v5[1] = a1;
    *v5 = &CProcessCategoryDowngradedWorkItem::`vftable';
    *a2 = (struct IPBMWorkItem *)v5;
    result = v10;
    if ( (v10 & 0x80000000) == 0 )
      return result;
  }
  else
  {
    result = 2147942414LL;
    v10 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
    result = v10;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v13 = "__FUNC__";
    v16 = &v11;
    v19 = &v10;
    v14 = 9;
    LODWORD(v11) = 635;
    v17 = 4;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v6, v7, v9, &pData);
    return v10;
  }
  return result;
}
