/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C00D5BB4
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00D7EB0 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00D7FAC (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C007FB90 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 *     rimFindReferencedRimObj @ 0x1C00CDF28 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00CE230 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C00D5244 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        __int16 a2,
        int a3,
        int a4,
        __int64 a5,
        _DWORD *Object,
        _OWORD *a7,
        char a8)
{
  __int64 v11; // rbx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // edi
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-91h]
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  __int64 v26; // [rsp+40h] [rbp-81h] BYREF
  UNICODE_STRING v27; // [rsp+48h] [rbp-79h] BYREF
  _OWORD v28[9]; // [rsp+58h] [rbp-69h] BYREF

  *(_QWORD *)&v27.Length = 0LL;
  v27.Buffer = 0LL;
  v11 = 0LL;
  v26 = 0LL;
  memset(v28, 0, 0x88uLL);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    TemplateEventDescriptor(v13, &PseudoDevCreationStart, &W32kControlGuid);
  if ( (int)RIMIDECreateDeviceInstancePath(2, a1, a2, (__int64)&v27) >= 0 )
  {
    Object = 0LL;
    if ( (int)rimFindReferencedRimObj(28, a1, a2, (struct _LIST_ENTRY **)&Object) < 0 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        2,
        18,
        (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids);
    }
    else
    {
      if ( RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
      {
        v15 = HIDWORD(v28[0]);
        if ( a5 )
          v15 = HIDWORD(v28[0]) | 1;
        *(_QWORD *)&v28[5] = a5;
        DWORD2(v28[5]) = a3;
        v16 = a7[1];
        v28[1] = *a7;
        v17 = a7[2];
        v28[2] = v16;
        v18 = a7[3];
        v28[3] = v17;
        v28[4] = v18;
        v19 = *((_QWORD *)gptiCurrent + 47);
        *(_QWORD *)((char *)&v28[7] + 4) = *(_QWORD *)(v19 + 824);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
        LODWORD(v28[8]) = a4;
        HIDWORD(v28[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        HIDWORD(v28[0]) = ((unsigned __int8)v15 ^ (unsigned __int8)(2 * a8)) & 2 ^ v15;
        v21 = RIMAddInjectionDeviceOfType(Handle, &v27, 2, (__int64)v28, 0, &v26);
        if ( v21 < 0 )
        {
          LODWORD(v24) = v21;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            2u,
            0x11u,
            (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids,
            v24);
        }
        ZwClose(Handle);
        v11 = v26;
      }
      ObfDereferenceObject(Object);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      TemplateEventDescriptor(v22, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return v11;
}
