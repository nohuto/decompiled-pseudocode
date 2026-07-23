/*
 * XREFs of PiCMOpenObjectKey @ 0x1404DCACC
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMDuplicateRegistryHandle @ 0x1404DB940 (PiCMDuplicateRegistryHandle.c)
 *     PiCMReturnHandleResultData @ 0x1404DCA48 (PiCMReturnHandleResultData.c)
 *     PiCMReleaseRegistryInputData @ 0x1404DCD98 (PiCMReleaseRegistryInputData.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     PiCMCaptureRegistryInputData @ 0x1404E47FC (PiCMCaptureRegistryInputData.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     _PnpCreateObject @ 0x1406DAD4C (_PnpCreateObject.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, _OWORD *a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r15
  int Object; // ebx
  int v10; // edi
  __int64 v11; // rdx
  int v12; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v15; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v16[4]; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+54h] [rbp-2Ch]
  int v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  ACCESS_MASK v20; // [rsp+6Ch] [rbp-14h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]
  int v23; // [rsp+78h] [rbp-8h]

  v15 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = PiCMCaptureRegistryInputData(a1, a2, a5, v16);
  if ( Object < 0 )
    goto LABEL_39;
  if ( !v19 || v17 || v22 || !a3 || a4 < 0x10 || (v18 & 0x7FFF0000) != 0 )
    goto LABEL_33;
  if ( (v18 & 0x80000000) == 0x80000000 )
  {
    v10 = 0;
    if ( (unsigned __int16)v18 < 0xBu )
      v10 = (unsigned __int16)v18;
LABEL_20:
    if ( v10 )
      goto LABEL_21;
LABEL_33:
    Object = -1073741811;
    goto LABEL_34;
  }
  switch ( (unsigned __int16)v18 )
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
  Object = PnpOpenObjectRegKey(PiPnpRtlCtx, v19, v10, v20, 0, (__int64)&Handle, 0LL, 0);
  if ( Object != -1073741772 )
    goto LABEL_31;
  if ( v21 == 1 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      Object = -1073741790;
      goto LABEL_34;
    }
    Object = PnpCreateObject(v12, v19, v10, v20, (__int64)&Handle);
LABEL_31:
    if ( Object >= 0 )
      Object = PiCMDuplicateRegistryHandle(Handle, v11, v20, PreviousMode, &v15);
  }
LABEL_34:
  Object = PiCMReturnHandleResultData(Object, (__int64)v15, v23, a3, a4, a6);
  if ( Handle )
    ZwClose(Handle);
  if ( Object < 0 && v15 )
    ObCloseHandle(v15, PreviousMode);
LABEL_39:
  PiCMReleaseRegistryInputData(v16);
  return (unsigned int)Object;
}
