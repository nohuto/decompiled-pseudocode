/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00C57E8
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00AC890 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00ACC30 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C006EB40 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C00C0AD0 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C0E60 (RIMAddInjectionDeviceOfType.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(int a1, HANDLE *a2, __int64 *a3)
{
  BOOL v6; // ebx
  const WCHAR *v7; // rdx
  __int64 v8; // rdx
  int ReferencedRimObj; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PHANDLE v18; // [rsp+20h] [rbp-79h]
  PHANDLE v19; // [rsp+20h] [rbp-79h]
  __int64 v20; // [rsp+28h] [rbp-71h]
  __int64 v21; // [rsp+28h] [rbp-71h]
  PVOID Object; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+38h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v25[18]; // [rsp+50h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+118h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = a1 != 0;
  DestinationString.Buffer = 0LL;
  Handle = (HANDLE)-1LL;
  v23 = -1LL;
  memset(v25, 0, 0x88uLL);
  Object = 0LL;
  v7 = L"Microsoft Mouse RID";
  if ( a1 )
    v7 = L"Microsoft Keyboard RID";
  RtlInitUnicodeString(&DestinationString, v7);
  ReferencedRimObj = rimFindReferencedRimObj(v6 + 1, v8, 0, (struct _LIST_ENTRY **)&Object);
  if ( ReferencedRimObj >= 0 )
  {
    ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
    if ( ReferencedRimObj >= 0 )
    {
      v25[0] = 0LL;
      v25[1] &= 0xFFFFFFFC00000000uLL;
      v25[10] = 0LL;
      LODWORD(v25[11]) = 0;
      *(_QWORD *)((char *)&v25[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v11, v10, v12, v13, v18, v20) + 832);
      HIDWORD(v25[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(
                                       *(_QWORD *)((char *)&v25[14] + 4),
                                       v14,
                                       v15,
                                       v16,
                                       v19,
                                       v21)
                                   + 12) & 0x80000000;
      ReferencedRimObj = RIMAddInjectionDeviceOfType(Handle, &DestinationString, a1, (__int64)v25, 0, &v23);
      if ( ReferencedRimObj < 0 )
      {
        ZwClose(Handle);
      }
      else
      {
        *a2 = Handle;
        *a3 = v23;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)ReferencedRimObj;
}
