/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000DA20
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x14000DBF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z @ 0x14000AC40 (-TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF__guid_ @ 0x140030FE8 (WPP_SF__guid_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  int v4; // r15d
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  bool v11; // dl
  _QWORD *v12; // rcx

  v4 = 0;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    goto LABEL_10;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    if ( *(_DWORD *)(v7 + 40) == 2 )
      break;
LABEL_9:
    if ( !v6 )
      goto LABEL_10;
  }
  v8 = *(_QWORD *)(v7 + 32);
  v5 = *(_QWORD *)(v8 + 40);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, bool))(**((_QWORD **)this + 18) + 56LL))(
         *((_QWORD *)this + 18),
         a2,
         v5,
         0LL,
         *((_DWORD *)this + 3) == 1);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(v8 + 4) )
    {
      v11 = *((_DWORD *)this + 3) == 1 || *(_QWORD *)this != 0LL;
      TrackSystemEffectBehavior(*((const unsigned __int16 **)this + 23), v11, 1, (const struct _GUID *)(v8 + 8));
    }
    v9 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_9;
  }
  if ( !v8 )
    goto LABEL_32;
  if ( *(_DWORD *)(v8 + 4) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
    }
    TrackSystemEffectBehavior(*((const unsigned __int16 **)this + 23), 0, 0, (const struct _GUID *)(v8 + 8));
LABEL_32:
    v12 = WPP_GLOBAL_Control;
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x20000) != 0 && *((_BYTE *)v12 + 25) >= 4u )
      {
        WPP_SF__guid_(v12[2], 51LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v8 + 8);
        goto LABEL_32;
      }
    }
  }
  if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x20000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
    WPP_SF_D(v12[2], 52LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, (unsigned int)v4);
LABEL_10:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v4;
}
