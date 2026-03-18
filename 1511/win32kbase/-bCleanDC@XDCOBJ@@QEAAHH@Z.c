/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     GreCleanDC @ 0x1C0042200 (GreCleanDC.c)
 *     ?vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z @ 0x1C00C0584 (-vFixPublicDCWithPrivateReferences@XDCOBJ@@QEAAXK@Z.c)
 * Callees:
 *     RFONTOBJ_vConstructPRFONTWrap_0 @ 0x1C0001090 (RFONTOBJ_vConstructPRFONTWrap_0.c)
 *     IsRFONTOBJ_vConstructPRFONTSupported_0 @ 0x1C0001098 (IsRFONTOBJ_vConstructPRFONTSupported_0.c)
 *     RFONTOBJ_dtHelperWrap_0 @ 0x1C00010A0 (RFONTOBJ_dtHelperWrap_0.c)
 *     IsRFONTOBJ_dtHelperSupported_0 @ 0x1C00010A8 (IsRFONTOBJ_dtHelperSupported_0.c)
 *     IsXDCOBJ_vSetDefaultFontSupported_0 @ 0x1C00010D0 (IsXDCOBJ_vSetDefaultFontSupported_0.c)
 *     XDCOBJ_vSetDefaultFontWrap_0 @ 0x1C00010D8 (XDCOBJ_vSetDefaultFontWrap_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreDCSelectPen @ 0x1C0048F10 (GreDCSelectPen.c)
 *     GreSelectPalette @ 0x1C0049120 (GreSelectPalette.c)
 *     GreDCSelectBrush @ 0x1C006E4B0 (GreDCSelectBrush.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00B3280 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B32E8 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00B3454 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B5970 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z @ 0x1C00B5B74 (-RECALTLOCKSTACKBACKTRACE@@YAXIPEAU_BASEOBJECT@@@Z.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(DC **this, int a2)
{
  DC *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebx
  DC *v7; // rcx
  int v8; // r15d
  __int16 *v9; // rbx
  DC *v10; // rbx
  struct HPATH__ *v11; // rdx
  DC *v12; // rcx
  HPALETTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // xmm0
  __int128 *v18; // rcx
  __int128 *v19; // rax
  __int128 v20; // xmm0
  _DWORD *v21; // rsi
  __int64 v22; // rdi
  char *v23; // rbx
  signed __int32 v24; // eax
  __int64 v25; // rdi
  _DWORD *v26; // rsi
  __int64 v27; // rdi
  char *v28; // rbx
  signed __int32 v29; // eax
  __int64 v30; // rdi
  DC *v31; // rax
  _DWORD *SystemArgument2; // rbx
  _DWORD *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rdi
  signed __int32 v36; // eax
  __int64 v37; // rsi
  DC *v38; // rdx
  __int64 v39; // rcx
  int *v40; // rax
  int v41; // eax
  DC *v42; // rax
  unsigned int v44; // [rsp+2Ch] [rbp-ADh]
  unsigned int v45; // [rsp+44h] [rbp-95h]
  unsigned int v46; // [rsp+5Ch] [rbp-7Dh]
  _BYTE v47[8]; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v48[16]; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v49[8]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v50; // [rsp+88h] [rbp-51h]
  __int64 v51; // [rsp+140h] [rbp+67h] BYREF
  __int16 *v52; // [rsp+150h] [rbp+77h] BYREF
  char v53; // [rsp+158h] [rbp+7Fh] BYREF

  v4 = *this;
  v5 = *((_QWORD *)v4 + 10);
  v6 = *(_DWORD *)(v5 + 8);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush(v4, *(_QWORD *)(v5 + 16));
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this);
  v7 = *this;
  if ( *(_DWORD *)(*((_QWORD *)*this + 10) + 308LL) != 1 || (v8 = 0, (*((_DWORD *)v7 + 66) & 1) != 0) )
    v8 = 1;
  if ( *((int *)v7 + 29) > 1 )
    GreRestoreDC(*(_QWORD *)v7, 1LL);
  if ( (struct _SINGLE_LIST_ENTRY *)*((_QWORD *)*this + 12) != WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    GreSelectPalette(*(HDC *)*this, dclevelDefault, 1);
  if ( *((_DWORD *)*this + 8) == 1 )
  {
    hbmSelectBitmap(*(_QWORD *)*this, qword_1C0103E98, 1, a2);
    *((_DWORD *)*this + 9) &= ~0x1000u;
  }
  *((_WORD *)*this + 1240) = -1;
  v9 = (__int16 *)*((_QWORD *)*this + 28);
  if ( v9 )
  {
    if ( v9 != (__int16 *)prgnDefault )
    {
      if ( v9[7] >= 0 )
      {
        Win32FreePool();
      }
      else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
      {
        Win32FreeToPagedLookasideListImpl_0();
      }
    }
    *((_QWORD *)*this + 28) = 0LL;
  }
  if ( *((_QWORD *)*this + 29) )
  {
    v52 = (__int16 *)*((_QWORD *)*this + 29);
    RGNOBJ::vDeleteRGNOBJ(&v52);
    *((_QWORD *)*this + 29) = 0LL;
  }
  v10 = *this;
  v11 = (struct HPATH__ *)*((_QWORD *)*this + 21);
  if ( v11 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v49, v11);
    if ( v50 && (*(_DWORD *)(v50 + 88) & 1) == 0 )
      DEC_SHARE_REF_CNT(v50);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v49);
    *((_QWORD *)v10 + 21) = 0LL;
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 19));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)*this + 20));
  DEC_SHARE_REF_CNT(*((_QWORD *)*this + 13));
  v12 = (DC *)*((_QWORD *)*this + 39);
  if ( v12 && v12 != (DC *)((char *)*this + 276) )
  {
    Win32FreePool();
    *((_QWORD *)*this + 39) = 0LL;
  }
  v13 = &dclevelDefault;
  v14 = 3LL;
  v15 = (__int64)*this + 88;
  v16 = 3LL;
  do
  {
    v15 += 128LL;
    v17 = *(_OWORD *)v13;
    v13 += 16;
    *(_OWORD *)(v15 - 128) = v17;
    *(_OWORD *)(v15 - 112) = *((_OWORD *)v13 - 7);
    *(_OWORD *)(v15 - 96) = *((_OWORD *)v13 - 6);
    *(_OWORD *)(v15 - 80) = *((_OWORD *)v13 - 5);
    *(_OWORD *)(v15 - 64) = *((_OWORD *)v13 - 4);
    *(_OWORD *)(v15 - 48) = *((_OWORD *)v13 - 3);
    *(_OWORD *)(v15 - 32) = *((_OWORD *)v13 - 2);
    *(_OWORD *)(v15 - 16) = *((_OWORD *)v13 - 1);
    --v16;
  }
  while ( v16 );
  *(_OWORD *)v15 = *(_OWORD *)v13;
  *(_OWORD *)(v15 + 16) = *((_OWORD *)v13 + 1);
  *(_QWORD *)(v15 + 32) = v13[4];
  v18 = (__int128 *)*((_QWORD *)*this + 10);
  v19 = (__int128 *)&DcAttrDefault;
  do
  {
    v18 += 8;
    v20 = *v19;
    v19 += 8;
    *(v18 - 8) = v20;
    *(v18 - 7) = *(v19 - 7);
    *(v18 - 6) = *(v19 - 6);
    *(v18 - 5) = *(v19 - 5);
    *(v18 - 4) = *(v19 - 4);
    *(v18 - 3) = *(v19 - 3);
    *(v18 - 2) = *(v19 - 2);
    *(v18 - 1) = *(v19 - 1);
    --v14;
  }
  while ( v14 );
  *v18 = *v19;
  v18[1] = v19[1];
  *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x12001Fu;
  v21 = (_DWORD *)*((_QWORD *)*this + 18);
  v22 = (unsigned __int16)*v21;
  v23 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v22;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v53);
  _m_prefetchw(v23 + 8);
  v24 = *((_DWORD *)v23 + 2);
  if ( (v23[15] & 0x20) != 0 )
    goto LABEL_51;
  while ( (v23[15] & 0x40) == 0 )
  {
    if ( (v24 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_42:
      _m_prefetchw(v23 + 8);
      v24 = *((_DWORD *)v23 + 2);
      if ( (v23[15] & 0x20) != 0 )
        goto LABEL_51;
    }
    else
    {
      if ( v24 != _InterlockedCompareExchange((volatile signed __int32 *)v23 + 2, v24 | 1, v24) || (v23[15] & 0x40) != 0 )
        goto LABEL_42;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v22) = 0LL;
      v23[15] |= 0x40u;
      _m_prefetchw(v23 + 8);
      v44 = *((_DWORD *)v23 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v23 + 2, v44);
      v24 = v44;
    }
  }
  v25 = 8 * v22;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v25, 0LL);
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*v21 + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTLOCKSTACKBACKTRACE(
      (unsigned __int16)*v21,
      *((struct _BASEOBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*v21));
  }
  ++v21[2];
  if ( (v23[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v25);
  }
  else
  {
    _m_prefetchw(v23 + 8);
    _InterlockedExchange((volatile __int32 *)v23 + 2, *((_DWORD *)v23 + 2) & 0xFFFFFFFE);
  }
LABEL_51:
  KeLeaveCriticalRegion();
  v26 = (_DWORD *)*((_QWORD *)*this + 19);
  v27 = (unsigned __int16)*v26;
  v28 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v27;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v48);
  _m_prefetchw(v28 + 8);
  v29 = *((_DWORD *)v28 + 2);
  if ( (v28[15] & 0x20) != 0 )
    goto LABEL_67;
  while ( (v28[15] & 0x40) == 0 )
  {
    if ( (v29 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
    }
    else if ( v29 == _InterlockedCompareExchange((volatile signed __int32 *)v28 + 2, v29 | 1, v29)
           && (v28[15] & 0x40) == 0 )
    {
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v27) = 0LL;
      v28[15] |= 0x40u;
      _m_prefetchw(v28 + 8);
      v45 = *((_DWORD *)v28 + 2) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)v28 + 2, v45);
      v29 = v45;
      continue;
    }
    _m_prefetchw(v28 + 8);
    v29 = *((_DWORD *)v28 + 2);
    if ( (v28[15] & 0x20) != 0 )
      goto LABEL_67;
  }
  v30 = 8 * v27;
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v30, 0LL);
  if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*v26 + 14) == 5
    && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
    && gpentHmgrAltStacks )
  {
    RECALTLOCKSTACKBACKTRACE(
      (unsigned __int16)*v26,
      *((struct _BASEOBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*v26));
  }
  ++v26[2];
  if ( (v28[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v30);
  }
  else
  {
    _m_prefetchw(v28 + 8);
    _InterlockedExchange((volatile __int32 *)v28 + 2, *((_DWORD *)v28 + 2) & 0xFFFFFFFE);
  }
LABEL_67:
  KeLeaveCriticalRegion();
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported_0() >= 0 )
    XDCOBJ_vSetDefaultFontWrap_0();
  if ( *((_QWORD *)*this + 6) == *(_QWORD *)gpDispInfo )
    *(_DWORD *)(*((_QWORD *)*this + 10) + 8LL) |= 0x10000u;
  v31 = *this;
  if ( v8 )
    *((_DWORD *)v31 + 66) |= 1u;
  else
    *((_DWORD *)v31 + 66) &= ~1u;
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v33 = (_DWORD *)*((_QWORD *)*this + 13);
  v34 = (unsigned __int16)*v33;
  v35 = 3 * v34;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v47);
  _m_prefetchw(&SystemArgument2[6 * v34 + 2]);
  v36 = SystemArgument2[6 * v34 + 2];
  while ( (SystemArgument2[6 * v34 + 3] & 0x20000000) == 0 )
  {
LABEL_75:
    if ( (SystemArgument2[6 * v34 + 3] & 0x40000000) != 0 )
    {
      v37 = 8 * v34;
      ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v37, 0LL);
      if ( *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*v33 + 14) == 5
        && HIDWORD(WPP_MAIN_CB.SecurityDescriptor)
        && gpentHmgrAltStacks )
      {
        RECALTLOCKSTACKBACKTRACE(
          (unsigned __int16)*v33,
          *((struct _BASEOBJECT **)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)*v33));
      }
      ++v33[2];
      if ( (SystemArgument2[2 * v35 + 3] & 0x40000000) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v37);
      }
      else
      {
        _m_prefetchw(&SystemArgument2[2 * v35 + 2]);
        _InterlockedExchange(&SystemArgument2[2 * v35 + 2], SystemArgument2[2 * v35 + 2] & 0xFFFFFFFE);
      }
      break;
    }
    if ( (v36 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
    }
    else if ( v36 == _InterlockedCompareExchange(&SystemArgument2[6 * v34 + 2], v36 | 1, v36)
           && (SystemArgument2[6 * v34 + 3] & 0x40000000) == 0 )
    {
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v34) = 0LL;
      HIBYTE(SystemArgument2[6 * v34 + 3]) |= 0x40u;
      _m_prefetchw(&SystemArgument2[6 * v34 + 2]);
      v46 = SystemArgument2[6 * v34 + 2] & 0xFFFFFFFE;
      _InterlockedExchange(&SystemArgument2[6 * v34 + 2], v46);
      v36 = v46;
      goto LABEL_75;
    }
    _m_prefetchw(&SystemArgument2[6 * v34 + 2]);
    v36 = SystemArgument2[6 * v34 + 2];
  }
  KeLeaveCriticalRegion();
  v51 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported_0() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap_0();
  *((_QWORD *)*this + 269) = 0LL;
  v38 = *this;
  v39 = (__int64)*this + 1416;
  if ( (*((_DWORD *)*this + 10) & 1) != 0 )
  {
    v40 = (int *)((char *)v38 + 1416);
  }
  else
  {
    v39 = (__int64)v38 + 1408;
    v40 = (int *)((char *)v38 + 1408);
  }
  v41 = *v40;
  *((_DWORD *)v38 + 389) = *(_DWORD *)(v39 + 4);
  *((_DWORD *)v38 + 388) = v41;
  v42 = *this;
  *((_DWORD *)v42 + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)*(_DWORD *)v42 + 15) |= 4u;
  if ( v51 )
  {
    if ( (*(_DWORD *)(v51 + 720) & 0x81) != 0 && (int)IsRFONTOBJ_dtHelperSupported_0() >= 0 )
      RFONTOBJ_dtHelperWrap_0();
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v51);
  }
  return 1LL;
}
