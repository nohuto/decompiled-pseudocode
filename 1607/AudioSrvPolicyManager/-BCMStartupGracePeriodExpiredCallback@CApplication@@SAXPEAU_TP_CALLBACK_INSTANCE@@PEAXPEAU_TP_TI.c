/*
 * XREFs of ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000D5D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationManager@@EAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z0@Z @ 0x18001088C (--$QueueApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@YAJP8CApplicationMana.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

void __fastcall CApplication::BCMStartupGracePeriodExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        void *a2,
        struct _TP_TIMER *a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  HANDLE v8; // rax
  const GUID *v9; // r8
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  UINT32 v12; // [rsp+28h] [rbp-29h]
  int v13; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *v14; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const char *v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  _QWORD *v18; // [rsp+78h] [rbp+27h]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  int *v20; // [rsp+88h] [rbp+37h]
  __int64 v21; // [rsp+90h] [rbp+3Fh]

  v13 = 0;
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v14 = v5;
  v7 = v5;
  if ( v5 )
    *v5 = a2;
  else
    v7 = 0LL;
  if ( v7 )
  {
    v13 = QueueApplicationManagerWorkItem<BCMStartupGracePeriodExpiredContext>(v6, v7);
    if ( v13 >= 0 )
      v7 = 0LL;
  }
  else
  {
    v13 = -2147024882;
  }
  v8 = GetProcessHeap();
  HeapFree(v8, 0, v7);
  v10 = (const GUID *)(unsigned int)v13;
  if ( v13 < 0 )
  {
    v11 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v13);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v17 = 9LL;
      v16 = "__FUNC__";
      v18 = &v14;
      v20 = &v13;
      LODWORD(v14) = 2229;
      v19 = 4LL;
      v21 = 4LL;
      TlgWrite(v11, &unk_18002D869, v9, v10, v12, &pData);
    }
  }
}
