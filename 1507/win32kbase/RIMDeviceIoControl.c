/*
 * XREFs of RIMDeviceIoControl @ 0x1C0073240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00734E8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0073508 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        void *a1,
        __int64 a2,
        ULONG a3,
        void *a4,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        _DWORD *a8,
        struct _IO_STATUS_BLOCK *IoStatusBlock,
        int a10,
        int a11,
        char a12)
{
  int Status; // ebx
  _BYTE *v17; // rsi
  __int64 v18; // r8
  _QWORD *v19; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v21; // rax
  _DWORD *v22; // rcx
  __int64 IoControlCode; // [rsp+28h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  PVOID v26; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v28; // [rsp+68h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-30h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x75u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  Status = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v26);
  if ( Status >= 0 )
  {
    v17 = v26;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v27,
      (struct RIMLOCK *)((char *)v26 + 96));
    if ( v17[73] )
    {
      Status = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x76u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      LOBYTE(v18) = 1;
      Status = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, v18, &Object);
      if ( Status >= 0 )
      {
        v19 = Object;
        if ( a10 )
        {
          ZwDeviceIoControlFile(
            *((HANDLE *)Object + 36),
            0LL,
            0LL,
            0LL,
            IoStatusBlock,
            a3,
            a4,
            InputBufferLength,
            0LL,
            0);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)Object + 37));
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v21 = IoBuildDeviceIoControlRequest(
                  a3,
                  RelatedDeviceObject,
                  a4,
                  InputBufferLength,
                  OutputBuffer,
                  OutputBufferLength,
                  a11 != 0,
                  &Event,
                  &v28);
          if ( v21 )
          {
            v21->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v19[37];
            Status = IofCallDriver(RelatedDeviceObject, v21);
            if ( Status == 259 )
            {
              while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                ;
              Status = v28.Status;
            }
          }
          else
          {
            Status = -1073741668;
          }
          if ( a12 )
          {
            v22 = a8;
            if ( a8 >= W32UserProbeAddress )
              v22 = W32UserProbeAddress;
            *v22 = v28.Information;
          }
          else
          {
            *a8 = v28.Information;
          }
        }
        ObfDereferenceObject(v19);
      }
    }
    ObfDereferenceObject(v17);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v27);
  }
  LODWORD(IoControlCode) = Status;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x77u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    IoControlCode);
  return (unsigned int)Status;
}
