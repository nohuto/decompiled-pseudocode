/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0073204
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000FB90 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(const struct _TlgProvider_t *a1)
{
  int KeywordAny_low; // r9d
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  const void *v5; // rdx
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // r10
  int v12; // eax
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  const struct _TlgProvider_t *v20; // rcx
  __int64 v21; // r10
  _DWORD v22[4]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h]
  _QWORD *v26; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]
  _DWORD *v28; // [rsp+80h] [rbp+7h]
  _QWORD v29[2]; // [rsp+88h] [rbp+Fh] BYREF
  _DWORD v30[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _DWORD *v31; // [rsp+A0h] [rbp+27h]
  __int64 v32; // [rsp+A8h] [rbp+2Fh]
  __int64 v33; // [rsp+B0h] [rbp+37h]
  _DWORD v34[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  KeywordAny_low = SLOWORD(a1->KeywordAny);
  if ( !LOWORD(a1->KeywordAny) )
  {
LABEL_6:
    if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v24 = v22;
      v5 = &unk_1C00788CD;
      v6 = v2->KeywordAll + 4064;
LABEL_9:
      v27 = 16LL;
      v26 = (_QWORD *)v6;
      v25 = 4LL;
      v22[0] = (_DWORD)v4;
      TlgWrite(v2, v5, v3, v4, 4u, &pData);
      return;
    }
    return;
  }
  if ( KeywordAny_low != 1 )
  {
    if ( KeywordAny_low == 2 )
    {
      v7 = *(const struct _TlgProvider_t **)(a1->KeywordAll + 24);
      if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(v7, 0x400000000000uLL) )
      {
        v22[0] = (_DWORD)v10;
        v24 = v22;
        v26 = v29;
        v28 = *(_DWORD **)(v8 + 80);
        v12 = *(unsigned __int16 *)(v8 + 72) >> 1;
        v25 = 4LL;
        v29[0] = (unsigned int)(2 * v12);
        v27 = v11;
        TlgWrite((TraceLoggingHProvider)v8, &unk_1C0079914, v9, v10, 5u, &pData);
      }
      return;
    }
    if ( KeywordAny_low <= 2 || KeywordAny_low > 5 )
      return;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1->KeywordAll + 16) )
  {
    if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v22[0] = (_DWORD)v14;
      v24 = v22;
      v25 = 4LL;
      v26 = (_QWORD *)(v15 + 808);
      v27 = 16LL;
      v17 = *(_QWORD *)(v16 + 120);
      v18 = 2 * (*(unsigned __int16 *)(v16 + 112) >> 1);
      v28 = v30;
      v30[0] = v18;
      v29[0] = 2LL;
      v29[1] = v17;
      v30[1] = 0;
      v19 = *(_QWORD *)(v16 + 152);
      v20 = (const struct _TlgProvider_t *)(2 * (*(unsigned __int16 *)(v16 + 144) >> 1));
      v31 = v34;
      v34[0] = (_DWORD)v20;
      v32 = 2LL;
      v33 = v19;
      v34[1] = 0;
      TlgWrite(v20, &unk_1C0079763, v13, v14, 8u, &pData);
    }
  }
  else if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x400000000000uLL) )
  {
    v24 = v22;
    v5 = &unk_1C0079945;
    v6 = v21 + 808;
    goto LABEL_9;
  }
}
