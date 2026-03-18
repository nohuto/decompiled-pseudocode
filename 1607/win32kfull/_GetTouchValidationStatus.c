/*
 * XREFs of _GetTouchValidationStatus @ 0x1C01D6FA8
 * Callers:
 *     NtUserGetTouchValidationStatus @ 0x1C0215140 (NtUserGetTouchValidationStatus.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0220158 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

__int64 __fastcall GetTouchValidationStatus(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  int v3; // ecx
  struct DEVICEINFO *i; // rdx
  __int64 v5; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 3;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 48) == 2 )
    {
      v2 = *(_QWORD *)(a1 + 464);
      if ( *(_WORD *)(v2 + 42) == 13 && (unsigned __int16)(*(_WORD *)(v2 + 40) - 4) <= 1u )
      {
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 480) + 252LL);
        if ( (v3 & 0x20) == 0 )
          return 2 - (unsigned int)((v3 & 0x400) != 0);
      }
    }
  }
  else
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v7, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) == 2 && (*((_BYTE *)i + 64) & 0x40) == 0 && (*((_DWORD *)i + 46) & 0x800) == 0 )
      {
        v5 = *((_QWORD *)i + 58);
        if ( *(_WORD *)(v5 + 42) == 13 && *(_WORD *)(v5 + 40) == 4 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)i + 60) + 252LL) & 0x400) != 0 )
          {
            v1 = 1;
            break;
          }
          v1 = 2;
        }
      }
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v7);
  }
  return v1;
}
