/*
 * XREFs of CiCreateTaskIndexClientFromThread @ 0x1C000B000
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A2A0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiThreadReferenceTaskIndex @ 0x1C0001A00 (CiThreadReferenceTaskIndex.c)
 *     CiTaskIndexDereference @ 0x1C0001BE0 (CiTaskIndexDereference.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x1C00045BC (WPP_SF_d.c)
 */

__int64 __fastcall CiCreateTaskIndexClientFromThread(__int64 a1, _DWORD *a2)
{
  void *v3; // rbx
  NTSTATUS v4; // eax
  unsigned int v5; // esi
  void *FileHandle[2]; // [rsp+88h] [rbp-1A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-190h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-160h] BYREF
  __int64 EaBuffer; // [rsp+E0h] [rbp-148h] BYREF
  int v11; // [rsp+E8h] [rbp-140h]
  void *v12; // [rsp+F0h] [rbp-138h]

  v3 = (void *)CiThreadReferenceTaskIndex(a1);
  FileHandle[1] = v3;
  if ( !v3 )
    return 3221225865LL;
  EaBuffer = 0x10F000000000000LL;
  v11 = 0;
  v12 = v3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  if ( ExGetPreviousMode() )
    ObjectAttributes.Attributes = 0;
  else
    ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L".0";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = IoCreateFileEx(
         FileHandle,
         0x120089u,
         &ObjectAttributes,
         &IoStatusBlock,
         0LL,
         0,
         0,
         0,
         0,
         &EaBuffer,
         0x118u,
         CreateFileTypeNone,
         0LL,
         0,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x11u,
        (__int64)&WPP_dd714108735c30899653f2ca1e788838_Traceguids,
        v4);
  }
  else
  {
    *a2 = FileHandle[0];
  }
  CiTaskIndexDereference((volatile signed __int64 *)v3);
  return v5;
}
