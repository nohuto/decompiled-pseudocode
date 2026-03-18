/*
 * XREFs of UserGetHipDeviceInfo @ 0x1C01CEA20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C011DACC (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r15d
  unsigned int v6; // r12d
  BOOL v7; // esi
  __int64 v8; // rcx
  struct DEVICEINFO *v9; // r14
  _BOOL8 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // rsi
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _OWORD *v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  char v27; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1 - 4;
  v6 = 0;
  v7 = *a1 != 4;
  UserEnterUserCritSec(a1, a2, a3);
  EnterDeviceInfoListCrit_(v8);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v27, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( LODWORD(aDeviceTemplate[154]) )
    v9 = gpRimDevBackedDeviceInfoList;
  else
    v9 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( v9 )
  {
    v10 = v7;
    do
    {
      if ( *((_DWORD *)v9 + 77) )
      {
        v11 = *((_QWORD *)v9 + 52);
        if ( v10 )
        {
          if ( v4 < 0x450 )
          {
            v3 = -1073741789;
            break;
          }
          v12 = 276LL * v6;
          a1[v12 + 1] = *(_DWORD *)(v11 + 24);
          a1[v12 + 2] = *(_DWORD *)(v11 + 900);
          a1[v12 + 3] ^= (a1[v12 + 3] ^ (2 * (*(_QWORD *)(v11 + 320) != 0LL))) & 2;
          v13 = a1[v12 + 3] ^ (a1[v12 + 3] ^ (4 * (*(int *)(v11 + 252) >> 10))) & 4;
          a1[v12 + 3] = v13;
          v14 = v13 & 0xFFFC03FF | (*(unsigned __int8 *)(v11 + 720) << 10);
          a1[v12 + 3] = v14;
          v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(8 * (*(int *)(v11 + 252) >> 4))) & 8;
          a1[v12 + 3] = v15;
          v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(16 * (*(int *)(v11 + 252) >> 5))) & 0x10;
          a1[v12 + 3] = v16;
          v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(32 * (*(int *)(v11 + 252) >> 6))) & 0x20;
          a1[v12 + 3] = v17;
          v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v11 + 252) >> 7) << 6)) & 0x40;
          a1[v12 + 3] = v18;
          v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v11 + 252) >> 9) << 7)) & 0x80;
          a1[v12 + 3] = v19;
          v20 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v11 + 252) >> 11) << 8)) & 0x100;
          a1[v12 + 3] = v20;
          a1[v12 + 3] = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v11 + 252) >> 12) << 9)) & 0x200;
          a1[v12 + 4] = *(_DWORD *)(v11 + 256);
          *(_OWORD *)&a1[v12 + 5] = *(_OWORD *)(v11 + 260);
          *(_QWORD *)&a1[v12 + 9] = *(_QWORD *)(v11 + 744);
          a1[v12 + 11] = *(_DWORD *)(v11 + 752);
          a1[v12 + 16] = *(_DWORD *)(v11 + 768);
          *(_QWORD *)&a1[v12 + 19] = *(_QWORD *)(*((_QWORD *)v9 + 52) + 864LL);
          *(_QWORD *)&a1[v12 + 17] = *(_QWORD *)(*((_QWORD *)v9 + 52) + 856LL);
          RtlStringCchCopyW((char *)&a1[v12 + 85], 128LL, (char *)(v11 + 1160));
          RtlStringCchCopyW((char *)&a1[v12 + 149], 128LL, (char *)(v11 + 904));
          if ( *(_QWORD *)(v11 + 280) )
          {
            a1[v12 + 3] |= 1u;
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0
              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v22 = 0LL)
                : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  !(_DWORD)v22) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  ? (v24 = 0)
                  : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v24) )
              {
                v23 = (_OWORD *)(*(_QWORD *)(v11 + 280) + 60LL);
              }
              else
              {
                v23 = (_OWORD *)(*(_QWORD *)(v11 + 280) + 28LL);
              }
            }
            else
            {
              v23 = (_OWORD *)(*(_QWORD *)(v11 + 280) + 44LL);
            }
            *(_OWORD *)&a1[v12 + 12] = *v23;
          }
          else
          {
            a1[v12 + 3] &= ~1u;
            *(_QWORD *)&a1[v12 + 12] = 0LL;
            *(_QWORD *)&a1[v12 + 14] = 0LL;
          }
          if ( *(_QWORD *)(v11 + 296) )
            RtlStringCbCopyUnicodeString((char *)&a1[v12 + 21], 0x100uLL, (const struct _UNICODE_STRING *)(v11 + 288));
          else
            LOWORD(a1[v12 + 21]) = 0;
          if ( *(_QWORD *)(v11 + 296) )
            RtlStringCbCopyUnicodeString((char *)&a1[v12 + 213], 0x100uLL, (const struct _UNICODE_STRING *)(v11 + 1504));
          else
            LOWORD(a1[v12 + 213]) = 0;
          v4 -= 1104;
        }
        ++v6;
      }
      v9 = (struct DEVICEINFO *)*((_QWORD *)v9 + 7);
    }
    while ( v9 );
  }
  v25 = 1104 * v6 + 4;
  *a1 = v25;
  LeaveDeviceInfoListCrit_(v25);
  UserLeaveUserCritSec();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v27);
  return v3;
}
