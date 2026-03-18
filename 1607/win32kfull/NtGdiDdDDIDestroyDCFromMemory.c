/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1C0009DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025FF8C (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(unsigned __int64 a1)
{
  int v1; // ebx
  DYNAMICMODECHANGESHARELOCK *v2; // rcx
  SURFOBJ *v3; // rax
  SURFOBJ *v4; // r14
  __int64 v5; // rax
  HSURF hsurf[2]; // [rsp+20h] [rbp-48h]
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  char v10; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 >= W32UserProbeAddress )
    a1 = W32UserProbeAddress;
  *(_OWORD *)hsurf = *(_OWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) || !hsurf[0] )
    return 3221225485LL;
  v1 = -1073741811;
  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_DynamicModeChange_31627929_31627929_FeatureDescriptorDetails) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    SURFREF::SURFREF((SURFREF *)v8);
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v8, hsurf[1]);
    if ( (unsigned int)DWMSPRITEREF::bValid((DWMSPRITEREF *)v8) && *(_QWORD *)(v9 + 224) )
      v1 = 0;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v2);
  }
  else
  {
    v3 = EngLockSurface(hsurf[1]);
    v4 = v3;
    if ( v3 )
    {
      v5 = SURFOBJ_TO_SURFACE(v3);
      if ( v5 )
      {
        if ( *(_QWORD *)(v5 + 224) )
        {
          EngUnlockSurface(v4);
          v1 = 0;
        }
      }
    }
  }
  if ( v1 >= 0 )
  {
    if ( !(unsigned int)bDeleteDCInternal(hsurf[0], 1LL, 0LL, 1LL) )
      v1 = -1073741811;
    if ( v1 >= 0 && !(unsigned int)bDeleteSurface(hsurf[1]) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
