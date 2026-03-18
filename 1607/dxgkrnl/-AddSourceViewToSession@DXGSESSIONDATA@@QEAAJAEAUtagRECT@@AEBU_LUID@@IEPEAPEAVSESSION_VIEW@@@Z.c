/*
 * XREFs of ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C007BBF0
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?IsEqualRect@@YAEAEBUtagRECT@@0@Z @ 0x1C0027D20 (-IsEqualRect@@YAEAEBUtagRECT@@0@Z.c)
 *     ?AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z @ 0x1C007AC20 (-AddDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@E@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x1C007BCE4 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddSourceViewToSession(
        DXGSESSIONDATA *this,
        struct tagRECT *a2,
        const struct _LUID *a3,
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
  char *v16; // r9
  char *v17; // rax
  __int64 v18; // rcx
  struct tagRECT v19; // xmm0
  _QWORD *v20; // rax
  char **v21; // rcx
  char *v22; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  char **v29; // r8
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx

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
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v25, v26, v27);
      v28[3] = v6;
      v28[4] = a3->HighPart;
      v28[5] = a3->LowPart;
      v28[7] = -1071774953LL;
      v28[6] = this;
      return 3223192343LL;
    }
LABEL_14:
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v24[3] = v6;
    v24[4] = a3->HighPart;
    v24[5] = a3->LowPart;
    v24[6] = this;
    v24[7] = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  v14 = (char *)this + 18552;
  for ( i = (char *)*((_QWORD *)this + 2319); i != v14; i = *v29 )
  {
    if ( IsEqualRect(a2, (const struct tagRECT *)i + 1) )
      goto LABEL_6;
  }
  v16 = 0LL;
LABEL_6:
  if ( v16 )
    goto LABEL_12;
  v17 = (char *)operator new(0x40uLL, 0x4B677844u, PagedPool);
  v16 = v17;
  if ( v17 )
  {
    *(_QWORD *)v17 = this;
    v19 = *a2;
    *((_DWORD *)v17 + 10) = 0;
    *(struct tagRECT *)(v17 + 24) = v19;
    v20 = v17 + 48;
    v20[1] = v20;
    *v20 = v20;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v21 = (char **)*((_QWORD *)this + 2320);
    v22 = v16 + 8;
    if ( *v21 != v14 )
      __fastfail(3u);
    *(_QWORD *)v22 = v14;
    *((_QWORD *)v16 + 2) = v21;
    *v21 = v22;
    *((_QWORD *)this + 2320) = v22;
LABEL_12:
    SESSION_VIEW::AddDisplaySource((SESSION_VIEW *)v16, v12, a5);
    return 0LL;
  }
  v30 = WdLogNewEntry5_WdLowResource(v18);
  v31 = (_QWORD *)(v30 + 24);
  do
  {
    v32 = *(&a2->left + v11++);
    *v31++ = v32;
  }
  while ( v11 < 4 );
  *(_QWORD *)(v30 + 56) = this;
  WdLogEvent5_WdLowResource(v30);
  return 3221225495LL;
}
