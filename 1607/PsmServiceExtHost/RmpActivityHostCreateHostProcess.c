/*
 * XREFs of RmpActivityHostCreateHostProcess @ 0x18002EDFC
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     RmpCoreApiRegisterActivityHostByProcessHandle @ 0x18002E348 (RmpCoreApiRegisterActivityHostByProcessHandle.c)
 * Callees:
 *     RmpActivityHostAllocateAndInitialize @ 0x180005064 (RmpActivityHostAllocateAndInitialize.c)
 *     RmpActivityHostCompleteInitialization @ 0x1800060A4 (RmpActivityHostCompleteInitialization.c)
 *     RmpActivityHostAbortInitialization @ 0x18002EBF0 (RmpActivityHostAbortInitialization.c)
 */

__int64 __fastcall RmpActivityHostCreateHostProcess(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  int v6; // ebx
  struct _RM_ACTIVITY_HOST *v7; // rbx
  struct _RM_ACTIVITY_HOST *v8; // rcx
  struct _RM_ACTIVITY_HOST *v9; // rcx
  struct _RM_ACTIVITY_HOST *v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  v6 = RmpActivityHostAllocateAndInitialize(a1, 1, a3, a4, 0LL, 0, &v11);
  if ( v6 < 0 )
  {
    v9 = v11;
  }
  else
  {
    v7 = v11;
    v8 = v11;
    *((_DWORD *)v11 + 14) = *a2;
    RmpActivityHostCompleteInitialization(v8);
    v9 = 0LL;
    *a5 = v7;
    v6 = 0;
  }
  if ( v9 )
    RmpActivityHostAbortInitialization(v9);
  return (unsigned int)v6;
}
