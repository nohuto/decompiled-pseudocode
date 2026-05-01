/*
 * XREFs of CreateResourceManagerProxy @ 0x180001A58
 * Callers:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180004460 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     RmpBindToRmRpcServer @ 0x180001CF0 (RmpBindToRmRpcServer.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800048F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180006558 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  int v2; // edi

  v0 = operator new(0x53D8uLL);
  v1 = (__int64)v0;
  if ( v0 )
  {
    v0[2] = 0LL;
    *v0 = &ResourceManagerProxy::`vftable';
    `vector constructor iterator'(
      v0 + 4,
      0x178uLL,
      0x39uLL,
      (void *(*)(void *))ExecutionModel::_ResourceSetInfo::_ResourceSetInfo);
  }
  else
  {
    v1 = 0LL;
  }
  qword_180016708 = v1;
  if ( v1 )
  {
    v2 = RmpBindToRmRpcServer(&unk_18000E000);
    if ( v2 >= 0 )
    {
      RtlInitializeSRWLock(v1 + 8);
      v2 = 0;
    }
    if ( v2 < 0 )
    {
      if ( qword_180016708 )
      {
        (**(void (__fastcall ***)(__int64, __int64))qword_180016708)(qword_180016708, 1LL);
        qword_180016708 = 0LL;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
