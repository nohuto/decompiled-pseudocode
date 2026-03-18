/*
 * XREFs of GetTelemDeviceData @ 0x1C01CF8CC
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C01CFD04 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     IsLegacyTouchPad @ 0x1C0039CDC (IsLegacyTouchPad.c)
 *     ?GetPTPVIDPIDStrings@@YAJPEAUDEVICEINFO@@PEAU_UNICODE_STRING@@1@Z @ 0x1C01CE508 (-GetPTPVIDPIDStrings@@YAJPEAUDEVICEINFO@@PEAU_UNICODE_STRING@@1@Z.c)
 */

__int64 __fastcall GetTelemDeviceData(WCHAR *a1, WCHAR *a2, int *a3, int *a4, int *a5, int *a6)
{
  int v6; // ebp
  unsigned int v7; // esi
  __int64 v10; // rcx
  struct DEVICEINFO *v11; // rbx
  int *v12; // r14
  int v13; // edx
  int *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  struct _UNICODE_STRING v18; // [rsp+20h] [rbp-48h] BYREF
  struct _UNICODE_STRING v19; // [rsp+30h] [rbp-38h] BYREF
  char v20; // [rsp+70h] [rbp+8h] BYREF

  v19.Buffer = a1;
  v6 = 0;
  *(_DWORD *)&v19.Length = 0x100000;
  v7 = 0;
  v18.Buffer = a2;
  *(_DWORD *)&v18.Length = 0x100000;
  EnterDeviceInfoListCrit_(a1);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v20, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  if ( LODWORD(aDeviceTemplate[154]) )
    v11 = gpRimDevBackedDeviceInfoList;
  else
    v11 = (struct DEVICEINFO *)gpDeviceInfoList;
  if ( v11 )
  {
    v12 = a6;
    v13 = 1;
    v14 = a5;
    do
    {
      if ( *((_BYTE *)v11 + 48) )
      {
        if ( *((_DWORD *)v11 + 79) )
        {
          v15 = *((_QWORD *)v11 + 52);
          if ( *(_DWORD *)(v15 + 24) != 8 || v6 )
          {
            if ( (unsigned int)(*(_DWORD *)(v15 + 24) - v13) <= 4 )
              *a4 = v13;
          }
          else
          {
            v16 = *(_DWORD *)(v15 + 1544);
            v6 = v13;
            if ( v16 == v13 )
            {
              *v14 = v13;
            }
            else if ( v16 == 2 )
            {
              *v14 = 2;
            }
            else if ( v16 == 3 )
            {
              *v14 = 3;
            }
            if ( GetPTPVIDPIDStrings(v11, &v19, &v18) < 0 )
              break;
            v13 = 1;
            v7 = 1;
          }
        }
      }
      else if ( *((_WORD *)v11 + 338) )
      {
        if ( (unsigned int)IsLegacyTouchPad((__int64)v11) )
        {
          v7 = v13;
          *v12 = v13;
        }
      }
      else
      {
        *a3 = v13;
      }
      v11 = (struct DEVICEINFO *)*((_QWORD *)v11 + 7);
    }
    while ( v11 );
  }
  LeaveDeviceInfoListCrit_(v10);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v20);
  return v7;
}
