/*
 * XREFs of RmpActivityHostCreateHostProcess @ 0x180040D9C
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     RmpCoreApiRegisterActivityHostByProcessHandle @ 0x180046B78 (RmpCoreApiRegisterActivityHostByProcessHandle.c)
 * Callees:
 *     RmpActivityHostAllocateAndInitialize @ 0x1800078F4 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpActivityHostCompleteInitialization @ 0x180007D98 (RmpActivityHostCompleteInitialization.c)
 *     RmpActivityHostAbortInitialization @ 0x180040ABC (RmpActivityHostAbortInitialization.c)
 */

__int64 __fastcall RmpActivityHostCreateHostProcess(int *a1, __int64 a2, __int64 a3, struct _RM_ACTIVITY_HOST **a4)
{
  int v6; // ebx
  struct _RM_ACTIVITY_HOST *v7; // rbx
  int v8; // eax
  struct _RM_ACTIVITY_HOST *v9; // rcx
  struct _RM_ACTIVITY_HOST *v10; // rcx
  struct _RM_ACTIVITY_HOST *v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0LL;
  v6 = RmpActivityHostAllocateAndInitialize(a2, a3, &v12);
  if ( v6 < 0 )
  {
    v10 = v12;
  }
  else
  {
    v7 = v12;
    v8 = *a1;
    v9 = v12;
    *((_DWORD *)v12 + 10) = 1;
    *((_DWORD *)v9 + 12) = v8;
    RmpActivityHostCompleteInitialization(v9, 0LL);
    v10 = 0LL;
    *a4 = v7;
    v6 = 0;
  }
  if ( v10 )
    RmpActivityHostAbortInitialization(v10);
  return (unsigned int)v6;
}
