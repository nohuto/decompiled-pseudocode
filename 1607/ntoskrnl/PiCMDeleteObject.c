/*
 * XREFs of PiCMDeleteObject @ 0x1406472C4
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1404DBDA8 (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404DC1A8 (PiCMReleaseObjectInputData.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpDeleteObject @ 0x1406DAFB8 (_PnpDeleteObject.c)
 */

__int64 __fastcall PiCMDeleteObject(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  char *v9; // rsi
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rcx
  char v14[4]; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+34h] [rbp-44h]
  int v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+4Ch] [rbp-2Ch]
  int v19; // [rsp+50h] [rbp-28h]

  v6 = a6;
  v9 = 0LL;
  a6 = 0LL;
  *v6 = 0;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, v14);
  if ( v10 >= 0 )
  {
    v11 = 2;
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v10 = -1073741790;
LABEL_31:
      v10 = PiCMReturnBasicResultData(v10, v19, a3, a4, v6);
      goto LABEL_32;
    }
    if ( !v17 || v15 || v18 || !a3 || a4 < 8 || (v16 & 0x7FFF0000) != 0 )
      goto LABEL_30;
    if ( (v16 & 0x80000000) == 0x80000000 )
    {
      v11 = 0;
      if ( (unsigned __int16)v16 < 0xBu )
        v11 = (unsigned __int16)v16;
    }
    else
    {
      if ( (unsigned __int16)v16 != 1 )
      {
        switch ( (unsigned __int16)v16 )
        {
          case 2u:
            goto LABEL_22;
          case 3u:
            v11 = 4;
            goto LABEL_22;
          case 4u:
            v11 = 3;
            goto LABEL_22;
        }
LABEL_30:
        v10 = -1073741811;
        goto LABEL_31;
      }
      v11 = 1;
    }
    if ( v11 )
    {
LABEL_22:
      if ( v11 == 1 || v11 == 3 || v11 == 5 )
        v10 = -1073741637;
      if ( v10 >= 0 )
      {
        v10 = PiPnpRtlBeginOperation((__int64 **)&a6);
        if ( v10 >= 0 )
          v10 = PnpDeleteObject(v12, v17, v11);
        v9 = (char *)a6;
      }
      goto LABEL_31;
    }
    goto LABEL_30;
  }
LABEL_32:
  PiCMReleaseObjectInputData((__int64)v14);
  if ( v9 )
    PiPnpRtlEndOperation(v9);
  return (unsigned int)v10;
}
