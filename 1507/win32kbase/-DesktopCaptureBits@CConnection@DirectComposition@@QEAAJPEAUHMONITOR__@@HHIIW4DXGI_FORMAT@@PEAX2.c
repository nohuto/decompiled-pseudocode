/*
 * XREFs of ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C00D4A50
 * Callers:
 *     NtDesktopCaptureBits @ 0x1C00D4690 (NtDesktopCaptureBits.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00235CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C00D5548 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 */

__int64 __fastcall DirectComposition::CConnection::DesktopCaptureBits(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  NTSTATUS v13; // ebx
  char v15[4]; // [rsp+50h] [rbp-30h] BYREF
  int TokenInformation; // [rsp+54h] [rbp-2Ch] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp-28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  v15[0] = 0;
  v13 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( v13 >= 0 )
  {
    TokenInformation = 0;
    ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    if ( TokenInformation )
    {
      RtlInitUnicodeString(&DestinationString, L"ID_CAP_SCREENCAPTURE");
      v13 = RtlCapabilityCheck(TokenHandle, &DestinationString, v15);
    }
    else
    {
      v15[0] = 1;
    }
    ZwClose(TokenHandle);
    if ( v13 >= 0 )
    {
      if ( !v15[0] )
        v13 = -1073741790;
      if ( v13 >= 0 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL));
        v13 = DirectComposition::CSystemChannel::DesktopCaptureBits(
                *(_QWORD *)(a1 + 152),
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9);
        DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(a1 + 152));
      }
    }
  }
  return (unsigned int)v13;
}
