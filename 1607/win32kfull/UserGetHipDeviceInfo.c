/*
 * XREFs of UserGetHipDeviceInfo @ 0x1C01C85F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C00E43A0 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  unsigned int v6; // r12d
  BOOL v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct DEVICEINFO *v10; // r14
  _BOOL8 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rsi
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _OWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rcx
  char v36; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1 - 4;
  v6 = 0;
  v7 = *a1 != 4;
  UserEnterUserCritSec(a1, a2, a3);
  EnterDeviceInfoListCrit_(v8);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v36, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v10 = gpRimDevBackedDeviceInfoList;
  if ( gpRimDevBackedDeviceInfoList )
  {
    v11 = v7;
    do
    {
      if ( *((_DWORD *)v10 + 79) )
      {
        v12 = *((_QWORD *)v10 + 60);
        if ( v11 )
        {
          if ( v4 < 0x450 )
          {
            v3 = -1073741789;
            break;
          }
          v13 = 276LL * v6;
          a1[v13 + 1] = *(_DWORD *)(v12 + 24);
          a1[v13 + 2] = *(_DWORD *)(v12 + 868);
          a1[v13 + 3] ^= (a1[v13 + 3] ^ (2 * (*(_QWORD *)(v12 + 312) != 0LL))) & 2;
          v14 = a1[v13 + 3] ^ (a1[v13 + 3] ^ (4 * (*(int *)(v12 + 252) >> 10))) & 4;
          a1[v13 + 3] = v14;
          v15 = v14 & 0xFFFC03FF | (*(unsigned __int8 *)(v12 + 688) << 10);
          a1[v13 + 3] = v15;
          v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(8 * (*(int *)(v12 + 252) >> 4))) & 8;
          a1[v13 + 3] = v16;
          v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(16 * (*(int *)(v12 + 252) >> 5))) & 0x10;
          a1[v13 + 3] = v17;
          v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(32 * (*(int *)(v12 + 252) >> 6))) & 0x20;
          a1[v13 + 3] = v18;
          v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v12 + 252) >> 7) << 6)) & 0x40;
          a1[v13 + 3] = v19;
          v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v12 + 252) >> 9) << 7)) & 0x80;
          a1[v13 + 3] = v20;
          v21 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v12 + 252) >> 11) << 8)) & 0x100;
          a1[v13 + 3] = v21;
          a1[v13 + 3] = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v12 + 252) >> 12) << 9)) & 0x200;
          a1[v13 + 4] = *(_DWORD *)(v12 + 256);
          *(_OWORD *)&a1[v13 + 5] = *(_OWORD *)(v12 + 260);
          *(_QWORD *)&a1[v13 + 9] = *(_QWORD *)(v12 + 712);
          a1[v13 + 11] = *(_DWORD *)(v12 + 720);
          a1[v13 + 16] = *(_DWORD *)(v12 + 736);
          *(_QWORD *)&a1[v13 + 19] = *(_QWORD *)(*((_QWORD *)v10 + 60) + 832LL);
          *(_QWORD *)&a1[v13 + 17] = *(_QWORD *)(*((_QWORD *)v10 + 60) + 824LL);
          RtlStringCchCopyW((char *)&a1[v13 + 85], 128LL, (char *)(v12 + 1128));
          RtlStringCchCopyW((char *)&a1[v13 + 149], 128LL, (char *)(v12 + 872));
          if ( *(_QWORD *)(v12 + 280) )
          {
            a1[v13 + 3] |= 1u;
            if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v9, v23, v24) & 0xF) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v26, v27) + 408)
                ? (v25 = 0LL)
                : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                               (__int64)KeGetCurrentThread(),
                                                               v9,
                                                               v26,
                                                               v27)
                                                           + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  !(_DWORD)v25) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v9, v26, v27) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v29, v30) + 408)
                  ? (v33 = 0)
                  : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v9,
                                                                 v31,
                                                                 v32)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v33) )
              {
                v28 = (_OWORD *)(*(_QWORD *)(v12 + 280) + 60LL);
              }
              else
              {
                v28 = (_OWORD *)(*(_QWORD *)(v12 + 280) + 28LL);
              }
            }
            else
            {
              v28 = (_OWORD *)(*(_QWORD *)(v12 + 280) + 44LL);
            }
            *(_OWORD *)&a1[v13 + 12] = *v28;
          }
          else
          {
            a1[v13 + 3] &= ~1u;
            *(_QWORD *)&a1[v13 + 12] = 0LL;
            *(_QWORD *)&a1[v13 + 14] = 0LL;
          }
          if ( *(_QWORD *)(v12 + 296) )
            RtlStringCbCopyUnicodeString((char *)&a1[v13 + 21], 0x100uLL, (const struct _UNICODE_STRING *)(v12 + 288));
          else
            LOWORD(a1[v13 + 21]) = 0;
          if ( *(_QWORD *)(v12 + 296) )
            RtlStringCbCopyUnicodeString((char *)&a1[v13 + 213], 0x100uLL, (const struct _UNICODE_STRING *)(v12 + 1464));
          else
            LOWORD(a1[v13 + 213]) = 0;
          v4 -= 1104;
        }
        ++v6;
      }
      v10 = (struct DEVICEINFO *)*((_QWORD *)v10 + 7);
    }
    while ( v10 );
  }
  v34 = 1104 * v6 + 4;
  *a1 = v34;
  LeaveDeviceInfoListCrit_(v34, v9);
  UserLeaveUserCritSec();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v36);
  return v3;
}
