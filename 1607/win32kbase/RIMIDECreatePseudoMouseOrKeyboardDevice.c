/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00D5DD8
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00BA7F0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00BAAC0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C007FB90 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C00CDF28 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00CE230 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C00D5244 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(int a1, __int64 *a2)
{
  BOOL v4; // edi
  int ReferencedRimObj; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-69h] BYREF
  UNICODE_STRING v9; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v10[18]; // [rsp+50h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+110h] [rbp+77h] BYREF
  PVOID Object; // [rsp+118h] [rbp+7Fh] BYREF

  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  v4 = a1 != 0;
  Handle = (HANDLE)-1LL;
  v8 = -1LL;
  memset(v10, 0, 0x88uLL);
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(a1, 0, 0, (__int64)&v9);
  if ( ReferencedRimObj >= 0 )
  {
    ReferencedRimObj = rimFindReferencedRimObj(v4 + 1, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        v10[0] = 0LL;
        v10[1] &= 0xFFFFFFFC00000000uLL;
        v10[10] = 0LL;
        LODWORD(v10[11]) = 0;
        *(_QWORD *)((char *)&v10[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v6) + 824);
        HIDWORD(v10[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v10[14] + 4)) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType(Handle, &v9, a1, (__int64)v10, 0, &v8);
        if ( ReferencedRimObj >= 0 )
          *a2 = v8;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
