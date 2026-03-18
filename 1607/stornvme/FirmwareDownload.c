/*
 * XREFs of FirmwareDownload @ 0x1C0008A50
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C00097FC (IoctlFirmwareProcess.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0001F4C (GetSrbDataBuffer.c)
 *     SrbAssignQueueId @ 0x1C0002B98 (SrbAssignQueueId.c)
 *     GetControllerMaxTransferSize @ 0x1C0004744 (GetControllerMaxTransferSize.c)
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     FillClippedSGL @ 0x1C0008878 (FillClippedSGL.c)
 */

__int64 __fastcall FirmwareDownload(_DWORD *a1, __int64 a2)
{
  __int64 SrbDataBuffer; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  unsigned int ControllerMaxTransferSize; // eax
  unsigned __int64 v13; // r8
  unsigned int v14; // r12d
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v15);
  v5 = SrbDataBuffer;
  v6 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  if ( *(_DWORD *)v6 == 2 && *(_DWORD *)(v6 + 4) >= 0x20u )
    v7 = SrbDataBuffer + *(unsigned int *)(SrbDataBuffer + 44);
  else
    v7 = 0LL;
  v8 = *(unsigned int *)(SrbDataBuffer + 48);
  if ( v7 )
  {
    if ( (unsigned int)v8 >= 0x20 )
    {
      v9 = *(_QWORD *)(v7 + 16);
      v10 = v9 + 32;
      goto LABEL_8;
    }
LABEL_10:
    result = 3238002694LL;
    *(_DWORD *)(v5 + 20) = 3;
LABEL_11:
    *(_BYTE *)(a2 + 3) = 21;
    return result;
  }
  if ( (unsigned int)v8 < 0x18 )
    goto LABEL_10;
  v9 = *(_QWORD *)(v6 + 16);
  v10 = v9 + 24;
LABEL_8:
  if ( v8 < v10 || !v9 || (*(_BYTE *)(v6 + 8) & 3) != 0 || (*(_QWORD *)(v6 + 16) & 3) != 0 )
    goto LABEL_10;
  ControllerMaxTransferSize = GetControllerMaxTransferSize(a1);
  if ( v13 > ControllerMaxTransferSize )
  {
    result = 3238002694LL;
    *(_DWORD *)(v5 + 20) = 4;
    goto LABEL_11;
  }
  v14 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
  StorPortExtendedFunction(0LL, a1, 24 * v14 + 16);
  *(_DWORD *)(v5 + 20) = 1;
  result = 3238002689LL;
  *(_BYTE *)(a2 + 3) = 4;
  return result;
}
