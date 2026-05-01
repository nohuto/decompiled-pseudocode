/*
 * XREFs of RmpEnforcerContextInitialize @ 0x18002139C
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 * Callees:
 *     ?RmpPowerBoostContextInitialize@@YAJPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180021528 (-RmpPowerBoostContextInitialize@@YAJPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     RmpGpuMonitorInitialize @ 0x180021574 (RmpGpuMonitorInitialize.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?RmpPowerBoostContextClose@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x18003F988 (-RmpPowerBoostContextClose@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     RmpGpuMonitorClose @ 0x180046768 (RmpGpuMonitorClose.c)
 */

__int64 __fastcall RmpEnforcerContextInitialize(char *a1, __int64 a2)
{
  HANDLE v4; // rsi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // xmm1
  void *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  signed int LastError; // eax
  _OWORD v17[2]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v18[4]; // [rsp+50h] [rbp+7h] BYREF
  DWORD ThreadId; // [rsp+C0h] [rbp+77h] BYREF
  void *IoCompletionHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  IoCompletionHandle = 0LL;
  v4 = 0LL;
  memset_0(v18, 0, sizeof(v18));
  memset_0(v17, 0, sizeof(v17));
  v5 = NtCreateIoCompletion(&IoCompletionHandle, 0x1F0003u, 0LL, 1u);
  if ( v5 >= 0 )
  {
    v4 = CreateThread(0LL, 0LL, RmpEnforcerJobCompletionThread, a1, 4u, &ThreadId);
    if ( !v4 )
    {
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0xC0070000;
LABEL_8:
      if ( v5 >= 0 )
        goto LABEL_9;
      goto LABEL_16;
    }
    v5 = RmpGpuMonitorInitialize(v7, v6, v8, v18);
    if ( v5 >= 0 )
    {
      v5 = RmpPowerBoostContextInitialize((struct _RM_POWERBOOST_CONTEXT *)v17);
      if ( v5 >= 0 )
      {
        memset_0(a1, 0, 0xA0uLL);
        *((_QWORD *)a1 + 6) = a1 + 40;
        *((_QWORD *)a1 + 5) = a1 + 40;
        *(_QWORD *)a1 = IoCompletionHandle;
        *((_QWORD *)a1 + 1) = v4;
        *((_QWORD *)a1 + 4) = a2;
        if ( a2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        v4 = 0LL;
        v9 = v18[1];
        v10 = (void *)*((_QWORD *)a1 + 1);
        IoCompletionHandle = 0LL;
        *((_OWORD *)a1 + 4) = v18[0];
        v11 = v18[2];
        *((_OWORD *)a1 + 5) = v9;
        v12 = v18[3];
        *((_OWORD *)a1 + 6) = v11;
        v13 = v17[0];
        *((_OWORD *)a1 + 7) = v12;
        v14 = v17[1];
        *((_OWORD *)a1 + 8) = v13;
        *((_OWORD *)a1 + 9) = v14;
        ResumeThread(v10);
        v5 = 0;
        goto LABEL_8;
      }
    }
  }
LABEL_16:
  RmpPowerBoostContextClose((struct _RM_POWERBOOST_CONTEXT *)v17);
  RmpGpuMonitorClose((struct _RM_GPU_MONITOR *)v18);
LABEL_9:
  if ( IoCompletionHandle )
    CloseHandle(IoCompletionHandle);
  if ( v4 )
    CloseHandle(v4);
  return (unsigned int)v5;
}
