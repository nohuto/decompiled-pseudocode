/*
 * XREFs of xxxDDETrackPostHook @ 0x14026E294
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x140211B4C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1402CD650 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CDC68 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CDD30 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1402D81A4 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1402D833C (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1402EFAA8 (xxxMessageEvent.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, unsigned int *a4)
{
  struct tagDDECONV *DdeConv; // rdi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct tagWND *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // rax
  struct tagFREELIST *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v23[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+70h] [rbp-28h]

  DdeConv = 0LL;
  v10 = 2;
  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66680) & 0x4000000) != 0 )
  {
    v11 = *a1;
    v24 = 0LL;
    memset(v23, 0, sizeof(v23));
    if ( (_DWORD)v11 == 994 || (_DWORD)v11 == 996 || (_DWORD)v11 == 997 || (unsigned int)(v11 - 999) < 2 )
      xxxClientGetDDEHookData(v11, *(_QWORD *)a4, v23);
    else
      v23[0] = _mm_unpacklo_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128(*a4), (__m128i)0LL), (__m128i)0LL);
    xxxMessageEvent((_DWORD)a2, *a1, a3, *(_QWORD *)a4, 0x4000000, (__int64)v23);
  }
  if ( *((_QWORD *)PtiCurrent(v9) + 57) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 456LL) )
  {
    if ( *a1 == 992 )
      return 0;
    v12 = (struct tagWND *)ValidateHwnd(a3);
    if ( v12 )
    {
      DdeConv = FindDdeConv(v12, a2);
      if ( DdeConv )
      {
        if ( PtiCurrent(v13) != *((struct tagTHREADINFO **)DdeConv + 2) )
        {
          v15 = PtiCurrent(v14);
          v14 = 1024LL;
          if ( *((_WORD *)v15 + 332) != 1024 )
          {
            UserSetLastError(1408);
            return 0;
          }
        }
        v16 = PtiCurrent(v14);
        Win32HM_LockIntoThread<0>((__int64)v16, (__int64)DdeConv, BugCheckParameter3);
        v17 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
        *((_QWORD *)DdeConv + 9) = 0LL;
        xxxFreeListFree(v17);
        if ( (*(_BYTE *)(_HMPheFromObject(DdeConv) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)DdeConv + 20) & 6) != 0 )
        {
          v10 = 1;
        }
        else
        {
          v18 = *((_QWORD *)DdeConv + 7);
          if ( v18 )
            v19 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *, struct tagDDECONV *))(v18 + 32))(
                    a1,
                    a4,
                    DdeConv);
          else
            v19 = (*((_DWORD *)DdeConv + 20) & 1) != 0
                ? xxxUnexpectedServerPost(a1, (__int64 *)a4, DdeConv)
                : xxxUnexpectedClientPost(a1, (__int64 *)a4, DdeConv);
          v10 = v19;
        }
        Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
      }
      else
      {
        v10 = *a1 == 993;
      }
    }
    else
    {
      v10 = (*a1 == 993) + 1;
    }
    if ( v10 == 1 && (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v13) + 130, 0, 0) & 1) == 0 )
    {
      v20 = 0x8000LL;
      switch ( (unsigned __int16)*a1 )
      {
        case 0x3E2u:
          v20 = 33025LL;
          break;
        case 0x3E3u:
          break;
        case 0x3E4u:
          v20 = 32769LL;
          break;
        default:
          if ( (unsigned __int16)*a1 != 997 )
          {
            if ( (unsigned __int16)*a1 == 998 )
              break;
            if ( (unsigned __int16)*a1 != 999 )
            {
              if ( (unsigned __int16)*a1 != 1000 )
                return v10;
              v20 = 34816LL;
              break;
            }
          }
          v20 = 32899LL;
          break;
      }
      if ( DdeConv )
      {
        xxxClientFreeDDEHandle(*(_QWORD *)a4, v20);
        return 3;
      }
    }
  }
  return v10;
}
