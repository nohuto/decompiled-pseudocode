/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C00BE624
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C00BD274 (BmlPinNextBestTargetMode.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00BF450 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0001E0C (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0003190 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00BE7E4 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModes @ 0x1C00BE8E4 (BmlCompareTargetModes.c)
 */

__int64 __fastcall BmlGetNextBestTargetMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned __int16 v8; // bp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r12
  __int64 v16; // r15
  struct DMMVIDPNSOURCEMODE *v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  _QWORD *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // [rsp+68h] [rbp+10h]

  v37 = a2;
  v8 = a3;
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v15 = 0;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a6;
  if ( !a4 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( *(_QWORD *)(a5 + 144) )
  {
    v16 = 0LL;
    *a7 = -1;
    if ( a6 == -1 || (v16 = IndexedSet<DMMVIDPNTARGETMODE>::FindById((__int64)(a4 + 3), a6)) != 0 )
    {
      v17 = 0LL;
      v18 = 104LL * v8;
      *(_QWORD *)(a1 + v18 + 100) = 0LL;
      v19 = *(_QWORD *)(a4[14] + 96LL);
      v20 = *(_DWORD *)(v19 + 76);
      if ( v20 >= 15 && v20 <= 16 )
      {
        WdLogNewEntry5_WdTrace(v19, v11, v13, v14);
        v15 = 1;
      }
      v21 = a4 + 6;
      if ( (_QWORD *)*v21 != v21 )
      {
        NextMode = (struct DMMVIDPNSOURCEMODE *)(*v21 - 8LL);
        if ( NextMode )
        {
          do
          {
            v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v11, v13, v14);
            v23[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
            v23[4] = *((unsigned int *)NextMode + 21);
            v23[5] = *((unsigned int *)NextMode + 22);
            v26 = *((unsigned int *)NextMode + 23);
            v23[6] = v26;
            v23[7] = *((unsigned int *)NextMode + 24);
            ++*(_DWORD *)(a1 + v18 + 100);
            if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v16
              || (LOBYTE(v25) = v15, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, v8, NextMode, v25)) )
            {
              WdLogNewEntry5_WdTrace(v26, v23, v24, v25);
            }
            else
            {
              ++*(_DWORD *)(a1 + v18 + 104);
              if ( (unsigned int)BmlCompareTargetModes(a1, v37, v8, (_DWORD)NextMode, (__int64)v17, v15) == 1
                && (!v16 || (unsigned int)BmlCompareTargetModes(a1, v37, v8, (_DWORD)NextMode, v16, v15) == -1) )
              {
                WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
                v17 = NextMode;
              }
            }
            NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)a4, NextMode);
          }
          while ( NextMode );
          if ( v17 )
          {
            v31 = *((_DWORD *)v17 + 22);
            v32 = *((_DWORD *)v17 + 21);
            *a7 = *((_DWORD *)v17 + 6);
            DxgkLogCodePointPacket(0x21u, v8, v32, v31);
            return 0LL;
          }
        }
      }
      v34 = -1071774970;
    }
    else
    {
      v34 = -1071774959;
    }
    WdLogNewEntry5_WdTrace(v19, v11, v13, v14);
    return v34;
  }
  else
  {
    v36 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v36 + 32) = v8;
    *(_QWORD *)(v36 + 24) = a5;
    WdLogEvent5_WdAssertion(v36);
    return 3223192328LL;
  }
}
