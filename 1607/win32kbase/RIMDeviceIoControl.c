/*
 * XREFs of RIMDeviceIoControl @ 0x1C000FB90
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C000EBE4 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000EC04 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        __int64 a1,
        void *a2,
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
  void *v14; // rdi
  __int64 v16; // r8
  int v17; // edx
  int Status; // ebx
  _BYTE *v19; // rsi
  int v20; // edx
  _QWORD *v21; // rdi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v24; // rax
  _DWORD *v25; // rcx
  PVOID v26; // [rsp+50h] [rbp-58h] BYREF
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v28[8]; // [rsp+60h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v29; // [rsp+68h] [rbp-40h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-30h] BYREF

  v14 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    121,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  LOBYTE(v16) = 1;
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, v16, &v26);
  if ( Status >= 0 )
  {
    v19 = v26;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v28, (struct _KTHREAD **)v26 + 12);
    if ( v19[73] )
    {
      Status = -1073741637;
      LOBYTE(v20) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v20,
        3,
        122,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(v14, 3u, 1, &Object);
      if ( Status >= 0 )
      {
        v21 = Object;
        if ( (*((_DWORD *)Object + 62) & 0x800) != 0 )
        {
          Status = -1073741637;
        }
        else
        {
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
            v24 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    a4,
                    InputBufferLength,
                    OutputBuffer,
                    OutputBufferLength,
                    a11 != 0,
                    &Event,
                    &v29);
            if ( v24 )
            {
              v24->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v21[37];
              Status = IofCallDriver(RelatedDeviceObject, v24);
              if ( Status == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
                Status = v29.Status;
              }
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v25 = a8;
              if ( (unsigned __int64)a8 >= W32UserProbeAddress )
                v25 = (_DWORD *)W32UserProbeAddress;
              *v25 = v29.Information;
            }
            else
            {
              *a8 = v29.Information;
            }
          }
          ObfDereferenceObject(v21);
        }
      }
    }
    ObfDereferenceObject(v19);
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v28);
  }
  LOBYTE(v17) = 3;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v17,
    4,
    123,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    Status);
  return (unsigned int)Status;
}
