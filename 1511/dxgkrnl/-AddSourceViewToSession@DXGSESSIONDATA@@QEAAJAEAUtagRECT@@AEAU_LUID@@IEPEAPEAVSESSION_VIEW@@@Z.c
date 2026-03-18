/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C009F048
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C00211FC (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C009DBC0 (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z @ 0x1C009F13C (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        struct _LUID *a3,
        unsigned int a4,
        char a5)
{
  __int64 v6; // rbp
  struct DISPLAY_SOURCE *OwnedDisplaySource; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct DISPLAY_SOURCE *v12; // r15
  __int64 v13; // rcx
  char *v14; // rdi
  char *i; // r8
  SESSION_VIEW *v16; // r9
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct tagRECT v21; // xmm0
  _QWORD *v22; // rax
  char **v23; // rcx
  char *v24; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  char **v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rcx

  v6 = a4;
  OwnedDisplaySource = DXGSESSIONDATA::GetOwnedDisplaySource(this, a3, a4);
  v11 = 0LL;
  v12 = OwnedDisplaySource;
  if ( !OwnedDisplaySource )
    goto LABEL_14;
  v13 = *((_QWORD *)OwnedDisplaySource + 6);
  if ( v13 )
  {
    if ( IsEqualRect((const struct tagRECT *)(v13 + 24), a2) )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v27, v28, v29);
      v30[3] = v6;
      v30[4] = a3->HighPart;
      v30[5] = a3->LowPart;
      v30[7] = -1071774953LL;
      v30[6] = this;
      return 3223192343LL;
    }
LABEL_14:
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v26[3] = v6;
    v26[4] = a3->HighPart;
    v26[5] = a3->LowPart;
    v26[6] = this;
    v26[7] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v14 = (char *)this + 18576;
  for ( i = (char *)*((_QWORD *)this + 2322); i != v14; i = *v31 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      goto LABEL_6;
  }
  v16 = 0LL;
LABEL_6:
  if ( v16 )
    goto LABEL_12;
  v17 = (char *)operator new[](0x40uLL, 0x4B677844u, PagedPool);
  v16 = (SESSION_VIEW *)v17;
  if ( v17 )
  {
    *(_QWORD *)v17 = this;
    v21 = *a2;
    *((_DWORD *)v17 + 10) = 0;
    *(struct tagRECT *)(v17 + 24) = v21;
    v22 = v17 + 48;
    v22[1] = v22;
    *v22 = v22;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v23 = (char **)*((_QWORD *)this + 2323);
    v24 = (char *)v16 + 8;
    *((_QWORD *)v16 + 1) = v14;
    *((_QWORD *)v16 + 2) = v23;
    if ( *v23 != v14 )
      __fastfail(3u);
    *v23 = v24;
    *((_QWORD *)this + 2323) = v24;
LABEL_12:
    SESSION_VIEW::AddDisplaySource(v16, v12, a5);
    return 0LL;
  }
  v32 = WdLogNewEntry5_WdLowResource(v19, v18, v20, 0LL);
  v33 = (_QWORD *)(v32 + 24);
  do
  {
    v34 = *(&a2->left + v11++);
    *v33++ = v34;
  }
  while ( v11 < 4 );
  *(_QWORD *)(v32 + 56) = this;
  WdLogEvent5_WdLowResource(v32);
  return 3221225495LL;
}
