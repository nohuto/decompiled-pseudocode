/*
 * XREFs of PiDevCfgGetDriverPackageId @ 0x140639094
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgGetDriverPackageId(__int64 a1, __int64 a2)
{
  int ObjectProperties; // ebx
  __int64 v5; // rcx
  _QWORD v7[6]; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF

  Handle = 0LL;
  ObjectProperties = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 8u, 131097, 0, (__int64)&Handle, 0LL, 0);
  if ( ObjectProperties >= 0 )
  {
    memset(v7, 0, 0x28uLL);
    v7[0] = &DEVPKEY_DriverInfFile_ActiveDriverPackage;
    LODWORD(v7[1]) = 18;
    v7[2] = a2;
    HIDWORD(v7[3]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v5, a1, 8u, Handle, (__int64)v7, 1u);
    if ( ObjectProperties >= 0 && SLODWORD(v7[4]) < 0 )
      ObjectProperties = v7[4];
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperties;
}
