/*
 * XREFs of _GetTouchValidationStatus @ 0x1C01E0C60
 * Callers:
 *     NtUserGetTouchValidationStatus @ 0x1C021C020 (NtUserGetTouchValidationStatus.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0229F00 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall GetTouchValidationStatus(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  int v3; // ecx
  struct DEVICEINFO *v4; // rdx
  __int64 v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 3;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v2 = *(_QWORD *)(a1 + 400);
      if ( *(_WORD *)(v2 + 42) == 13 && (unsigned __int16)(*(_WORD *)(v2 + 40) - 4) <= 1u )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 416) + 252LL);
        if ( (v3 & 0x20) == 0 )
          return 2 - (unsigned int)((v3 & 0x400) != 0);
      }
    }
  }
  else
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    if ( LODWORD(aDeviceTemplate[154]) )
      v4 = gpRimDevBackedDeviceInfoList;
    else
      v4 = (struct DEVICEINFO *)gpDeviceInfoList;
    while ( v4 )
    {
      if ( *((_BYTE *)v4 + 48) == 2 && (*((_BYTE *)v4 + 64) & 0x40) == 0 && (*((_DWORD *)v4 + 44) & 0x800) == 0 )
      {
        v5 = *((_QWORD *)v4 + 50);
        if ( *(_WORD *)(v5 + 42) == 13 && *(_WORD *)(v5 + 40) == 4 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v4 + 52) + 252LL) & 0x400) != 0 )
          {
            v1 = 1;
            break;
          }
          v1 = 2;
        }
      }
      v4 = (struct DEVICEINFO *)*((_QWORD *)v4 + 7);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  }
  return v1;
}
