/*
 * XREFs of ?Start@CPipeInstance@@QEAAJXZ @ 0x140004AB0
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F970 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x1400049C0 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Start(CPipeInstance *this)
{
  int v2; // ebp
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  v7 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !v4 )
    goto LABEL_4;
  while ( 1 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( *(_DWORD *)(v5 + 40) == 1 )
      break;
LABEL_3:
    if ( !v4 )
      goto LABEL_4;
  }
  v2 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v5 + 32))(
         **(_QWORD **)(v5 + 32),
         &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
         &v7);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    if ( v2 >= 0 )
    {
      v3 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        v3 = v7;
      }
      goto LABEL_3;
    }
  }
  CPipeInstance::Stop(this);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      66LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      (unsigned int)v2);
  }
  v3 = v7;
LABEL_4:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v2;
}
