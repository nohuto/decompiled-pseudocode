/*
 * XREFs of ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C006E3B8
 * Callers:
 *     ?ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0010230 (-ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0015DA0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingStuckNbl(struct _NDIS_NBL_TRACKER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  char *v5; // rax
  char *v6; // rax
  const void *v7; // rdx
  __int64 v8; // rcx
  __int16 v9; // ax
  _QWORD *Context; // rax
  unsigned __int16 v11; // cx
  const struct _TlgProvider_t *v12; // rcx
  struct _TlgProvider_t hProvider; // [rsp+30h] [rbp-49h] BYREF
  _QWORD *v14; // [rsp+70h] [rbp-9h]
  __int64 v15; // [rsp+78h] [rbp-1h]
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  _QWORD v17[2]; // [rsp+88h] [rbp+Fh] BYREF
  _DWORD v18[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _DWORD *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  __int64 v21; // [rsp+B0h] [rbp+37h]
  _DWORD v22[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  v4 = *((__int16 *)a1 + 8);
  if ( !*((_WORD *)a1 + 8) )
    goto LABEL_6;
  if ( v4 == 1 )
  {
    Context = a1->Context;
    a4 = Context[2];
    if ( a4 )
    {
      if ( (unsigned int)dword_1C0082040 > 5 )
      {
        hProvider.LevelPlus1 = 1;
        v14 = Context + 101;
        hProvider.CallbackContext = &hProvider;
        hProvider.AnnotationFunc = (void (__fastcall *)())4;
        v15 = 16LL;
        v11 = 2 * (*(_WORD *)(a4 + 112) >> 1);
        v17[1] = *(_QWORD *)(a4 + 120);
        v18[0] = v11;
        v16 = v18;
        v17[0] = 2LL;
        v18[1] = 0;
        v12 = (const struct _TlgProvider_t *)(unsigned __int16)(2 * (*(_WORD *)(a4 + 144) >> 1));
        v21 = *(_QWORD *)(a4 + 152);
        v22[0] = (unsigned __int16)v12;
        v19 = v22;
        v20 = 2LL;
        v22[1] = 0;
        TlgWrite(v12, &unk_1C0073EF4, (LPCGUID)a3, (LPCGUID)a4, 8u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
      }
    }
    else if ( (unsigned int)dword_1C0082040 > 5 )
    {
      hProvider.LevelPlus1 = 1;
      v6 = (char *)(Context + 101);
      v7 = &unk_1C0073DEB;
LABEL_8:
      v15 = 16LL;
      hProvider.CallbackContext = &hProvider;
      v14 = v6;
      hProvider.AnnotationFunc = (void (__fastcall *)())4;
      TlgWrite(&hProvider, v7, (LPCGUID)a3, (LPCGUID)a4, 4u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    }
  }
  else
  {
    a3 = 2LL;
    if ( v4 == 2 )
    {
      v8 = *((_QWORD *)a1->Context + 3);
      if ( (unsigned int)dword_1C0082040 > 5 )
      {
        hProvider.LevelPlus1 = 2;
        hProvider.CallbackContext = &hProvider;
        v14 = v17;
        v16 = *(_DWORD **)(v8 + 80);
        v9 = *(_WORD *)(v8 + 72) >> 1;
        hProvider.AnnotationFunc = (void (__fastcall *)())4;
        v17[0] = (unsigned __int16)(2 * v9);
        v15 = 2LL;
        TlgWrite(
          (TraceLoggingHProvider)v8,
          &unk_1C0072FED,
          (LPCGUID)2,
          (LPCGUID)a4,
          5u,
          (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
      }
    }
    else if ( v4 > 2 && v4 <= 5 )
    {
LABEL_6:
      v5 = (char *)a1->Context;
      if ( (unsigned int)dword_1C0082040 <= 5 )
        return;
      hProvider.LevelPlus1 = *((__int16 *)a1 + 8);
      v6 = v5 + 4064;
      v7 = &unk_1C007398E;
      goto LABEL_8;
    }
  }
}
