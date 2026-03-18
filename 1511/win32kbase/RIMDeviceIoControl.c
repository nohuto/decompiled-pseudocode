/*
 * XREFs of RIMDeviceIoControl @ 0x1C000ED20
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000AEC4 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000AEE4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        __int64 a1,
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
  __int64 v14; // rdi
  __int64 v16; // r8
  int v17; // edx
  NTSTATUS Status; // ebx
  _BYTE *v19; // rsi
  int v20; // edx
  __int64 v21; // r8
  _QWORD *v22; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v25; // rax
  _DWORD *v26; // rcx
  PVOID v27; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v30; // [rsp+68h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-30h] BYREF

  v14 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    120,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  LOBYTE(v16) = 1;
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, v16, &v27);
  if ( Status >= 0 )
  {
    v19 = v27;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v29, (struct _KTHREAD **)v27 + 12);
    if ( v19[73] )
    {
      Status = -1073741637;
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        3,
        121,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      LOBYTE(v21) = 1;
      Status = RawInputManagerDeviceObjectResolveHandle(v14, 3LL, v21, &Object);
      if ( Status >= 0 )
      {
        v22 = Object;
        if ( (*((_DWORD *)Object + 60) & 0x800) != 0 )
        {
          Status = -1073741637;
        }
        else
        {
          if ( a10 )
          {
            ZwDeviceIoControlFile(
              *((HANDLE *)Object + 35),
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
            RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)Object + 36));
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v25 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    a4,
                    InputBufferLength,
                    OutputBuffer,
                    OutputBufferLength,
                    a11 != 0,
                    &Event,
                    &v30);
            if ( v25 )
            {
              v25->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22[36];
              Status = IofCallDriver(RelatedDeviceObject, v25);
              if ( Status == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
                Status = v30.Status;
              }
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v26 = a8;
              if ( a8 >= W32UserProbeAddress )
                v26 = W32UserProbeAddress;
              *v26 = v30.Information;
            }
            else
            {
              *a8 = v30.Information;
            }
          }
          ObfDereferenceObject(v22);
        }
      }
    }
    ObfDereferenceObject(v19);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v29);
  }
  LOBYTE(v17) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v17,
    4,
    122,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    Status);
  return (unsigned int)Status;
}
