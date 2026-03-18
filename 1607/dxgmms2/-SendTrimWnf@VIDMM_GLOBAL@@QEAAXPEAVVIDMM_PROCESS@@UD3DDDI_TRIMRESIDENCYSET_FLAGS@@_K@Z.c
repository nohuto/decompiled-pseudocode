/*
 * XREFs of ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C004BFC0
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004C060 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C006728C (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall VIDMM_GLOBAL::SendTrimWnf(VIDMM_GLOBAL *this, struct VIDMM_PROCESS *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  _BYTE v13[20]; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+34h] [rbp-34h]

  v5 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = *(_QWORD *)a2;
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  *(_QWORD *)v13 = *(_QWORD *)(*((_QWORD *)this + 3) + 268LL);
  *(_DWORD *)&v13[16] = v5;
  *(_QWORD *)&v13[8] = a4;
  v8 = VIDMM_GLOBAL::SendWnfNotificationToProcess(a2, *(const struct _WNF_STATE_NAME **)v13, v13, a4);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdAssertion(v12);
  }
}
