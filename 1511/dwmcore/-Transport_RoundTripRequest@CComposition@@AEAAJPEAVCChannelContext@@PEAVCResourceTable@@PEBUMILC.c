/*
 * XREFs of ?Transport_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_ROUNDTRIPREQUEST@@@Z @ 0x1800954F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qqx @ 0x180101894 (Template_qqx.c)
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
  unsigned int v7; // ebx
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
    goto LABEL_10;
  }
  v7 = 0;
  if ( v6 <= *((_DWORD *)v4 + 5) )
  {
    *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v10;
    *((_DWORD *)v4 + 6) = v6;
    goto LABEL_4;
  }
  v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 16, 1, &v10);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA02u);
    return v7;
  }
LABEL_4:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqx((_DWORD)v4, v6, DWORD1(v10), v10, SBYTE8(v10));
  return v7;
}
