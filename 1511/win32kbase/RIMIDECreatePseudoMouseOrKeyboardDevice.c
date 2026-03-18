/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C66E8
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00B0AC0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00B0D90 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C007D610 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C00C16D0 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(int a1, __int64 *a2)
{
  BOOL v4; // ebx
  const WCHAR *v5; // rdx
  __int64 v6; // rdx
  int ReferencedRimObj; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v12[20]; // [rsp+50h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+110h] [rbp+77h] BYREF
  PVOID Object; // [rsp+118h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = a1 != 0;
  Handle = (HANDLE)-1LL;
  v10 = -1LL;
  memset(v12, 0, 0x88uLL);
  Object = 0LL;
  v5 = L"Microsoft Mouse RID";
  if ( a1 )
    v5 = L"Microsoft Keyboard RID";
  RtlInitUnicodeString(&DestinationString, v5);
  ReferencedRimObj = rimFindReferencedRimObj(v4 + 1, v6, 0, (struct _LIST_ENTRY **)&Object);
  if ( ReferencedRimObj >= 0 )
  {
    ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
    if ( ReferencedRimObj >= 0 )
    {
      v12[0] = 0LL;
      v12[1] &= 0xFFFFFFFC00000000uLL;
      v12[10] = 0LL;
      LODWORD(v12[11]) = 0;
      *(_QWORD *)((char *)&v12[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v8) + 832);
      HIDWORD(v12[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v12[14] + 4)) + 12) & 0x80000000;
      ReferencedRimObj = RIMAddInjectionDeviceOfType(Handle, &DestinationString, a1, (__int64)v12, 0, &v10);
      if ( ReferencedRimObj < 0 )
        ZwClose(Handle);
      else
        *a2 = v10;
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)ReferencedRimObj;
}
