/*
 * XREFs of ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180073B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x180014C88 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180036FCC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180038320 (MIDL_user_allocate.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetId(CAudioSession *this, unsigned __int16 **a2)
{
  int v4; // eax
  unsigned __int16 *v5; // rbx
  int v6; // edi
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int16 *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((const wchar_t **)this + 107));
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v10);
  v4 = CAudioSessionInstanceId::ToPersistedString((__int64 *)this + 98, (__int64)&v10, 0);
  v5 = v10;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = 2LL * (*((_DWORD *)v10 - 4) + 1);
    v8 = (unsigned __int16 *)MIDL_user_allocate(v7);
    *a2 = v8;
    if ( !v8 )
    {
      v6 = -2147024882;
      goto LABEL_14;
    }
    v6 = StringCbCopyW(v8, v7, (size_t *)v5);
    if ( v6 >= 0 )
      goto LABEL_14;
    operator delete(*a2);
    *a2 = 0LL;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, v6);
  }
LABEL_14:
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  return (unsigned int)v6;
}
