/*
 * XREFs of sub_1C00A7420 @ 0x1C00A7420
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00A7368 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0092248 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     sub_1C00A68CC @ 0x1C00A68CC (sub_1C00A68CC.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C00A726C (ConvertDMMScalingToGdiScaling.c)
 *     sub_1C00A72DC @ 0x1C00A72DC (sub_1C00A72DC.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00A76BC (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00A7F50 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00A90E4 (-BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00A9148 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     sub_1C00BFFB8 @ 0x1C00BFFB8 (sub_1C00BFFB8.c)
 */

__int64 sub_1C00A7420(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        unsigned int a7,
        char **a8,
        ...)
{
  struct DMMVIDPN *v8; // r12
  char *v9; // rdi
  __int64 v13; // rax
  struct VIDPN_MGR *v14; // r13
  int ClientVidPn; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // esi
  struct DMMVIDPN *v21; // r15
  struct BML_VIDPN_PATH_ORDER *v22; // rbx
  unsigned int v23; // r13d
  __int64 v24; // rbx
  __int64 v25; // r12
  PVOID v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r12
  char *v41; // r15
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  unsigned __int16 v52; // [rsp+20h] [rbp-20h]
  _DWORD *v53; // [rsp+30h] [rbp-10h]
  __int64 v54; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int16 v55; // [rsp+80h] [rbp+40h]
  struct BML_VIDPN_PATH_ORDER *v56; // [rsp+90h] [rbp+50h] BYREF
  __int64 i; // [rsp+98h] [rbp+58h]
  struct DMMVIDPN *v58; // [rsp+C0h] [rbp+80h] BYREF
  va_list va; // [rsp+C0h] [rbp+80h]
  va_list va1; // [rsp+C8h] [rbp+88h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v58 = va_arg(va1, struct DMMVIDPN *);
  i = a4;
  v55 = a1;
  v8 = v58;
  v9 = 0LL;
  *(_BYTE *)v58 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v42);
  }
  v13 = *(_QWORD *)(a4 + 1984);
  v56 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 112);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v54, (__int64)v14);
  v58 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)va);
  v20 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
  }
  else
  {
    v52 = a2;
    v21 = v58;
    v20 = BmlPreparePathOrderAndVidPn(&v56, v58, (const struct _D3DKMT_GETPATHSMODALITY *)a3, v55, v52, a7);
    if ( v20 >= 0 )
    {
      v22 = v56;
      v20 = BmlFunctionalizeVidPn(v56, v21);
      if ( v20 < 0 )
      {
        *(_BYTE *)v8 = 1;
        if ( a5 )
        {
          if ( v21 )
          {
            v43 = sub_1C00BFFB8(v14, a6, v21, v22);
            v48 = v43;
            if ( v43 < 0 )
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
              v49[3] = v21;
              v49[4] = v22;
              v49[5] = v48;
              WdLogEvent5_WdWarning(v49);
            }
          }
        }
      }
      else
      {
        if ( a5 )
        {
          if ( v21 )
          {
            if ( DMMVIDPN::IsFunctional(v21, -3) )
            {
              v35 = sub_1C00BFFB8(v14, a6, v21, v22);
              v40 = v35;
              if ( v35 < 0 )
              {
                v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
                v50[3] = v21;
                v50[4] = v22;
                v50[5] = v40;
                WdLogEvent5_WdWarning(v50);
              }
            }
          }
        }
        if ( a8 )
        {
          v58 = 0LL;
          v41 = (char *)v21 + 88;
          if ( v41 )
            v9 = v41 - 88;
          *a8 = v9;
        }
        else
        {
          v20 = BmlFillPathModalityFromVidPn(v21, (struct _D3DKMT_GETPATHSMODALITY *)a3);
          if ( v20 >= 0 )
          {
            v23 = 0;
            v24 = *(_QWORD *)(i + 252);
            for ( i = v24; v23 < *(unsigned __int16 *)(a3 + 20); ++v23 )
            {
              v25 = 216LL * v23;
              if ( __PAIR64__(HIDWORD(i), v24) == *(_QWORD *)(v25 + a3 + 56)
                && BmlIsPrimaryClonePath((const struct _D3DKMT_GETPATHSMODALITY *)a3, v23) )
              {
                if ( !*(_QWORD *)(v25 + a3 + 224) )
                {
                  v26 = operator new[](0xF4uLL, 0x63644356u, PagedPool);
                  *(_QWORD *)(v25 + a3 + 224) = v26;
                  if ( !v26 )
                  {
                    v51 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
                    WdLogEvent5_WdLowResource(v51);
                    v20 = -1073741670;
                    break;
                  }
                }
                v53 = *(_DWORD **)(v25 + a3 + 224);
                v20 = sub_1C00A72DC((__int64)v21, *(_DWORD *)(v25 + a3 + 64), v53);
                if ( v20 < 0 )
                  break;
                v33 = *(unsigned int *)(v25 + a3 + 176);
                v53[58] = v33;
                ConvertDMMScalingToGdiScaling(v33, v53 + 59, v31, v32);
                if ( (*(_DWORD *)(v25 + a3 + 48) & 0x20000) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(v25 + a3 + 224) + 172LL) = *(_DWORD *)(v25 + a3 + 188);
                  *(_DWORD *)(*(_QWORD *)(v25 + a3 + 224) + 176LL) = *(_DWORD *)(v25 + a3 + 192);
                }
              }
            }
          }
        }
      }
    }
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)va, 0LL);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v54 + 40));
  sub_1C00A68CC((void **)&v56);
  return (unsigned int)v20;
}
