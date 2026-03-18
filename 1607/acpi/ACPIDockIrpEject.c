/*
 * XREFs of ACPIDockIrpEject @ 0x1C0097EE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C0003A88 (ACPIInternalClearFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIDockIrpEject(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  __int64 *v4; // r14
  __int64 v5; // rbp
  const char *v6; // rax
  const char *v7; // r8
  unsigned __int16 v8; // r9
  int v9; // eax
  int v10; // ebx
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v15; // [rsp+90h] [rbp+18h] BYREF
  char v16; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = (__int64 *)(DeviceExtension + 8);
  ACPIInternalClearFlags((void *)(DeviceExtension + 8), 0x400000000LL);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v5 )
  {
    v6 = (const char *)qword_1C0090C20;
    v7 = (const char *)qword_1C0090C20;
    if ( (*v4 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(DeviceExtension + 560);
      if ( (*v4 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(DeviceExtension + 568);
    }
    v8 = 10;
LABEL_22:
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      v8,
      (__int64)&WPP_aed3312dd8533895486314f7b4c12c79_Traceguids,
      (char)a2,
      DeviceExtension,
      v6,
      v7);
    v10 = -1073741823;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(DeviceExtension + 192) != 4
    || (KdDisableDebugger(), *(_DWORD *)(DeviceExtension + 200) == 1)
    || (v9 = ACPIGet((__int64 *)v5, 1262699615, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v15, 0LL),
        *(_DWORD *)(DeviceExtension + 200) = 1,
        v10 = v9,
        v9 >= 0) )
  {
    v11 = AMLIGetNamedChild(*(__int64 **)(v5 + 712), 810173791);
    if ( v11 )
    {
      v10 = ACPIGet((__int64 *)v5, 810173791, 277872640, 1LL, 4, 0LL, 0LL, 0LL, 0LL);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v11, v12);
    }
    else
    {
      v10 = -1073741772;
    }
    if ( *(_DWORD *)(DeviceExtension + 192) == 4 )
      KdEnableDebugger();
    ACPIInternalClearFlags(v4, 0x400000000LL);
    if ( v10 >= 0 )
    {
      v10 = ACPIGet((__int64 *)DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v16, 0LL);
      if ( v10 >= 0 )
      {
        v13 = *v4;
        if ( (*v4 & 2) == 0 )
        {
          v6 = (const char *)qword_1C0090C20;
          v7 = (const char *)qword_1C0090C20;
          if ( (v13 & 0x200000000000LL) != 0 )
          {
            v6 = *(const char **)(DeviceExtension + 560);
            if ( (v13 & 0x400000000000LL) != 0 )
              v7 = *(const char **)(DeviceExtension + 568);
          }
          v8 = 11;
          goto LABEL_22;
        }
      }
    }
  }
  else
  {
    KdEnableDebugger();
  }
LABEL_23:
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
