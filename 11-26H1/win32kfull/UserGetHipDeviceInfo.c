/*
 * XREFs of UserGetHipDeviceInfo @ 0x1402A91D0
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071770 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140071870 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1401D8E24 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct DEVICEINFO *i; // r14
  __int64 v16; // r15
  __int64 v17; // r10
  __int64 v18; // rbp
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // ecx
  __m128i v34[3]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v35; // [rsp+60h] [rbp+8h]

  v3 = 0;
  v4 = *a1 - 4;
  v6 = v4;
  v7 = 0;
  v35 = v4;
  UserEnterUserCritSec(a1, a2, a3);
  UserSessionState = W32GetUserSessionState(v9, v8);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16832));
  W32AcquirePushLockSharedEx(Lock, 0);
  v14 = W32GetUserSessionState(v13, v12);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v14 + 16832)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( (*((_DWORD *)i + 46) & 0x80u) == 0 )
      continue;
    v16 = *((_QWORD *)i + 57);
    v17 = *(_QWORD *)(v16 + 16);
    if ( v6 )
    {
      if ( v4 < 0x450 )
      {
        v3 = -1073741789;
        break;
      }
      v18 = 276LL * v7;
      a1[v18 + 1] = *(_DWORD *)(v16 + 24);
      a1[v18 + 2] = *(_DWORD *)(v17 + 1344);
      v19 = a1[v18 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v16 + 400) != 0LL ? 2 : 0);
      a1[v18 + 3] = v19;
      v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(4 * BYTE1(*(_DWORD *)(v16 + 368)))) & 4;
      a1[v18 + 3] = v20;
      v21 = v20 & 0xFFFC03FF | (*(unsigned __int8 *)(v16 + 776) << 10);
      a1[v18 + 3] = v21;
      v22 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(8 * (*(int *)(v16 + 368) >> 2))) & 8;
      a1[v18 + 3] = v22;
      v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(16 * (*(int *)(v16 + 368) >> 3))) & 0x10;
      a1[v18 + 3] = v23;
      v24 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(32 * (*(int *)(v16 + 368) >> 4))) & 0x20;
      a1[v18 + 3] = v24;
      v25 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v16 + 368) >> 5) << 6)) & 0x40;
      a1[v18 + 3] = v25;
      v26 = v25 ^ ((unsigned __int8)v25 ^ *(_DWORD *)(v16 + 368) & 0x80) & 0x80;
      a1[v18 + 3] = v26;
      v27 = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v16 + 368) >> 9) << 8)) & 0x100;
      a1[v18 + 3] = v27;
      a1[v18 + 3] = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v16 + 368) >> 10) << 9)) & 0x200;
      a1[v18 + 4] = *(_DWORD *)(v17 + 2128);
      *(_OWORD *)&a1[v18 + 5] = *(_OWORD *)(v17 + 2112);
      *(_QWORD *)&a1[v18 + 9] = *(_QWORD *)(v17 + 1896);
      a1[v18 + 11] = *(_DWORD *)(v17 + 1908);
      a1[v18 + 16] = *(_DWORD *)(v17 + 1988);
      *(_QWORD *)&a1[v18 + 19] = *(_QWORD *)(v17 + 2104);
      *(_QWORD *)&a1[v18 + 17] = *(_QWORD *)(v17 + 2096);
      RtlStringCchCopyW((char *)&a1[v18 + 85], 128LL, (char *)(v17 + 1604));
      RtlStringCchCopyW((char *)&a1[v18 + 149], 128LL, (char *)(v28 + 1348));
      v30 = *(_QWORD *)(v29 + 1336);
      if ( v30 )
      {
        v31 = ValidateHmonitorNoRip(v30);
        v32 = a1[v18 + 3];
        if ( v31 )
        {
          a1[v18 + 3] = v32 | 1;
          *(__m128i *)&a1[v18 + 12] = *GetMonitorRect(v34, v31);
LABEL_11:
          if ( *(_QWORD *)(v16 + 384) )
            RtlStringCbCopyUnicodeString((char *)&a1[v18 + 21], 0x100uLL, (const struct _UNICODE_STRING *)(v16 + 376));
          else
            LOWORD(a1[v18 + 21]) = 0;
          if ( *(_QWORD *)(v16 + 384) )
            RtlStringCbCopyUnicodeString((char *)&a1[v18 + 213], 0x100uLL, (const struct _UNICODE_STRING *)(v16 + 904));
          else
            LOWORD(a1[v18 + 213]) = 0;
          v6 = v35;
          v4 -= 1104;
          goto LABEL_18;
        }
      }
      else
      {
        v32 = a1[v18 + 3];
      }
      a1[v18 + 3] = v32 & 0xFFFFFFFE;
      *(_OWORD *)&a1[v18 + 12] = 0LL;
      goto LABEL_11;
    }
LABEL_18:
    ++v7;
  }
  W32ReleasePushLockSharedEx(Lock, 0LL);
  *a1 = 1104 * v7 + 4;
  UserLeaveUserCritSec();
  return v3;
}
