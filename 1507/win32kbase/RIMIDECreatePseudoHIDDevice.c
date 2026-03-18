/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C00C55DC
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00C790C (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00C7A04 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C006EB40 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 *     rimFindReferencedRimObj @ 0x1C00C0AD0 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C0E60 (RIMAddInjectionDeviceOfType.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        __int64 a5,
        _DWORD *Object,
        _OWORD *a7,
        char a8)
{
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v23; // eax
  __int64 v24; // rcx
  PHANDLE v26; // [rsp+28h] [rbp-89h]
  __int64 v27; // [rsp+30h] [rbp-81h]
  __int64 v28; // [rsp+30h] [rbp-81h]
  __int64 v29; // [rsp+38h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v32[9]; // [rsp+58h] [rbp-59h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0LL;
  v29 = 0LL;
  memset(v32, 0, 0x88uLL);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    TemplateEventDescriptor(v12, &PseudoDevCreationStart, &W32kControlGuid);
  RtlInitUnicodeString(&DestinationString, L"\\??\\Microsoft RID");
  Object = 0LL;
  if ( (int)rimFindReferencedRimObj(28, v13, a2, (struct _LIST_ENTRY **)&Object) < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0xFu,
      (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids);
  }
  else
  {
    if ( RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
    {
      v17 = HIDWORD(v32[0]);
      if ( a5 )
        v17 = HIDWORD(v32[0]) | 1;
      *(_QWORD *)&v32[5] = a5;
      DWORD2(v32[5]) = a3;
      v18 = a7[1];
      v32[1] = *a7;
      v19 = a7[2];
      v32[2] = v18;
      v20 = a7[3];
      v32[3] = v19;
      v32[4] = v20;
      v21 = *((_QWORD *)gptiCurrent + 48);
      *(_QWORD *)((char *)&v32[7] + 4) = *(_QWORD *)(v21 + 832);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21, v14, v15, v16, v26, v27);
      LODWORD(v32[8]) = a4;
      HIDWORD(v32[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
      HIDWORD(v32[0]) = ((unsigned __int8)v17 ^ (unsigned __int8)(2 * a8)) & 2 ^ v17;
      v23 = RIMAddInjectionDeviceOfType(Handle, &DestinationString, 2, (__int64)v32, 0, &v29);
      if ( v23 < 0 )
      {
        LODWORD(v28) = v23;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0xEu,
          (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids,
          v28);
      }
      ZwClose(Handle);
      v10 = v29;
    }
    ObfDereferenceObject(Object);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    TemplateEventDescriptor(v24, &PseudoDevCreationStop, &W32kControlGuid);
  return v10;
}
