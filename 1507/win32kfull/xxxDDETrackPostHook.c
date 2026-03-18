/*
 * XREFs of xxxDDETrackPostHook @ 0x1C01EBDA4
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01EA730 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01EB3AC (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EB930 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01EBA04 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0214A98 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1C0214C10 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0239504 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  struct tagWND *v14; // rcx
  struct tagDDECONV *DdeConv; // rax
  __int64 v16; // rcx
  struct tagFREELIST *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  _QWORD v24[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v25[7]; // [rsp+48h] [rbp-50h] BYREF

  v5 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v10 & MonitorFlags) != 0 )
  {
    memset(v25, 0, sizeof(v25));
    v11 = *a1;
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v25);
    }
    else
    {
      v12 = *(unsigned __int16 *)a4;
      LODWORD(v25[2]) = 0;
      v25[0] = v12;
      v25[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, *a1, a3, (unsigned int)*a4, v10, (__int64)v25);
  }
  if ( *(_QWORD *)(gptiCurrent + 384LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 384LL) )
    return 2;
  if ( *a1 == 992 )
    return 0;
  v14 = (struct tagWND *)ValidateHwnd(a3);
  if ( !v14 )
  {
    if ( *a1 == 993 )
      return 2;
LABEL_16:
    v13 = 1;
    goto LABEL_37;
  }
  DdeConv = FindDdeConv(v14, a2);
  v5 = (__int64)DdeConv;
  if ( !DdeConv )
  {
    if ( *a1 != 993 )
      return 0;
    goto LABEL_16;
  }
  if ( a5 && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL) && (*(_DWORD *)(*(_QWORD *)(v16 + 16) + 576LL) & 0x40000) == 0 )
    return 0;
  if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 560LL) != 1024 )
  {
    UserSetLastError(1408);
    return 0;
  }
  v24[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v24;
  v24[1] = DdeConv;
  ++*((_DWORD *)DdeConv + 2);
  v17 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
  *((_QWORD *)DdeConv + 9) = 0LL;
  xxxFreeListFree(v17);
  v19 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v5;
  LOBYTE(v19) = *(_BYTE *)(v19 + gSharedInfo[1] + 17);
  if ( (v19 & 1) != 0 || *a1 != 993 && (*(_DWORD *)(v5 + 80) & 6) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v20 = *(_QWORD *)(v5 + 56);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(unsigned int *, void **, __int64))(v20 + 32))(a1, a4, v5);
    }
    else if ( (*(_DWORD *)(v5 + 80) & 1) != 0 )
    {
      v21 = xxxUnexpectedServerPost(a1, a4, (struct tagDDECONV *)v5);
    }
    else
    {
      v21 = xxxUnexpectedClientPost(a1, a4, (struct tagDDECONV *)v5);
    }
    v13 = v21;
  }
  v5 = ThreadUnlock1(v19, v18);
  if ( v13 == 1 )
  {
LABEL_37:
    if ( (*(_DWORD *)(gptiCurrent + 448LL) & 1) != 0 )
      return v13;
    v22 = 0x8000LL;
    switch ( (unsigned __int16)*a1 )
    {
      case 0x3E2u:
        v22 = 33025LL;
        break;
      case 0x3E3u:
        break;
      case 0x3E4u:
        v22 = 32769LL;
        break;
      default:
        if ( (unsigned __int16)*a1 != 997 )
        {
          if ( (unsigned __int16)*a1 == 998 )
            break;
          if ( (unsigned __int16)*a1 != 999 )
          {
            if ( (unsigned __int16)*a1 != 1000 )
              return v13;
            v22 = 34816LL;
            break;
          }
        }
        v22 = 32899LL;
        break;
    }
    if ( v5 )
    {
      xxxClientFreeDDEHandle(*a4, v22);
      return 3;
    }
  }
  return v13;
}
