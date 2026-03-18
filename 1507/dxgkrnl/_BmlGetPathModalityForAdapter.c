/*
 * XREFs of _BmlGetPathModalityForAdapter @ 0x1C009B86C
 * Callers:
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C009BADC (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_D.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     __BmlGetPathModalityForAdapter_::_8_::_AUTO::__AUTO @ 0x1C0062D84 (__BmlGetPathModalityForAdapter_--_8_--_AUTO--__AUTO.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsFunctional@DMMVIDPN@@QEBAEI@Z @ 0x1C0088C20 (-IsFunctional@DMMVIDPN@@QEBAEI@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C009B690 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C009BD2C (ConvertDMMScalingToGdiScaling.c)
 *     FillDevmodeFromVidPn @ 0x1C009BF3C (FillDevmodeFromVidPn.c)
 *     ?BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C009BFC8 (-BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C009C02C (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _BmlLogDiagnosticsPacket @ 0x1C00ADC00 (_BmlLogDiagnosticsPacket.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        unsigned int a7,
        char **a8,
        DMMVIDPN *a9)
{
  DMMVIDPN *v9; // r12
  char *v10; // rdi
  unsigned __int16 v13; // r15
  __int64 v14; // rax
  struct VIDPN_MGR *v15; // r13
  __int64 v16; // r8
  __int64 v17; // r9
  int ClientVidPn; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // esi
  struct DMMVIDPN *v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  struct BML_VIDPN_PATH_ORDER *v27; // rbx
  unsigned int v28; // r13d
  __int64 v29; // rbx
  __int64 v30; // r12
  PVOID v31; // rax
  __int64 v32; // rcx
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
  __int64 v53; // [rsp+30h] [rbp-10h]
  __int64 v54; // [rsp+38h] [rbp-8h] BYREF
  __int16 v55; // [rsp+80h] [rbp+40h]
  struct BML_VIDPN_PATH_ORDER *v56; // [rsp+90h] [rbp+50h] BYREF
  __int64 i; // [rsp+98h] [rbp+58h]

  i = a4;
  v55 = a1;
  v9 = a9;
  v10 = 0LL;
  v13 = a2;
  *(_BYTE *)a9 = 0;
  if ( !*(_WORD *)(a3 + 20) )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v42);
  }
  v14 = *(_QWORD *)(a4 + 1976);
  v56 = 0LL;
  v15 = *(struct VIDPN_MGR **)(v14 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v54, (__int64)v15);
  a9 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v15, (__int64 *)&a9, v16, v17);
  v23 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v21, v22) + 24) = ClientVidPn;
  }
  else
  {
    v52 = v13;
    v24 = a9;
    v23 = BmlPreparePathOrderAndVidPn(&v56, a9, (const struct _D3DKMT_GETPATHSMODALITY *)a3, v55, v52, a7);
    if ( v23 >= 0 )
    {
      v27 = v56;
      v23 = BmlFunctionalizeVidPn(v56, v24, v25, v26);
      if ( v23 < 0 )
      {
        *(_BYTE *)v9 = 1;
        if ( a5 )
        {
          if ( v24 )
          {
            v43 = BmlLogDiagnosticsPacket(v15, a6, v24, v27);
            v48 = v43;
            if ( v43 < 0 )
            {
              v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
              v49[3] = v24;
              v49[4] = v27;
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
          if ( v24 )
          {
            if ( DMMVIDPN::IsFunctional(v24, -3) )
            {
              v35 = BmlLogDiagnosticsPacket(v15, a6, v24, v27);
              v40 = v35;
              if ( v35 < 0 )
              {
                v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
                v50[3] = v24;
                v50[4] = v27;
                v50[5] = v40;
                WdLogEvent5_WdWarning(v50);
              }
            }
          }
        }
        if ( a8 )
        {
          a9 = 0LL;
          v41 = (char *)v24 + 88;
          if ( v41 )
            v10 = v41 - 88;
          *a8 = v10;
        }
        else
        {
          v23 = BmlFillPathModalityFromVidPn(v24, (struct _D3DKMT_GETPATHSMODALITY *)a3);
          if ( v23 >= 0 )
          {
            v28 = 0;
            v29 = *(_QWORD *)(i + 252);
            for ( i = v29; v28 < *(unsigned __int16 *)(a3 + 20); ++v28 )
            {
              v30 = 216LL * v28;
              if ( __PAIR64__(HIDWORD(i), v29) == *(_QWORD *)(v30 + a3 + 56)
                && BmlIsPrimaryClonePath((const struct _D3DKMT_GETPATHSMODALITY *)a3, v28) )
              {
                if ( !*(_QWORD *)(v30 + a3 + 224) )
                {
                  v31 = operator new[](0xF4uLL, 0x63644356u, PagedPool);
                  *(_QWORD *)(v30 + a3 + 224) = v31;
                  if ( !v31 )
                  {
                    v51 = WdLogNewEntry5_WdLowResource(v32);
                    WdLogEvent5_WdLowResource(v51);
                    v23 = -1073741670;
                    break;
                  }
                }
                v53 = *(_QWORD *)(v30 + a3 + 224);
                v23 = FillDevmodeFromVidPn(v24, *(unsigned int *)(v30 + a3 + 64), v53);
                if ( v23 < 0 )
                  break;
                v33 = *(unsigned int *)(v30 + a3 + 176);
                *(_DWORD *)(v53 + 232) = v33;
                ConvertDMMScalingToGdiScaling(v33, v53 + 236);
                if ( (*(_DWORD *)(v30 + a3 + 48) & 0x20000) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(v30 + a3 + 224) + 172LL) = *(_DWORD *)(v30 + a3 + 188);
                  *(_DWORD *)(*(_QWORD *)(v30 + a3 + 224) + 176LL) = *(_DWORD *)(v30 + a3 + 192);
                }
              }
            }
          }
        }
      }
    }
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&a9, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v54 + 40));
  _BmlGetPathModalityForAdapter_::_8_::_AUTO::__AUTO((void **)&v56);
  return (unsigned int)v23;
}
