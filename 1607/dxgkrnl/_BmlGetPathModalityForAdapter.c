/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C00BCBF8
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00BCB40 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C007E4E4 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0082978 (ConvertDMMScalingToGdiScaling.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00BBCC4 (_BmlLogDiagnosticsPacket.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BC524 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00BC7D8 (-BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     FillDevmodeFromVidPn @ 0x1C00BC83C (FillDevmodeFromVidPn.c)
 *     __BmlGetPathModalityForAdapter_::_2_::_AUTO::__AUTO @ 0x1C00BCE94 (__BmlGetPathModalityForAdapter_--_2_--_AUTO--__AUTO.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00BCEAC (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 */

__int64 BmlGetPathModalityForAdapter(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
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
  unsigned __int8 *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r13d
  __int64 v26; // rbx
  __int64 v27; // r12
  PVOID v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r12
  char *v38; // r15
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r14
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  unsigned __int16 v49; // [rsp+20h] [rbp-20h]
  _DWORD *v50; // [rsp+30h] [rbp-10h]
  __int64 v51; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int16 v52; // [rsp+80h] [rbp+40h]
  struct BML_VIDPN_PATH_ORDER *v53; // [rsp+90h] [rbp+50h] BYREF
  __int64 i; // [rsp+98h] [rbp+58h]
  struct DMMVIDPN *v55; // [rsp+C0h] [rbp+80h] BYREF
  va_list va; // [rsp+C0h] [rbp+80h]
  va_list va1; // [rsp+C8h] [rbp+88h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v55 = va_arg(va1, struct DMMVIDPN *);
  i = a4;
  v52 = a1;
  v8 = v55;
  v9 = 0LL;
  *(_BYTE *)v55 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v39);
  }
  v13 = *(_QWORD *)(a4 + 2128);
  v53 = 0LL;
  v14 = *(struct VIDPN_MGR **)(v13 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v51, (__int64)v14);
  v55 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v14, (__int64 *)va);
  v20 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = ClientVidPn;
  }
  else
  {
    v49 = a2;
    v21 = v55;
    v20 = BmlPreparePathOrderAndVidPn(&v53, v55, (const struct _D3DKMT_GETPATHSMODALITY *)a3, v52, v49, a7);
    if ( v20 >= 0 )
    {
      v22 = (unsigned __int8 *)v53;
      v20 = BmlFunctionalizeVidPn(v53, v21);
      if ( v20 < 0 )
      {
        *(_BYTE *)v8 = 1;
        if ( a5 )
        {
          if ( v21 )
          {
            v40 = BmlLogDiagnosticsPacket((DXGDIAGNOSTICS **)v14, a6, (__int64)v21, v22);
            v45 = v40;
            if ( v40 < 0 )
            {
              v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
              v46[3] = v21;
              v46[4] = v22;
              v46[5] = v45;
              WdLogEvent5_WdWarning(v46);
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
              v34 = BmlLogDiagnosticsPacket((DXGDIAGNOSTICS **)v14, a6, (__int64)v21, v22);
              v37 = v34;
              if ( v34 < 0 )
              {
                v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v23, v24);
                v47[3] = v21;
                v47[4] = v22;
                v47[5] = v37;
                WdLogEvent5_WdWarning(v47);
              }
            }
          }
        }
        if ( a8 )
        {
          v55 = 0LL;
          v38 = (char *)v21 + 88;
          if ( v38 )
            v9 = v38 - 88;
          *a8 = v9;
        }
        else
        {
          v20 = BmlFillPathModalityFromVidPn(v21, (struct _D3DKMT_GETPATHSMODALITY *)a3, v23, v24);
          if ( v20 >= 0 )
          {
            v25 = 0;
            v26 = *(_QWORD *)(i + 268);
            for ( i = v26; v25 < *(unsigned __int16 *)(a3 + 20); ++v25 )
            {
              v27 = 216LL * v25;
              if ( __PAIR64__(HIDWORD(i), v26) == *(_QWORD *)(v27 + a3 + 56)
                && BmlIsPrimaryClonePath((const struct _D3DKMT_GETPATHSMODALITY *)a3, v25) )
              {
                if ( !*(_QWORD *)(v27 + a3 + 224) )
                {
                  v28 = operator new(0xF4uLL, 0x63644356u, PagedPool);
                  *(_QWORD *)(v27 + a3 + 224) = v28;
                  if ( !v28 )
                  {
                    v48 = WdLogNewEntry5_WdLowResource(v29);
                    WdLogEvent5_WdLowResource(v48);
                    v20 = -1073741670;
                    break;
                  }
                }
                v50 = *(_DWORD **)(v27 + a3 + 224);
                v20 = FillDevmodeFromVidPn((__int64)v21, *(_DWORD *)(v27 + a3 + 64), v50);
                if ( v20 < 0 )
                  break;
                v32 = *(unsigned int *)(v27 + a3 + 180);
                v50[58] = v32;
                ConvertDMMScalingToGdiScaling(v32, v50 + 59, v30, v31);
                if ( (*(_DWORD *)(v27 + a3 + 48) & 0x20000) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(v27 + a3 + 224) + 172LL) = *(_DWORD *)(v27 + a3 + 192);
                  *(_DWORD *)(*(_QWORD *)(v27 + a3 + 224) + 176LL) = *(_DWORD *)(v27 + a3 + 196);
                }
              }
            }
          }
        }
      }
    }
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)va, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40));
  _BmlGetPathModalityForAdapter_::_2_::_AUTO::__AUTO(&v53);
  return (unsigned int)v20;
}
