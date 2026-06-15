/*
 * XREFs of ?Stop@CPipeInstance@@QEAAJXZ @ 0x1400049C0
 * Callers:
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140004AB0 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F590 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::Stop(CPipeInstance *this)
{
  int v1; // ebp
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  v7 = 0LL;
  v3 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    do
    {
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( *(_DWORD *)(v4 + 40) == 1 )
      {
        v6 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(v4 + 32))(
               **(_QWORD **)(v4 + 32),
               &GUID_c684b72a_6df4_4774_bdf9_76b77509b653,
               &v7);
        if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7), v6 < 0) )
          v1 = v6;
        v2 = v7;
        if ( v7 )
        {
          v7 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
          v2 = v7;
        }
      }
    }
    while ( v3 );
    if ( v1 < 0
      && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        67LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v1);
      v2 = v7;
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v1;
}
