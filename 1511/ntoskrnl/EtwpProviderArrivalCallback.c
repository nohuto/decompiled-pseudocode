/*
 * XREFs of EtwpProviderArrivalCallback @ 0x1404CEF74
 * Callers:
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpTrackProviderBinary @ 0x1404C015C (EtwpTrackProviderBinary.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpEnableGuid @ 0x1404CD4B0 (EtwpEnableGuid.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140037D00 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x1400F1B5C (RtlPcToFileHeader.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpAddProviderToSession @ 0x1404CF154 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x1404CF2A8 (EtwpFindDebugId.c)
 *     MmGetImageBase @ 0x1404CF44C (MmGetImageBase.c)
 *     EtwpGetImageSize @ 0x14054809C (EtwpGetImageSize.c)
 *     MmGetFileNameForAddress @ 0x140621ED0 (MmGetFileNameForAddress.c)
 *     EtwpSendDbgId @ 0x140664C10 (EtwpSendDbgId.c)
 *     EtwpAddWinRtProviderToSession @ 0x140667800 (EtwpAddWinRtProviderToSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  void *v6; // rcx
  NTSTATUS ImageBase; // ebx
  char v8; // al
  ULONGLONG v9; // rdx
  PVOID BaseOfImage; // [rsp+20h] [rbp-168h] BYREF
  ULONGLONG Size; // [rsp+28h] [rbp-160h] BYREF
  NTSTATUS v13; // [rsp+30h] [rbp-158h]
  unsigned int v14; // [rsp+34h] [rbp-154h] BYREF
  PVOID P; // [rsp+38h] [rbp-150h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-140h] BYREF
  PVOID v18; // [rsp+50h] [rbp-138h]
  _BYTE v19[256]; // [rsp+60h] [rbp-128h] BYREF

  v6 = *(void **)(a3 + 88);
  if ( !v6 )
    return 3221225793LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 && (*(_BYTE *)(a3 + 98) & 8) != 0 )
    return 3221225659LL;
  P = v19;
  BaseOfImage = 0LL;
  Size = 0LL;
  if ( a2 )
  {
    ImageBase = MmGetImageBase(v6, &BaseOfImage, &Size);
    if ( ImageBase >= 0 )
      goto LABEL_5;
  }
  else
  {
    RtlPcToFileHeader(v6, &BaseOfImage);
    if ( BaseOfImage )
    {
LABEL_5:
      ImageBase = RtlImageNtHeaderEx(
                    1u,
                    (PVOID)((unsigned __int64)BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL),
                    Size,
                    &NtHeader);
      v13 = ImageBase;
      if ( ImageBase >= 0 )
      {
        v8 = *(_BYTE *)(a3 + 98);
        if ( (v8 & 8) != 0 )
        {
          v9 = Size;
          if ( !Size )
          {
            ImageBase = EtwpGetImageSize(NtHeader, &Size);
            v13 = ImageBase;
            v9 = Size;
          }
          if ( ImageBase >= 0 )
          {
            if ( a2 == 1
              && v9
              && ((unsigned __int64)BaseOfImage + v9 > MmUserProbeAddress || (char *)BaseOfImage + v9 < BaseOfImage) )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
              v9 = Size;
            }
            v14 = 256;
            ImageBase = EtwpFindDebugId(BaseOfImage, v9, &P, &v14);
            if ( ImageBase >= 0 )
            {
              if ( (EtwpAddProviderToSession(a1, P, v14), !(_BYTE)KdDebuggerNotPresent) && !KdPitchDebugger
                || KdEventLoggingPresent )
              {
                if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0 )
                  EtwpSendDbgId(a1);
              }
            }
          }
        }
        else if ( (v8 & 0x20) != 0 )
        {
          ImageBase = MmGetFileNameForAddress(NtHeader, v17);
          if ( ImageBase >= 0 )
          {
            EtwpAddWinRtProviderToSession(a1, v17, *(_QWORD *)(a3 + 32) + 24LL);
            ExFreePoolWithTag(v18, 0);
          }
        }
      }
      goto LABEL_18;
    }
    ImageBase = -1073741275;
  }
LABEL_18:
  if ( P != v19 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ImageBase;
}
