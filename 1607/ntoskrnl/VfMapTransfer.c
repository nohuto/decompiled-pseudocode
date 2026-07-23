/*
 * XREFs of VfMapTransfer @ 0x140707CF0
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140705D74 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140705F2C (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140706010 (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x140708C48 (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x140708CF0 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetMapRegisterFile @ 0x140709830 (ViGetMapRegisterFile.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x140709EAC (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x14070A67C (ViSwap.c)
 */

__int64 VfMapTransfer(__int64 a1, ...)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // rdi
  __int64 RealDmaOperation; // rax
  __int64 v6; // rdx
  __int64 AdapterInformationInternal; // rax
  char v8; // r13
  __int64 v9; // rbp
  unsigned int *v10; // r14
  unsigned int v11; // eax
  int v12; // ebx
  __int64 MapRegisterFile; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  int v19; // [rsp+20h] [rbp-58h]
  int Response; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64, unsigned int *, int); // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  va_list va; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  va_list va1; // [rsp+90h] [rbp+18h]
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF
  va_list va2; // [rsp+98h] [rbp+20h]
  unsigned int *v28; // [rsp+A0h] [rbp+28h]
  __int64 v29; // [rsp+A8h] [rbp+30h]
  va_list va3; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  v28 = va_arg(va3, unsigned int *);
  v29 = va_arg(va3, _QWORD);
  v1 = v22;
  v2 = v26;
  v3 = v24;
  RealDmaOperation = ViGetRealDmaOperation(a1, 64LL);
  LOBYTE(v6) = 1;
  v21 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *, int))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v6);
  v8 = v29;
  v9 = AdapterInformationInternal;
  v10 = v28;
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED(v1);
    ViCheckAdapterBuffers(v9);
    if ( *(_DWORD *)(v9 + 192) == 3 )
    {
      v11 = ViCheckMdlLength(v1, 0LL, *v10);
      if ( v11 )
      {
        v12 = v11;
        ViHalPreprocessOptions(
          byte_1402F999C,
          "The provided MDL is not sufficient to satisfy the requested length",
          36LL,
          v11,
          0LL,
          0LL,
          v21);
        VfReportIssueWithOptions(230, 36, v12, 0, 0LL, byte_1402F999C);
      }
    }
    if ( v3 == -559026163 )
    {
      v3 = 0LL;
    }
    else
    {
      MapRegisterFile = ViGetMapRegisterFile(v3);
      v14 = MapRegisterFile;
      if ( MapRegisterFile )
      {
        LOBYTE(v19) = v8;
        v15 = ViMapDoubleBuffer(MapRegisterFile, v1, v2, *v10, v19);
        if ( v15 && (*v10 = v15, v16 = ViSwap((__int64 *)va1, (__int64 *)va, (__int64 *)va2), v2 = v26, v1 = v22, v16) )
          v3 = v24;
        else
          v3 = *(_QWORD *)(v14 + 48);
      }
    }
  }
  LOBYTE(Response) = v8;
  v17 = v21(a1, v1, v3, v2, v10, Response);
  if ( v9 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(v9, *v10, 0);
  return v17;
}
