/*
 * XREFs of EtwpProviderArrivalCallback @ 0x1404D0D5C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040E5E0 (EtwpRegisterUMGuid.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 *     EtwpTrackProviderBinary @ 0x1404EC810 (EtwpTrackProviderBinary.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140014260 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x1400A5558 (RtlPcToFileHeader.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpAddProviderToSession @ 0x1404D0F50 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x1404D108C (EtwpFindDebugId.c)
 *     MmGetImageBase @ 0x1404D1238 (MmGetImageBase.c)
 *     EtwpGetImageSize @ 0x1404D1340 (EtwpGetImageSize.c)
 *     MmGetFileNameForAddress @ 0x140656B10 (MmGetFileNameForAddress.c)
 *     EtwpSendDbgId @ 0x1406A5450 (EtwpSendDbgId.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406A96BC (EtwpAddWinRtProviderToSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  void *v6; // rcx
  NTSTATUS ImageBase; // ebx
  __int16 v8; // ax
  ULONGLONG v9; // rdx
  ULONGLONG Size; // [rsp+20h] [rbp-168h] BYREF
  PVOID BaseOfImage; // [rsp+28h] [rbp-160h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-158h] BYREF
  NTSTATUS v14; // [rsp+34h] [rbp-154h]
  PVOID v15; // [rsp+38h] [rbp-150h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v17[8]; // [rsp+48h] [rbp-140h] BYREF
  PVOID P; // [rsp+50h] [rbp-138h]
  _BYTE v19[256]; // [rsp+60h] [rbp-128h] BYREF

  v6 = *(void **)(a3 + 88);
  if ( !v6 )
    return 3221225793LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) != 0 && (*(_BYTE *)(a3 + 98) & 8) != 0 )
    return 3221225659LL;
  v15 = v19;
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
      v14 = ImageBase;
      if ( ImageBase >= 0 )
      {
        v8 = *(_WORD *)(a3 + 98);
        if ( (v8 & 8) != 0 )
        {
          v9 = Size;
          if ( !Size )
          {
            ImageBase = EtwpGetImageSize(NtHeader, &Size);
            v14 = ImageBase;
            v9 = Size;
          }
          if ( ImageBase >= 0 )
          {
            if ( a2 == 1
              && v9
              && ((unsigned __int64)BaseOfImage + v9 > 0x7FFFFFFF0000LL || (char *)BaseOfImage + v9 < BaseOfImage) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v9 = Size;
            }
            v13 = 256;
            ImageBase = EtwpFindDebugId(BaseOfImage, v9, &v15, &v13);
            if ( ImageBase >= 0 )
            {
              if ( (EtwpAddProviderToSession(a1, v15, v13), !(_BYTE)KdDebuggerNotPresent) && !KdPitchDebugger
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
            ExFreePoolWithTag(P, 0);
          }
        }
      }
      goto LABEL_20;
    }
    ImageBase = -1073741275;
  }
LABEL_20:
  if ( v15 != v19 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)ImageBase;
}
