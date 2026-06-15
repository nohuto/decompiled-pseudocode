/*
 * XREFs of ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x18005C290
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800117D0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180027BAC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x1800282C0 (MIDL_user_allocate.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioSession::GetInstanceId(const wchar_t **this, unsigned __int16 **a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  unsigned __int16 *v7; // rbx
  int v8; // edi
  size_t v9; // rdi
  unsigned __int16 *v10; // rax
  unsigned __int16 *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      this[107]);
  }
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v12);
  v6 = CAudioSessionInstanceId::ToString((__int64)(this + 98), &v12, v4, v5);
  v7 = v12;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_10;
  v9 = 2LL * (*((_DWORD *)v12 - 4) + 1);
  v10 = (unsigned __int16 *)MIDL_user_allocate(v9);
  *a2 = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
LABEL_10:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetInstanceId", 484, v8);
    goto LABEL_11;
  }
  v8 = StringCbCopyW(v10, v9, (size_t *)v7);
  if ( v8 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_10;
  }
LABEL_11:
  ATL::CStringData::Release((ATL::CStringData *)(v7 - 12));
  return (unsigned int)v8;
}
