/*
 * XREFs of CreateResourceManagerProxy @ 0x180001474
 * Callers:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180001B20 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1800038C0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     RmpBindToRmRpcServer @ 0x1800070C0 (RmpBindToRmRpcServer.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  int v2; // edi

  v0 = malloc(0x5048uLL);
  v1 = (__int64)v0;
  if ( v0 )
  {
    v0[2] = 0LL;
    *v0 = &ResourceManagerProxy::`vftable';
    `vector constructor iterator'(
      (ExecutionModel::_ResourceSetInfo *)(v0 + 4),
      0x168uLL,
      57,
      (void *(*)(void *))ExecutionModel::_ResourceSetInfo::_ResourceSetInfo);
  }
  else
  {
    v1 = 0LL;
  }
  qword_1800247C0 = v1;
  if ( v1 )
  {
    v2 = RmpBindToRmRpcServer(&unk_180016B40);
    if ( v2 < 0 )
    {
      if ( qword_1800247C0 )
      {
        (**(void (__fastcall ***)(__int64, __int64))qword_1800247C0)(qword_1800247C0, 1LL);
        qword_1800247C0 = 0LL;
      }
    }
    else
    {
      RtlInitializeSRWLock(v1 + 8);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
