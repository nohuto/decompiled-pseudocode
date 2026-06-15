/*
 * XREFs of ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x1400092C0
 * Callers:
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x140009510 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003150 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003240 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x14002696C (WPP_SF_.c)
 *     WPP_SF__guid_ @ 0x14002E76C (WPP_SF__guid_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::ActivateAPOs(CPipeInstance *this, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // esi
  __int64 v10; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rcx
  LPVOID *ppv; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  LPVOID v16; // [rsp+90h] [rbp+18h] BYREF
  __int64 v17; // [rsp+98h] [rbp+20h]

  v4 = 0;
  v5 = 0LL;
  v17 = 0LL;
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
  v17 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  LODWORD(ppv) = *((_DWORD *)this + 3) == 1;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 18) + 56LL))(
         *((_QWORD *)this + 18),
         a2,
         v5,
         0LL);
  if ( v4 >= 0 )
  {
    v9 = *(_DWORD *)(v8 + 4);
    if ( v9 )
    {
      v12 = *((_QWORD *)this + 23);
      v16 = 0LL;
      v15 = 0LL;
      if ( CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &v16) >= 0
        && (*(int (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v16 + 40LL))(v16, v12, &v15) >= 0 )
      {
        TrackSystemEffectBehavior(v15, v9, 1, 0, (__int64)ppv);
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v10 = v5;
    if ( v5 )
    {
      v5 = 0LL;
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_9;
  }
  if ( !v8 )
    goto LABEL_36;
  if ( *(_DWORD *)(v8 + 4) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids);
    }
    TrackSystemEffectBehavior(*((_QWORD *)this + 23), *(_DWORD *)(v8 + 4), 0, 0, (__int64)ppv);
LABEL_36:
    v13 = WPP_GLOBAL_Control;
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids);
        v13 = WPP_GLOBAL_Control;
      }
      if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x20000) != 0 && *((_BYTE *)v13 + 25) >= 4u )
      {
        WPP_SF__guid_(v13[2], 45LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, v8 + 8, (_DWORD)ppv);
        goto LABEL_36;
      }
    }
  }
  if ( v13 != &WPP_GLOBAL_Control && (*((_DWORD *)v13 + 7) & 0x20000) != 0 && *((_BYTE *)v13 + 25) >= 2u )
    WPP_SF_D(v13[2], 46LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, (unsigned int)v4);
  AudDGTraceLoggingErrorHelper("CPipeInstance::ActivateAPOs", 0xA50u, v4);
LABEL_10:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v4;
}
