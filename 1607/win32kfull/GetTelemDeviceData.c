/*
 * XREFs of GetTelemDeviceData @ 0x1C01C9258
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C01C9584 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsLegacyTouchPad @ 0x1C00E4CD0 (IsLegacyTouchPad.c)
 *     GetHidVidPidStrings @ 0x1C00E5F34 (GetHidVidPidStrings.c)
 */

__int64 __fastcall GetTelemDeviceData(
        WCHAR *a1,
        WCHAR *a2,
        int *a3,
        int *a4,
        int *a5,
        _DWORD *a6,
        _OWORD *a7,
        _OWORD *a8)
{
  int v9; // ebp
  unsigned int v10; // edi
  __int64 v12; // rcx
  struct DEVICEINFO *v13; // rbx
  __int64 v14; // rdx
  _OWORD *v15; // r13
  int v16; // r8d
  _DWORD *v17; // r14
  int *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  int HidVidPidStrings; // eax
  struct _UNICODE_STRING v24; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING v25; // [rsp+30h] [rbp-38h] BYREF
  char v26; // [rsp+70h] [rbp+8h] BYREF

  v25.Buffer = a1;
  *(_DWORD *)&v25.Length = 0x100000;
  v9 = 0;
  v24.Buffer = a2;
  v10 = 0;
  *(_DWORD *)&v24.Length = 0x100000;
  EnterDeviceInfoListCrit_(a1);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v26, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v13 = gpRimDevBackedDeviceInfoList;
  v14 = 0LL;
  if ( gpRimDevBackedDeviceInfoList )
  {
    v15 = a8;
    v16 = 1;
    v17 = a6;
    v18 = a5;
    do
    {
      if ( *((_BYTE *)v13 + 48) == (_BYTE)v14 )
      {
        if ( *((_WORD *)v13 + 370) == (_WORD)v14 )
        {
          *a3 = v16;
        }
        else if ( (unsigned int)IsLegacyTouchPad((__int64)v13) )
        {
          goto LABEL_19;
        }
      }
      else if ( *((_DWORD *)v13 + 79) != (_DWORD)v14 )
      {
        v19 = *((_QWORD *)v13 + 60);
        if ( *(_DWORD *)(v19 + 24) != 7 || v9 )
        {
          if ( (unsigned int)(*(_DWORD *)(v19 + 24) - v16) <= 3 )
            *a4 = v16;
          goto LABEL_22;
        }
        *v17 = v14;
        v9 = v16;
        v20 = *((_QWORD *)v13 + 60);
        v21 = *(_DWORD *)(v20 + 1520);
        if ( v21 == v16 )
        {
          *v18 = v16;
        }
        else if ( v21 == 2 )
        {
          *v18 = 2;
        }
        else if ( v21 == 3 )
        {
          *v18 = 3;
        }
        *a7 = *(_OWORD *)(v20 + 172);
        *v15 = *(_OWORD *)(*((_QWORD *)v13 + 60) + 204LL);
        HidVidPidStrings = GetHidVidPidStrings((__int64)v13, &v25, &v24);
        v14 = 0LL;
        if ( HidVidPidStrings < 0 )
          break;
        v16 = 1;
LABEL_19:
        v10 = v16;
      }
LABEL_22:
      v13 = (struct DEVICEINFO *)*((_QWORD *)v13 + 7);
    }
    while ( v13 );
  }
  LeaveDeviceInfoListCrit_(v12, v14);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v26);
  return v10;
}
