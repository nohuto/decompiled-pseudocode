/*
 * XREFs of ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18009CBF0
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DE10 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180065CA8 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180002CC0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCApplication@@PEAU3@@Z @ 0x180038E54 (-Find@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEBAPEAU__POS.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x180066B98 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 */

__int64 __fastcall TsSessionIdAddActiveMediaApp(DWORD a1, struct CApplication *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct TSSession *v5; // rsi
  __int64 **v6; // rbx
  __int64 *v7; // rax
  __int64 **v8; // rcx
  struct CApplication *v10; // [rsp+38h] [rbp+10h] BYREF
  struct TSSession *v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = a2;
  v3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = TsSessionFromSessionId(a1, 0, 0LL, &v11);
  if ( v4 )
  {
    if ( v4 > 0 )
      v3 = (unsigned __int16)v4 | 0x80070000;
    else
      v3 = v4;
  }
  else
  {
    v5 = v11;
    v6 = (__int64 **)((char *)v11 + 104);
    if ( !ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::Find((_QWORD *)v11 + 13, &v10) )
    {
      v7 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
             (__int64)v6,
             (__int64 *)&v10,
             (__int64)v6[1],
             0LL);
      v8 = (__int64 **)v6[1];
      if ( v8 )
        *v8 = v7;
      else
        *v6 = v7;
      v6[1] = v7;
      TsSessionSendAppManagerNotification(v5);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v3;
}
