/*
 * XREFs of CreateResourceManagerProxy @ 0x18000646C
 * Callers:
 *     ?GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ @ 0x180006850 (-GetResourceManagerProxy@@YAPEAVResourceManagerProxy@@XZ.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180002360 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     RmpBindToRmRpcServer @ 0x1800068A0 (RmpBindToRmRpcServer.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  char *v0; // rax
  ResourceManagerProxy *v1; // rbx
  int v2; // edi

  v0 = (char *)malloc(0x4E80uLL);
  v1 = (ResourceManagerProxy *)v0;
  if ( v0 )
  {
    *((_QWORD *)v0 + 2) = 0LL;
    *(_QWORD *)v0 = &ResourceManagerProxy::`vftable';
    `vector constructor iterator'(
      v0 + 32,
      352LL,
      57,
      (__int64 (__fastcall *)(ExecutionModel::_ResourceSetInfo *__hidden))ExecutionModel::_ResourceSetInfo::_ResourceSetInfo);
  }
  else
  {
    v1 = 0LL;
  }
  qword_180022790 = v1;
  if ( v1 )
  {
    v2 = RmpBindToRmRpcServer(&unk_180016410);
    if ( v2 < 0 )
    {
      if ( qword_180022790 )
      {
        (**(void (__fastcall ***)(ResourceManagerProxy *, __int64))qword_180022790)(qword_180022790, 1LL);
        qword_180022790 = 0LL;
      }
    }
    else
    {
      RtlInitializeSRWLock((char *)v1 + 8);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
