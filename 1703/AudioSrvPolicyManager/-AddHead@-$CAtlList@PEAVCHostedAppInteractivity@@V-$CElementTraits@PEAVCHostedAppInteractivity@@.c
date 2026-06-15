/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18000FD8C
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AB60 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180015360 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800156DC (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18001A708 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180020300 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *result; // rax

  v3 = *a1;
  if ( !a1[4] )
  {
    v5 = *((unsigned int *)a1 + 10);
    if ( v5 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 0x18 )
        goto LABEL_8;
      v5 *= 24LL;
    }
    if ( ~v5 >= 8 )
    {
      v6 = malloc(v5 + 8);
      v7 = v6;
      if ( !v6 )
        goto LABEL_19;
      *v6 = a1[3];
      a1[3] = (__int64)v6;
LABEL_9:
      if ( v7 )
      {
        v8 = *((_DWORD *)a1 + 10);
        for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
        {
          *i = a1[4];
          a1[4] = (__int64)i;
        }
        goto LABEL_13;
      }
LABEL_19:
      ATL::AtlThrowImpl(-2147024882);
    }
LABEL_8:
    v7 = 0LL;
    goto LABEL_9;
  }
LABEL_13:
  v10 = (_QWORD *)a1[4];
  v11 = *v10;
  if ( v10 )
    v10[2] = *a2;
  a1[4] = v11;
  v10[1] = 0LL;
  *v10 = v3;
  ++a1[2];
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = v10;
  else
    a1[1] = (__int64)v10;
  result = v10;
  *a1 = (__int64)v10;
  return result;
}
