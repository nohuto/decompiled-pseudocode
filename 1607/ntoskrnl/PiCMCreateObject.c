/*
 * XREFs of PiCMCreateObject @ 0x1406469D4
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     _PnpCreateObject @ 0x1406DAD4C (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMCreateObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int Object; // ebx
  int v9; // r8d
  int v10; // ecx
  char v12[4]; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+44h] [rbp-34h]
  int v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-1Ch]
  int v17; // [rsp+60h] [rbp-18h]

  *a6 = 0;
  Object = PiCMCaptureObjectInputData(a1, a2, a5, v12);
  if ( Object >= 0 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
LABEL_30:
      Object = PiCMReturnBasicResultData(Object, v17, a3, a4, a6);
      goto LABEL_31;
    }
    if ( !v15 || v13 || v16 || !a3 || a4 < 8 || (v14 & 0x7FFF0000) != 0 )
      goto LABEL_29;
    if ( (v14 & 0x80000000) == 0x80000000 )
    {
      v9 = 0;
      if ( (unsigned __int16)v14 < 0xBu )
        v9 = (unsigned __int16)v14;
    }
    else
    {
      if ( (unsigned __int16)v14 != 1 )
      {
        switch ( (unsigned __int16)v14 )
        {
          case 2u:
            v9 = 2;
            goto LABEL_23;
          case 3u:
            v9 = 4;
            goto LABEL_23;
          case 4u:
            v9 = 3;
            goto LABEL_23;
        }
LABEL_29:
        Object = -1073741811;
        goto LABEL_30;
      }
      v9 = 1;
    }
    if ( v9 )
    {
LABEL_23:
      v10 = v9 - 1;
      if ( v9 == 1 || (v10 = v9 - 3, v9 == 3) || v9 == 5 )
        Object = -1073741637;
      if ( Object >= 0 )
        Object = PnpCreateObject(v10, v15, v9, 0, 0LL);
      goto LABEL_30;
    }
    goto LABEL_29;
  }
LABEL_31:
  PiCMReleaseObjectInputData((__int64)v12);
  return (unsigned int)Object;
}
