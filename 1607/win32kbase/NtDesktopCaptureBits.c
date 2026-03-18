/*
 * XREFs of NtDesktopCaptureBits @ 0x1C00E3B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     OpenDwmHandle @ 0x1C001D698 (OpenDwmHandle.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C00E3E60 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2.c)
 */

__int64 __fastcall NtDesktopCaptureBits(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        PVOID Handle,
        HANDLE a8)
{
  PVOID v8; // rbx
  DirectComposition::CConnection *DefaultConnection; // rdi
  int v13; // ebx
  PVOID v14; // rsi
  NTSTATUS v15; // eax
  unsigned int v16; // edx
  PVOID v17; // rbp
  NTSTATUS v18; // eax
  __int64 v19; // r9
  __int64 v20; // r9
  int Object; // [rsp+20h] [rbp-78h]
  int Objecta; // [rsp+20h] [rbp-78h]
  void *v24; // [rsp+50h] [rbp-48h] BYREF
  void *v25; // [rsp+58h] [rbp-40h] BYREF
  PVOID v26; // [rsp+60h] [rbp-38h] BYREF

  v8 = Handle;
  v25 = (void *)-1LL;
  v24 = (void *)-1LL;
  if ( Handle && a8 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( DefaultConnection )
    {
      v14 = 0LL;
      v15 = ObReferenceObjectByHandle(v8, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
      v17 = Handle;
      v13 = v15;
      if ( v15 >= 0 )
      {
        v18 = ObReferenceObjectByHandle(a8, 6u, MmSectionObjectType, 1, &v26, 0LL);
        v14 = v26;
        v13 = v18;
        if ( v18 >= 0 )
        {
          v13 = OpenDwmHandle(v17, (POBJECT_TYPE)ExEventObjectType, 2u, v19, Object, &v25);
          if ( v13 >= 0 )
            v13 = OpenDwmHandle(v14, MmSectionObjectType, 3u, v20, Objecta, &v24);
        }
      }
      if ( v17 )
        ObfDereferenceObject(v17);
      if ( v14 )
        ObfDereferenceObject(v14);
      if ( v13 >= 0 )
        v13 = DirectComposition::CConnection::DesktopCaptureBits(DefaultConnection, a1, a2, a3, a4, a5, a6, v25, v24);
      DirectComposition::CConnection::Release(DefaultConnection, v16);
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}
