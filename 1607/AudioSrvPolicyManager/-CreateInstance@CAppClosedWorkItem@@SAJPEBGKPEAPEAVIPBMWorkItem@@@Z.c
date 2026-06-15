/*
 * XREFs of ?CreateInstance@CAppClosedWorkItem@@SAJPEBGKPEAPEAVIPBMWorkItem@@@Z @ 0x18002182C
 * Callers:
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x1800181C4 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z @ 0x1800219AC (-Initialize@CAppClosedWorkItem@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppClosedWorkItem::CreateInstance(const unsigned __int16 *a1, int a2, struct IPBMWorkItem **a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  CAppClosedWorkItem *v10; // rbx
  __int64 result; // rax
  UINT32 v12; // [rsp+20h] [rbp-39h]
  unsigned int v13; // [rsp+30h] [rbp-29h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  _QWORD *v19; // [rsp+70h] [rbp+17h]
  int v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+7Ch] [rbp+23h]
  unsigned int *v22; // [rsp+80h] [rbp+27h]
  int v23; // [rsp+88h] [rbp+2Fh]
  int v24; // [rsp+8Ch] [rbp+33h]

  v13 = 0;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v14 = v7;
  v10 = (CAppClosedWorkItem *)v7;
  if ( v7 )
  {
    v7[1] = 0LL;
    *v7 = &CAppClosedWorkItem::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = a2;
    result = CAppClosedWorkItem::Initialize(v10, a1);
    v13 = result;
    if ( (int)result >= 0 )
    {
      *a3 = v10;
      v10 = 0LL;
    }
  }
  else
  {
    result = 2147942414LL;
    v13 = -2147024882;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(CAppClosedWorkItem *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL);
    result = v13;
  }
  if ( (int)result < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, result);
      result = v13;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = "__FUNC__";
      v19 = &v14;
      v22 = &v13;
      v17 = 9;
      LODWORD(v14) = 881;
      v20 = 4;
      v23 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v8, v9, v12, &pData);
      return v13;
    }
  }
  return result;
}
