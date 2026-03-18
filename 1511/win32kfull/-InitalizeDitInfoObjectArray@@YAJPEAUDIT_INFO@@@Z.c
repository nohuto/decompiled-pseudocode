/*
 * XREFs of ?InitalizeDitInfoObjectArray@@YAJPEAUDIT_INFO@@@Z @ 0x1C009FC5C
 * Callers:
 *     UserActivateDwmInputProcessing @ 0x1C009FAB0 (UserActivateDwmInputProcessing.c)
 * Callees:
 *     InitDitIocpSupport @ 0x1C009FD38 (InitDitIocpSupport.c)
 */

__int64 __fastcall InitalizeDitInfoObjectArray(struct DIT_INFO *a1)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rcx
  int inited; // r8d
  HANDLE v6; // rax

  *((_QWORD *)a1 + 4) = Win32AllocPoolNonPaged(40LL, 2037609301LL);
  v2 = Win32AllocPoolNonPaged(240LL, 2001433429LL);
  v3 = *((_QWORD *)a1 + 4) == 0LL;
  *((_QWORD *)a1 + 5) = v2;
  if ( v3 || !v2 )
  {
    return (unsigned int)-1073741801;
  }
  else
  {
    *((_QWORD *)a1 + 9) = (char *)a1 + 64;
    *((_QWORD *)a1 + 8) = (char *)a1 + 64;
    v4 = *((unsigned int *)a1 + 14);
    ghDITResetEvent = *(_QWORD *)a1;
    ghDITMmcssEvent = *((_QWORD *)a1 + 1);
    ghDITInputApcDoneEvent = (HANDLE)*((_QWORD *)a1 + 2);
    inited = InitDitIocpSupport(v4);
    if ( inited >= 0 )
    {
      v6 = ghDITMouseFlushTimer;
      **((_QWORD **)a1 + 4) = ghDITResetEvent;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) = ghDITMmcssEvent;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL) = ghDITInputApcDoneEvent;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 24LL) = ghDITEvent;
      *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL) = v6;
      *((_DWORD *)a1 + 12) = 5;
    }
  }
  return (unsigned int)inited;
}
