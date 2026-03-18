/*
 * XREFs of ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C013F7E8
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C013FC90 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C013F900 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 */

__int64 __fastcall AddPathToFirstAvailableTarget(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int i,
        unsigned int a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v18; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v19; // [rsp+20h] [rbp-28h]
  unsigned __int16 v20; // [rsp+28h] [rbp-20h]
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v21; // [rsp+30h] [rbp-18h]

  v7 = a3;
  v8 = 0xFFFFFFFFLL;
  for ( i = -1; ; v8 = i )
  {
    v10 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, _QWORD, unsigned int *))(a2 + 96))(
            a1,
            v8,
            a6,
            &i);
    v12 = v10;
    if ( v10 == -1071774925 )
      break;
    if ( v10 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v16[3] = (int)a6;
      v16[4] = a1;
      v16[5] = v7;
LABEL_10:
      v16[6] = v12;
      WdLogEvent5_WdError(v16);
      return (unsigned int)v12;
    }
    v13 = AddPresentPath(a1, (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)a2, v7, i, v19, v20, v21);
    v12 = v13;
    if ( v13 != -1071774975 )
    {
      if ( v13 >= 0 )
        return 0LL;
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v16[3] = v7;
      v16[4] = i;
      v16[5] = a1;
      goto LABEL_10;
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v14);
    v15[3] = v7;
    v15[4] = i;
    v15[5] = a1;
    WdLogEvent5_WdDmmEvent(v15);
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11);
  v18[3] = (int)a6;
  v18[4] = a1;
  v18[5] = v7;
  WdLogEvent5_WdDmmEvent(v18);
  return 3223192371LL;
}
