/*
 * XREFs of NtGdiAddEmbFontToDC @ 0x140312030
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1400D80A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z @ 0x1400FE480 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x140263884 (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     ??$GreProbeAndReadFromUntrustedVa@PEAX@@YAXPEAPEAXPEBQEAX_K@Z @ 0x140310364 (--$GreProbeAndReadFromUntrustedVa@PEAX@@YAXPEAPEAXPEBQEAX_K@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1403270F0 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

__int64 __fastcall NtGdiAddEmbFontToDC(HDC a1, const void *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rdi
  struct PFF *PFFFromId; // rdi
  HSEMAPHORE v9; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v11[15]; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+D8h] [rbp+20h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v13 = 0LL;
    GreProbeAndReadFromUntrustedVa<void *>(&v13, a2);
    v4 = 0;
    v7 = *(_QWORD *)(W32GetSessionState(v6, v5) + 96);
    SEMOBJ<17>::SEMOBJ<17>(&v9, v7 + 4864);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v10, *(struct PFT **)(v7 + 20384));
    if ( v10[0] )
    {
      v12 = 0;
      PFFFromId = GetPFFFromId(*(struct PFT **)(v7 + 20384), (unsigned int)v13, &v12);
      if ( (unsigned int)PUBLIC_PFTOBJ::VerifyPFF((PUBLIC_PFTOBJ *)v10, PFFFromId) )
        v4 = XDCOBJ::bAddRemoteFont((XDCOBJ *)v11, PFFFromId);
    }
    SEMOBJ<17>::vUnlock(&v9);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
    return v4;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
    return 0LL;
  }
}
