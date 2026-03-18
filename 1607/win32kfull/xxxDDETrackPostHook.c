/*
 * XREFs of xxxDDETrackPostHook @ 0x1C01E2E50
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E17C0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01E243C (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E29D0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E2AA4 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C020D6B0 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1C020D890 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C0231780 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4, int a5)
{
  __int64 v5; // rdi
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  struct tagWND *v14; // rax
  struct tagDDECONV *DdeConv; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  struct tagFREELIST *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  _QWORD v27[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v28[7]; // [rsp+48h] [rbp-50h] BYREF

  v5 = 0LL;
  v10 = a5 != 0 ? 0x2000000 : 0x4000000;
  if ( (v10 & MonitorFlags) != 0 )
  {
    memset(v28, 0, sizeof(v28));
    v11 = *a1;
    if ( (_DWORD)v11 == 994
      || (unsigned int)v11 > 0x3E3
      && ((unsigned int)v11 <= 0x3E5 || (unsigned int)v11 > 0x3E6 && (unsigned int)v11 <= 0x3E8) )
    {
      xxxClientGetDDEHookData(v11, *a4, v28);
    }
    else
    {
      v12 = *(unsigned __int16 *)a4;
      LODWORD(v28[2]) = 0;
      v28[0] = v12;
      v28[1] = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, *a1, a3, (unsigned int)*a4, v10, (__int64)v28);
  }
  if ( *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 376LL) )
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
  if ( a5 && *(_QWORD *)(*((_QWORD *)DdeConv + 4) + 56LL) && (*(_DWORD *)(*(_QWORD *)(v19 + 16) + 568LL) & 0x40000) == 0 )
    return 0;
  if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 552LL) != 1024 )
  {
    UserSetLastError(1408LL);
    return 0;
  }
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = DdeConv;
  ++*((_DWORD *)DdeConv + 2);
  v20 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
  *((_QWORD *)DdeConv + 9) = 0LL;
  xxxFreeListFree(v20, v16, v17, v18);
  v22 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v5;
  LOBYTE(v22) = *(_BYTE *)(v22 + gSharedInfo[1] + 17);
  if ( (v22 & 1) != 0 || *a1 != 993 && (*(_DWORD *)(v5 + 80) & 6) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v23 = *(_QWORD *)(v5 + 56);
    if ( v23 )
    {
      v24 = (*(__int64 (__fastcall **)(unsigned int *, void **, __int64))(v23 + 32))(a1, a4, v5);
    }
    else if ( (*(_DWORD *)(v5 + 80) & 1) != 0 )
    {
      v24 = xxxUnexpectedServerPost(a1, a4, (struct tagDDECONV *)v5);
    }
    else
    {
      v24 = xxxUnexpectedClientPost(a1, a4, (struct tagDDECONV *)v5);
    }
    v13 = v24;
  }
  v5 = ThreadUnlock1(v22, v21);
  if ( v13 == 1 )
  {
LABEL_37:
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
      return v13;
    v25 = 0x8000LL;
    switch ( (unsigned __int16)*a1 )
    {
      case 0x3E2u:
        v25 = 33025LL;
        break;
      case 0x3E3u:
        break;
      case 0x3E4u:
        v25 = 32769LL;
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
            v25 = 34816LL;
            break;
          }
        }
        v25 = 32899LL;
        break;
    }
    if ( v5 )
    {
      xxxClientFreeDDEHandle(*a4, v25);
      return 3;
    }
  }
  return v13;
}
