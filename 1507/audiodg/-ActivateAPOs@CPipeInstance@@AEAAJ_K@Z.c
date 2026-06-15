/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140005FF0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x1400061C0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z @ 0x140002FAC (-TrackSystemEffectBehavior@@YAJPEBG_N1AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF__guid_ @ 0x140030B28 (WPP_SF__guid_.c)
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
  char v11; // dl
  __int64 v12; // rcx

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
      TrackSystemEffectBehavior(*((const unsigned __int16 **)this + 23), v11, 1, (struct _GUID *)(v8 + 8));
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
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        49LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
    }
    TrackSystemEffectBehavior(*((const unsigned __int16 **)this + 23), 0, 0, (struct _GUID *)(v8 + 8));
LABEL_32:
    v12 = *(_QWORD *)&WPP_GLOBAL_Control;
  }
  else
  {
    v12 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          50LL,
          &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids);
        v12 = *(_QWORD *)&WPP_GLOBAL_Control;
      }
      if ( (unsigned int *)v12 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v12 + 28) & 0x20000) != 0
        && *(_BYTE *)(v12 + 25) >= 4u )
      {
        WPP_SF__guid_(*(_QWORD *)(v12 + 16), 51LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, v8 + 8);
        goto LABEL_32;
      }
    }
  }
  if ( (unsigned int *)v12 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v12 + 28) & 0x20000) != 0
    && *(_BYTE *)(v12 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v12 + 16), 52LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, (unsigned int)v4);
  }
LABEL_10:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v4;
}
