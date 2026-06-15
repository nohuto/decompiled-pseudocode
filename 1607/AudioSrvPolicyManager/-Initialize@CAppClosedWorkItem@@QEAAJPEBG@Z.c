/*
 * XREFs of ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x1800219AC
 * Callers:
 *     ?CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z @ 0x18002182C (-CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CAppClosedWorkItem::Initialize(CAppClosedWorkItem *this, const unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned __int16 **v3; // rcx
  unsigned __int64 v4; // r9
  const GUID *v5; // r8
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-29h]
  UINT32 v9; // [rsp+20h] [rbp-29h]
  unsigned int v10; // [rsp+30h] [rbp-19h] BYREF
  int v11; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  int *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  unsigned int *v17; // [rsp+80h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+3Fh]

  v10 = 0;
  result = 0LL;
  if ( a2 )
  {
    v3 = (unsigned __int16 **)((char *)this + 8);
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    result = _AllocStringWorker<CTCoAllocPolicy>((__int64)v3, (__int64)a2, a2, v4, v8, v3);
    v10 = result;
    if ( (int)result < 0 )
    {
      v7 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
        result = v10;
      }
      if ( (unsigned int)dword_180034030 > 2 )
      {
        v14 = 9LL;
        v13 = "__FUNC__";
        v15 = &v11;
        v17 = &v10;
        v11 = 906;
        v16 = 4LL;
        v18 = 4LL;
        TlgWrite(v7, &unk_18002D869, v5, v6, v9, &pData);
        return v10;
      }
    }
  }
  return result;
}
