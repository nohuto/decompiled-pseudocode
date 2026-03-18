/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C00C64DC
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00C8808 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00C8900 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C007D610 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 *     rimFindReferencedRimObj @ 0x1C00C16D0 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
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
  int v14; // edi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-81h]
  __int64 v24; // [rsp+38h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  _OWORD v27[9]; // [rsp+58h] [rbp-59h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  memset(v27, 0, 0x88uLL);
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
      (__int64)&WPP_46f9b70f72899a49db72f32dcca4e219_Traceguids);
  }
  else
  {
    if ( RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
    {
      v14 = HIDWORD(v27[0]);
      if ( a5 )
        v14 = HIDWORD(v27[0]) | 1;
      *(_QWORD *)&v27[5] = a5;
      DWORD2(v27[5]) = a3;
      v15 = a7[1];
      v27[1] = *a7;
      v16 = a7[2];
      v27[2] = v15;
      v17 = a7[3];
      v27[3] = v16;
      v27[4] = v17;
      v18 = *((_QWORD *)gptiCurrent + 47);
      *(_QWORD *)((char *)&v27[7] + 4) = *(_QWORD *)(v18 + 832);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
      LODWORD(v27[8]) = a4;
      HIDWORD(v27[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
      HIDWORD(v27[0]) = ((unsigned __int8)v14 ^ (unsigned __int8)(2 * a8)) & 2 ^ v14;
      v20 = RIMAddInjectionDeviceOfType(Handle, &DestinationString, 2, (__int64)v27, 0, &v24);
      if ( v20 < 0 )
      {
        LODWORD(v23) = v20;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          2u,
          0xEu,
          (__int64)&WPP_46f9b70f72899a49db72f32dcca4e219_Traceguids,
          v23);
      }
      ZwClose(Handle);
      v10 = v24;
    }
    ObfDereferenceObject(Object);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    TemplateEventDescriptor(v21, &PseudoDevCreationStop, &W32kControlGuid);
  return v10;
}
