/*
 * XREFs of UserBeep @ 0x1C0228C40
 * Callers:
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C00E8688 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?DisplayDiagHotkeyCallback@@YAX_K_J@Z @ 0x1C01CF5A0 (-DisplayDiagHotkeyCallback@@YAX_K_J@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01E0B2C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxOldMessageBeep @ 0x1C01F66B4 (xxxOldMessageBeep.c)
 * Callees:
 *     xxxSoundSentry @ 0x1C01357C8 (xxxSoundSentry.c)
 */

__int64 __fastcall UserBeep(int a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  NTSTATUS v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  union _LARGE_INTEGER Interval; // [rsp+60h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+Fh] BYREF
  void *FileHandle; // [rsp+F0h] [rbp+77h] BYREF
  int InputBuffer; // [rsp+F8h] [rbp+7Fh] BYREF
  int v16; // [rsp+FCh] [rbp+83h]

  v2 = 0;
  FileHandle = 0LL;
  v4 = a2;
  if ( gProtocolType )
  {
    if ( !gpRemoteBeepDevice )
      return 0LL;
    v5 = ObOpenObjectByPointer(gpRemoteBeepDevice, 0, 0LL, 0x1F0003u, 0LL, 0, &FileHandle);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\Device\\Beep");
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 3u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 3u, 0, 0LL, 0);
  }
  if ( v5 < 0 )
    return 0LL;
  if ( (unsigned int)(a1 - 37) > 0x7FDA )
  {
    v7 = -1073741811;
  }
  else
  {
    InputBuffer = a1;
    v16 = v4;
    v7 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x10000u, &InputBuffer, 8u, 0LL, 0);
  }
  EnterCrit(0LL, 1LL);
  xxxSoundSentry();
  UserSessionSwitchLeaveCrit(v9, v8);
  if ( v7 >= 0 )
  {
    Interval.QuadPart = -10000 * v4;
    KeDelayExecutionThread(1, 0, &Interval);
    v2 = 1;
  }
  ZwClose(FileHandle);
  return v2;
}
