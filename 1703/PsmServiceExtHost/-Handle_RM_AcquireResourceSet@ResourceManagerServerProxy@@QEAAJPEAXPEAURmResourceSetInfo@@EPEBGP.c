/*
 * XREFs of ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180029E08
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet @ 0x1800299B0 (RmtSrv_RM_AcquireResourceSet.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18000E370 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK5PEAU_RM_ACTIVATOR@@PEA_NPEA_K@Z @ 0x180011250 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ??2@YAPEAX_K@Z @ 0x18002099C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x18003835C (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
        ResourceManagerServerProxy *this,
        struct _RM_ACTIVATOR *a2,
        struct RmResourceSetInfo *a3,
        char a4,
        unsigned __int16 *a5,
        unsigned __int8 *Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10,
        unsigned int a11,
        int *a12,
        unsigned __int64 a13,
        unsigned __int64 *a14)
{
  struct ExecutionModel::_ResourceSetInfo *v17; // r8
  _QWORD *v18; // rbx
  int v19; // edi
  __int64 v20; // rax
  unsigned __int64 *v21; // rsi
  unsigned __int8 v23; // [rsp+70h] [rbp-1E8h] BYREF
  struct _RM_ACTIVATOR *v24; // [rsp+78h] [rbp-1E0h]
  unsigned __int16 *v25; // [rsp+80h] [rbp-1D8h]
  char v26; // [rsp+88h] [rbp-1D0h] BYREF
  _BYTE v27[384]; // [rsp+90h] [rbp-1C8h] BYREF

  v25 = a5;
  v24 = a2;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v27);
  v18 = 0LL;
  if ( a9 )
  {
    if ( Sid && (a7 < 0xC || a7 != RtlLengthSid(Sid) || !RtlValidSid(Sid)) )
      return (unsigned int)-2147024809;
  }
  else if ( Sid || a8 )
  {
    return (unsigned int)-2147024809;
  }
  ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a3, (const struct RmResourceSetInfo *)v27, v17);
  if ( a4 )
  {
    v18 = operator new(0x20uLL);
    if ( v18 )
    {
      v20 = *((_QWORD *)this + 2);
      v18[1] = -1LL;
      *v18 = &ResourceSetCallback::`vftable';
      v18[2] = v20;
      *((_DWORD *)v18 + 6) = 1;
    }
    else
    {
      v18 = 0LL;
    }
    if ( !v18 )
      return (unsigned int)-2147024882;
    v21 = v18 + 1;
  }
  else
  {
    v21 = (unsigned __int64 *)&v26;
  }
  v23 = 0;
  v19 = RmSrvAcquireResourceSet(
          *((struct _RM_SERVICE_GLOBALS **)this + 2),
          (struct ExecutionModel::_ResourceSetInfo *)v27,
          (struct ExecutionModel::IResourceSetCallback *)v18,
          0LL,
          v25,
          (char *)Sid,
          a8,
          a9,
          a10,
          a11,
          a13,
          v24,
          (bool *)((unsigned __int64)&v23 & -(__int64)(a12 != 0LL)),
          v21);
  if ( v19 >= 0 )
  {
    if ( a12 )
      *a12 = v23;
    v19 = 0;
    *a14 = *v21;
  }
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  return (unsigned int)v19;
}
