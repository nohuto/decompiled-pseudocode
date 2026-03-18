/*
 * XREFs of PiCMOpenObjectKey @ 0x140442BB8
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     _PnpOpenObjectRegKey @ 0x14043E904 (_PnpOpenObjectRegKey.c)
 *     PiCMReleaseRegistryInputData @ 0x140442DCC (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x140442DFC (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x140442E78 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x140443F00 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     _PnpCreateObject @ 0x140695C98 (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int Object; // ebx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v17[4]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+54h] [rbp-2Ch]
  int v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  unsigned int v21; // [rsp+6Ch] [rbp-14h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+74h] [rbp-Ch]
  unsigned int v24; // [rsp+78h] [rbp-8h]

  v16 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = PiCMCaptureRegistryInputData(a1, a2, a5, v17);
  if ( Object < 0 )
    goto LABEL_39;
  if ( !v20 || v18 || v23 || !a3 || a4 < 0x10 || (v19 & 0x7FFF0000) != 0 )
    goto LABEL_33;
  if ( (v19 & 0x80000000) == 0x80000000 )
  {
    v10 = 0;
    if ( (unsigned __int16)v19 < 0xBu )
      v10 = (unsigned __int16)v19;
LABEL_20:
    if ( v10 )
      goto LABEL_21;
LABEL_33:
    Object = -1073741811;
    goto LABEL_34;
  }
  switch ( (unsigned __int16)v19 )
  {
    case 1u:
      v10 = 1;
      goto LABEL_20;
    case 2u:
      v10 = 2;
      break;
    case 3u:
      v10 = 4;
      break;
    case 4u:
      v10 = 3;
      break;
    default:
      goto LABEL_33;
  }
LABEL_21:
  if ( v10 == 1 || v10 == 3 || v10 == 5 )
    Object = -1073741637;
  if ( Object < 0 )
    goto LABEL_34;
  Object = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v20, v10, v21, 0, (__int64)&Handle, 0LL, 0);
  if ( Object != -1073741772 )
    goto LABEL_31;
  if ( v22 == 1 )
  {
    if ( !(unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    {
      Object = -1073741790;
      goto LABEL_34;
    }
    Object = PnpCreateObject(v13, v20, v10, v21, (__int64)&Handle);
LABEL_31:
    if ( Object >= 0 )
    {
      LOBYTE(v12) = PreviousMode;
      Object = PiCMDuplicateRegistryHandle(Handle, v11, v21, v12, &v16);
    }
  }
LABEL_34:
  Object = PiCMReturnHandleResultData((unsigned int)Object, v16, v24, a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( Object < 0 && v16 )
    ObCloseHandle(v16, PreviousMode);
LABEL_39:
  PiCMReleaseRegistryInputData(v17);
  return (unsigned int)Object;
}
