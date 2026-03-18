/*
 * XREFs of IopLiveDumpWriteDumpFile @ 0x140678288
 * Callers:
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140247D70 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopLiveDumpCheckTermination @ 0x140677C04 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140677CBC (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpWriteBuffer @ 0x140678230 (IopLiveDumpWriteBuffer.c)
 *     IopLiveDumpWriteSecondaryData @ 0x14067886C (IopLiveDumpWriteSecondaryData.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFile(_QWORD *a1)
{
  LARGE_INTEGER *v1; // rdi
  __int64 v2; // rbx
  void *v3; // r15
  unsigned __int64 v4; // r14
  struct _KTHREAD *CurrentThread; // r12
  int v7; // esi
  ULONG v8; // r8d
  __int64 v9; // r14
  LARGE_INTEGER v10; // r8
  LARGE_INTEGER v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = (LARGE_INTEGER *)a1[48];
  v2 = (__int64)(a1 + 59);
  v3 = (void *)a1[8];
  v4 = 0LL;
  v12 = v1[1028];
  CurrentThread = KeGetCurrentThread();
  if ( a1[65] )
  {
    while ( 1 )
    {
      v7 = IopLiveDumpCheckTermination((__int64)a1, (__int64)CurrentThread);
      if ( v7 < 0 )
        break;
      v8 = v4 >= *(_QWORD *)(v2 + 48) - 1LL ? *(_DWORD *)(v2 + 32) << 12 : 0x40000;
      v7 = IopLiveDumpWriteBuffer(v3, *(void **)(*(_QWORD *)(v2 + 64) + 8 * v4), v8, &v12);
      if ( v7 < 0 )
        break;
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v2 + 64) + 8 * v4), 0x706D644Cu);
      *(_QWORD *)(*(_QWORD *)(v2 + 64) + 8 * v4++) = 0LL;
      if ( v4 >= *(_QWORD *)(v2 + 48) )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v9 = RtlNumberOfSetBitsEx(a1 + 46);
    v7 = IopLiveDumpWriteSecondaryData(v3, a1 + 6, &v12, &v13);
    if ( v7 >= 0 )
    {
      v10 = v12;
      v1[522].LowPart |= 0x10u;
      v1[500] = v10;
      v1[1024].LowPart = 1347241043;
      v1[1024].HighPart = 1347245380;
      v1[1029].QuadPart = v9;
      v12.QuadPart = 0LL;
      v7 = IopLiveDumpWriteBuffer(v3, v1, v1[1028].LowPart, &v12);
    }
  }
  IopLiveDumpFreeDumpBuffers(v2);
  return (unsigned int)v7;
}
