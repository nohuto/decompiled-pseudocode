/*
 * XREFs of ?Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_ROUNDTRIPREQUEST@@@Z @ 0x18003BC54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_qqx @ 0x18011720C (Template_qqx.c)
 */

__int64 __fastcall CComposition::Transport_RoundTripRequest(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_TRANSPORT_ROUNDTRIPREQUEST *a4)
{
  char *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ebx
  int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v4 = (char *)this + 440;
  v10 = *((unsigned int *)a4 + 1) | 0x100000000uLL;
  v5 = *((unsigned int *)v4 + 6);
  v6 = v5 + 1;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v7 = 0;
    if ( v6 <= *((_DWORD *)v4 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v10;
      *((_DWORD *)v4 + 6) = v6;
      goto LABEL_4;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet(v4, 16LL, 1LL, &v10);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x8D8u);
    return (unsigned int)v7;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqx((_DWORD)v4, v6, DWORD1(v10), v10, SBYTE8(v10));
  return (unsigned int)v7;
}
