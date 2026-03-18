/*
 * XREFs of BmlGetNextBestTargetMode @ 0x1C0098D10
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C0099D04 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
 *     BmlPinNextBestTargetMode @ 0x1C009AFAC (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00036A0 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     BmlCompareTargetModes @ 0x1C0098EC8 (BmlCompareTargetModes.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C0098FC0 (BmlDoesTargetModeObeyConstraint.c)
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
  char v15; // r13
  __int64 v16; // r15
  struct DMMVIDPNSOURCEMODE *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r9d
  unsigned int v31; // r8d
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+68h] [rbp+10h]

  v36 = a2;
  v8 = a3;
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v15 = 0;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a6;
  if ( !a4 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( *(_QWORD *)(a5 + 144) )
  {
    v16 = 0LL;
    *a7 = -1;
    if ( a6 == -1 || (v16 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)(a4 + 3), a6)) != 0 )
    {
      v17 = 0LL;
      v18 = 104LL * v8;
      *(_QWORD *)(v18 + a1 + 100) = 0LL;
      v19 = *(_QWORD *)(a4[14] + 96LL);
      if ( *(_DWORD *)(v19 + 76) == 15 )
      {
        WdLogNewEntry5_WdTrace(v19, v11, v13, v14);
        v15 = 1;
      }
      v20 = a4 + 6;
      if ( (_QWORD *)*v20 != v20 )
      {
        NextMode = (struct DMMVIDPNSOURCEMODE *)(*v20 - 8LL);
        if ( NextMode )
        {
          do
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v11, v13, v14);
            v22[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
            v22[4] = *((unsigned int *)NextMode + 21);
            v22[5] = *((unsigned int *)NextMode + 22);
            v25 = *((unsigned int *)NextMode + 23);
            v22[6] = v25;
            v22[7] = *((unsigned int *)NextMode + 24);
            ++*(_DWORD *)(v18 + a1 + 100);
            if ( NextMode == (struct DMMVIDPNSOURCEMODE *)v16
              || (LOBYTE(v24) = v15, !(unsigned __int8)BmlDoesTargetModeObeyConstraint(a1, v8, NextMode, v24)) )
            {
              WdLogNewEntry5_WdTrace(v25, v22, v23, v24);
            }
            else
            {
              ++*(_DWORD *)(v18 + a1 + 104);
              if ( (unsigned int)BmlCompareTargetModes(a1, v36, v8, (_DWORD)NextMode, (__int64)v17, v15) == 1
                && (!v16 || (unsigned int)BmlCompareTargetModes(a1, v36, v8, (_DWORD)NextMode, v16, v15) == -1) )
              {
                WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
                v17 = NextMode;
              }
            }
            NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)a4, NextMode);
          }
          while ( NextMode );
          if ( v17 )
          {
            v30 = *((_DWORD *)v17 + 22);
            v31 = *((_DWORD *)v17 + 21);
            *a7 = *((_DWORD *)v17 + 6);
            DxgkLogCodePointPacket(0x21u, v8, v31, v30);
            return 0LL;
          }
        }
      }
      v33 = -1071774970;
    }
    else
    {
      v33 = -1071774959;
    }
    WdLogNewEntry5_WdTrace(v19, v11, v13, v14);
    return v33;
  }
  else
  {
    v35 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v35 + 32) = v8;
    *(_QWORD *)(v35 + 24) = a5;
    WdLogEvent5_WdAssertion(v35);
    return 3223192328LL;
  }
}
